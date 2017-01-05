//
//        Gauss_Hermite_Nodes_and_Weights_64.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 64.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_64_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_64_hpp__

void Gauss_Hermite_Nodes_and_Weights_64(long double*& nodes, long double*& weights) {
	nodes	= new long double[64];
	weights	= new long double[64];

	nodes[0] 	= -0.13830224498700972411504976796667444455481481104831338123206048013682312268460711992129318227115101567988159336420079812612231964;
	weights[0] 	= 0.2713774249413039779456065084184279382122541010875964426329449363493599123063148329929999529412521657060691263979844042670014511;

	nodes[1] 	= 0.13830224498700972411504976796667444455481481104831338123206048013682312268460711992129318227115101567988159336420079812612231964;
	weights[1] 	= 0.2713774249413039779456065084184279382122541010875964426329449363493599123063148329929999529412521657060691263979844042670014511;

	nodes[2] 	= -0.41498882412107868457692912919968588305559851856427289499032200598459309692091610008888876454882121809415894571055568928375808352;
	weights[2] 	= 0.232994786062678046650566029332567507808060822611573512417314274166940319994203880265799633580902378087855451116235053533343468;

	nodes[3] 	= 0.41498882412107868457692912919968588305559851856427289499032200598459309692091610008888876454882121809415894571055568928375808352;
	weights[3] 	= 0.232994786062678046650566029332567507808060822611573512417314274166940319994203880265799633580902378087855451116235053533343468;

	nodes[4] 	= -0.691922305810044577268219287595594711729620658809960707562681266133436549593061568517918579171840193076998092526665483226760673;
	weights[4] 	= 0.1716858423490837020007279701237767502989153875556192701065197648542074268037312684903841418457566339484202109579175025179068;

	nodes[5] 	= 0.691922305810044577268219287595594711729620658809960707562681266133436549593061568517918579171840193076998092526665483226760673;
	weights[5] 	= 0.1716858423490837020007279701237767502989153875556192701065197648542074268037312684903841418457566339484202109579175025179068;

	nodes[6] 	= -0.96926942307117801674354148901910225938914566128939645097375778596689430690681177731250271172067727282201835446904695531369705363;
	weights[6] 	= 0.108498349306186840633025845506097262369936016955903154017096126666301743174986170741513201866545923502201572660288661837275;

	nodes[7] 	= 0.96926942307117801674354148901910225938914566128939645097375778596689430690681177731250271172067727282201835446904695531369705363;
	weights[7] 	= 0.108498349306186840633025845506097262369936016955903154017096126666301743174986170741513201866545923502201572660288661837275;

	nodes[8] 	= -1.2472001569431179406935645306935898068374511757335132032239338926764345265045062946901445918898979242585471311663588860660612213;
	weights[8] 	= 0.05873998196409943454968894625183171423886682179632199144902565539891558875156861704669816069268366099941838385568957078166;

	nodes[9] 	= 1.2472001569431179406935645306935898068374511757335132032239338926764345265045062946901445918898979242585471311663588860660612213;
	weights[9] 	= 0.05873998196409943454968894625183171423886682179632199144902565539891558875156861704669816069268366099941838385568957078166;

	nodes[10] 	= -1.5258891402098636629489701331515276563513168628578086663302326808469736538734983436909066277537409004671173753844276587783219487;
	weights[10] 	= 0.0272031289536889184538348212614931956779390099451712428233414957700478362340568234512037940718654386906428763028950590435;

	nodes[11] 	= 1.5258891402098636629489701331515276563513168628578086663302326808469736538734983436909066277537409004671173753844276587783219487;
	weights[11] 	= 0.0272031289536889184538348212614931956779390099451712428233414957700478362340568234512037940718654386906428763028950590435;

	nodes[12] 	= -1.805517171465544918903773574186889289703129196712183560978027791650258323841924345110082197572781337476475263294760042770707866;
	weights[12] 	= 0.0107560405098791370494651727866731332764279770788934385385733146622585585133851869176341678835563189655799409270773921787;

	nodes[13] 	= 1.805517171465544918903773574186889289703129196712183560978027791650258323841924345110082197572781337476475263294760042770707866;
	weights[13] 	= 0.0107560405098791370494651727866731332764279770788934385385733146622585585133851869176341678835563189655799409270773921787;

	nodes[14] 	= -2.0862728798817620208325633023632214533724391820684205523736508789575825676305701498482195273747289142460895014899548317708307457;
	weights[14] 	= 0.003622586978534458760668125371622651717966372712572145210749553307457536549710080023344939623107846123971925652628310783;

	nodes[15] 	= 2.0862728798817620208325633023632214533724391820684205523736508789575825676305701498482195273747289142460895014899548317708307457;
	weights[15] 	= 0.003622586978534458760668125371622651717966372712572145210749553307457536549710080023344939623107846123971925652628310783;

	nodes[16] 	= -2.3683545886324014041115112653415160436119288048807457111775379858777576630620979976019335800094143094837428675366883175415709608;
	weights[16] 	= 0.001036329099507577663456741746283101252555428705092192557641102416027473737788864039175378770322036482112444375055079702;

	nodes[17] 	= 2.3683545886324014041115112653415160436119288048807457111775379858777576630620979976019335800094143094837428675366883175415709608;
	weights[17] 	= 0.001036329099507577663456741746283101252555428705092192557641102416027473737788864039175378770322036482112444375055079702;

	nodes[18] 	= -2.6519724354306350110054577859984310164923063450509203731000402475512822872117960459265867028072352744739513374908877233450703546;
	weights[18] 	= 0.000250983698513062486082362017981909370567549328702400150246382532975861565376512541961227151516994066888942049144044257;

	nodes[19] 	= 2.6519724354306350110054577859984310164923063450509203731000402475512822872117960459265867028072352744739513374908877233450703546;
	weights[19] 	= 0.000250983698513062486082362017981909370567549328702400150246382532975861565376512541961227151516994066888942049144044257;

	nodes[20] 	= -2.9373508230046218096853390261913896420654119798003894053009208346058082921604071243694240936391628059783092698574441391120638046;
	weights[20] 	= 0.00005125929135786274660821911412739620816416778170862056520295388458981602418289448802837901425998872089434033949852601;

	nodes[21] 	= 2.9373508230046218096853390261913896420654119798003894053009208346058082921604071243694240936391628059783092698574441391120638046;
	weights[21] 	= 0.00005125929135786274660821911412739620816416778170862056520295388458981602418289448802837901425998872089434033949852601;

	nodes[22] 	= -3.2247312919920357258481711101884189679393046697503173004646846733731415707881932135670445622515565381685267522781246869119198312;
	weights[22] 	= 8.788499230850359181444047406704301190983310749485379625123757580658068060624868749235237486201411971658061026527945e-6;

	nodes[23] 	= 3.2247312919920357258481711101884189679393046697503173004646846733731415707881932135670445622515565381685267522781246869119198312;
	weights[23] 	= 8.788499230850359181444047406704301190983310749485379625123757580658068060624868749235237486201411971658061026527945e-6;

	nodes[24] 	= -3.5143759357409062115399505864743331646987482175099249567504770912824926987612995177324589618007903762707361614071821617505312168;
	weights[24] 	= 1.25834025103118457615784218001902754180740390116999386330541026897637863310699195771169686671975129689867524664676e-6;

	nodes[25] 	= 3.5143759357409062115399505864743331646987482175099249567504770912824926987612995177324589618007903762707361614071821617505312168;
	weights[25] 	= 1.25834025103118457615784218001902754180740390116999386330541026897637863310699195771169686671975129689867524664676e-6;

	nodes[26] 	= -3.8065715139453604611659720004602252039313608246303889076619385473884651886366163345400768794222511812164491545168811299111854986;
	weights[26] 	= 1.49553293672724706110246169293481688572757248458915775865669058641455950178781371854804417397652099490675276385965e-7;

	nodes[27] 	= 3.8065715139453604611659720004602252039313608246303889076619385473884651886366163345400768794222511812164491545168811299111854986;
	weights[27] 	= 1.49553293672724706110246169293481688572757248458915775865669058641455950178781371854804417397652099490675276385965e-7;

	nodes[28] 	= -4.1016344745666567149709812384555224206609688686957820270253541354168580314001952244857675509234895799938129385417674585909174704;
	weights[28] 	= 1.46512531647610935492662200380400387187564986162970647765874765839614969579435759747628514189336854190834558380231e-8;

	nodes[29] 	= 4.1016344745666567149709812384555224206609688686957820270253541354168580314001952244857675509234895799938129385417674585909174704;
	weights[29] 	= 1.46512531647610935492662200380400387187564986162970647765874765839614969579435759747628514189336854190834558380231e-8;

	nodes[30] 	= -4.3999171682281376477679325354389228610152471796044409342270258715698225612461359302314895844371907438465893440195840862941652998;
	weights[30] 	= 1.1736167423215493435425064670822000924785481731147942171374824830413134362502781859058253360364125923848897792641e-9;

	nodes[31] 	= 4.3999171682281376477679325354389228610152471796044409342270258715698225612461359302314895844371907438465893440195840862941652998;
	weights[31] 	= 1.1736167423215493435425064670822000924785481731147942171374824830413134362502781859058253360364125923848897792641e-9;

	nodes[32] 	= -4.7018156474074998160975380158128215313286010791828036976361117998787726242929222411424604139941430351776934354562779053554834479;
	weights[32] 	= 7.615217250145451353315295675319371478871469377451132075926660845507177730195263464480558151607871262960608706017e-11;

	nodes[33] 	= 4.7018156474074998160975380158128215313286010791828036976361117998787726242929222411424604139941430351776934354562779053554834479;
	weights[33] 	= 7.615217250145451353315295675319371478871469377451132075926660845507177730195263464480558151607871262960608706017e-11;

	nodes[34] 	= -5.0077796021987681964437026271841356957845644844599433898310037874378303797354854494433086687188654527296868770511670367712721507;
	weights[34] 	= 3.959177766947723927236445864254583932539721364523152275126606628676335071836859294920700950202115387056954192244e-12;

	nodes[35] 	= 5.0077796021987681964437026271841356957845644844599433898310037874378303797354854494433086687188654527296868770511670367712721507;
	weights[35] 	= 3.959177766947723927236445864254583932539721364523152275126606628676335071836859294920700950202115387056954192244e-12;

	nodes[36] 	= -5.3183252246332708573236495151993783241148066551625122148384134280677331100737430331697014785094542033367031950906664641390192708;
	weights[36] 	= 1.62834073070972036208430708124089349170164531997507700099093819388495734755775671688924444083250609100297531031e-13;

	nodes[37] 	= 5.3183252246332708573236495151993783241148066551625122148384134280677331100737430331697014785094542033367031950906664641390192708;
	weights[37] 	= 1.62834073070972036208430708124089349170164531997507700099093819388495734755775671688924444083250609100297531031e-13;

	nodes[38] 	= -5.6340521643499721472499204833071537673891950301280560955271527579376613496503111851922688291049277528424159838169427025184590863;
	weights[38] 	= 5.21862372659084752295780851305258807416159880992546733888038067091043206148005891271453906943150310757072888273e-15;

	nodes[39] 	= 5.6340521643499721472499204833071537673891950301280560955271527579376613496503111851922688291049277528424159838169427025184590863;
	weights[39] 	= 5.21862372659084752295780851305258807416159880992546733888038067091043206148005891271453906943150310757072888273e-15;

	nodes[40] 	= -5.9556663267994860453445671809843656158082939114022773294288086190135373123863725665373506836727616222597775832176651257343159683;
	weights[40] 	= 1.280093391322438041639563295263370566734984257937557623013402114936149163359667456499426964296633349324171720315e-16;

	nodes[41] 	= 5.9556663267994860453445671809843656158082939114022773294288086190135373123863725665373506836727616222597775832176651257343159683;
	weights[41] 	= 1.280093391322438041639563295263370566734984257937557623013402114936149163359667456499426964296633349324171720315e-16;

	nodes[42] 	= -6.2840112287748282354180931950702427998735244817439090962218303671915863447645179546463665497509896269210171149930529964817113963;
	weights[42] 	= 2.35188471067581911695767591555844482509896766645046994259781954109474414647945682074010549881604335988686158537e-18;

	nodes[43] 	= 6.2840112287748282354180931950702427998735244817439090962218303671915863447645179546463665497509896269210171149930529964817113963;
	weights[43] 	= 2.35188471067581911695767591555844482509896766645046994259781954109474414647945682074010549881604335988686158537e-18;

	nodes[44] 	= -6.6201122626360273790366601089379139608514375972545412633276016826005691351440700866319579428369892013436742952433180930836612235;
	weights[44] 	= 3.1522545665037814161213466834102295338118228443158196853005429423190458845242735372921085324399287947189378189e-20;

	nodes[45] 	= 6.6201122626360273790366601089379139608514375972545412633276016826005691351440700866319579428369892013436742952433180930836612235;
	weights[45] 	= 3.1522545665037814161213466834102295338118228443158196853005429423190458845242735372921085324399287947189378189e-20;

	nodes[46] 	= -6.9652411205511075292426421934926880747470061271534684733348415504953211057667413919854965970996944539173572501830227913172389936;
	weights[46] 	= 2.98286278427985115447870070201603480180608786903527209499291090774832980286983881015924536422554620153685351739e-22;

	nodes[47] 	= 6.9652411205511075292426421934926880747470061271534684733348415504953211057667413919854965970996944539173572501830227913172389936;
	weights[47] 	= 2.98286278427985115447870070201603480180608786903527209499291090774832980286983881015924536422554620153685351739e-22;

	nodes[48] 	= -7.3210130327809492011895693637194765681329442103017710743224646581208737166580688465854003840055754411742646021561200619133602135;
	weights[48] 	= 1.911706883300642829958456965534449114723603896359222188515313195804285427298046316381651927763959631937181077466e-24;

	nodes[49] 	= 7.3210130327809492011895693637194765681329442103017710743224646581208737166580688465854003840055754411742646021561200619133602135;
	weights[49] 	= 1.911706883300642829958456965534449114723603896359222188515313195804285427298046316381651927763959631937181077466e-24;

	nodes[50] 	= -7.6895401640404968284478042298694903963799008977225220949124188537304268298346181713835636405625217516126784113966127363856408071;
	weights[50] 	= 7.86179778892591036909999149627881243623026068940278906734136164488497511273568500636399081490214203655915503087e-27;

	nodes[51] 	= 7.6895401640404968284478042298694903963799008977225220949124188537304268298346181713835636405625217516126784113966127363856408071;
	weights[51] 	= 7.86179778892591036909999149627881243623026068940278906734136164488497511273568500636399081490214203655915503087e-27;

	nodes[52] 	= -8.0736872850102252258587911407581443281719733158127611555372830638730413318606215372866860917592277571799754645606578224407298979;
	weights[52] 	= 1.929103595464966850301968779067068785108114103234812850234666919838769845127309060071219072308159260695249084254e-29;

	nodes[53] 	= 8.0736872850102252258587911407581443281719733158127611555372830638730413318606215372866860917592277571799754645606578224407298979;
	weights[53] 	= 1.929103595464966850301968779067068785108114103234812850234666919838769845127309060071219072308159260695249084254e-29;

	nodes[54] 	= -8.4775290833798630905641663448219157516284451025326782188392768823839580420724698690350753472163792877542784384555998546896668826;
	weights[54] 	= 2.549660899112999256604766580440964492261762135138689804021303124839094627198669896249853156607164594809887208459e-32;

	nodes[55] 	= 8.4775290833798630905641663448219157516284451025326782188392768823839580420724698690350753472163792877542784384555998546896668826;
	weights[55] 	= 2.549660899112999256604766580440964492261762135138689804021303124839094627198669896249853156607164594809887208459e-32;

	nodes[56] 	= -8.9072490999647697572959728856429432728916088910697712238570871578725005702015578752544378464542184580937262653957513103992997893;
	weights[56] 	= 1.5573906246297638023093353802648183910987987747305544188128262152188765683049415504055153732453200876668008546487e-35;

	nodes[57] 	= 8.9072490999647697572959728856429432728916088910697712238570871578725005702015578752544378464542184580937262653957513103992997893;
	weights[57] 	= 1.5573906246297638023093353802648183910987987747305544188128262152188765683049415504055153732453200876668008546487e-35;

	nodes[58] 	= -9.3731595496467211625456524397238622174462195154256385023460160416484596898134850275962631410057735393103903704613482084801281403;
	weights[58] 	= 3.42113801125574050432722182814574086808747240868656736774774583846217516142344847469462255919632618730408498803207e-39;

	nodes[59] 	= 9.3731595496467211625456524397238622174462195154256385023460160416484596898134850275962631410057735393103903704613482084801281403;
	weights[59] 	= 3.42113801125574050432722182814574086808747240868656736774774583846217516142344847469462255919632618730408498803207e-39;

	nodes[60] 	= -9.8952875868295390212044614771596076444283593774830387062732372420752303299022498686976748959626996767591484546590241670019928277;
	weights[60] 	= 1.679747990108159218666288330629855623503888802600013500992363984809958001475590662369065624745287419515917325467341e-43;

	nodes[61] 	= 9.8952875868295390212044614771596076444283593774830387062732372420752303299022498686976748959626996767591484546590241670019928277;
	weights[61] 	= 1.679747990108159218666288330629855623503888802600013500992363984809958001475590662369065624745287419515917325467341e-43;

	nodes[62] 	= -10.526123167960545883326826283815281038555957637935126491657549680799132577915733079556307779140827930116299477621480445717438742;
	weights[62] 	= 5.5357065358569428205754633009871293051151768059726479924688530652908987477850040524524092361666236824080830919572974e-49;

	nodes[63] 	= 10.526123167960545883326826283815281038555957637935126491657549680799132577915733079556307779140827930116299477621480445717438742;
	weights[63] 	= 5.5357065358569428205754633009871293051151768059726479924688530652908987477850040524524092361666236824080830919572974e-49;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_64_hpp__)*/