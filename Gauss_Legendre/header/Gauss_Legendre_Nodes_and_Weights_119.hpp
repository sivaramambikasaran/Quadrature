//
//        Gauss_Legendre_Nodes_and_Weights_119.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 119.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_119_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_119_hpp__

void Gauss_Legendre_Nodes_and_Weights_119(long double*& nodes, long double*& weights) {
	nodes	= new long double[119];
	weights	= new long double[119];

	nodes[0] 	= 0;
	weights[0] 	= 0.026289248162839066962595712603904190791998421682757156333793634720474153999033774684543084941187261035177426770128060457784879874;

	nodes[1] 	= -0.026286220023594429423722912718926431030345266709771819627820397986496924595802813080694416136084977904910348846648438727867928629;
	weights[1] 	= 0.026280163954391310402943803008541838758941389761985353851737669327951099637779399747825473580328145297153911505564615928549173;

	nodes[2] 	= 0.026286220023594429423722912718926431030345266709771819627820397986496924595802813080694416136084977904910348846648438727867928629;
	weights[2] 	= 0.026280163954391310402943803008541838758941389761985353851737669327951099637779399747825473580328145297153911505564615928549173;

	nodes[3] 	= -0.052554273723030927705192162587531819104443037504619921021591720241108248881651583079938369008336386722517028503479394829575311614;
	weights[3] 	= 0.026252917607116149724159970165534659494469987137981011713836500201371149633331479782451270037477678677066415917807481856519691;

	nodes[4] 	= 0.052554273723030927705192162587531819104443037504619921021591720241108248881651583079938369008336386722517028503479394829575311614;
	weights[4] 	= 0.026252917607116149724159970165534659494469987137981011713836500201371149633331479782451270037477678677066415917807481856519691;

	nodes[5] 	= -0.07878600732884149807552550253859090709761649237513443351039985632458127296679776501902192988137335439086647913188017557319748443;
	weights[5] 	= 0.0262075279508791610058383783854613210607705801999002245553210101958465687858072376379207357911115066762025357285098490943126;

	nodes[6] 	= 0.07878600732884149807552550253859090709761649237513443351039985632458127296679776501902192988137335439086647913188017557319748443;
	weights[6] 	= 0.0262075279508791610058383783854613210607705801999002245553210101958465687858072376379207357911115066762025357285098490943126;

	nodes[7] 	= -0.10496329217226151021154027970651609216344696016621938342377903687560639235510005376336150709349115733578821737072459765374059844;
	weights[7] 	= 0.02614402635433013319761714547403864838645852776531740403740886611385942385490028962089026467003908059476503798685518684836;

	nodes[8] 	= 0.10496329217226151021154027970651609216344696016621938342377903687560639235510005376336150709349115733578821737072459765374059844;
	weights[8] 	= 0.02614402635433013319761714547403864838645852776531740403740886611385942385490028962089026467003908059476503798685518684836;

	nodes[9] 	= -0.13106803721389612412267981301564768576481311335764775502308372712933785977975840671641351406372079124425586757169266563431211478;
	weights[9] 	= 0.0260624567032243042112897126077872695495817971789905668276782870123402320042912641064596404743841634792059172031365322313;

	nodes[10] 	= 0.13106803721389612412267981301564768576481311335764775502308372712933785977975840671641351406372079124425586757169266563431211478;
	weights[10] 	= 0.0260624567032243042112897126077872695495817971789905668276782870123402320042912641064596404743841634792059172031365322313;

	nodes[11] 	= -0.15708220154638118866163656101277298654949560262745470216215158078730345128666987676082254360588899238316033988633096826585053233;
	weights[11] 	= 0.025962875370093069731813092619073439425271307609842901678884000949755777108457798402266770680937798706384565933683729311;

	nodes[12] 	= 0.15708220154638118866163656101277298654949560262745470216215158078730345128666987676082254360588899238316033988633096826585053233;
	weights[12] 	= 0.025962875370093069731813092619073439425271307609842901678884000949755777108457798402266770680937798706384565933683729311;

	nodes[13] 	= -0.18298780686239807016125271798246911220703759441722636895984334717634648380313453487813091698817811631001028608934535329688391908;
	weights[13] 	= 0.0258453511752851256487124987702789297327184905315702849167050597032870623633586163073968585682778181512642753671552016;

	nodes[14] 	= 0.18298780686239807016125271798246911220703759441722636895984334717634648380313453487813091698817811631001028608934535329688391908;
	weights[14] 	= 0.0258453511752851256487124987702789297327184905315702849167050597032870623633586163073968585682778181512642753671552016;

	nodes[15] 	= -0.20876694987942581098636902943042436772169668127578327860015877690693823073181373648650765270497955509099940890670605358317736707;
	weights[15] 	= 0.025709965339404969023555306347961799076268732489242378699109736432964368490619167739172008395763143302411794429747878;

	nodes[16] 	= 0.20876694987942581098636902943042436772169668127578327860015877690693823073181373648650765270497955509099940890670605358317736707;
	weights[16] 	= 0.025709965339404969023555306347961799076268732489242378699109736432964368490619167739172008395763143302411794429747878;

	nodes[17] 	= -0.23440181471264391713918696932476747107349191572253666775762733440549559314086369131437466459893987289851967853859490150786747941;
	weights[17] 	= 0.02555681142718162793772424329824317486262580549705071766930404483962706051702817062222892326300904887926752805778086;

	nodes[18] 	= 0.23440181471264391713918696932476747107349191572253666775762733440549559314086369131437466459893987289851967853859490150786747941;
	weights[18] 	= 0.02555681142718162793772424329824317486262580549705071766930404483962706051702817062222892326300904887926752805778086;

	nodes[19] 	= -0.25987468518743490783265796225580083777518253533745336889622661150856700512691304174219376453763793635053553497158563965509416076;
	weights[19] 	= 0.025385995282806413306002304894823868766645377472142492233980775639534608357763226313243005417234496964178874841051;

	nodes[20] 	= 0.25987468518743490783265796225580083777518253533745336889622661150856700512691304174219376453763793635053553497158563965509416076;
	weights[20] 	= 0.025385995282806413306002304894823868766645377472142492233980775639534608357763226313243005417234496964178874841051;

	nodes[21] 	= -0.28516795708297750341738398734710547572199669014757980050137355280106114205361374687650838668644683034619314031040824959053055773;
	weights[21] 	= 0.02519763495678438171113568723569338246783319351888161001623062903931906427855575357656682928558528714061608408771;

	nodes[22] 	= 0.28516795708297750341738398734710547572199669014757980050137355280106114205361374687650838668644683034619314031040824959053055773;
	weights[22] 	= 0.02519763495678438171113568723569338246783319351888161001623062903931906427855575357656682928558528714061608408771;

	nodes[23] 	= -0.31026415029846895240817128334831697674910905925695056126398959357204876075372352179635606669230378630092293410312768858380620588;
	weights[23] 	= 0.0249918606243500634488869896843058311704797505300716499889232769842027798892765087882531744183860025808447640443;

	nodes[24] 	= 0.31026415029846895240817128334831697674910905925695056126398959357204876075372352179635606669230378630092293410312768858380620588;
	weights[24] 	= 0.0249918606243500634488869896843058311704797505300716499889232769842027798892765087882531744183860025808447640443;

	nodes[25] 	= -0.33514592093356847074950676949347917237442823686218761842373622047066771380254238321502788082045833141883421541288116571538589271;
	weights[25] 	= 0.024768814495503840232649226102184306362653736828918001834086085466077415015637403790641615407268445767882723574;

	nodes[26] 	= 0.33514592093356847074950676949347917237442823686218761842373622047066771380254238321502788082045833141883421541288116571538589271;
	weights[26] 	= 0.024768814495503840232649226102184306362653736828918001834086085466077415015637403790641615407268445767882723574;

	nodes[27] 	= -0.35979607327471305000177436497780983786422835797887862169752814159646321132805681581068501559878937111599977252222971133314782212;
	weights[27] 	= 0.0245286507167311483799164978097673923906406942457352811760771973026904217509465740565983484381922131773525857;

	nodes[28] 	= 0.35979607327471305000177436497780983786422835797887862169752814159646321132805681581068501559878937111599977252222971133314782212;
	weights[28] 	= 0.0245286507167311483799164978097673923906406942457352811760771973026904217509465740565983484381922131773525857;

	nodes[29] 	= -0.38419757167902194494303074578136247257977768834198207346462089980221001587010649343390246517730934917659459423485743783265916896;
	weights[29] 	= 0.024271535264472431810218388966907953016847667247040642642505047066217068045824231717607374417805111490887357;

	nodes[30] 	= 0.38419757167902194494303074578136247257977768834198207346462089980221001587010649343390246517730934917659459423485743783265916896;
	weights[30] 	= 0.024271535264472431810218388966907953016847667247040642642505047066217068045824231717607374417805111490887357;

	nodes[31] 	= -0.40833355234757693032388237825850444844378343061066810668462454260181124073518240691478393633640015575293072872317821663728530848;
	weights[31] 	= 0.02399764583041747088234543553258290868759717045286379548999125994723659717811994198824852139832803865763789;

	nodes[32] 	= 0.40833355234757693032388237825850444844378343061066810668462454260181124073518240691478393633640015575293072872317821663728530848;
	weights[32] 	= 0.02399764583041747088234543553258290868759717045286379548999125994723659717811994198824852139832803865763789;

	nodes[33] 	= -0.4321873349799418724217982684444328747630993961360056078419256671274870640959770665627783222979234133405980379960159942068626996;
	weights[33] 	= 0.023707171698703364086064106655290897145036694384234335910335202734555029374671458377462219761408321796062;

	nodes[34] 	= 0.4321873349799418724217982684444328747630993961360056078419256671274870640959770665627783222979234133405980379960159942068626996;
	weights[34] 	= 0.023707171698703364086064106655290897145036694384234335910335202734555029374671458377462219761408321796062;

	nodes[35] 	= -0.45574243430186724097374088060921501249429618365836249625496371250420772309321938083995567712162888666019112486675738018977792689;
	weights[35] 	= 0.023400313615101036025522334434211242750350814727904175621904377726031363918739553191936470587406803797978;

	nodes[36] 	= 0.45574243430186724097374088060921501249429618365836249625496371250420772309321938083995567712162888666019112486675738018977792689;
	weights[36] 	= 0.023400313615101036025522334434211242750350814727904175621904377726031363918739553191936470587406803797978;

	nodes[37] 	= -0.47898257145821283455192717882744492136439920922681848470754181178674643773615768537734105153298228705819969668725655428379108764;
	weights[37] 	= 0.0230772836482806831878589730979110807408762654189331241505010017032243555343167016859043403880208844888;

	nodes[38] 	= 0.47898257145821283455192717882744492136439920922681848470754181178674643773615768537734105153298228705819969668725655428379108764;
	weights[38] 	= 0.0230772836482806831878589730979110807408762654189331241505010017032243555343167016859043403880208844888;

	nodes[39] 	= -0.50189168526321514724673482382721956363030791627408615804766989884977847570027523958266878516485104387536291236951767038956503663;
	weights[39] 	= 0.022738305043252044943602610700144916864095928656993356170031867097372770131686493695848326425267618537;

	nodes[40] 	= 0.50189168526321514724673482382721956363030791627408615804766989884977847570027523958266878516485104387536291236951767038956503663;
	weights[40] 	= 0.022738305043252044943602610700144916864095928656993356170031867097372770131686493695848326425267618537;

	nodes[41] 	= -0.52445394330032440269138766389755442866575816206281600430504216687028585389574664520987121578500279103313627534769075378472068008;
	weights[41] 	= 0.02238361206708079741138114561922260476674535364507424002104649902152640545537855589154401108520669429;

	nodes[42] 	= 0.52445394330032440269138766389755442866575816206281600430504216687028585389574664520987121578500279103313627534769075378472068008;
	weights[42] 	= 0.02238361206708079741138114561922260476674535364507424002104649902152640545537855589154401108520669429;

	nodes[43] 	= -0.54665375286394025544190876680872591467385504189611726140923459489764682911482195328258046584201695181898675601084014068738537657;
	weights[43] 	= 0.0220134498469877086622260130916137509094262364671414598437198730378302712341271877753058668144557826;

	nodes[44] 	= 0.54665375286394025544190876680872591467385504189611726140923459489764682911482195328258046584201695181898675601084014068738537657;
	weights[44] 	= 0.0220134498469877086622260130916137509094262364671414598437198730378302712341271877753058668144557826;

	nodes[45] 	= -0.56847577173548443842530144269438821152993640071179337272788730106386757548651821210993168987685879185960779535021148734898380932;
	weights[45] 	= 0.021628074200942461769184055121997616004084087269964088375937706872532765330218678361848096173637395;

	nodes[46] 	= 0.56847577173548443842530144269438821152993640071179337272788730106386757548651821210993168987685879185960779535021148734898380932;
	weights[46] 	= 0.021628074200942461769184055121997616004084087269964088375937706872532765330218678361848096173637395;

	nodes[47] 	= -0.58990491878636314409615790769504931778491116683488946709889598844315628649143387627847576731349216824015408240271938008459741;
	weights[47] 	= 0.021227751460869244089821400260471428978729714520613401337418679507459464961521379693132784800869963;

	nodes[48] 	= 0.58990491878636314409615790769504931778491116683488946709889598844315628649143387627847576731349216824015408240271938008459741;
	weights[48] 	= 0.021227751460869244089821400260471428978729714520613401337418679507459464961521379693132784800869963;

	nodes[49] 	= -0.61092638440049158834892617061852525717137683338210429599976194245265846142891225874181899494600700625797390748354488850352294136;
	weights[49] 	= 0.02081275828858631373566481729022839226560897895190753727586967335413538437022748659194626127641272;

	nodes[50] 	= 0.61092638440049158834892617061852525717137683338210429599976194245265846142891225874181899494600700625797390748354488850352294136;
	weights[50] 	= 0.02081275828858631373566481729022839226560897895190753727586967335413538437022748659194626127641272;

	nodes[51] 	= -0.63152564070917793931054218753670538731754288763539648467320348263397506789244029292976993510603259326933482074032511028439841774;
	weights[51] 	= 0.0203833814846067844880790959949069094237481987248657688742762017050292325923722252441341138867872;

	nodes[52] 	= 0.63152564070917793931054218753670538731754288763539648467320348263397506789244029292976993510603259326933482074032511028439841774;
	weights[52] 	= 0.0203833814846067844880790959949069094237481987248657688742762017050292325923722252441341138867872;

	nodes[53] 	= -0.65168845163129351427178885699385382394780553014271469145978425075868401101308426798257981311109589787878731264275616566717840176;
	weights[53] 	= 0.01993991778993281581528286231409318470379349643344938390215162876198424775186614357310214858113;

	nodes[54] 	= 0.65168845163129351427178885699385382394780553014271469145978425075868401101308426798257981311109589787878731264275616566717840176;
	weights[54] 	= 0.01993991778993281581528286231409318470379349643344938390215162876198424775186614357310214858113;

	nodes[55] 	= -0.6714008827117907711343334882172472075102244616080222915909205762858293125365514540162728689717751747931824977391586619246523864;
	weights[55] 	= 0.01948267368098025288764756400490670246562446932097175243613552907974322637956995611565187981225;

	nodes[56] 	= 0.6714008827117907711343334882172472075102244616080222915909205762858293125365514540162728689717751747931824977391586619246523864;
	weights[56] 	= 0.01948267368098025288764756400490670246562446932097175243613552907974322637956995611565187981225;

	nodes[57] 	= -0.69064931075177005780915515315656451998411804957539008891645784163487013248146783535458630480298814053070525398984253577267031135;
	weights[57] 	= 0.0190119651577755309068745713052476396321471743957436923955991802351824561334866564562962284541;

	nodes[58] 	= 0.69064931075177005780915515315656451998411804957539008891645784163487013248146783535458630480298814053070525398984253577267031135;
	weights[58] 	= 0.0190119651577755309068745713052476396321471743957436923955991802351824561334866564562962284541;

	nodes[59] 	= -0.70942043322344024466970160151849882810364656186935071686471520195424929780293000710101775669520791579685525704352790728683814095;
	weights[59] 	= 0.018528117525571337807927346807029256581597931385440813277092456131134189252132779849457069888;

	nodes[60] 	= 0.70942043322344024466970160151849882810364656186935071686471520195424929780293000710101775669520791579685525704352790728683814095;
	weights[60] 	= 0.018528117525571337807927346807029256581597931385440813277092456131134189252132779849457069888;

	nodes[61] 	= -0.72770127746346716181875903173248036355407028215270117887953638463247484452442043748244144604411360264841630894402966199821925324;
	weights[61] 	= 0.018031465170032119810932788390353685781961901783990457834185792046657156864432319055915131362;

	nodes[62] 	= 0.72770127746346716181875903173248036355407028215270117887953638463247484452442043748244144604411360264841630894402966199821925324;
	weights[62] 	= 0.018031465170032119810932788390353685781961901783990457834185792046657156864432319055915131362;

	nodes[63] 	= -0.7454792096383571061370287044681941915111597594685665729432869700379840396504294734995029418597461034049134191916641818064591898;
	weights[63] 	= 0.01752235132614501753811636061631781301322397639111489072101915571528340066947347141041172201;

	nodes[64] 	= 0.7454792096383571061370287044681941915111597594685665729432869700379840396504294734995029418597461034049134191916641818064591898;
	weights[64] 	= 0.01752235132614501753811636061631781301322397639111489072101915571528340066947347141041172201;

	nodes[65] 	= -0.7627419434756804878211691929883555093728637523521685281193390326032525097483622797634242846423334636264540400671766487302797026;
	weights[65] 	= 0.0170011278410162413419442281876728546471550760829587203153189185863426138035846007325103857;

	nodes[66] 	= 0.7627419434756804878211691929883555093728637523521685281193390326032525097483622797634242846423334636264540400671766487302797026;
	weights[66] 	= 0.0170011278410162413419442281876728546471550760829587203153189185863426138035846007325103857;

	nodes[67] 	= -0.77947754875510287419747394618433083029168433841746007471860602050336093707262179315283920807513128935733023782441641066097276117;
	weights[67] 	= 0.0164681549307172422152833277065973388005027845466323201425163435951376327611666819223932025;

	nodes[68] 	= 0.77947754875510287419747394618433083029168433841746007471860602050336093707262179315283920807513128935733023782441641066097276117;
	weights[68] 	= 0.0164681549307172422152833277065973388005027845466323201425163435951376327611666819223932025;

	nodes[69] 	= -0.7956744595533571939972809394379589012535578291662898287552485865022558774442486547346565055253517072698307741381697508961609712;
	weights[69] 	= 0.015923800931349324935180342569621696080789926397981474265052473752501088198775261292355532;

	nodes[70] 	= 0.7956744595533571939972809394379589012535578291662898287552485865022558774442486547346565055253517072698307741381697508961609712;
	weights[70] 	= 0.015923800931349324935180342569621696080789926397981474265052473752501088198775261292355532;

	nodes[71] 	= -0.81132148223746164266576127887644476682787275936287962201354390796719481476676859920910065385036988319723527237570551751954312868;
	weights[71] 	= 0.01536844204449960938387217845328709176357719332002287786220467614706744270308564750033915;

	nodes[72] 	= 0.81132148223746164266576127887644476682787275936287962201354390796719481476676859920910065385036988319723527237570551751954312868;
	weights[72] 	= 0.01536844204449960938387217845328709176357719332002287786220467614706744270308564750033915;

	nodes[73] 	= -0.82640780320066286778039423801332613859273580991833855358714765248775122133095494063505535105079250604817069920321535131694287176;
	weights[73] 	= 0.0148024620772655182300193247183728299533642491874484108675845697715826232823023853423482;

	nodes[74] 	= 0.82640780320066286778039423801332613859273580991833855358714765248775122133095494063505535105079250604817069920321535131694287176;
	weights[74] 	= 0.0148024620772655182300193247183728299533642491874484108675845697715826232823023853423482;

	nodes[75] 	= -0.84092299633576335966005172258529646142653435401743865520707795930042352458648639696789938550032026024238407126738021553009336116;
	weights[75] 	= 0.0142262521770293274145372382388056130601564594924625259018306438403097016350841860748688;

	nodes[76] 	= 0.84092299633576335966005172258529646142653435401743865520707795930042352458648639696789938550032026024238407126738021553009336116;
	weights[76] 	= 0.0142262521770293274145372382388056130601564594924625259018306438403097016350841860748688;

	nodes[77] 	= -0.85485703024067576776694776381674307954602484711136843395269961009342108919651988538126136087315279137044545490020008486189794622;
	weights[77] 	= 0.0136402105611688828184622181036193882715958760319019074810438045870760339233735221800278;

	nodes[78] 	= 0.85485703024067576776694776381674307954602484711136843395269961009342108919651988538126136087315279137044545490020008486189794622;
	weights[78] 	= 0.0136402105611688828184622181036193882715958760319019074810438045870760339233735221800278;

	nodes[79] 	= -0.86820027515123541228255462342466380571307435859145965698352188600171306696382560016219112207375354762389002473857025027216422906;
	weights[79] 	= 0.013044742241895570956299628001860791523881146903699114998331708482646029795346001523425;

	nodes[80] 	= 0.86820027515123541228255462342466380571307435859145965698352188600171306696382560016219112207375354762389002473857025027216422906;
	weights[80] 	= 0.013044742241895570956299628001860791523881146903699114998331708482646029795346001523425;

	nodes[81] 	= -0.88094350959649614414157970962164998790807841687548697972324537074261627521388898330743219178563229183248804496312248043432280451;
	weights[81] 	= 0.012440258746416395898360642477348362029333799850370897206444073527366028671333233720954;

	nodes[82] 	= 0.88094350959649614414157970962164998790807841687548697972324537074261627521388898330743219178563229183248804496312248043432280451;
	weights[82] 	= 0.012440258746416395898360642477348362029333799850370897206444073527366028671333233720954;

	nodes[83] 	= -0.89307792677193499597279040888075566060457394385089124799254803085999009147907280142685672765750463912078925249193075568112873398;
	weights[83] 	= 0.011827177832624201625209942067671361019842501121652558789137864650995359428570386318053;

	nodes[84] 	= 0.89307792677193499597279040888075566060457394385089124799254803085999009147907280142685672765750463912078925249193075568112873398;
	weights[84] 	= 0.011827177832624201625209942067671361019842501121652558789137864650995359428570386318053;

	nodes[85] 	= -0.90459514062619970894882644814442414665623632315792067880409938211866305822497282415385813652666326139505737586224890442185703285;
	weights[85] 	= 0.01120592320052985804266429396408832958895937931462741443074687086248258738475211527176;

	nodes[86] 	= 0.90459514062619970894882644814442414665623632315792067880409938211866305822497282415385813652666326139505737586224890442185703285;
	weights[86] 	= 0.01120592320052985804266429396408832958895937931462741443074687086248258738475211527176;

	nodes[87] 	= -0.91548719165725378693293444490358431221286520154382031732585474038042559293978368680588394897762693612830010044192589455181426998;
	weights[87] 	= 0.01057692419966478924914370820511772291637550494000733162694803773620892522996878496803;

	nodes[88] 	= 0.91548719165725378693293444490358431221286520154382031732585474038042559293978368680588394897762693612830010044192589455181426998;
	weights[88] 	= 0.01057692419966478924914370820511772291637550494000733162694803773620892522996878496803;

	nodes[89] 	= -0.9257465524140128807250464532427500953984865249555674194380435136643603806192754454753931476191238112426228440639943631557224649;
	weights[89] 	= 0.0099406155327057967924401776853595851831047238277081417415413679527305979520705870835;

	nodes[90] 	= 0.9257465524140128807250464532427500953984865249555674194380435136643603806192754454753931476191238112426228440639943631557224649;
	weights[90] 	= 0.0099406155327057967924401776853595851831047238277081417415413679527305979520705870835;

	nodes[91] 	= -0.93536613269983679653877672506558277642434389392279525271304438904528020324127113921709768668838906261089703316756470929974093529;
	weights[91] 	= 0.0092974369556152003391011767913137398613710323469012325391501827091674209468052928112;

	nodes[92] 	= 0.93536613269983679653877672506558277642434389392279525271304438904528020324127113921709768668838906261089703316756470929974093529;
	weights[92] 	= 0.0092974369556152003391011767913137398613710323469012325391501827091674209468052928112;

	nodes[93] 	= -0.94433928447456849468647426222314480962928200567408155509099485286228210858620081418881224531166943117113404075975196642784969114;
	weights[93] 	= 0.0086478329746655815114541440918000022171176981429819478993787106860375713404424372069;

	nodes[94] 	= 0.94433928447456849468647426222314480962928200567408155509099485286228210858620081418881224531166943117113404075975196642784969114;
	weights[94] 	= 0.0086478329746655815114541440918000022171176981429819478993787106860375713404424372069;

	nodes[95] 	= -0.95265980645224705562718176577533286105138702058347546730046735563260612923036914073097445578410777744980247836757286702521678312;
	weights[95] 	= 0.0079922525408685281465553556254642982277953392344485354443777327988882722836136860144;

	nodes[96] 	= 0.95265980645224705562718176577533286105138702058347546730046735563260612923036914073097445578410777744980247836757286702521678312;
	weights[96] 	= 0.0079922525408685281465553556254642982277953392344485354443777327988882722836136860144;

	nodes[97] 	= -0.96032194839227776610070375289619045100263407275866281190037996522610923246294964571536899914202946041807544393922843405769405399;
	weights[97] 	= 0.007331148742639668982641357516311436068251274680415763394462511047929272889088556941;

	nodes[98] 	= 0.96032194839227776610070375289619045100263407275866281190037996522610923246294964571536899914202946041807544393922843405769405399;
	weights[98] 	= 0.007331148742639668982641357516311436068251274680415763394462511047929272889088556941;

	nodes[99] 	= -0.96732041508297413900503753558626042552423323150642436494477766758829248617042187646660055675151339556930645143127532138944707351;
	weights[99] 	= 0.006664978498225184120218070299555719102806321147307698499273322747602784181894719584;

	nodes[100] 	= 0.96732041508297413900503753558626042552423323150642436494477766758829248617042187646660055675151339556930645143127532138944707351;
	weights[100] 	= 0.006664978498225184120218070299555719102806321147307698499273322747602784181894719584;

	nodes[101] 	= -0.97365037001861172934387401720730027749474764601462704235294107569396643093879770190449220322911665740674510964881762834761544591;
	weights[101] 	= 0.005994202251056675895762494250609287616694440394412564612012443109031673105958455194;

	nodes[102] 	= 0.97365037001861172934387401720730027749474764601462704235294107569396643093879770190449220322911665740674510964881762834761544591;
	weights[102] 	= 0.005994202251056675895762494250609287616694440394412564612012443109031673105958455194;

	nodes[103] 	= -0.97930743877606581778205197115972801412952854010379959698204254791018345420029674763475537608286674347595180613994284920365234855;
	weights[103] 	= 0.005319283675408655521248622057996162481641339959799546606132932189035922995125873366;

	nodes[104] 	= 0.97930743877606581778205197115972801412952854010379959698204254791018345420029674763475537608286674347595180613994284920365234855;
	weights[104] 	= 0.005319283675408655521248622057996162481641339959799546606132932189035922995125873366;

	nodes[105] 	= -0.98428771210935378340895315475746741585940430641374631459023430774853498375754150254580245620747411961415223474137517841077027747;
	weights[105] 	= 0.004640689411578200180725619501774539160772891366585516963584372420466564616155277078;

	nodes[106] 	= 0.98428771210935378340895315475746741585940430641374631459023430774853498375754150254580245620747411961415223474137517841077027747;
	weights[106] 	= 0.004640689411578200180725619501774539160772891366585516963584372420466564616155277078;

	nodes[107] 	= -0.98858774881465914573585937201645235410016379637478944251020994110417813523279644007299601350122330893621295538590698850743522279;
	weights[107] 	= 0.003958888887248887575842599098145519157035609108343549394189759329199450473010672804;

	nodes[108] 	= 0.98858774881465914573585937201645235410016379637478944251020994110417813523279644007299601350122330893621295538590698850743522279;
	weights[108] 	= 0.003958888887248887575842599098145519157035609108343549394189759329199450473010672804;

	nodes[109] 	= -0.99220457852842745312087512923183766491297673046835062097865572710488369314847032697634170428721465826644247808667430677849653669;
	weights[109] 	= 0.003274354418841928441257534150970019021748654735301074295528782260076964397650380627;

	nodes[110] 	= 0.99220457852842745312087512923183766491297673046835062097865572710488369314847032697634170428721465826644247808667430677849653669;
	weights[110] 	= 0.003274354418841928441257534150970019021748654735301074295528782260076964397650380627;

	nodes[111] 	= -0.9951357050424424266961774624741270065574693855615272393629006246907810967244166655344761728925683064885744248143280266611639118;
	weights[111] 	= 0.002587562397456636098522787486493749149494929675474847996665405252339566449036883107;

	nodes[112] 	= 0.9951357050424424266961774624741270065574693855615272393629006246907810967244166655344761728925683064885744248143280266611639118;
	weights[112] 	= 0.002587562397456636098522787486493749149494929675474847996665405252339566449036883107;

	nodes[113] 	= -0.99737911277760051280248209583832633542839595654858102917249787064981311298797656776618722817418430306293596662517162327658400064;
	weights[113] 	= 0.0018989999495570068710840724711079436767221573364132054150461422746952636916127918673;

	nodes[114] 	= 0.99737911277760051280248209583832633542839595654858102917249787064981311298797656776618722817418430306293596662517162327658400064;
	weights[114] 	= 0.0018989999495570068710840724711079436767221573364132054150461422746952636916127918673;

	nodes[115] 	= -0.99893329365232440864759992222622852872498766894735325802364835888516683198940954649259807377385101413468162864233313721770226753;
	weights[115] 	= 0.0012092138838668839597359178674485845601606260337240104386340699051277147030965343088;

	nodes[116] 	= 0.99893329365232440864759992222622852872498766894735325802364835888516683198940954649259807377385101413468162864233313721770226753;
	weights[116] 	= 0.0012092138838668839597359178674485845601606260337240104386340699051277147030965343088;

	nodes[117] 	= -0.99979751905437880403142351867708098388749064957073681713526958998246886579520715059102851334265889773431947748719225543376752507;
	weights[117] 	= 0.00051961395684955615014041550250009422689442303316143722696119146575539929166004664888;

	nodes[118] 	= 0.99979751905437880403142351867708098388749064957073681713526958998246886579520715059102851334265889773431947748719225543376752507;
	weights[118] 	= 0.00051961395684955615014041550250009422689442303316143722696119146575539929166004664888;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_119_hpp__)*/