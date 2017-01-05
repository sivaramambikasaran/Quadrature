//
//        Gauss_Hermite_Nodes_and_Weights_93.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 93.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_93_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_93_hpp__

void Gauss_Hermite_Nodes_and_Weights_93(long double*& nodes, long double*& weights) {
	nodes	= new long double[93];
	weights	= new long double[93];

	nodes[0] 	= 0;
	weights[0] 	= 0.22973436523811954043059101289109526404992443892792494750674580026469214220224634589853987006435252777558871698883117986107177498;

	nodes[1] 	= -0.22974517302503579775309633569212140570970059856873127934889457615746295796952140875479556031716453793996029501534574411032854386;
	weights[1] 	= 0.217953558269998133759500643440374565468477703740895610665151744077687497503372949435161385999751165312304046636529587415502682;

	nodes[2] 	= 0.22974517302503579775309633569212140570970059856873127934889457615746295796952140875479556031716453793996029501534574411032854386;
	weights[2] 	= 0.217953558269998133759500643440374565468477703740895610665151744077687497503372949435161385999751165312304046636529587415502682;

	nodes[3] 	= -0.45955524040186736104116145763757116316929592388128560274822070655012779925827735663609482640310267761690631909599846688126777601;
	weights[3] 	= 0.18610251044108339274663213005746246248480598172168820958947785082114047363556277421926326978214045481596806988028054665699638;

	nodes[4] 	= 0.45955524040186736104116145763757116316929592388128560274822070655012779925827735663609482640310267761690631909599846688126777601;
	weights[4] 	= 0.18610251044108339274663213005746246248480598172168820958947785082114047363556277421926326978214045481596806988028054665699638;

	nodes[5] 	= -0.68949533518145142701737915830734220004433563143101548381420852124293173712143305187838788261681936257558606629471917358792110665;
	weights[5] 	= 0.1429925541406927864704524770132978323902108655661087018840287612370938342836052460091402901271271373621310387338477654184828;

	nodes[6] 	= 0.68949533518145142701737915830734220004433563143101548381420852124293173712143305187838788261681936257558606629471917358792110665;
	weights[6] 	= 0.1429925541406927864704524770132978323902108655661087018840287612370938342836052460091402901271271373621310387338477654184828;

	nodes[7] 	= -0.91963107038107429659996738662720619340516626893061508415263719545980185904636428837253899604761530613876761297352039690305586422;
	weights[7] 	= 0.09883666813877995854608055850562962687834537221056051201529909956868319089574515493620268283376420821253356098750474430451;

	nodes[8] 	= 0.91963107038107429659996738662720619340516626893061508415263719545980185904636428837253899604761530613876761297352039690305586422;
	weights[8] 	= 0.09883666813877995854608055850562962687834537221056051201529909956868319089574515493620268283376420821253356098750474430451;

	nodes[9] 	= -1.1500287854429532950742619929627934262158743041697611391738720989680743779637563945075102119638827023742294094478033107346776772;
	weights[9] 	= 0.0614304786466542525978657750062201052159501965334249677721053438843925181481143855093130254548791661259737501997892219859;

	nodes[10] 	= 1.1500287854429532950742619929627934262158743041697611391738720989680743779637563945075102119638827023742294094478033107346776772;
	weights[10] 	= 0.0614304786466542525978657750062201052159501965334249677721053438843925181481143855093130254548791661259737501997892219859;

	nodes[11] 	= -1.3807558006205385912975083521163030963889708434928988943906771132179905834519012120579577710866218878758466489855734921031867031;
	weights[11] 	= 0.034314242859408522755020700619098994530521717187241485045278950482421756079586568309320076918021673262222642554505059545;

	nodes[12] 	= 1.3807558006205385912975083521163030963889708434928988943906771132179905834519012120579577710866218878758466489855734921031867031;
	weights[12] 	= 0.034314242859408522755020700619098994530521717187241485045278950482421756079586568309320076918021673262222642554505059545;

	nodes[13] 	= -1.6118806822031735983815953951651641562395404719149353889616802879964515329863758487369818778714918451939451620644293382785044652;
	weights[13] 	= 0.017214629493700277352738068784918559684507791383550905838114092708208709788131209686840287932033536116072276415531844579;

	nodes[14] 	= 1.6118806822031735983815953951651641562395404719149353889616802879964515329863758487369818778714918451939451620644293382785044652;
	weights[14] 	= 0.017214629493700277352738068784918559684507791383550905838114092708208709788131209686840287932033536116072276415531844579;

	nodes[15] 	= -1.8434735217321804659326704095262572490087303549925470479113280337598971999911360559243918168920957112635081958791458657204156837;
	weights[15] 	= 0.00775004515410126800161595122906335591457597289408191734156101591506186413070276116918466459326077356602690682853638427;

	nodes[16] 	= 1.8434735217321804659326704095262572490087303549925470479113280337598971999911360559243918168920957112635081958791458657204156837;
	weights[16] 	= 0.00775004515410126800161595122906335591457597289408191734156101591506186413070276116918466459326077356602690682853638427;

	nodes[17] 	= -2.0756062326810418481539788755350808298602616889870191483621924894500351477831139384521733884498559398495807602774556603600264559;
	weights[17] 	= 0.0031281305245610358588198106999244403863213618645830924208627155273005887291176995229856106905778299805208857806776604;

	nodes[18] 	= 2.0756062326810418481539788755350808298602616889870191483621924894500351477831139384521733884498559398495807602774556603600264559;
	weights[18] 	= 0.0031281305245610358588198106999244403863213618645830924208627155273005887291176995229856106905778299805208857806776604;

	nodes[19] 	= -2.3083528684815698071123191250961840993795089382978174268383580664423401954172238638750483140932385110070647592502607193253269176;
	weights[19] 	= 0.0011307532404246066194576860621939732426189538718915472947908084150336451426678011401127058512237667345185817918870369;

	nodes[20] 	= 2.3083528684815698071123191250961840993795089382978174268383580664423401954172238638750483140932385110070647592502607193253269176;
	weights[20] 	= 0.0011307532404246066194576860621939732426189538718915472947908084150336451426678011401127058512237667345185817918870369;

	nodes[21] 	= -2.5417899662931848006920019740863673716950893333798502471337074708229262677625821234895716659250293580012441289155434027190387766;
	weights[21] 	= 0.000365607957142550128989041758054540823371995700084695964840633733525700623743717468077719229930864525188430831798552;

	nodes[22] 	= 2.5417899662931848006920019740863673716950893333798502471337074708229262677625821234895716659250293580012441289155434027190387766;
	weights[22] 	= 0.000365607957142550128989041758054540823371995700084695964840633733525700623743717468077719229930864525188430831798552;

	nodes[23] 	= -2.7759969215550593082907087690398659429712172665947939224056444648764034546516472068920315485626879228068964850240224154444162933;
	weights[23] 	= 0.000105589602844175084154807133259809708697771838292946180196930975722954720454095557017686835596546867136726497353033;

	nodes[24] 	= 2.7759969215550593082907087690398659429712172665947939224056444648764034546516472068920315485626879228068964850240224154444162933;
	weights[24] 	= 0.000105589602844175084154807133259809708697771838292946180196930975722954720454095557017686835596546867136726497353033;

	nodes[25] 	= -3.0110563991586607066377205108794529548898644626615131411327489492452269558050221143121106075564990360924773951182949051137494135;
	weights[25] 	= 0.000027195889773576562941064747590091969684803263663069849720533341764930784886450409166959188561029600537394281872458;

	nodes[26] 	= 3.0110563991586607066377205108794529548898644626615131411327489492452269558050221143121106075564990360924773951182949051137494135;
	weights[26] 	= 0.000027195889773576562941064747590091969684803263663069849720533341764930784886450409166959188561029600537394281872458;

	nodes[27] 	= -3.2470547880671275198414291186101052713474240834361969612642136139130945307926551531039255351172280923153090901908404988589941981;
	weights[27] 	= 6.23593696671527890650926765072913122759636879842402268588337300104977308926991348353104119070110254709563849358e-6;

	nodes[28] 	= 3.2470547880671275198414291186101052713474240834361969612642136139130945307926551531039255351172280923153090901908404988589941981;
	weights[28] 	= 6.23593696671527890650926765072913122759636879842402268588337300104977308926991348353104119070110254709563849358e-6;

	nodes[29] 	= -3.4840827074346536052476329926725265721711917017396312365930827646924136425799553633618980082048569771185866652980237647778296343;
	weights[29] 	= 1.27048964295972903179069461127101796453474193468825170930200571970910937917581543568329917798325541222855954296e-6;

	nodes[30] 	= 3.4840827074346536052476329926725265721711917017396312365930827646924136425799553633618980082048569771185866652980237647778296343;
	weights[30] 	= 1.27048964295972903179069461127101796453474193468825170930200571970910937917581543568329917798325541222855954296e-6;

	nodes[31] 	= -3.7222355738045622923566217311864056657184801071605070552859453420953338004501877249498787989797300615413851913727465346455930812;
	weights[31] 	= 2.2949550926387006191160345267985255502367302483376512905277409475691454799636280946485323618162079326599760219e-7;

	nodes[32] 	= 3.7222355738045622923566217311864056657184801071605070552859453420953338004501877249498787989797300615413851913727465346455930812;
	weights[32] 	= 2.2949550926387006191160345267985255502367302483376512905277409475691454799636280946485323618162079326599760219e-7;

	nodes[33] 	= -3.9616142408689084581820264699932993804453606887972217125964059334218463086534113979922454250862203420901511312817694531615064219;
	weights[33] 	= 3.666685728236624165335430052318467911602857057060611434799707449502553597260443546179361756291757553847161945e-8;

	nodes[34] 	= 3.9616142408689084581820264699932993804453606887972217125964059334218463086534113979922454250862203420901511312817694531615064219;
	weights[34] 	= 3.666685728236624165335430052318467911602857057060611434799707449502553597260443546179361756291757553847161945e-8;

	nodes[35] 	= -4.2023257256606745136082113876571152757313869580383042405380327192208815498357129282618842556337569004071478038949866606047334133;
	weights[35] 	= 5.168009533638834379197770330142693409629944519780268920575482056364752968692269272985710538413077044665102429e-9;

	nodes[36] 	= 4.2023257256606745136082113876571152757313869580383042405380327192208815498357129282618842556337569004071478038949866606047334133;
	weights[36] 	= 5.168009533638834379197770330142693409629944519780268920575482056364752968692269272985710538413077044665102429e-9;

	nodes[37] 	= -4.4444840380621062113069159725923090003998955312932539410217168399133475869225449498319077221532438678827174483951042462831525425;
	weights[37] 	= 6.40703308272940688029218118497210373254894679396087884188415473330787454759802947225394595363744110590512621e-10;

	nodes[38] 	= 4.4444840380621062113069159725923090003998955312932539410217168399133475869225449498319077221532438678827174483951042462831525425;
	weights[38] 	= 6.40703308272940688029218118497210373254894679396087884188415473330787454759802947225394595363744110590512621e-10;

	nodes[39] 	= -4.6882111343374206915451687471265268048685926125836901611975313652691903666015513042837540271159792119716648558899187480700622484;
	weights[39] 	= 6.9642829049518908075433802147500272923734254717532695937068428029825382389620983140207514529780092434436914e-11;

	nodes[40] 	= 4.6882111343374206915451687471265268048685926125836901611975313652691903666015513042837540271159792119716648558899187480700622484;
	weights[40] 	= 6.9642829049518908075433802147500272923734254717532695937068428029825382389620983140207514529780092434436914e-11;

	nodes[41] 	= -4.9336380202893318134171185771982224517138037474143958732295785542996487362278373757782532839539937979499160999233336272462226662;
	weights[41] 	= 6.6135809154493514191708833528931742249847686186597243489085506253664411185758385731062765337201311242745694e-12;

	nodes[42] 	= 4.9336380202893318134171185771982224517138037474143958732295785542996487362278373757782532839539937979499160999233336272462226662;
	weights[42] 	= 6.6135809154493514191708833528931742249847686186597243489085506253664411185758385731062765337201311242745694e-12;

	nodes[43] 	= -5.1809060359441154862970955387485926341747144850276820770816542919762641961682476281888035037323188412141702284919886681949746035;
	weights[43] 	= 5.465490315479904801744334763657282067344864551315341151867362816788530327102916649971559913048714037981419e-13;

	nodes[44] 	= 5.1809060359441154862970955387485926341747144850276820770816542919762641961682476281888035037323188412141702284919886681949746035;
	weights[44] 	= 5.465490315479904801744334763657282067344864551315341151867362816788530327102916649971559913048714037981419e-13;

	nodes[45] 	= -5.4301683618693142058827624473512903607232299466830080385332583436310316570079765095460752044360626591093796368763461327724661569;
	weights[45] 	= 3.913464729406431861178173597342970200517516171643941286644301884123315766132344050531247679115744555510088e-14;

	nodes[46] 	= 5.4301683618693142058827624473512903607232299466830080385332583436310316570079765095460752044360626591093796368763461327724661569;
	weights[46] 	= 3.913464729406431861178173597342970200517516171643941286644301884123315766132344050531247679115744555510088e-14;

	nodes[47] 	= -5.6815917979923948750127564686936513986945301359781561050243333968170310651761430110725968118198750150895697221240991108077529159;
	weights[47] 	= 2.41620490415256789914198198661092066239927234067454528786342614580077895605156748308269081447788790288194e-15;

	nodes[48] 	= 5.6815917979923948750127564686936513986945301359781561050243333968170310651761430110725968118198750150895697221240991108077529159;
	weights[48] 	= 2.41620490415256789914198198661092066239927234067454528786342614580077895605156748308269081447788790288194e-15;

	nodes[49] 	= -5.935358880066691404072723212408258343633796823967130841091965582223268691612333226290829306434597243930233686153777245015973558;
	weights[49] 	= 1.279412634128187310762748997136351118619401201173267363806126247215796192709028449583326210229891461250701e-16;

	nodes[50] 	= 5.935358880066691404072723212408258343633796823967130841091965582223268691612333226290829306434597243930233686153777245015973558;
	weights[50] 	= 1.279412634128187310762748997136351118619401201173267363806126247215796192709028449583326210229891461250701e-16;

	nodes[51] 	= -6.1916704180836004628014670223424473325253630208049559248115300260381780340485216799533036685293165373170552629217136219884431838;
	weights[51] 	= 5.77546437432383103564607766413884039021023742873040702350795665747061706159661618335369679367568964384925e-18;

	nodes[52] 	= 6.1916704180836004628014670223424473325253630208049559248115300260381780340485216799533036685293165373170552629217136219884431838;
	weights[52] 	= 5.77546437432383103564607766413884039021023742873040702350795665747061706159661618335369679367568964384925e-18;

	nodes[53] 	= -6.4507485669373852961548350595944310349067408984402617499329104668733223076888618645876234726200951186462552511329987860442410871;
	weights[53] 	= 2.20773437754139329974436598935925171047849451569443499635797663355499756946795096821745975482826366658909e-19;

	nodes[54] 	= 6.4507485669373852961548350595944310349067408984402617499329104668733223076888618645876234726200951186462552511329987860442410871;
	weights[54] 	= 2.20773437754139329974436598935925171047849451569443499635797663355499756946795096821745975482826366658909e-19;

	nodes[55] 	= -6.7128405754384830471024806803172201305822903792078263182783978069801616111378843007750590821025218460279301695620917446234453057;
	weights[55] 	= 7.0927393378882503011455054252345349748823224754332698264458733472044272124779408456467214904310164958446e-21;

	nodes[56] 	= 6.7128405754384830471024806803172201305822903792078263182783978069801616111378843007750590821025218460279301695620917446234453057;
	weights[56] 	= 7.0927393378882503011455054252345349748823224754332698264458733472044272124779408456467214904310164958446e-21;

	nodes[57] 	= -6.9782234097463293339704821506323353248659317803594399753206542853003568531596391361307030878330766855852760341110694470975178911;
	weights[57] 	= 1.89884706347406987967450334319935833918850356106636732835770879241325453785282472608361786597028905264786e-22;

	nodes[58] 	= 6.9782234097463293339704821506323353248659317803594399753206542853003568531596391361307030878330766855852760341110694470975178911;
	weights[58] 	= 1.89884706347406987967450334319935833918850356106636732835770879241325453785282472608361786597028905264786e-22;

	nodes[59] 	= -7.2472095182038047454572899651264255026011660000838890330793317313373066452358946922766866590221711551609842644058074464793173007;
	weights[59] 	= 4.1954427268621348147862558266148598645077072374585773002414660823159912416329527439966466460180929561192e-24;

	nodes[60] 	= 7.2472095182038047454572899651264255026011660000838890330793317313373066452358946922766866590221711551609842644058074464793173007;
	weights[60] 	= 4.1954427268621348147862558266148598645077072374585773002414660823159912416329527439966466460180929561192e-24;

	nodes[61] 	= -7.5201541069686455194217126506548717091781677694926620819532693704091820824182021513242991926893393631814389421225946349119584128;
	weights[61] 	= 7.5663389636386101258615479093333498783593538429795064978034048457520151185444088048147694744586702201444e-26;

	nodes[62] 	= 7.5201541069686455194217126506548717091781677694926620819532693704091820824182021513242991926893393631814389421225946349119584128;
	weights[62] 	= 7.5663389636386101258615479093333498783593538429795064978034048457520151185444088048147694744586702201444e-26;

	nodes[63] 	= -7.7974644466766472434733569202200417159426192039341467179635433626440948051210369081003546340635951812579496734512337333693490795;
	weights[63] 	= 1.09977854243577785009270358811017152223841752395533797846871510528126334746364556760463181631306802533426e-27;

	nodes[64] 	= 7.7974644466766472434733569202200417159426192039341467179635433626440948051210369081003546340635951812579496734512337333693490795;
	weights[64] 	= 1.09977854243577785009270358811017152223841752395533797846871510528126334746364556760463181631306802533426e-27;

	nodes[65] 	= -8.0796119574473502887049104402488899875118633230690411578133570557274618822905566622424707312679316061076958051225059345718895872;
	weights[65] 	= 1.26955646836259506594248291528446953812755813875929606627899961577163107910968678111710236804049633087258e-29;

	nodes[66] 	= 8.0796119574473502887049104402488899875118633230690411578133570557274618822905566622424707312679316061076958051225059345718895872;
	weights[66] 	= 1.26955646836259506594248291528446953812755813875929606627899961577163107910968678111710236804049633087258e-29;

	nodes[67] 	= -8.3671481698791865296698948261985530832326256563359086646719121085521639443169705842006831800426381037870237696506610015220160968;
	weights[67] 	= 1.14408585523146263377437636749558148281713213166359453937655363585471255889010406627498381588486049158792e-31;

	nodes[68] 	= 8.3671481698791865296698948261985530832326256563359086646719121085521639443169705842006831800426381037870237696506610015220160968;
	weights[68] 	= 1.14408585523146263377437636749558148281713213166359453937655363585471255889010406627498381588486049158792e-31;

	nodes[69] 	= -8.660726215392477647441982473603585702857692848804011631866482074642785957265290443735013465273312223306247448180094065007850756;
	weights[69] 	= 7.8867039514681260670118394830744906697291361395691718465357922271657917836985635995942160445515617916848e-34;

	nodes[70] 	= 8.660726215392477647441982473603585702857692848804011631866482074642785957265290443735013465273312223306247448180094065007850756;
	weights[70] 	= 7.8867039514681260670118394830744906697291361395691718465357922271657917836985635995942160445515617916848e-34;

	nodes[71] 	= -8.9611304090936655515167050611767978360216744280211477759749180576556038499046196239866673775961893673752749040673785367218306846;
	weights[71] 	= 4.0587293642248558011696064202160550906688985039433589153050550660192934067307906552139779627421125188363e-36;

	nodes[72] 	= 8.9611304090936655515167050611767978360216744280211477759749180576556038499046196239866673775961893673752749040673785367218306846;
	weights[72] 	= 4.0587293642248558011696064202160550906688985039433589153050550660192934067307906552139779627421125188363e-36;

	nodes[73] 	= -9.2693180331543126081519052734191490551496627937041011134780048281920593191384558330259591456657912010371218452622897337905165764;
	weights[73] 	= 1.51387926552338683616119223159914584995702757123101469843519014242401713027756239400725007344648463809047e-38;

	nodes[74] 	= 9.2693180331543126081519052734191490551496627937041011134780048281920593191384558330259591456657912010371218452622897337905165764;
	weights[74] 	= 1.51387926552338683616119223159914584995702757123101469843519014242401713027756239400725007344648463809047e-38;

	nodes[75] 	= -9.5864801654334609784109419438800342053524444319772477606511335161218157934301584941214864944385438018583706638873344468202237772;
	weights[75] 	= 3.9454427601609068291604677893916852800985603571835695573829050442502426860263241488094641271695180814767e-41;

	nodes[76] 	= 9.5864801654334609784109419438800342053524444319772477606511335161218157934301584941214864944385438018583706638873344468202237772;
	weights[76] 	= 3.9454427601609068291604677893916852800985603571835695573829050442502426860263241488094641271695180814767e-41;

	nodes[77] 	= -9.9141334955519446998885942179757936769300603551743314559266057179157472080146324449323400977944816970628401602327724618824959753;
	weights[77] 	= 6.85943778853861783888566458986243389094017275064909179630767388417190635463602251428276900433376627195062e-44;

	nodes[78] 	= 9.9141334955519446998885942179757936769300603551743314559266057179157472080146324449323400977944816970628401602327724618824959753;
	weights[78] 	= 6.85943778853861783888566458986243389094017275064909179630767388417190635463602251428276900433376627195062e-44;

	nodes[79] 	= -10.254265154452550171095803513858792833130339036404381085494585876919656475087315244276425666691923609115372371926626123868680862;
	weights[79] 	= 7.490790514262667271353394449949615620325972065033845658615022106714885364330469927101060685857631281614654e-47;

	nodes[80] 	= 10.254265154452550171095803513858792833130339036404381085494585876919656475087315244276425666691923609115372371926626123868680862;
	weights[80] 	= 7.490790514262667271353394449949615620325972065033845658615022106714885364330469927101060685857631281614654e-47;

	nodes[81] 	= -10.609574060288382787598359263125529034866412534152683802977997407251392680650864099799394937637193079326084149252536173159952799;
	weights[81] 	= 4.738553698136589588078896257453430773176613016108431876130432508529021714062433272764076227062273143753548e-50;

	nodes[82] 	= 10.609574060288382787598359263125529034866412534152683802977997407251392680650864099799394937637193079326084149252536173159952799;
	weights[82] 	= 4.738553698136589588078896257453430773176613016108431876130432508529021714062433272764076227062273143753548e-50;

	nodes[83] 	= -10.983902488179488680156980737082325117355224770267623310840522005420030553247380479286798214591971780100475951675573581922286462;
	weights[83] 	= 1.5493136809731814751547201368554153907769953703417900924153332841682758088920368436483688314600555282973404e-53;

	nodes[84] 	= 10.983902488179488680156980737082325117355224770267623310840522005420030553247380479286798214591971780100475951675573581922286462;
	weights[84] 	= 1.5493136809731814751547201368554153907769953703417900924153332841682758088920368436483688314600555282973404e-53;

	nodes[85] 	= -11.383084124753705755306763077438949678055536733418447044796358338423906040102446682833422411644308441361160624748732285603133888;
	weights[85] 	= 2.20722191957341134710508251338564953231951863622175447350089122106909476468170595789666832297756645009672746e-57;

	nodes[86] 	= 11.383084124753705755306763077438949678055536733418447044796358338423906040102446682833422411644308441361160624748732285603133888;
	weights[86] 	= 2.20722191957341134710508251338564953231951863622175447350089122106909476468170595789666832297756645009672746e-57;

	nodes[87] 	= -11.816848833075054694990255943176913881865002112868415115230949527113692081018754185601042678298685193578859675812945948906454545;
	weights[87] 	= 1.035286943449024680447472707356367932802572840287218948455129550019087244912268774750677960588139119723633613e-61;

	nodes[88] 	= 11.816848833075054694990255943176913881865002112868415115230949527113692081018754185601042678298685193578859675812945948906454545;
	weights[88] 	= 1.035286943449024680447472707356367932802572840287218948455129550019087244912268774750677960588139119723633613e-61;

	nodes[89] 	= -12.304088423692579937682228789955815580576287515541425910377906940304982807258302211580046244343548795168543273702040884593101494;
	weights[89] 	= 9.3824834253839111569609919597425148529150580879043915355923271197898280622000371903447962403790198126127757942e-67;

	nodes[90] 	= 12.304088423692579937682228789955815580576287515541425910377906940304982807258302211580046244343548795168543273702040884593101494;
	weights[90] 	= 9.3824834253839111569609919597425148529150580879043915355923271197898280622000371903447962403790198126127757942e-67;

	nodes[91] 	= -12.89428882849132442699209332259052218682711508458231894632314185741895254684017256359776214815645896339728033144332047926499395;
	weights[91] 	= 4.240221420032518689184618308583393310517064636492522453634278891721984167219873358253637094471472940647152753151e-73;

	nodes[92] 	= 12.89428882849132442699209332259052218682711508458231894632314185741895254684017256359776214815645896339728033144332047926499395;
	weights[92] 	= 4.240221420032518689184618308583393310517064636492522453634278891721984167219873358253637094471472940647152753151e-73;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_93_hpp__)*/