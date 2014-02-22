//
//        Gauss_Legendre_Nodes_and_Weights_42.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 42.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_42_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_42_hpp__

void Gauss_Legendre_Nodes_and_Weights_42(long double*& nodes, long double*& weights) {
	nodes	= new long double[42];
	weights	= new long double[42];

	nodes[0] 	= -0.036948943165351775813095980037559426641708452249222531349645010606524170696083857530217773875697544219694960358827157795471132564;
	weights[0] 	= 0.07386423423217287999638556114979141312847052050207090807397170278873049045364770475335540695765811546695903603556314668832659177;

	nodes[1] 	= 0.036948943165351775813095980037559426641708452249222531349645010606524170696083857530217773875697544219694960358827157795471132564;
	weights[1] 	= 0.07386423423217287999638556114979141312847052050207090807397170278873049045364770475335540695765811546695903603556314668832659177;

	nodes[2] 	= -0.1106450272085198683491225450026410048673440244836308074034761448800633088328708252925406909348536470975394047810493795607933983;
	weights[2] 	= 0.073460813453467528264028257054303938733655783450405239362752101300684363045281734613103388893146908122069883495241856323835372;

	nodes[3] 	= 0.1106450272085198683491225450026410048673440244836308074034761448800633088328708252925406909348536470975394047810493795607933983;
	weights[3] 	= 0.073460813453467528264028257054303938733655783450405239362752101300684363045281734613103388893146908122069883495241856323835372;

	nodes[4] 	= -0.18373680656485455085275563938074294093332396162251510035441157135321197371152058846666883461200406835874855155024340995139059824;
	weights[4] 	= 0.0726561752438041048879057614925330312767836839684272299957304738755112515970983793817024033453050284380192118754261884761029;

	nodes[5] 	= 0.18373680656485455085275563938074294093332396162251510035441157135321197371152058846666883461200406835874855155024340995139059824;
	weights[5] 	= 0.0726561752438041048879057614925330312767836839684272299957304738755112515970983793817024033453050284380192118754261884761029;

	nodes[6] 	= -0.25582507934287908396641479101870844876876645646540095466069816670764797549059403878094032183560864913886352397300226040281018142;
	weights[6] 	= 0.071454714265170982921810444117462155022589863877503718632640464148037099128101102213488992758690640883405318816033174470595;

	nodes[7] 	= 0.25582507934287908396641479101870844876876645646540095466069816670764797549059403878094032183560864913886352397300226040281018142;
	weights[7] 	= 0.071454714265170982921810444117462155022589863877503718632640464148037099128101102213488992758690640883405318816033174470595;

	nodes[8] 	= -0.32651612446541151219715658937546566905841147049858452393819663381343621393320002297562129722732975847324222172949023535303705298;
	weights[8] 	= 0.06986299249259415976615478638148220444392731304743209370753105712777817888568027160600832261271383769828706303232018853189;

	nodes[9] 	= 0.32651612446541151219715658937546566905841147049858452393819663381343621393320002297562129722732975847324222172949023535303705298;
	weights[9] 	= 0.06986299249259415976615478638148220444392731304743209370753105712777817888568027160600832261271383769828706303232018853189;

	nodes[10] 	= -0.39542385204297505767709395459437198079917857648635348826197551043823347521768174733802188547528434785416402469822061334006526667;
	weights[10] 	= 0.067889703376521944855363402213766307266134734658593197869898712326181321658944495080652560872385771496321461758200485451;

	nodes[11] 	= 0.39542385204297505767709395459437198079917857648635348826197551043823347521768174733802188547528434785416402469822061334006526667;
	weights[11] 	= 0.067889703376521944855363402213766307266134734658593197869898712326181321658944495080652560872385771496321461758200485451;

	nodes[12] 	= -0.4621719120704219297590750299306359851096649084736086310928303621397541386322989729573907095723929775694802205247147682853041958;
	weights[12] 	= 0.06554562436490897892700510785179442560978229408579308233164828946689449302489070547452135154050861227094485341264910558;

	nodes[13] 	= 0.4621719120704219297590750299306359851096649084736086310928303621397541386322989729573907095723929775694802205247147682853041958;
	weights[13] 	= 0.06554562436490897892700510785179442560978229408579308233164828946689449302489070547452135154050861227094485341264910558;

	nodes[14] 	= -0.52639574993119228759286755879190146143573976492990992892843235117865284233086607731561488701987984170964617952478132288436527073;
	weights[14] 	= 0.0628435580450025764093182513237798891527970439218897387187869714379519473677603882127492525916631852364576282881703338;

	nodes[15] 	= 0.52639574993119228759286755879190146143573976492990992892843235117865284233086607731561488701987984170964617952478132288436527073;
	weights[15] 	= 0.0628435580450025764093182513237798891527970439218897387187869714379519473677603882127492525916631852364576282881703338;

	nodes[16] 	= -0.58774459748510932284071134547399571990543130482800164589825627022186978576429851573399398196412916820434148170301999412905377263;
	weights[16] 	= 0.059798262227586654312831545753534851509853418695943909453233008365536336705836011173309755241173326924746758688559508;

	nodes[17] 	= 0.58774459748510932284071134547399571990543130482800164589825627022186978576429851573399398196412916820434148170301999412905377263;
	weights[17] 	= 0.059798262227586654312831545753534851509853418695943909453233008365536336705836011173309755241173326924746758688559508;

	nodes[18] 	= -0.64588338886924783395749630371841170116908654384014386468472621835418653748299305259028588063508265145835279893854548376581273974;
	weights[18] 	= 0.05642636935801838164642685513969568939887315857628850742288088345478245888104697079719488895327179394481346096927374;

	nodes[19] 	= 0.64588338886924783395749630371841170116908654384014386468472621835418653748299305259028588063508265145835279893854548376581273974;
	weights[19] 	= 0.05642636935801838164642685513969568939887315857628850742288088345478245888104697079719488895327179394481346096927374;

	nodes[20] 	= -0.70049459055617121374156992905546553430017594180009318112756928038264572618529679003984096470898908387861728685235052369124361059;
	weights[20] 	= 0.05274629569917407034394253904409747703156598782718611962174047259984234348986160158866734538763275096803024607541275;

	nodes[21] 	= 0.70049459055617121374156992905546553430017594180009318112756928038264572618529679003984096470898908387861728685235052369124361059;
	weights[21] 	= 0.05274629569917407034394253904409747703156598782718611962174047259984234348986160158866734538763275096803024607541275;

	nodes[22] 	= -0.75127993568948048956847217591465865550256451982954092485393123073617912874256129719049352772601228319708517524996664183070964292;
	weights[22] 	= 0.0487781407928032450274493631284027239211176969342269030310122365252644831465883508604306653028725957253782301614703;

	nodes[23] 	= 0.75127993568948048956847217591465865550256451982954092485393123073617912874256129719049352772601228319708517524996664183070964292;
	weights[23] 	= 0.0487781407928032450274493631284027239211176969342269030310122365252644831465883508604306653028725957253782301614703;

	nodes[24] 	= -0.7979620532554874132327059525463766601323755112906541340580999385164149611421833697828851776979629423858549033940207851472160653;
	weights[24] 	= 0.04454357777196587787431636598523424131859546603712758124526016367570477567459431538569203592389553142470468312738;

	nodes[25] 	= 0.7979620532554874132327059525463766601323755112906541340580999385164149611421833697828851776979629423858549033940207851472160653;
	weights[25] 	= 0.04454357777196587787431636598523424131859546603712758124526016367570477567459431538569203592389553142470468312738;

	nodes[26] 	= -0.84028598326181690092543999508609981782339857519356835680510727772958176039120172800734305691324221966334080255160260483176188887;
	weights[26] 	= 0.040065735180692261760596124830036934553733701865745615099227199782026889625813254087118609309518739897908239982658;

	nodes[27] 	= 0.84028598326181690092543999508609981782339857519356835680510727772958176039120172800734305691324221966334080255160260483176188887;
	weights[27] 	= 0.040065735180692261760596124830036934553733701865745615099227199782026889625813254087118609309518739897908239982658;

	nodes[28] 	= -0.87802056981217274271198510347862353406281971624391859875586127032350419675320641699456624921037411327254530513167089723200923236;
	weights[28] 	= 0.035369071097592110832662181126507541905748521780641450072832203720139703604181257708449902503821817044850729162484;

	nodes[29] 	= 0.87802056981217274271198510347862353406281971624391859875586127032350419675320641699456624921037411327254530513167089723200923236;
	weights[29] 	= 0.035369071097592110832662181126507541905748521780641450072832203720139703604181257708449902503821817044850729162484;

	nodes[30] 	= -0.91095972490412745258384787920850654231890035133945560387844813369315012265686213954215915379253550581591137325740733625732159838;
	weights[30] 	= 0.0304792406996034683629047335233923977917696542444008948236439164149845893187062325410919426478878365609924290254;

	nodes[31] 	= 0.91095972490412745258384787920850654231890035133945560387844813369315012265686213954215915379253550581591137325740733625732159838;
	weights[31] 	= 0.0304792406996034683629047335233923977917696542444008948236439164149845893187062325410919426478878365609924290254;

	nodes[32] 	= -0.93892355735498817853317343362559197025138781845017187084180344942000909226209625553226076216372871342100463953942233412754131017;
	weights[32] 	= 0.02542295952611304788674244290943086438613541037397895486118189690745359530591747619542151202800578756821515656075;

	nodes[33] 	= 0.93892355735498817853317343362559197025138781845017187084180344942000909226209625553226076216372871342100463953942233412754131017;
	weights[33] 	= 0.02542295952611304788674244290943086438613541037397895486118189690745359530591747619542151202800578756821515656075;

	nodes[34] 	= -0.96175936533820448874692715785332268117172128891403199897862970601663056316358403509863887020688763598635014688415853726749660704;
	weights[34] 	= 0.02022786956905264475705571907935418508267142655242209621165358092674143865122542915836316194378132273541486108811;

	nodes[35] 	= 0.96175936533820448874692715785332268117172128891403199897862970601663056316358403509863887020688763598635014688415853726749660704;
	weights[35] 	= 0.02022786956905264475705571907935418508267142655242209621165358092674143865122542915836316194378132273541486108811;

	nodes[36] 	= -0.97934250806374819370898256654285609558647498012906292861550926997550439238282630645462954867344342073784909608968302481861041841;
	weights[36] 	= 0.01492244369735749414467767810586576762009274749010789659465733447011190172643220465939101605340132074255413313816;

	nodes[37] 	= 0.97934250806374819370898256654285609558647498012906292861550926997550439238282630645462954867344342073784909608968302481861041841;
	weights[37] 	= 0.01492244369735749414467767810586576762009274749010789659465733447011190172643220465939101605340132074255413313816;

	nodes[38] 	= -0.99157728834086091979236125328086883345269326473710401757687904813164473149605570331376562506359025678104543677849508648332392245;
	weights[38] 	= 0.00953622030174850241182010029269799818868479873501257251186520364280318993071897030494785686962133714794603097942;

	nodes[39] 	= 0.99157728834086091979236125328086883345269326473710401757687904813164473149605570331376562506359025678104543677849508648332392245;
	weights[39] 	= 0.00953622030174850241182010029269799818868479873501257251186520364280318993071897030494785686962133714794603097942;

	nodes[40] 	= -0.99839961899006241502286812684705027617787608352278125176485550254510168804585364372256021206701899342043400060582177998763238667;
	weights[40] 	= 0.004105998604649084610602779496835962657016773374802290357852127042839148777673144204339628263043739701980584327316;

	nodes[41] 	= 0.99839961899006241502286812684705027617787608352278125176485550254510168804585364372256021206701899342043400060582177998763238667;
	weights[41] 	= 0.004105998604649084610602779496835962657016773374802290357852127042839148777673144204339628263043739701980584327316;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_42_hpp__)*/