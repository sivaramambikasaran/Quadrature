//
//        Gauss_Hermite_Nodes_and_Weights_115.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:48.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 115.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_115_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_115_hpp__

void Gauss_Hermite_Nodes_and_Weights_115(long double*& nodes, long double*& weights) {
	nodes	= new long double[115];
	weights	= new long double[115];

	nodes[0] 	= 0;
	weights[0] 	= 0.20670065276640285522213804325302281901439031440687600647197792563579070373579845598947375567120894123585586961087357339892694439;

	nodes[1] 	= -0.20670702506645106736441468824111426706519627788439833483855812105079112702653975356962573767723125834420503602380004900619203404;
	weights[1] 	= 0.198073132699148814504971453179805554049053040030769102325661517503219951996234242925051991736654961540097866298606653815052572;

	nodes[2] 	= 0.20670702506645106736441468824111426706519627788439833483855812105079112702653975356962573767723125834420503602380004900619203404;
	weights[2] 	= 0.198073132699148814504971453179805554049053040030769102325661517503219951996234242925051991736654961540097866298606653815052572;

	nodes[3] 	= -0.41345230233083562802584486481980305322436448409849059854281621964563387381903123039475242769318599703178086916926735895511168056;
	weights[3] 	= 0.17428622967828761362762346625906077065993612029091501785229087641967247187685656143319320394977998876903212600178962520337633;

	nodes[4] 	= 0.41345230233083562802584486481980305322436448409849059854281621964563387381903123039475242769318599703178086916926735895511168056;
	weights[4] 	= 0.17428622967828761362762346625906077065993612029091501785229087641967247187685656143319320394977998876903212600178962520337633;

	nodes[5] 	= -0.62027417611781137643642298834206957637481227227433372319755974670747530557249020187488555634229899331667873672876501506948661175;
	weights[5] 	= 0.140803457689047126319193986378561850943171831530741476205325708510530635321807893361033522032931841821499856338269730747849;

	nodes[6] 	= 0.62027417611781137643642298834206957637481227227433372319755974670747530557249020187488555634229899331667873672876501506948661175;
	weights[6] 	= 0.140803457689047126319193986378561850943171831530741476205325708510530635321807893361033522032931841821499856338269730747849;

	nodes[7] 	= -0.82721117565385288478774091980915946963011154967009056708720491769817641420619690375210806634959551592765699330141128280469105962;
	weights[7] 	= 0.10442577716745465384504391894360257956601551446994192877266530573908985620560157510549827120766495639333651024847814612358;

	nodes[8] 	= 0.82721117565385288478774091980915946963011154967009056708720491769817641420619690375210806634959551592765699330141128280469105962;
	weights[8] 	= 0.10442577716745465384504391894360257956601551446994192877266530573908985620560157510549827120766495639333651024847814612358;

	nodes[9] 	= -1.0343021091482229781840021814928400542491590538150361100135778795431646098293990175075677595707892121248905163599880229741207427;
	weights[9] 	= 0.0710803974153488070190995787853416853221254875631841280539076647929073639749649813628893587991411405227726226112589748044;

	nodes[10] 	= 1.0343021091482229781840021814928400542491590538150361100135778795431646098293990175075677595707892121248905163599880229741207427;
	weights[10] 	= 0.0710803974153488070190995787853416853221254875631841280539076647929073639749649813628893587991411405227726226112589748044;

	nodes[11] 	= -1.241586159855832501947243368187243216821581729225332067527516688865996958905895610049362150366398283713489651196031535797021122;
	weights[11] 	= 0.04439305911515428125279953499353842784725657153135168448015219481453036438671887935967434911393041454886619229081042213;

	nodes[12] 	= 1.241586159855832501947243368187243216821581729225332067527516688865996958905895610049362150366398283713489651196031535797021122;
	weights[12] 	= 0.04439305911515428125279953499353842784725657153135168448015219481453036438671887935967434911393041454886619229081042213;

	nodes[13] 	= -1.449102984826295017862611207429911568399536535899375379620692021273713603156035576976882626586859007604153699509933304762972157;
	weights[13] 	= 0.02543021389435236391715071511755689766571621582236315212031393109782475737876086527028990340891392102274007334801441041;

	nodes[14] 	= 1.449102984826295017862611207429911568399536535899375379620692021273713603156035576976882626586859007604153699509933304762972157;
	weights[14] 	= 0.02543021389435236391715071511755689766571621582236315212031393109782475737876086527028990340891392102274007334801441041;

	nodes[15] 	= -1.6568928170822562954466762864340955493784351964148348671740138003406788887883512584454189594761992146294060429605919299706775311;
	weights[15] 	= 0.0133558614196890891188685864861425722826685543759189330148314656206041120543969773128378509905004950166260270252278598;

	nodes[16] 	= 1.6568928170822562954466762864340955493784351964148348671740138003406788887883512584454189594761992146294060429605919299706775311;
	weights[16] 	= 0.0133558614196890891188685864861425722826685543759189330148314656206041120543969773128378509905004950166260270252278598;

	nodes[17] 	= -1.8649965720202715301991204699490792268786558475040398280948124216360262606403382024117959141243171068334432582542773387559727225;
	weights[17] 	= 0.0064278810024544026842193015585603266990043598812411199039353675236649834080271001435497423832787944036360330894164124;

	nodes[18] 	= 1.8649965720202715301991204699490792268786558475040398280948124216360262606403382024117959141243171068334432582542773387559727225;
	weights[18] 	= 0.0064278810024544026842193015585603266990043598812411199039353675236649834080271001435497423832787944036360330894164124;

	nodes[19] 	= -2.0734559588903582399701378183416132329108103256935669389796973528008583235024274672502680283597225621526357189752986969053011811;
	weights[19] 	= 0.002833308065248060812993361603642322664545083868595500900182807752010054034414634376362475872239097305451665147131218;

	nodes[20] 	= 2.0734559588903582399701378183416132329108103256935669389796973528008583235024274672502680283597225621526357189752986969053011811;
	weights[20] 	= 0.002833308065248060812993361603642322664545083868595500900182807752010054034414634376362475872239097305451665147131218;

	nodes[21] 	= -2.2823135982874577506311536457957058957964269388818829805505163892396676661267832046110070947285011147628360335985702275574564156;
	weights[21] 	= 0.00114307228294812226807082511260543203428185163043221515345205567740390837545364121816615908935096428007488236311466;

	nodes[22] 	= 2.2823135982874577506311536457957058957964269388818829805505163892396676661267832046110070947285011147628360335985702275574564156;
	weights[22] 	= 0.00114307228294812226807082511260543203428185163043221515345205567740390837545364121816615908935096428007488236311466;

	nodes[23] 	= -2.4916131466813881283124849740939682559292820594419550807091017204487764510311630065146752368285242324898210848076153034720349448;
	weights[23] 	= 0.00042179171252798877359524521962932479839513157446356572932535017306837246161578873064347109220818008248393545123998;

	nodes[24] 	= 2.4916131466813881283124849740939682559292820594419550807091017204487764510311630065146752368285242324898210848076153034720349448;
	weights[24] 	= 0.00042179171252798877359524521962932479839513157446356572932535017306837246161578873064347109220818008248393545123998;

	nodes[25] 	= -2.7013994291239475895729483526339380255453995849120991791776340851947175427031892859590011581775141845834790726707007454640709782;
	weights[25] 	= 0.0001422402849226227520289621555600153884575490830785862503373018980781274527274038826056703733914444466394801773506;

	nodes[26] 	= 2.7013994291239475895729483526339380255453995849120991791776340851947175427031892859590011581775141845834790726707007454640709782;
	weights[26] 	= 0.0001422402849226227520289621555600153884575490830785862503373018980781274527274038826056703733914444466394801773506;

	nodes[27] 	= -2.9117185814056987412717737308661539171473634175894598615237461213037113363624727285174867308176072679787964618639261221077115264;
	weights[27] 	= 0.0000437992663257788365464516079597760805939778446327203953184195419285495136213664608928023462079408224486815982405;

	nodes[28] 	= 2.9117185814056987412717737308661539171473634175894598615237461213037113363624727285174867308176072679787964618639261221077115264;
	weights[28] 	= 0.0000437992663257788365464516079597760805939778446327203953184195419285495136213664608928023462079408224486815982405;

	nodes[29] 	= -3.1226182030944168327498817453519184572769941345117637199785113257655684676877982152093361863789297737683962880064327894733041993;
	weights[29] 	= 0.000012303027527173662688916875766438870916432716995353161150893033243036735014955750416637328572716565241352784408;

	nodes[30] 	= 3.1226182030944168327498817453519184572769941345117637199785113257655684676877982152093361863789297737683962880064327894733041993;
	weights[30] 	= 0.000012303027527173662688916875766438870916432716995353161150893033243036735014955750416637328572716565241352784408;

	nodes[31] 	= -3.3341475230768893021960438237108058947027236767781604745964880114794364719501654482251198052346590756886897752990158419035387231;
	weights[31] 	= 3.14919251101636583807756047591221596590460387535375510403403853901722704928033027656989867838807788570092401e-6;

	nodes[32] 	= 3.3341475230768893021960438237108058947027236767781604745964880114794364719501654482251198052346590756886897752990158419035387231;
	weights[32] 	= 3.14919251101636583807756047591221596590460387535375510403403853901722704928033027656989867838807788570092401e-6;

	nodes[33] 	= -3.5463575794514750265400556444569174190410983186590926261555701278060529379160738749912486149566248324901690346572587300790679398;
	weights[33] 	= 7.33714564457307755970294138478705716990743441977078538156540604862239612549144594160401101412992230368233395e-7;

	nodes[34] 	= 3.5463575794514750265400556444569174190410983186590926261555701278060529379160738749912486149566248324901690346572587300790679398;
	weights[34] 	= 7.33714564457307755970294138478705716990743441977078538156540604862239612549144594160401101412992230368233395e-7;

	nodes[35] 	= -3.7593014158877048495344969518823329511502088139022741306592361992063734253444618390907386247134557389762981560624408591376580417;
	weights[35] 	= 1.5539942997674850827969882034095726534734078422018977108696689270071123613453855775490554976688134291363411e-7;

	nodes[36] 	= 3.7593014158877048495344969518823329511502088139022741306592361992063734253444618390907386247134557389762981560624408591376580417;
	weights[36] 	= 1.5539942997674850827969882034095726534734078422018977108696689270071123613453855775490554976688134291363411e-7;

	nodes[37] 	= -3.9730342968900870527573712799092491034479388315589368273261715462622933454222719585219182732372756626957594327222067736920265222;
	weights[37] 	= 2.9879393170121436527000013069867264447096726557879785903234755023542276183519621301164326388968627059175756e-8;

	nodes[38] 	= 3.9730342968900870527573712799092491034479388315589368273261715462622933454222719585219182732372756626957594327222067736920265222;
	weights[38] 	= 2.9879393170121436527000013069867264447096726557879785903234755023542276183519621301164326388968627059175756e-8;

	nodes[39] 	= -4.1876139447872084806119810046964129317244467920795412056087259565002133671909434220999095064890467226931842058901030892505690262;
	weights[39] 	= 5.207733427766868898629294814601078535952927098895989722222447354262406540931999967942637694463701264781868e-9;

	nodes[40] 	= 4.1876139447872084806119810046964129317244467920795412056087259565002133671909434220999095064890467226931842058901030892505690262;
	weights[40] 	= 5.207733427766868898629294814601078535952927098895989722222447354262406540931999967942637694463701264781868e-9;

	nodes[41] 	= -4.4031008017280053844905629006717300204857526278746983251576476892801418441719050184391149460865390880893286313982581250638861262;
	weights[41] 	= 8.21447973436345731979689286743300998069256399433916292208953639266682872506832230345418843622742121325315e-10;

	nodes[42] 	= 4.4031008017280053844905629006717300204857526278746983251576476892801418441719050184391149460865390880893286313982581250638861262;
	weights[42] 	= 8.21447973436345731979689286743300998069256399433916292208953639266682872506832230345418843622742121325315e-10;

	nodes[43] 	= -4.6195583205220862730849543281647632144787137132440683854934732061539383527628171819566618750119912022114002254687112798955699911;
	weights[43] 	= 1.17059454829582693135263110940854514105523008691938444549953805521998159793332293583069909518568007431069e-10;

	nodes[44] 	= 4.6195583205220862730849543281647632144787137132440683854934732061539383527628171819566618750119912022114002254687112798955699911;
	weights[44] 	= 1.17059454829582693135263110940854514105523008691938444549953805521998159793332293583069909518568007431069e-10;

	nodes[45] 	= -4.8370532888321799136352572307130296936575875337662970250823229735461312839548878076891523056228152184198417440763527838306851139;
	weights[45] 	= 1.5041987406688421483843245267856030997179519971483203806381765880797355534215166647741850169436771278275e-11;

	nodes[46] 	= 4.8370532888321799136352572307130296936575875337662970250823229735461312839548878076891523056228152184198417440763527838306851139;
	weights[46] 	= 1.5041987406688421483843245267856030997179519971483203806381765880797355534215166647741850169436771278275e-11;

	nodes[47] 	= -5.055656192042073502856403508328865374662792434845177041161117327274571556255048097620335007031513203008685508567215170987176735;
	weights[47] 	= 1.7393402348430439483223404841773392474612811686549600944253794004030621968055006146789330531352817509935e-12;

	nodes[48] 	= 5.055656192042073502856403508328865374662792434845177041161117327274571556255048097620335007031513203008685508567215170987176735;
	weights[48] 	= 1.7393402348430439483223404841773392474612811686549600944253794004030621968055006146789330531352817509935e-12;

	nodes[49] 	= -5.2754416211185135461128094033113489400010650535443467980480087105244946032023794949945274944335677612924255073670762965630552524;
	weights[49] 	= 1.805834539273350280098117714701745755112953267581487794166727739480200842175738604096867515046360547572e-13;

	nodes[50] 	= 5.2754416211185135461128094033113489400010650535443467980480087105244946032023794949945274944335677612924255073670762965630552524;
	weights[50] 	= 1.805834539273350280098117714701745755112953267581487794166727739480200842175738604096867515046360547572e-13;

	nodes[51] 	= -5.496488733006451930468324015471971817984626820549619080920978991024364401896306500091438651835029632031996578060553504220240247;
	weights[51] 	= 1.679335077284393820339039944645650592791232515648330975607499128820994333977301620847262423251792019601e-14;

	nodes[52] 	= 5.496488733006451930468324015471971817984626820549619080920978991024364401896306500091438651835029632031996578060553504220240247;
	weights[52] 	= 1.679335077284393820339039944645650592791232515648330975607499128820994333977301620847262423251792019601e-14;

	nodes[53] 	= -5.7188817726033576633847127822980380329223778260693672362377453586890306583326583080369627086030339027282974135379509189510608643;
	weights[53] 	= 1.39516431646470582376693952814250802013868452578116306925102482492999907135907321904112510760023500152e-15;

	nodes[54] 	= 5.7188817726033576633847127822980380329223778260693672362377453586890306583326583080369627086030339027282974135379509189510608643;
	weights[54] 	= 1.39516431646470582376693952814250802013868452578116306925102482492999907135907321904112510760023500152e-15;

	nodes[55] 	= -5.9427106672279626481348414819974323225778170929685374184749458560315822756940203501795004162363215122170904904662236129744977596;
	weights[55] 	= 1.03253896594711770214541045452088322265960260211809847186291973282938070914045374039033067756528341647e-16;

	nodes[56] 	= 5.9427106672279626481348414819974323225778170929685374184749458560315822756940203501795004162363215122170904904662236129744977596;
	weights[56] 	= 1.03253896594711770214541045452088322265960260211809847186291973282938070914045374039033067756528341647e-16;

	nodes[57] 	= -6.1680717068342965918869923797643717255208076512402839049897340417900088143000551986880312902994881712663465382708183093196742243;
	weights[57] 	= 6.7863601469507892216955989966299480695775680273358756799783681503785220618135521921050953313558119055e-18;

	nodes[58] 	= 6.1680717068342965918869923797643717255208076512402839049897340417900088143000551986880312902994881712663465382708183093196742243;
	weights[58] 	= 6.7863601469507892216955989966299480695775680273358756799783681503785220618135521921050953313558119055e-18;

	nodes[59] 	= -6.3950683261592987042308535351407524650393517041488280928872421129465128942213992489805480610302476538554779299311561298471217516;
	weights[59] 	= 3.9477817506225396273273544021528904397054826341102724600624117401555571969076278159537789429923365921e-19;

	nodes[60] 	= 6.3950683261592987042308535351407524650393517041488280928872421129465128942213992489805480610302476538554779299311561298471217516;
	weights[60] 	= 3.9477817506225396273273544021528904397054826341102724600624117401555571969076278159537789429923365921e-19;

	nodes[61] 	= -6.623812008713967261231616826724382752349399315061311672612035128915167753691177773669490395799678502292367892618054317132788566;
	weights[61] 	= 2.0251548550899479627259025017178114030410523963239517738178708460204177953687995145140338197773899843e-20;

	nodes[62] 	= 6.623812008713967261231616826724382752349399315061311672612035128915167753691177773669490395799678502292367892618054317132788566;
	weights[62] 	= 2.0251548550899479627259025017178114030410523963239517738178708460204177953687995145140338197773899843e-20;

	nodes[63] 	= -6.854423337280405225678779508952765512868542518642301456319547964284104790353172430527497794837537809720697411742279894841214364;
	weights[63] 	= 9.124442522191779544333927645076923057573572749951868131766943660236831351637332266655050661810591482e-22;

	nodes[64] 	= 6.854423337280405225678779508952765512868542518642301456319547964284104790353172430527497794837537809720697411742279894841214364;
	weights[64] 	= 9.124442522191779544333927645076923057573572749951868131766943660236831351637332266655050661810591482e-22;

	nodes[65] 	= -7.0870332216969064607319934183294190059971340743335812146909193323080800961745847109435807695363884464234638848285573057768893205;
	weights[65] 	= 3.594879502846101576744207938607521206896284176817607153737470385906713205916956670616097495863610575e-23;

	nodes[66] 	= 7.0870332216969064607319934183294190059971340743335812146909193323080800961745847109435807695363884464234638848285573057768893205;
	weights[66] 	= 3.594879502846101576744207938607521206896284176817607153737470385906713205916956670616097495863610575e-23;

	nodes[67] 	= -7.3217843426652627243814117780514594583488205440020210766841117393858384880046661694128155159090392898712970360278891387590513479;
	weights[67] 	= 1.232509962241507805514843804118274783387846289682465285288173563909181889764197681897878410318290059e-24;

	nodes[68] 	= 7.3217843426652627243814117780514594583488205440020210766841117393858384880046661694128155159090392898712970360278891387590513479;
	weights[68] 	= 1.232509962241507805514843804118274783387846289682465285288173563909181889764197681897878410318290059e-24;

	nodes[69] 	= -7.5588328607481423239709474908805194171656101662634619501423282816221817307817052440501070549510660563685495447042635190393335776;
	weights[69] 	= 3.6577061009128364730242776672651787326192114646736989685192851225254821392891173470779751062262478e-26;

	nodes[70] 	= 7.5588328607481423239709474908805194171656101662634619501423282816221817307817052440501070549510660563685495447042635190393335776;
	weights[70] 	= 3.6577061009128364730242776672651787326192114646736989685192851225254821392891173470779751062262478e-26;

	nodes[71] 	= -7.7983504535582931804649535599123069140868409792741495970099900020659201056857479540474028968140307859382191510715678366540217302;
	weights[71] 	= 9.34069975693535320099664389526139687554932205535719294675798047085449891363735517328968028159363064e-28;

	nodes[72] 	= 7.7983504535582931804649535599123069140868409792741495970099900020659201056857479540474028968140307859382191510715678366540217302;
	weights[72] 	= 9.34069975693535320099664389526139687554932205535719294675798047085449891363735517328968028159363064e-28;

	nodes[73] 	= -8.0405267626925537177893610610397834671711567388874372047875836396802097597716557353070678473086914733278003869515686326674325731;
	weights[73] 	= 2.03920977223300647715094647079887967275082072662896720075712400879931562284702808659365302584298677e-29;

	nodes[74] 	= 8.0405267626925537177893610610397834671711567388874372047875836396802097597716557353070678473086914733278003869515686326674325731;
	weights[74] 	= 2.03920977223300647715094647079887967275082072662896720075712400879931562284702808659365302584298677e-29;

	nodes[75] 	= -8.2855723571485271004388652239585496968548573065646651620258519768451828875559855599263144272112485574833379115237962270364163915;
	weights[75] 	= 3.77826123717750622931118989683625354491525324354046027012817301605715936092618675164702049176601779e-31;

	nodes[76] 	= 8.2855723571485271004388652239585496968548573065646651620258519768451828875559855599263144272112485574833379115237962270364163915;
	weights[76] 	= 3.77826123717750622931118989683625354491525324354046027012817301605715936092618675164702049176601779e-31;

	nodes[77] 	= -8.5337223546130907574083352126697198729905444281147896840443289700154108928770389163553198824023555422894585859766783261999802572;
	weights[77] 	= 5.89288914997088900525838643130752049641145370301556989742428169939478072406523507727832186446032253e-33;

	nodes[78] 	= 8.5337223546130907574083352126697198729905444281147896840443289700154108928770389163553198824023555422894585859766783261999802572;
	weights[78] 	= 5.89288914997088900525838643130752049641145370301556989742428169939478072406523507727832186446032253e-33;

	nodes[79] 	= -8.7852408903904538382236067933398502929881607975287432056805457123506253831250767012466799282094172660464132586635747430583692923;
	weights[79] 	= 7.6663204905840405959662766298981786611138049993201999305505042530723635603789043209127225262867639e-35;

	nodes[80] 	= 8.7852408903904538382236067933398502929881607975287432056805457123506253831250767012466799282094172660464132586635747430583692923;
	weights[80] 	= 7.6663204905840405959662766298981786611138049993201999305505042530723635603789043209127225262867639e-35;

	nodes[81] 	= -9.0404266923744707872696042046768885822034256943710932258025928279379420815509816228700106393106651824074048991061266716265438269;
	weights[81] 	= 8.2330481300631045157422570683618511621253091799086364365718317233660730567270920874507715798426667e-37;

	nodes[82] 	= 9.0404266923744707872696042046768885822034256943710932258025928279379420815509816228700106393106651824074048991061266716265438269;
	weights[82] 	= 8.2330481300631045157422570683618511621253091799086364365718317233660730567270920874507715798426667e-37;

	nodes[83] 	= -9.2996201195877478478109570515818590770085732759833621386266468383716019714146553372576548137847016495249882079219244122417346267;
	weights[83] 	= 7.21300381867007084902822399402947753339679232171230720102008117500383043384758923661231463544397189e-39;

	nodes[84] 	= 9.2996201195877478478109570515818590770085732759833621386266468383716019714146553372576548137847016495249882079219244122417346267;
	weights[84] 	= 7.21300381867007084902822399402947753339679232171230720102008117500383043384758923661231463544397189e-39;

	nodes[85] 	= -9.5632121677810003290083081930895525057915516546072461521022713664580228290634402310085566006305538929989581870025913847652874584;
	weights[85] 	= 5.08586139589585414564013844808486897817295508836411179468333923255793752041736545305632850039102445e-41;

	nodes[86] 	= 9.5632121677810003290083081930895525057915516546072461521022713664580228290634402310085566006305538929989581870025913847652874584;
	weights[86] 	= 5.08586139589585414564013844808486897817295508836411179468333923255793752041736545305632850039102445e-41;

	nodes[87] 	= -9.8316561653115199370903764392245906485790462017338383960498080466057487328282021368601088610456418003931479304407814947119741791;
	weights[87] 	= 2.84114087011584662426173418615876472573833671910157701604293600796231073494994076244148032064342763e-43;

	nodes[88] 	= 9.8316561653115199370903764392245906485790462017338383960498080466057487328282021368601088610456418003931479304407814947119741791;
	weights[88] 	= 2.84114087011584662426173418615876472573833671910157701604293600796231073494994076244148032064342763e-43;

	nodes[89] 	= -10.105483221483671904191226489665290054219548563815379454292488211545614506123795072022875269766241189988855005081031114784655749;
	weights[89] 	= 1.234647255507542796171870482019014461375429510510226588567833133510712997656509556308641848743362783e-45;

	nodes[90] 	= 10.105483221483671904191226489665290054219548563815379454292488211545614506123795072022875269766241189988855005081031114784655749;
	weights[90] 	= 1.234647255507542796171870482019014461375429510510226588567833133510712997656509556308641848743362783e-45;

	nodes[91] 	= -10.385323027156920944471416699872661771749921000905045151829224640967756979005951403313021101300377296896510075122156924511407756;
	weights[91] 	= 4.084281884840933255593453756929216792726598020820492244854313539738214248641509319099587199847948479e-48;

	nodes[92] 	= 10.385323027156920944471416699872661771749921000905045151829224640967756979005951403313021101300377296896510075122156924511407756;
	weights[92] 	= 4.084281884840933255593453756929216792726598020820492244854313539738214248641509319099587199847948479e-48;

	nodes[93] 	= -10.671932487544688882870545053390281679371026763892167371209674761787573554411378052004490530310600345155023113516115273847867428;
	weights[93] 	= 1.002225304436384729406888784962225534666182738223515771986503042702772122337025107674115506670976137e-50;

	nodes[94] 	= 10.671932487544688882870545053390281679371026763892167371209674761787573554411378052004490530310600345155023113516115273847867428;
	weights[94] 	= 1.002225304436384729406888784962225534666182738223515771986503042702772122337025107674115506670976137e-50;

	nodes[95] 	= -10.966236161382101093504307367960234818169066956219761506430674465314788756497627695713003414700813379151381850648750800393607106;
	weights[95] 	= 1.7677871947095609157772117763324566158817855443565991531829434850679159120916205462634549713002384065e-53;

	nodes[96] 	= 10.966236161382101093504307367960234818169066956219761506430674465314788756497627695713003414700813379151381850648750800393607106;
	weights[96] 	= 1.7677871947095609157772117763324566158817855443565991531829434850679159120916205462634549713002384065e-53;

	nodes[97] 	= -11.269385127541278088956890021196169691516635659241622003734317369608917398495465685237095726540781255962768244953643066389481696;
	weights[97] 	= 2.1557967924444388760820305553691467369862791702609431428279803205472355897397614998568974166688390114e-56;

	nodes[98] 	= 11.269385127541278088956890021196169691516635659241622003734317369608917398495465685237095726540781255962768244953643066389481696;
	weights[98] 	= 2.1557967924444388760820305553691467369862791702609431428279803205472355897397614998568974166688390114e-56;

	nodes[99] 	= -11.582845829838530403498108502272171217129464428653040855880070496727194721612403802006889859020323625417938605339877277064519743;
	weights[99] 	= 1.73030218403959849236993263898525905516370926593118900098360839337135195992999454574328146044864620997e-59;

	nodes[100] 	= 11.582845829838530403498108502272171217129464428653040855880070496727194721612403802006889859020323625417938605339877277064519743;
	weights[100] 	= 1.73030218403959849236993263898525905516370926593118900098360839337135195992999454574328146044864620997e-59;

	nodes[101] 	= -11.908540201639027457024638737994396146110353293990177479765318531437584671436366816563920634043717151532821179014141042902520092;
	weights[101] 	= 8.5740429722936514174833210768413174460364238184531209206944103865235866769732953571250922604792677826e-63;

	nodes[102] 	= 11.908540201639027457024638737994396146110353293990177479765318531437584671436366816563920634043717151532821179014141042902520092;
	weights[102] 	= 8.5740429722936514174833210768413174460364238184531209206944103865235866769732953571250922604792677826e-63;

	nodes[103] 	= -12.249079137323781903232350043313710250915147713416191912033641513879226077348267933997722685759363134043573741171671753434213017;
	weights[103] 	= 2.406598857427740634281239047175907773118950007906578216127060757251258432504361530041563022896412952447e-66;

	nodes[104] 	= 12.249079137323781903232350043313710250915147713416191912033641513879226077348267933997722685759363134043573741171671753434213017;
	weights[104] 	= 2.406598857427740634281239047175907773118950007906578216127060757251258432504361530041563022896412952447e-66;

	nodes[105] 	= -12.608179914177892506623590244504023581366916292364581209256205697190708539064534608669202988231048904803600030253558199137066394;
	weights[105] 	= 3.389241273309296095601531493134673925198648502692406798673634698248865330695230971161995062246693534027e-70;

	nodes[106] 	= 12.608179914177892506623590244504023581366916292364581209256205697190708539064534608669202988231048904803600030253558199137066394;
	weights[106] 	= 3.389241273309296095601531493134673925198648502692406798673634698248865330695230971161995062246693534027e-70;

	nodes[107] 	= -12.991486302387374729043993765021401589504475743153020197457147293778384687270243448218205143297813145724606739864978551329960226;
	weights[107] 	= 1.9966381452252323264936866870260021377680291552287312116421178305283585308779106266662880103749569498261e-74;

	nodes[108] 	= 12.991486302387374729043993765021401589504475743153020197457147293778384687270243448218205143297813145724606739864978551329960226;
	weights[108] 	= 1.9966381452252323264936866870260021377680291552287312116421178305283585308779106266662880103749569498261e-74;

	nodes[109] 	= -13.408410215509625674361694970842470100742447395279432543299238025028704852999326373020748015409087815180684694762673020243330819;
	weights[109] 	= 3.64939922590698538252944438767738124483467720603287462043659240838746212976671448033340806202197034339495e-79;

	nodes[110] 	= 13.408410215509625674361694970842470100742447395279432543299238025028704852999326373020748015409087815180684694762673020243330819;
	weights[110] 	= 3.64939922590698538252944438767738124483467720603287462043659240838746212976671448033340806202197034339495e-79;

	nodes[111] 	= -13.877221939887597493907215080073843336138651447855920418737884647119495155498161479692787803192148353818078966720286505072069839;
	weights[111] 	= 1.1712554562856965438775897580458013568296325426275947710890390086294677216747316839242593044123945234001317e-84;

	nodes[112] 	= 13.877221939887597493907215080073843336138651447855920418737884647119495155498161479692787803192148353818078966720286505072069839;
	weights[112] 	= 1.1712554562856965438775897580458013568296325426275947710890390086294677216747316839242593044123945234001317e-84;

	nodes[113] 	= -14.445762988361195856127046442177907286514150965454132513540205909136743472925800053849332650215574152325087163071168227131555612;
	weights[113] 	= 1.548044963424407223727843069330672102195406762508568895985310116553474552676389181358252816773197585103595388e-91;

	nodes[114] 	= 14.445762988361195856127046442177907286514150965454132513540205909136743472925800053849332650215574152325087163071168227131555612;
	weights[114] 	= 1.548044963424407223727843069330672102195406762508568895985310116553474552676389181358252816773197585103595388e-91;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_115_hpp__)*/