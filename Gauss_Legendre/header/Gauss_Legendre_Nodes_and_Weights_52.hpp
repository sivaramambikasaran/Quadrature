//
//        Gauss_Legendre_Nodes_and_Weights_52.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 52.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_52_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_52_hpp__

void Gauss_Legendre_Nodes_and_Weights_52(long double*& nodes, long double*& weights) {
	nodes	= new long double[52];
	weights	= new long double[52];

	nodes[0] 	= -0.02991410979733876604368077607079992681884360824994698161985753939115171373196101097369688915440168649967569545646443138540053174;
	weights[0] 	= 0.05981036574529186024778537881147746094448080363041406293257631474944096270075613142249867009203875127387486610582259139261328062;

	nodes[1] 	= 0.02991410979733876604368077607079992681884360824994698161985753939115171373196101097369688915440168649967569545646443138540053174;
	weights[1] 	= 0.05981036574529186024778537881147746094448080363041406293257631474944096270075613142249867009203875127387486610582259139261328062;

	nodes[2] 	= -0.089635244648900565488854691122399303169851287190198420484102629430721031214167831380425953528138253651560466954193833250331631914;
	weights[2] 	= 0.059596260171248158258310878748414953662277280381941915538580781121620122694531237045301608592412404191365596947588897033651647;

	nodes[3] 	= 0.089635244648900565488854691122399303169851287190198420484102629430721031214167831380425953528138253651560466954193833250331631914;
	weights[3] 	= 0.059596260171248158258310878748414953662277280381941915538580781121620122694531237045301608592412404191365596947588897033651647;

	nodes[4] 	= -0.14903550860694918048863404001811357032226976188823353243557086554385415513585555998379139635263107361895267302540236683770200942;
	weights[4] 	= 0.0591688154660429703693320023948709783254170522175978797865113524599074946787826776977643408000844922245899242495425742676592;

	nodes[5] 	= 0.14903550860694918048863404001811357032226976188823353243557086554385415513585555998379139635263107361895267302540236683770200942;
	weights[5] 	= 0.0591688154660429703693320023948709783254170522175978797865113524599074946787826776977643408000844922245899242495425742676592;

	nodes[6] 	= -0.20790226415636605968646612812234551827266281082820464693541281779460800579621873829229098802367023213668315222385988841007643353;
	weights[6] 	= 0.058529561771813868550290598971623693638068732742325598837321770284955818140712013763336126937634730704983876277568823876848;

	nodes[7] 	= 0.20790226415636605968646612812234551827266281082820464693541281779460800579621873829229098802367023213668315222385988841007643353;
	weights[7] 	= 0.058529561771813868550290598971623693638068732742325598837321770284955818140712013763336126937634730704983876277568823876848;

	nodes[8] 	= -0.26602478360500182747297173059883988445592437496218466846713725720852137866747151720686719778346046092617295544129019282179397794;
	weights[8] 	= 0.05768078745252682765393199766340351953943983505133758448624815317493644376058759528470112609757457146982831901991319056799;

	nodes[9] 	= 0.26602478360500182747297173059883988445592437496218466846713725720852137866747151720686719778346046092617295544129019282179397794;
	weights[9] 	= 0.05768078745252682765393199766340351953943983505133758448624815317493644376058759528470112609757457146982831901991319056799;

	nodes[10] 	= -0.32319500343480782550109906660144717905404753380657945793933873227826155579877247796372451949834283742343218987224438188002201668;
	weights[10] 	= 0.056625530902368597190808240478370150567220072814714676223988649826540809996327924387936404618158510265449897772687357618;

	nodes[11] 	= 0.32319500343480782550109906660144717905404753380657945793933873227826155579877247796372451949834283742343218987224438188002201668;
	weights[11] 	= 0.056625530902368597190808240478370150567220072814714676223988649826540809996327924387936404618158510265449897772687357618;

	nodes[12] 	= -0.37920826911609366924668176693944888046212159135119660933601231010352733035818239529260128408197510510840819372536807628066408659;
	weights[12] 	= 0.05536756966930265254904109345121858229015400325104202341311441181128317083431215048576371373161375871496631462738188877;

	nodes[13] 	= 0.37920826911609366924668176693944888046212159135119660933601231010352733035818239529260128408197510510840819372536807628066408659;
	weights[13] 	= 0.05536756966930265254904109345121858229015400325104202341311441181128317083431215048576371373161375871496631462738188877;

	nodes[14] 	= -0.43386406771876167030908656820978026074374585241840338581909725560659494594414553435217137634864976900137060205491013495484650047;
	weights[14] 	= 0.0539114069327572647508368248937999595766012469593051258848183001559998862686687795769395443765031148076237791271947553;

	nodes[15] 	= 0.43386406771876167030908656820978026074374585241840338581909725560659494594414553435217137634864976900137060205491013495484650047;
	weights[15] 	= 0.0539114069327572647508368248937999595766012469593051258848183001559998862686687795769395443765031148076237791271947553;

	nodes[16] 	= -0.48696674569809607778245824134646555685045503971902368774263448042842110448686663277583119892739225732685541576276401845068227381;
	weights[16] 	= 0.052262255383906993034394144426392143708199078085866984877357168051497699286259422992491364864839894248046837096696713;

	nodes[17] 	= 0.48696674569809607778245824134646555685045503971902368774263448042842110448686663277583119892739225732685541576276401845068227381;
	weights[17] 	= 0.052262255383906993034394144426392143708199078085866984877357168051497699286259422992491364864839894248046837096696713;

	nodes[18] 	= -0.53832620928582743837595116797535676382349014140308097340985563359376995932155429493297509666080252513919094049027566926649307129;
	weights[18] 	= 0.05042601856634237721821125408285875446257795876553979698868379894233930036114776133316345680166421818814025622490268;

	nodes[19] 	= 0.53832620928582743837595116797535676382349014140308097340985563359376995932155429493297509666080252513919094049027566926649307129;
	weights[19] 	= 0.05042601856634237721821125408285875446257795876553979698868379894233930036114776133316345680166421818814025622490268;

	nodes[20] 	= -0.58775860497957906990202578155720422388122016653804348995978496117036885058924229719759058731540082597696520253419308346368052039;
	weights[20] 	= 0.0484092697440748968539602492860462780097495217284633972848027562768288868241594512997151176360377322831095013157019;

	nodes[21] 	= 0.58775860497957906990202578155720422388122016653804348995978496117036885058924229719759058731540082597696520253419308346368052039;
	weights[21] 	= 0.0484092697440748968539602492860462780097495217284633972848027562768288868241594512997151176360377322831095013157019;

	nodes[22] 	= -0.63508697769524592429812457928880965359359898895498966320348379664820657117246674678244522387902327061737641831177120036567912749;
	weights[22] 	= 0.046219228372784793507645705335284639223901021626422840508031765816015160205871088721816883280983819802253843445862;

	nodes[23] 	= 0.63508697769524592429812457928880965359359898895498966320348379664820657117246674678244522387902327061737641831177120036567912749;
	weights[23] 	= 0.046219228372784793507645705335284639223901021626422840508031765816015160205871088721816883280983819802253843445862;

	nodes[24] 	= -0.68014190422716770209223877973664100790099671016577591556545298876012070203283524576274142889560961681398709461572070464367058062;
	weights[24] 	= 0.0438637342590004079951296655787644501641606665302048159962246339241378578259279509932806159405068703341529544736;

	nodes[25] 	= 0.68014190422716770209223877973664100790099671016577591556545298876012070203283524576274142889560961681398709461572070464367058062;
	weights[25] 	= 0.0438637342590004079951296655787644501641606665302048159962246339241378578259279509932806159405068703341529544736;

	nodes[26] 	= -0.72276209974998319367681667607193595478399390521472001992348926892971390411155903804651021941763939995864436985371097217296446878;
	weights[26] 	= 0.0413512195005602716790402864239551629382699693154642276674598924609380789996494391016755838674196308209810518018;

	nodes[27] 	= 0.72276209974998319367681667607193595478399390521472001992348926892971390411155903804651021941763939995864436985371097217296446878;
	weights[27] 	= 0.0413512195005602716790402864239551629382699693154642276674598924609380789996494391016755838674196308209810518018;

	nodes[28] 	= -0.76279499519374496027921116308905084079183057450762154671864775467541722407101685419739074539725767445141636059510197593476835734;
	weights[28] 	= 0.0386906783104239789851012067403526469280782659935645860649681723298465227549214963917442109736666626515017615157;

	nodes[29] 	= 0.76279499519374496027921116308905084079183057450762154671864775467541722407101685419739074539725767445141636059510197593476835734;
	weights[29] 	= 0.0386906783104239789851012067403526469280782659935645860649681723298465227549214963917442109736666626515017615157;

	nodes[30] 	= -0.80009728343046832433475875422580765119764185860770158058730849438319267934708358250350799616539545625468758569525983469639051992;
	weights[30] 	= 0.035891634835097232941942393285280738785338503065172636269394291183640433404497234581329204679907901840515667009;

	nodes[31] 	= 0.80009728343046832433475875422580765119764185860770158058730849438319267934708358250350799616539545625468758569525983469639051992;
	weights[31] 	= 0.035891634835097232941942393285280738785338503065172636269394291183640433404497234581329204679907901840515667009;

	nodes[32] 	= -0.83453543232673453496172638962123868524593631266922605323167539537529356064378825561329633083454987576116178864533131654789606823;
	weights[32] 	= 0.032964109089718797915010044778695196176727392574584348800396613830796775564448556915448263268996690899721905243;

	nodes[33] 	= 0.83453543232673453496172638962123868524593631266922605323167539537529356064378825561329633083454987576116178864533131654789606823;
	weights[33] 	= 0.032964109089718797915010044778695196176727392574584348800396613830796775564448556915448263268996690899721905243;

	nodes[34] 	= -0.86598616284606758524435851762420694089833895262429082393533454501374966202827379531448573611853128239913071133953468338806595991;
	weights[34] 	= 0.02991858114714394664128206873997088793212331551058751748347937246274934187195075602407158739180371359365393765;

	nodes[35] 	= 0.86598616284606758524435851762420694089833895262429082393533454501374966202827379531448573611853128239913071133953468338806595991;
	weights[35] 	= 0.02991858114714394664128206873997088793212331551058751748347937246274934187195075602407158739180371359365393765;

	nodes[36] 	= -0.89433689053449532252084408826352755534558099556237649319269886222377916195769136253613568876457960338654452873451822793248395258;
	weights[36] 	= 0.02676595374650401344949308028601837885526188449905828725703099643785110080156625410267846514842680378857727569;

	nodes[37] 	= 0.89433689053449532252084408826352755534558099556237649319269886222377916195769136253613568876457960338654452873451822793248395258;
	weights[37] 	= 0.02676595374650401344949308028601837885526188449905828725703099643785110080156625410267846514842680378857727569;

	nodes[38] 	= -0.91948612891642453989359637654188158502952027270247205718622286062730702027130755589978843354131801996796705301509357712466892416;
	weights[38] 	= 0.02351751355398446159032251991005460942922912900298550122542924911287104444524318619562059055830690670447867763;

	nodes[39] 	= 0.91948612891642453989359637654188158502952027270247205718622286062730702027130755589978843354131801996796705301509357712466892416;
	weights[39] 	= 0.02351751355398446159032251991005460942922912900298550122542924911287104444524318619562059055830690670447867763;

	nodes[40] 	= -0.94134385364135905684357918385056700582876554543631919967003187189560692745619627317572920210450298055528723072933995997957108422;
	weights[40] 	= 0.0201848915079807922029890342094782372367124670848078201907053153022804933093017910272194508282846471410154782;

	nodes[41] 	= 0.94134385364135905684357918385056700582876554543631919967003187189560692745619627317572920210450298055528723072933995997957108422;
	weights[41] 	= 0.0201848915079807922029890342094782372367124670848078201907053153022804933093017910272194508282846471410154782;

	nodes[42] 	= -0.9598318269330865525320251534250654427878474760376774154149939732436280601524582085756397191798231321392951135729793680751368921;
	weights[42] 	= 0.0167800233963007356779215368705201620834158091638185160071399098726294772478125352658137771698478574663624637;

	nodes[43] 	= 0.9598318269330865525320251534250654427878474760376774154149939732436280601524582085756397191798231321392951135729793680751368921;
	weights[43] 	= 0.0167800233963007356779215368705201620834158091638185160071399098726294772478125352658137771698478574663624637;

	nodes[44] 	= -0.97488388422174450314070647039964555445992366394593839782844335056242980452430058630756012791145287526768848019893452221897396234;
	weights[44] 	= 0.0133151149823409606566003444777991485546764997333043912196613474307117920145268092238816407281678579997566914;

	nodes[45] 	= 0.97488388422174450314070647039964555445992366394593839782844335056242980452430058630756012791145287526768848019893452221897396234;
	weights[45] 	= 0.0133151149823409606566003444777991485546764997333043912196613474307117920145268092238816407281678579997566914;

	nodes[46] 	= -0.98644619565154984064532285911839736802273903582732623279715297831659114357228298425581456290611363293849756052020786942984050199;
	weights[46] 	= 0.0098026345794627520619511681166895023278384118572793052735047727358385157910058025834744082085694960454847672;

	nodes[47] 	= 0.98644619565154984064532285911839736802273903582732623279715297831659114357228298425581456290611363293849756052020786942984050199;
	weights[47] 	= 0.0098026345794627520619511681166895023278384118572793052735047727358385157910058025834744082085694960454847672;

	nodes[48] 	= -0.99447759092921602924504327179957170663191177609788217145885629655824967248891176845959458483888722076080646375228395559903873864;
	weights[48] 	= 0.00625552396297327689971610216981454661641170465313125936379966235304380861550109083615704584598412182354995088;

	nodes[49] 	= 0.99447759092921602924504327179957170663191177609788217145885629655824967248891176845959458483888722076080646375228395559903873864;
	weights[49] 	= 0.00625552396297327689971610216981454661641170465313125936379966235304380861550109083615704584598412182354995088;

	nodes[50] 	= -0.9989511111039502780909614407165925612780132611153575616799248405004389142979138086614943179988118999109017969675859857247886657;
	weights[50] 	= 0.002691316950047111118952179868845218023669373761064900418770547891299001601530862746176797560564840716014405306;

	nodes[51] 	= 0.9989511111039502780909614407165925612780132611153575616799248405004389142979138086614943179988118999109017969675859857247886657;
	weights[51] 	= 0.002691316950047111118952179868845218023669373761064900418770547891299001601530862746176797560564840716014405306;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_52_hpp__)*/