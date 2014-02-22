//
//        Gauss_Legendre_Nodes_and_Weights_96.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 96.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_96_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_96_hpp__

void Gauss_Legendre_Nodes_and_Weights_96(long double*& nodes, long double*& weights) {
	nodes	= new long double[96];
	weights	= new long double[96];

	nodes[0] 	= -0.016276744849602969579134563695238453562045890115891553003407280421972654692737754769139193261060985860949775900482484880541505787;
	weights[0] 	= 0.03255061449236316624196141829728573148730801345719714818279721730689778312733019233336940809730962457516696038365385361308713757;

	nodes[1] 	= 0.016276744849602969579134563695238453562045890115891553003407280421972654692737754769139193261060985860949775900482484880541505787;
	weights[1] 	= 0.03255061449236316624196141829728573148730801345719714818279721730689778312733019233336940809730962457516696038365385361308713757;

	nodes[2] 	= -0.048812985136049731111958204261275057080951125710578123979468860329517444314320607582742751037483052180816126285875437874564646195;
	weights[2] 	= 0.03251611871386883598720549144777835466900356913348999145877525303323499142803965266326328046211185659523447676129395755092667;

	nodes[3] 	= 0.048812985136049731111958204261275057080951125710578123979468860329517444314320607582742751037483052180816126285875437874564646195;
	weights[3] 	= 0.03251611871386883598720549144777835466900356913348999145877525303323499142803965266326328046211185659523447676129395755092667;

	nodes[4] 	= -0.081297495464425558994471262974752858778294887311664644582759177775181497794263045797242037166485142127269672992166879574195315889;
	weights[4] 	= 0.03244716371406426936401278844884585833337363530054704928849461567996988701899360976873842490179719470052447187687489252333324;

	nodes[5] 	= 0.081297495464425558994471262974752858778294887311664644582759177775181497794263045797242037166485142127269672992166879574195315889;
	weights[5] 	= 0.03244716371406426936401278844884585833337363530054704928849461567996988701899360976873842490179719470052447187687489252333324;

	nodes[6] 	= -0.11369585011066592091120809541432808062547462543046750641978703963478957582310915395827736971541127790684297650663880580063744725;
	weights[6] 	= 0.032343822568575928428774838828943270428100962899969549136648795666639800880547068761900047925424240749408586651758982485138;

	nodes[7] 	= 0.11369585011066592091120809541432808062547462543046750641978703963478957582310915395827736971541127790684297650663880580063744725;
	weights[7] 	= 0.032343822568575928428774838828943270428100962899969549136648795666639800880547068761900047925424240749408586651758982485138;

	nodes[8] 	= -0.1459737146548969419891073333433264604743089916147771255135544596834250484561609688005150295993045091786290639446469328947187095;
	weights[8] 	= 0.03220620479403025066866711455723251850391779338813945999994204147698457953318240492198758973662021454788697258925669105619;

	nodes[9] 	= 0.1459737146548969419891073333433264604743089916147771255135544596834250484561609688005150295993045091786290639446469328947187095;
	weights[9] 	= 0.03220620479403025066866711455723251850391779338813945999994204147698457953318240492198758973662021454788697258925669105619;

	nodes[10] 	= -0.17809688236761860275940262517649151491438833028584905148666908581983388482487794459974569850563960059838607577723368789414993303;
	weights[10] 	= 0.032034456231992663218138977470211162994503579182408931081112907931644323830637640174041372422870600484356992313317987471;

	nodes[11] 	= 0.17809688236761860275940262517649151491438833028584905148666908581983388482487794459974569850563960059838607577723368789414993303;
	weights[11] 	= 0.032034456231992663218138977470211162994503579182408931081112907931644323830637640174041372422870600484356992313317987471;

	nodes[12] 	= -0.21003131046056720360284718571229577514423010941406896505377030140246239728352560437012315146755637584572201943390728135243224627;
	weights[12] 	= 0.03182875889441100653475373988553225349789089888561056098139898042485634133525877926560875835468242418123260625682276768;

	nodes[13] 	= 0.21003131046056720360284718571229577514423010941406896505377030140246239728352560437012315146755637584572201943390728135243224627;
	weights[13] 	= 0.03182875889441100653475373988553225349789089888561056098139898042485634133525877926560875835468242418123260625682276768;

	nodes[14] 	= -0.24174315616384001232793190374062767031155822242391351201619699078923454791274783952575125670461277651552760461747139552199079088;
	weights[14] 	= 0.0315893307707271685580207461699641601250344711893854735799639757474821459061715909838148405183956160241587620133114954;

	nodes[15] 	= 0.24174315616384001232793190374062767031155822242391351201619699078923454791274783952575125670461277651552760461747139552199079088;
	weights[15] 	= 0.0315893307707271685580207461699641601250344711893854735799639757474821459061715909838148405183956160241587620133114954;

	nodes[16] 	= -0.27319881259104914148727215572456479444818399539369518783477558598208427156232433502196001369876791488229859167331367715480890706;
	weights[16] 	= 0.03131642559686135581278426671506312817571029460685004247946946747866586580269986459675681456902754170416971088300424;

	nodes[17] 	= 0.27319881259104914148727215572456479444818399539369518783477558598208427156232433502196001369876791488229859167331367715480890706;
	weights[17] 	= 0.03131642559686135581278426671506312817571029460685004247946946747866586580269986459675681456902754170416971088300424;

	nodes[18] 	= -0.30436494435449635302392977929520331815117711827683866518451218138991682353588597143718841899093727605775383591096596425470575282;
	weights[18] 	= 0.0310103325863138374232497799706326368443931363825004859379088238972132561953909165872085430872991584216008916360641;

	nodes[19] 	= 0.30436494435449635302392977929520331815117711827683866518451218138991682353588597143718841899093727605775383591096596425470575282;
	weights[19] 	= 0.0310103325863138374232497799706326368443931363825004859379088238972132561953909165872085430872991584216008916360641;

	nodes[20] 	= -0.33520852289262542261632562480562867218708710620202135565348149305981302875093302372342058204472234013907156731780722904464834086;
	weights[20] 	= 0.030671376123669149014228830356204276272423845482869727219790717719224137411971604622213009807964484047512868778453;

	nodes[21] 	= 0.33520852289262542261632562480562867218708710620202135565348149305981302875093302372342058204472234013907156731780722904464834086;
	weights[21] 	= 0.030671376123669149014228830356204276272423845482869727219790717719224137411971604622213009807964484047512868778453;

	nodes[22] 	= -0.36569686147231363503089559399547317723118744903879570455340330362550665610064122552352636120149267338339766070776793907995986409;
	weights[22] 	= 0.03029991542082759379408876420650091407031778021768116322732844683768087330390246483622900006987491537357822198034;

	nodes[23] 	= 0.36569686147231363503089559399547317723118744903879570455340330362550665610064122552352636120149267338339766070776793907995986409;
	weights[23] 	= 0.03029991542082759379408876420650091407031778021768116322732844683768087330390246483622900006987491537357822198034;

	nodes[24] 	= -0.39579764982890860328500024313516415971218337571041639371613276796869984522114957574562374594992674782191688862803004437149092083;
	weights[24] 	= 0.02989634413632838598438807579440006054016116334338418985190863792402062729630914161287666433495636040138290412;

	nodes[25] 	= 0.39579764982890860328500024313516415971218337571041639371613276796869984522114957574562374594992674782191688862803004437149092083;
	weights[25] 	= 0.02989634413632838598438807579440006054016116334338418985190863792402062729630914161287666433495636040138290412;

	nodes[26] 	= -0.42547898840730054536481920356999794481478963798620394855485886317032784736140249943247566858355136299309083603400873096439185695;
	weights[26] 	= 0.02946108995816790597043633218285844925162252041343117766102987512212992768960351516018133152634071617366991187;

	nodes[27] 	= 0.42547898840730054536481920356999794481478963798620394855485886317032784736140249943247566858355136299309083603400873096439185695;
	weights[27] 	= 0.02946108995816790597043633218285844925162252041343117766102987512212992768960351516018133152634071617366991187;

	nodes[28] 	= -0.45470942216774300863567614808630781300400711588388885088707925873989067105139431867303635294262501045848375823217514611192479647;
	weights[28] 	= 0.0289946141505552365426787812796815730550155009176210465225457902778648420627163215683113731228099859998677728;

	nodes[29] 	= 0.45470942216774300863567614808630781300400711588388885088707925873989067105139431867303635294262501045848375823217514611192479647;
	weights[29] 	= 0.0289946141505552365426787812796815730550155009176210465225457902778648420627163215683113731228099859998677728;

	nodes[30] 	= -0.48345797392059635976840560936389525547125161800448345341392428134661644480263878630547294456827865240799948650738317450868337549;
	weights[30] 	= 0.028497411065085385645599512945805604569697298351755795373692657497967307735018111766029887281399720018110769;

	nodes[31] 	= 0.48345797392059635976840560936389525547125161800448345341392428134661644480263878630547294456827865240799948650738317450868337549;
	weights[31] 	= 0.028497411065085385645599512945805604569697298351755795373692657497967307735018111766029887281399720018110769;

	nodes[32] 	= -0.51169417715466767358550974542885430324944473944896095373029746701809592516383047437601650514884782436790944072759266068474024624;
	weights[32] 	= 0.0279700076168483344398185765890225078448913058867776798613277368462514803758879990485962831139266922174803;

	nodes[33] 	= 0.51169417715466767358550974542885430324944473944896095373029746701809592516383047437601650514884782436790944072759266068474024624;
	weights[33] 	= 0.0279700076168483344398185765890225078448913058867776798613277368462514803758879990485962831139266922174803;

	nodes[34] 	= -0.53938810832435743622680259732556063817453062909571251492010467063148429328387785907139890016058322599814764106948626051966449614;
	weights[34] 	= 0.0274129627260292428234210874890912706985729610745407043435547949682353614714490654262133155411908152625376;

	nodes[35] 	= 0.53938810832435743622680259732556063817453062909571251492010467063148429328387785907139890016058322599814764106948626051966449614;
	weights[35] 	= 0.0274129627260292428234210874890912706985729610745407043435547949682353614714490654262133155411908152625376;

	nodes[36] 	= -0.56651041856139716840425019508346263231068260549434536448972084546591609475807562670253395412592097232365773128250316636563325729;
	weights[36] 	= 0.026826866725591762198056728714156645865322720814034198018175822837474166146837639546668786451344829263455;

	nodes[37] 	= 0.56651041856139716840425019508346263231068260549434536448972084546591609475807562670253395412592097232365773128250316636563325729;
	weights[37] 	= 0.026826866725591762198056728714156645865322720814034198018175822837474166146837639546668786451344829263455;

	nodes[38] 	= -0.5930323647775720806835557550437582131736021375103736366860909152557327042211458516610195152692407858745222130110198042312652013;
	weights[38] 	= 0.02621234073567241391345796396446334356160599731123819101274913079791874813940780553958552223940598588853;

	nodes[39] 	= 0.5930323647775720806835557550437582131736021375103736366860909152557327042211458516610195152692407858745222130110198042312652013;
	weights[39] 	= 0.02621234073567241391345796396446334356160599731123819101274913079791874813940780553958552223940598588853;

	nodes[40] 	= -0.61892584012546857038636928698786279738592430429414134248777072140608601817638390993062854033225166901367413880490425046263189006;
	weights[40] 	= 0.0255700360053493614987971679436000860963400546942244664068295089469346826068456463691882480753527652803;

	nodes[41] 	= 0.61892584012546857038636928698786279738592430429414134248777072140608601817638390993062854033225166901367413880490425046263189006;
	weights[41] 	= 0.0255700360053493614987971679436000860963400546942244664068295089469346826068456463691882480753527652803;

	nodes[42] 	= -0.64416340378496710679841235006330156230309920407587144844568202081947520010834965997431802365598485288210462070458875844428392827;
	weights[42] 	= 0.024900633222483610288382180868332736453678058612440441139164699019089648108808310830788855570602000967;

	nodes[43] 	= 0.64416340378496710679841235006330156230309920407587144844568202081947520010834965997431802365598485288210462070458875844428392827;
	weights[43] 	= 0.024900633222483610288382180868332736453678058612440441139164699019089648108808310830788855570602000967;

	nodes[44] 	= -0.66871831004391615395255720757277418902449062091170475791113287980588732138742384007899518935382061772823366448915990836316880783;
	weights[44] 	= 0.02420484179236469128226733787267703894983249157503247335601858757035955740724237907726652630834592001;

	nodes[45] 	= 0.66871831004391615395255720757277418902449062091170475791113287980588732138742384007899518935382061772823366448915990836316880783;
	weights[45] 	= 0.02420484179236469128226733787267703894983249157503247335601858757035955740724237907726652630834592001;

	nodes[46] 	= -0.69256453664217156134424576981824255945409652925885548958477346382163642882753626598150742982797584424399161756954569102917789449;
	weights[46] 	= 0.02348339908592621984223593266761258095476559518221020658636617611102016828148003721877889021010958475;

	nodes[47] 	= 0.69256453664217156134424576981824255945409652925885548958477346382163642882753626598150742982797584424399161756954569102917789449;
	weights[47] 	= 0.02348339908592621984223593266761258095476559518221020658636617611102016828148003721877889021010958475;

	nodes[48] 	= -0.71567681234896762622514414805762485529757997051247193418744007147357876882347368386524408522756449754914453817032224049607177188;
	weights[48] 	= 0.0227370696583293740013478419774902863557003246008265382757664188689988270371412619981697293863810632;

	nodes[49] 	= 0.71567681234896762622514414805762485529757997051247193418744007147357876882347368386524408522756449754914453817032224049607177188;
	weights[49] 	= 0.0227370696583293740013478419774902863557003246008265382757664188689988270371412619981697293863810632;

	nodes[50] 	= -0.7380306437444001328511657310964971052297197058616809511406133537012160827012743182945868193487821401123384494106289972312198802;
	weights[50] 	= 0.021966644438744349194756386801562236250168956413498128474033169836281729714385788271255045214810668;

	nodes[51] 	= 0.7380306437444001328511657310964971052297197058616809511406133537012160827012743182945868193487821401123384494106289972312198802;
	weights[51] 	= 0.021966644438744349194756386801562236250168956413498128474033169836281729714385788271255045214810668;

	nodes[52] 	= -0.75960234117664749870297044111962161585341868435054774141272877525289260725903533992305040594347909327926285336471735887524613315;
	weights[52] 	= 0.02117293989219129898767386719100370076761697637364535200620039325647464051758204729479947373097921;

	nodes[53] 	= 0.75960234117664749870297044111962161585341868435054774141272877525289260725903533992305040594347909327926285336471735887524613315;
	weights[53] 	= 0.02117293989219129898767386719100370076761697637364535200620039325647464051758204729479947373097921;

	nodes[54] 	= -0.78036904386743321760360445588931774802018338143590539092840515783526730513801655734421091428603557900526956358665652717607824273;
	weights[54] 	= 0.02035679715433332459524521541727161434206896955395180857757224519568265721909938812474484425321232;

	nodes[55] 	= 0.78036904386743321760360445588931774802018338143590539092840515783526730513801655734421091428603557900526956358665652717607824273;
	weights[55] 	= 0.02035679715433332459524521541727161434206896955395180857757224519568265721909938812474484425321232;

	nodes[56] 	= -0.80030874413914081722879614397132768321645557542642106356714959216675206476220427898488482942864696878810336655591775578729965585;
	weights[56] 	= 0.0195190811401450224100852202812046864878588810137370017274562230384531815980625282767611891116203;

	nodes[57] 	= 0.80030874413914081722879614397132768321645557542642106356714959216675206476220427898488482942864696878810336655591775578729965585;
	weights[57] 	= 0.0195190811401450224100852202812046864878588810137370017274562230384531815980625282767611891116203;

	nodes[58] 	= -0.81940031073793167553899962422447803513534721938361199009857507136603517819295950488589258057679325999690469420300842485724572478;
	weights[58] 	= 0.0186606796274114673851567586221322190641440517092818581216541711687221459824717227278221980660038;

	nodes[59] 	= 0.81940031073793167553899962422447803513534721938361199009857507136603517819295950488589258057679325999690469420300842485724572478;
	weights[59] 	= 0.0186606796274114673851567586221322190641440517092818581216541711687221459824717227278221980660038;

	nodes[60] 	= -0.83762351122818712149430281676469285697948084314800173896021062009870815697939117395446202808591792796187961851151886845425988011;
	weights[60] 	= 0.017782502316045260837614226486071016063899239907906754559096755642529271136320796165561169970592;

	nodes[61] 	= 0.83762351122818712149430281676469285697948084314800173896021062009870815697939117395446202808591792796187961851151886845425988011;
	weights[61] 	= 0.017782502316045260837614226486071016063899239907906754559096755642529271136320796165561169970592;

	nodes[62] 	= -0.85495903343460145546278696989356926064279603002599911269624922562776507778983554827815863049310913508351223094575352281662286942;
	weights[62] 	= 0.016885479864245172450477540606861926652599614120810620017034695660861483477518638364228320952144;

	nodes[63] 	= 0.85495903343460145546278696989356926064279603002599911269624922562776507778983554827815863049310913508351223094575352281662286942;
	weights[63] 	= 0.016885479864245172450477540606861926652599614120810620017034695660861483477518638364228320952144;

	nodes[64] 	= -0.87138850590929650287377476449304271472319863712706959143780354814638252221238951308203335404498219895880215839475786933968066536;
	weights[64] 	= 0.01597056290256229138061645679149305106099148270933684780220156975697977516589266872060510807597;

	nodes[65] 	= 0.87138850590929650287377476449304271472319863712706959143780354814638252221238951308203335404498219895880215839475786933968066536;
	weights[65] 	= 0.01597056290256229138061645679149305106099148270933684780220156975697977516589266872060510807597;

	nodes[66] 	= -0.88689451740242041605687743339378615883199264504023013320509762759662425370255746300037388616451163860482731683940006426250642658;
	weights[66] 	= 0.01503872102699493800587627522209755283738483397063629237115797440043634399941377228215989886795;

	nodes[67] 	= 0.88689451740242041605687743339378615883199264504023013320509762759662425370255746300037388616451163860482731683940006426250642658;
	weights[67] 	= 0.01503872102699493800587627522209755283738483397063629237115797440043634399941377228215989886795;

	nodes[68] 	= -0.90146063531585234131923269730968683784087137974048150657926604450303251242142241603091067526877001901111657473328564249733985114;
	weights[68] 	= 0.0140909417723148609158616247246366395183921510371114712571655413797667344571824978425602717074;

	nodes[69] 	= 0.90146063531585234131923269730968683784087137974048150657926604450303251242142241603091067526877001901111657473328564249733985114;
	weights[69] 	= 0.0140909417723148609158616247246366395183921510371114712571655413797667344571824978425602717074;

	nodes[70] 	= -0.91507142312089807420588446615042154208707641890550087711740633954858183910322862180179560938524938860780812768384840151087810108;
	weights[70] 	= 0.0131282295669615726370636669025991088987756993130077046190262869804324072585511724568932845941;

	nodes[71] 	= 0.91507142312089807420588446615042154208707641890550087711740633954858183910322862180179560938524938860780812768384840151087810108;
	weights[71] 	= 0.0131282295669615726370636669025991088987756993130077046190262869804324072585511724568932845941;

	nodes[72] 	= -0.92771245672230869096469047269654638690578248570143050654477496308190823942502752828908057709253716543632644817140606599089650645;
	weights[72] 	= 0.0121516046710883196351813527366672521223706438505791111702619710310374585530186973273498880822;

	nodes[73] 	= 0.92771245672230869096469047269654638690578248570143050654477496308190823942502752828908057709253716543632644817140606599089650645;
	weights[73] 	= 0.0121516046710883196351813527366672521223706438505791111702619710310374585530186973273498880822;

	nodes[74] 	= -0.9393703397527552169318573794316152183552681470500471605102733324066471419963058162065983162063683682749743263710875807874844407;
	weights[74] 	= 0.011162102099838498591213263828562068610863963422178036374985806583316694714911355521612653136;

	nodes[75] 	= 0.9393703397527552169318573794316152183552681470500471605102733324066471419963058162065983162063683682749743263710875807874844407;
	weights[75] 	= 0.011162102099838498591213263828562068610863963422178036374985806583316694714911355521612653136;

	nodes[76] 	= -0.95003271778443763575609894844386348780971900450685648673944363980897647161957406767166297663953828567566380924949025850886052499;
	weights[76] 	= 0.010160770535008415757587636953825368848984845861045912968179473930272702144689413424550252593;

	nodes[77] 	= 0.95003271778443763575609894844386348780971900450685648673944363980897647161957406767166297663953828567566380924949025850886052499;
	weights[77] 	= 0.010160770535008415757587636953825368848984845861045912968179473930272702144689413424550252593;

	nodes[78] 	= -0.95968829144874253930006802588473474118734836647120890059887342937482471266736400457236531829025674739361055446575720771150035504;
	weights[78] 	= 0.0091486712307833866325846026652079285264488019711332396546848717439302024761452277220028789;

	nodes[79] 	= 0.95968829144874253930006802588473474118734836647120890059887342937482471266736400457236531829025674739361055446575720771150035504;
	weights[79] 	= 0.0091486712307833866325846026652079285264488019711332396546848717439302024761452277220028789;

	nodes[80] 	= -0.96832682846326421217365936644365105839264424809452213858531212073483055405483623676020136973774905189697573659944537400926075191;
	weights[80] 	= 0.008126876925698759217382427707855937734244760320838153308616403531172739774410414996403192132;

	nodes[81] 	= 0.96832682846326421217365936644365105839264424809452213858531212073483055405483623676020136973774905189697573659944537400926075191;
	weights[81] 	= 0.008126876925698759217382427707855937734244760320838153308616403531172739774410414996403192132;

	nodes[82] 	= -0.97593917458513646645260103424187990919840295459611560340025929773051101629339990761694716323749183684252714659498650496117194867;
	weights[82] 	= 0.007096470791153865269144160812143391934772099304693550642846478795407710030510627294031145619;

	nodes[83] 	= 0.97593917458513646645260103424187990919840295459611560340025929773051101629339990761694716323749183684252714659498650496117194867;
	weights[83] 	= 0.007096470791153865269144160812143391934772099304693550642846478795407710030510627294031145619;

	nodes[84] 	= -0.98251726356301467744704583188254811794497581309071891400477375759108372620908365923433952179646150030733943256413787243463304322;
	weights[84] 	= 0.00605854550423596168331674203172908796957815120935606594312101071027626624519403254155101344;

	nodes[85] 	= 0.98251726356301467744704583188254811794497581309071891400477375759108372620908365923433952179646150030733943256413787243463304322;
	weights[85] 	= 0.00605854550423596168331674203172908796957815120935606594312101071027626624519403254155101344;

	nodes[86] 	= -0.98805412632962379948076277241845119455046460061414888720787740115690588286112220281623757845367494512291064040211657452794245179;
	weights[86] 	= 0.005014202742927517692470194969030898474074112473881134454568613165156013661208562658225150436;

	nodes[87] 	= 0.98805412632962379948076277241845119455046460061414888720787740115690588286112220281623757845367494512291064040211657452794245179;
	weights[87] 	= 0.005014202742927517692470194969030898474074112473881134454568613165156013661208562658225150436;

	nodes[88] 	= -0.99254390032376262457189229770160114087692506973570775006817221537128182487219380004354575290739879585448933545507721123532425494;
	weights[88] 	= 0.003964554338444686673733415767419659877691247922865890823183334874434591561681373322943686822;

	nodes[89] 	= 0.99254390032376262457189229770160114087692506973570775006817221537128182487219380004354575290739879585448933545507721123532425494;
	weights[89] 	= 0.003964554338444686673733415767419659877691247922865890823183334874434591561681373322943686822;

	nodes[90] 	= -0.99598184298720929065039908487935660051740255920916094288079390737236892137471613683015392174364302956803741814055027933729160393;
	weights[90] 	= 0.002910731817934946408410617989400725009747169337234322473761649533644271160621858721216895224;

	nodes[91] 	= 0.99598184298720929065039908487935660051740255920916094288079390737236892137471613683015392174364302956803741814055027933729160393;
	weights[91] 	= 0.002910731817934946408410617989400725009747169337234322473761649533644271160621858721216895224;

	nodes[92] 	= -0.99836437586318167772414943952671936338759413983572901689155945091729553650197329002337574402334340871313194786381484021265855337;
	weights[92] 	= 0.0018539607889469217323359253508939105882082883762771779150610846386063036423798259182646983884;

	nodes[93] 	= 0.99836437586318167772414943952671936338759413983572901689155945091729553650197329002337574402334340871313194786381484021265855337;
	weights[93] 	= 0.0018539607889469217323359253508939105882082883762771779150610846386063036423798259182646983884;

	nodes[94] 	= -0.99968950388323076682769010578436551928154546273246199200135596301121265314709534522274829139082680422059723649218631532613550296;
	weights[94] 	= 0.0007967920655520124294381434969435687599310869228268737553691951573653453758745653466712375664;

	nodes[95] 	= 0.99968950388323076682769010578436551928154546273246199200135596301121265314709534522274829139082680422059723649218631532613550296;
	weights[95] 	= 0.0007967920655520124294381434969435687599310869228268737553691951573653453758745653466712375664;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_96_hpp__)*/