/*
 * test_poco.cpp
 *
 *  Created on: Oct 16, 2013
 *      Author: xieouye
 */
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <mongo/client/dbclient.h>

using namespace std;
using namespace mongo;


int main(int argc, char** argv) {
	string str = "{ ts: \"2014-4-11 15:31:13\", status: \"OK\", data: { responseHeader: { status: 0, QTime: 0 }, response: { numFound: 10, patents: { solr_returned: { responseHeader: { status: 0, QTime: 11 }, response: { numFound: 84295, start: 0, maxScore: 23.128067, docs: [ { _id: \"52dcb565e4b00cc092f4aa7f\", PN_STR: \"US4368793\" }, { _id: \"52dcd22ce4b0b1efb78e2fd7\", PN_STR: \"JP2013215104A\" }, { _id: \"52dcb880e4b0b1efb77859ea\", PN_STR: \"JP2012501180A\" }, { _id: \"52dce239e4b00cc09325fee8\", PN_STR: \"US4852695\" }, { _id: \"52dcf330e4b0b5a9f187319c\", PN_STR: \"EP2338821A1\" }, { _id: \"52dcd83ce4b0b5a9f172d478\", PN_STR: \"EP2197744A2\" }, { _id: \"52dd026fe4b00cc0933eafd0\", PN_STR: \"US5083640\" }, { _id: \"52dcbd25e4b00cc092fdc387\", PN_STR: \"US4460308\" }, { _id: \"52dcb3e8e4b00cc092f2f357\", PN_STR: \"US4351404\" }, { _id: \"52dce293e4b0b5a9f17c21bc\", PN_STR: \"EP2261160A1\" } ] } }, succeeded: [ \"EP2197744A2\", \"EP2261160A1\", \"EP2338821A1\", \"JP2012501180A\", \"JP2013215104A\", \"US4351404\", \"US4368793\", \"US4460308\", \"US4852695\", \"US5083640\" ], failed: {}, pn2idx: { EP2197744A2: 8, EP2261160A1: 11, EP2338821A1: 11, JP2012501180A: 3, JP2013215104A: 3, US4351404: 0, US4368793: 0, US4460308: 8, US4852695: 11, US5083640: 11 } }, facets: { facet_an: { \"MITSUBISHI ELECTRIC CORPORATION\": { count: 2, pn_map: { EP2261160A1: 11, EP2338821A1: 11 } }, \"TOYOTA JIDOSHA KOGYO KABUSHIKI KAISHA\": { count: 2, pn_map: { US4351404: 0, US4368793: 0 } }, \"CITY OF HOPE\": { count: 1, pn_map: { JP2012501180A: 3 } }, \"KERR-MCGEE COAL CORPORATION\": { count: 1, pn_map: { US4460308: 8 } }, \"MITSUBISHI DENKI KABUSHIKI KAISHA\": { count: 1, pn_map: { US5083640: 11 } }, \"OSTROWIECKI; MORRIS\": { count: 1, pn_map: { US4852695: 11 } }, \"OTIS ELEVATOR COMPANY\": { count: 1, pn_map: { EP2197744A2: 8 } }, \"シティ·オブ·ホープ\": { count: 1, pn_map: { JP2012501180A: 3 } }, \"国立大学法人 岡山大学\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"愛知県\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"株式会社糖鎖工学研究所\": { count: 1, pn_map: { JP2013215104A: 3 } } }, facet_in: { \"IGARASHI; ISAO\": { count: 2, pn_map: { US4351404: 0, US4368793: 0 } }, \"SHIN, HANSO\": { count: 1, pn_map: { EP2197744A2: 8 } }, \"阪口 政清\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"近藤 英作\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"許 南浩\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"手塚 克成\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"ジェンセン,マイケル\": { count: 1, pn_map: { JP2012501180A: 3 } }, \"WANG, CHENG-SHU\": { count: 1, pn_map: { EP2197744A2: 8 } }, \"TSUJI; SHINTARO\": { count: 1, pn_map: { US5083640: 11 } }, \"TOMPKINS; JOHN C.\": { count: 1, pn_map: { US4460308: 8 } }, \"TOKURA, SAKURAKO\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"TAKESHIMA, KOJI\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"SUZUKI, NAOHIKO\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"HIKITA, SHIRO\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"SHIM, CHEONGSI\": { count: 1, pn_map: { EP2197744A2: 8 } }, \"OSTROWIECKI; MORRIS\": { count: 1, pn_map: { US4852695: 11 } }, \"OKADA, DAISUKE\": { count: 1, pn_map: { EP2338821A1: 11 } }, \"MOON; JACK L.\": { count: 1, pn_map: { US4460308: 8 } }, \"KOBORI, SHINGO\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"KOBA, YOSHIMASA\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"JEONG, SEONGRAK\": { count: 1, pn_map: { EP2197744A2: 8 } }, \"IWATA, MASAFUMI\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"HSU, ARTHUR\": { count: 1, pn_map: { EP2197744A2: 8 } } }, facet_ipc: { \"B66B1/18\": { count: 3, pn_map: { EP2261160A1: 11, US4852695: 11, US5083640: 11 } }, \"C12N15/09\": { count: 2, pn_map: { JP2012501180A: 3, JP2013215104A: 3 } }, \"C07K14/705\": { count: 2, pn_map: { JP2012501180A: 3, JP2013215104A: 3 } }, \"A61P35/00\": { count: 2, pn_map: { JP2012501180A: 3, JP2013215104A: 3 } }, \"B60D7/00\": { count: 2, pn_map: { US4351404: 0, US4368793: 0 } }, \"B60K26/04\": { count: 2, pn_map: { US4351404: 0, US4368793: 0 } }, \"B62D63/00\": { count: 2, pn_map: { US4351404: 0, US4368793: 0 } }, \"G01N33/68\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"A61K35/14\": { count: 1, pn_map: { JP2012501180A: 3 } }, \"C12Q1/02\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"C07K14/00\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"B66B5/02\": { count: 1, pn_map: { EP2338821A1: 11 } }, \"B66B3/00\": { count: 1, pn_map: { EP2261160A1: 11 } }, \"B65G67/22\": { count: 1, pn_map: { US4460308: 8 } }, \"B65B1/24\": { count: 1, pn_map: { EP2197744A2: 8 } }, \"A61P15/00\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"A61P11/00\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"A61P1/16\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"A61P1/00\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"A61K48/00\": { count: 1, pn_map: { JP2013215104A: 3 } }, \"A61K38/00\": { count: 1, pn_map: { JP2013215104A: 3 } } } }, insomnia: { dim: { rows: 3, cols: 4, clusters: 6 }, som: { 0: { count: 2, pn_list: [ \"US4351404\", \"US4368793\" ] }, 3: { count: 2, pn_list: [ \"JP2012501180A\", \"JP2013215104A\" ] }, 8: { count: 2, pn_list: [ \"EP2197744A2\", \"US4460308\" ] }, 11: { count: 4, pn_list: [ \"EP2261160A1\", \"EP2338821A1\", \"US4852695\", \"US5083640\" ] } }, sdh: { 0: 0.5, 3: 0.5, 8: 0.5, 10: 0.2075187712907791, 11: 1.0 }, label: { 0: [ \"CAR\", \"BRAKE\" ], 8: [ \"CAR\", \"RAILROAD\", \"COAL\" ], 11: [ \"CONTROL\", \"GROUP\" ] }, cluster: { 0: 1, 3: 2, 8: 3, 11: 5 }, total_count: 10 } } } }";
//	str = "{ pn2idx: { EP2197744A2: 8, EP2261160A1: 11, EP2338821A1: 11, JP2012501180A: 3, JP2013215104A: 3, US4351404: 0, US4368793: 0, US4460308: 8, US4852695: 11, US5083640: 11 } }";

	cout << str << endl;

	BSONObj bo = fromjson(str);

	cout << bo.toString() << endl;

	return 0;

}