//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_42.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 42.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_42_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_42_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_42(long double*& nodes, long double& weight) {
	weight 		= 0.07479982508547126758244389007808340200469450950893109097559391886447181919729069044352463869862183495195590682174481682493080582;

	nodes		= new long double[42];

	nodes[0] 	= 0.9993007047883985526997800741767273557026678637248582334172606071748191155630496603171630209718904315621410318911004060551785926;
	nodes[1] 	= 0.99371220989324258353314824194737869715263549578207321492775650215951038096889094466909957648727064382235430090455376689544457885;
	nodes[2] 	= 0.98256647323328823614586950182432424600759469268228067299335854890459326490435141833059743358220107993346183372272461266564998344;
	nodes[3] 	= 0.96592582628906828674974319972889736763390483900840455040234307631042321397985551634756174185807045188840211186438162153744592538;
	nodes[4] 	= 0.94388333030836756289526360715103662152063246819031638184372537432131943503758466418252941903481932276227960741349249510914835859;
	nodes[5] 	= 0.91656225586997618581665289425909141191568369756409498119715265708387420426391515411486991036287663993351078260599766095039762652;
	nodes[6] 	= 0.8841153935046097894486040972072045445368480897827798625145480490608720712394393389377823664474789571423422338379426795162006476;
	nodes[7] 	= 0.846724199228284168352775816262965271510045028791363880459699986215067425396788004608913754590343028303284139431775577124289217;
	nodes[8] 	= 0.80459777976666832734794695898706720865748727459661486616329006421477478976391049375589182722243375817201011505557416410376375865;
	nodes[9] 	= 0.75797172314545298178855729406110470338221942018410263218539066468048312945057464780132854877301773083024830430615028153698327046;
	nodes[10] 	= 0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[11] 	= 0.6522874112781211543709918892277518756944132236522059136168148266610681961088825665916899139324817039392454069652576179939652179;
	nodes[12] 	= 0.5938201855735016116500901787757969715429326492959549601499631892647522441672342794473681868620347190273930694438500030146030591;
	nodes[13] 	= 0.5320320765153365635576303672303707301645839555086878851977353044941347235299017167950354327642331786314196171331486483438492121;
	nodes[14] 	= 0.4672686282730619891421497069463566255380839082161703482195253026806843920331479435221275882076572529307214147579517577113293805;
	nodes[15] 	= 0.3998920243197409718830580631715817256097028464861182547777933128947581368016566652217313896252359247949612314607037638808415198;
	nodes[16] 	= 0.3302790619551670817748776125965723703131814690300747593765437222435250687954688517389075196497193759942164267574669946716847655;
	nodes[17] 	= 0.2588190451025207623488988376240483283490689013199305138140032073150569747488019969223679746942496655208951887489254730249835074;
	nodes[18] 	= 0.1859116071629145811067063130899319181384130480062137496583347096408363055870100163812008702618015919320313031073422135721650881;
	nodes[19] 	= 0.1119644761033078584687059352720242032581964229674801150338625928690994145000046603589780831404428817615006675504234968466338679;
	nodes[20] 	= 0.0373911942763256210958282809442392730268030609914159820548480628458046458426513343288686118571359288390580944061671023919114306;
	nodes[21] 	= -0.0373911942763256210958282809442392730268030609914159820548480628458046458426513343288686118571359288390580944061671023919114306;
	nodes[22] 	= -0.1119644761033078584687059352720242032581964229674801150338625928690994145000046603589780831404428817615006675504234968466338679;
	nodes[23] 	= -0.1859116071629145811067063130899319181384130480062137496583347096408363055870100163812008702618015919320313031073422135721650881;
	nodes[24] 	= -0.2588190451025207623488988376240483283490689013199305138140032073150569747488019969223679746942496655208951887489254730249835074;
	nodes[25] 	= -0.3302790619551670817748776125965723703131814690300747593765437222435250687954688517389075196497193759942164267574669946716847655;
	nodes[26] 	= -0.3998920243197409718830580631715817256097028464861182547777933128947581368016566652217313896252359247949612314607037638808415198;
	nodes[27] 	= -0.4672686282730619891421497069463566255380839082161703482195253026806843920331479435221275882076572529307214147579517577113293805;
	nodes[28] 	= -0.5320320765153365635576303672303707301645839555086878851977353044941347235299017167950354327642331786314196171331486483438492121;
	nodes[29] 	= -0.5938201855735016116500901787757969715429326492959549601499631892647522441672342794473681868620347190273930694438500030146030591;
	nodes[30] 	= -0.6522874112781211543709918892277518756944132236522059136168148266610681961088825665916899139324817039392454069652576179939652179;
	nodes[31] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[32] 	= -0.7579717231454529817885572940611047033822194201841026321853906646804831294505746478013285487730177308302483043061502815369832705;
	nodes[33] 	= -0.8045977797666683273479469589870672086574872745966148661632900642147747897639104937558918272224337581720101150555741641037637587;
	nodes[34] 	= -0.846724199228284168352775816262965271510045028791363880459699986215067425396788004608913754590343028303284139431775577124289217;
	nodes[35] 	= -0.8841153935046097894486040972072045445368480897827798625145480490608720712394393389377823664474789571423422338379426795162006476;
	nodes[36] 	= -0.9165622558699761858166528942590914119156836975640949811971526570838742042639151541148699103628766399335107826059976609503976265;
	nodes[37] 	= -0.9438833303083675628952636071510366215206324681903163818437253743213194350375846641825294190348193227622796074134924951091483586;
	nodes[38] 	= -0.9659258262890682867497431997288973676339048390084045504023430763104232139798555163475617418580704518884021118643816215374459254;
	nodes[39] 	= -0.9825664732332882361458695018243242460075946926822806729933585489045932649043514183305974335822010799334618337227246126656499834;
	nodes[40] 	= -0.99371220989324258353314824194737869715263549578207321492775650215951038096889094466909957648727064382235430090455376689544457885;
	nodes[41] 	= -0.9993007047883985526997800741767273557026678637248582334172606071748191155630496603171630209718904315621410318911004060551785926;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_42_hpp__)*/