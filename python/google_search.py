# Auther: Ouye Xie
# 25/05/2014

__author__ = 'ouyexie'

import urllib2
import getopt
import sys

class Google_search( object ):
    def __init__( self, keyword, eliminate, stop ):
        self.keyword = keyword
        self.eliminate = eliminate
        self.stop = stop
        self.urls = []
        self.filtered_urls = list()

    def getgoogleurl( self, search, siteurl = False ):
        if siteurl == False:
            return 'http://www.google.com/search?q=' + urllib2.quote( search )
        else:
            return 'http://www.google.com/search?q=site:' + urllib2.quote( siteurl ) + '%20' + urllib2.quote( search )

    def getgooglelinks( self, search, siteurl = False ):
       # google returns 403 without user agent
       headers = {'User-agent':'Mozilla/11.0'}
       req = urllib2.Request( self.getgoogleurl( search, siteurl ), None, headers )
       site = urllib2.urlopen( req )
       data = site.read()
       site.close()
       print data

       # no beatifulsoup because google html is generated with javascript
       start = data.find( '<div id="res">' )
       end = data.find( '<div id="foot">' )
       if data[start:end] == '':
          # error, no links to find
          return False
       else:
          links = []
          data = data[start:end]
          start = 0
          end = 0
          while start > -1 and end > -1:
              # get only results of the provided site
              if siteurl == False:
                start = data.find( '<a href="/url?q=' )
              else:
                start = data.find( '<a href="/url?q=' + str( siteurl ) )
              data = data[start + len( '<a href="/url?q=' ):]
              end = data.find( '&amp;sa=U&amp;ei=' )
              if start > -1 and end > -1:
                  link = urllib2.unquote( data[0:end] )
                  data = data[end:len( data )]
                  if link.find( 'http' ) == 0:
                      links.append( link )
          return links

    def search( self ):
        for url in self.getgooglelinks( keyword ):
            print "original output: %s" % url
            self.urls.append( url )

    def filter( self ):
        for url in self.urls:
            if not self.eliminate in url:
                print "filtered output: %s" % url
                self.filtered_urls.append( url )










if __name__ == "__main__":

    keyword = ""
    eliminate = ""
    try:
       opts, args = getopt.getopt( sys.argv[1:], "hk:e:s:", ["help", "keyword=", "eliminate=", "stop="] )
    except getopt.GetoptError:
       print 'python google_search.py [-k <keyword>] [-e <eliminate>] [-s <stop>]'
       sys.exit( 2 )
    for opt, arg in opts:
       if opt in ( "-h", "--help" ):
          print 'python google_search.py [-k <keyword>] [-e <eliminate>] [-s <stop>]'
          sys.exit()
       elif opt in ( "-k", "--keyword" ):
          keyword = arg
       elif opt in ( "-e", "--eliminate" ):
          eliminate = arg
       elif opt in ( "-s", "--stop" ):
          stop = arg


    google_search = Google_search( keyword, eliminate, stop )
    google_search.search()
#     print google_search.urls.__str__()
#     print google_search.eliminate
    google_search.filter()

