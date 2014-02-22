//
//        Gauss_Laguerre_Nodes_and_Weights_96.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 96.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_96_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_96_hpp__

void Gauss_Laguerre_Nodes_and_Weights_96(long double*& nodes, long double*& weights) {
	nodes	= new long double[96];
	weights	= new long double[96];

	nodes[0] 	= 0.01498247386279735578113381595992693253270733967334821221897315103889194554820615489765336045292778111917509706909645822599032466;
	weights[0] 	= 0.037878576219041548572945553673569377800565209917312674973357292198890971931524675577053784218244399305635011688994513188365891;

	nodes[1] 	= 0.078946123048802078401859851068655938670673738970106495547531578766080827959790167163642068483722802935926816005340834331231121638;
	weights[1] 	= 0.0827199060983476036053134159303667408818496231489957780504172821297071655117870405310003078933795524166283852708358545799001;

	nodes[2] 	= 0.19403943619415144127525087861156382517465522309967919422986285711451168574465718078655343489834378980739508842887830807743479355;
	weights[2] 	= 0.115866799133984697360761598404934371067882075933282524291658750157405401321494775562952901154258188094411556470834726440136;

	nodes[3] 	= 0.36031849940301371227858224728198152833288249573869441624037418069658999678846602665529458597398314067714357403831004381368287855;
	weights[3] 	= 0.1338323001322935736406256373055847800457388238474978019170381946058966000070762668606397240752555444741710945909922535638;

	nodes[4] 	= 0.57783059971144985702224917893956803070599313109301660982485711445821615572646861785788941409583747086229015558456740238449458753;
	weights[4] 	= 0.136433303616453343478689414971787182426433549121050899561811798299535994664581496741040346176440646426761556508527881118;

	nodes[5] 	= 0.84663433340836916642628067954127464147099440433698599611310722080840010459543710124461512341294547909581954397709172218801475541;
	weights[5] 	= 0.12628621203564779721190002421037027193608902604054191093783164758379089580621618498539551492701566974711797921299463666;

	nodes[6] 	= 1.1668015752788020546042771360354042030021717372504625130219583182560662379819544972172999843397735136345290788631223359140760084;
	weights[6] 	= 0.1076924888798102793618808477725926047974888551433569205358982298832200220665824502512702715910047980947829751742686755;

	nodes[7] 	= 1.5384179352029550094624734726372004782170991811563578915095885685976206457024864023506580150836778630266017729938935495323834097;
	weights[7] 	= 0.085324129111590665575386457900776969138539513515788008233058377931931238888698704416871666563219016333302561964893812;

	nodes[8] 	= 1.9615829778382892900986382652170740581848264935034914576939168864924144271488909084429950624011179071802346388496629681239118649;
	weights[8] 	= 0.06314203242520727884377360072332888872645050721781525681170942123908689905373372566081798972653853915054986542610325;

	nodes[9] 	= 2.4364104013990188730954878510985288638772336929746675664237460945221401898194715682770475666727380704097060220793247410906681695;
	weights[9] 	= 0.0437983823083315582631294220734770092939554787179396240797696401669922714793347204387798580643356920963887066430764;

	nodes[10] 	= 2.9630282193904724946247982214712542446231383061884851988395314106543133945484479417624632295522517859799217392952500423035377591;
	weights[10] 	= 0.028546448879549692250237875738270870944404290782319475643084539052778517102264316418566687446588407517406907109556;

	nodes[11] 	= 3.5415789580835459386900036226846756222762249661216846106624148042305353027059267096255561005594463489157714821310570600556355241;
	weights[11] 	= 0.01751286619497787142048224525396802896875082008825249893188659249765206012233366820820857543741871037815897960064;

	nodes[12] 	= 4.1722198744791783687463310297836387233204557851827554494061520302179879973982688993044035398959652619775438651372429187749128108;
	weights[12] 	= 0.0101256479675925605081392407659626173929824451573843487918466218382335167794245371798246281962375751380570991389;

	nodes[13] 	= 4.8551231970872930479108579559348238169583848418459369557146131734456033920847705474935225873913513300508298156518664229507922518;
	weights[13] 	= 0.005522702599754219680646826023698154107633781322163433232304264690380276963024191936952822231605279204242450938;

	nodes[14] 	= 5.5904763910528047486378078442294305225954277377666742229763875527635060343427599033010788769304075656952146031723066878554081058;
	weights[14] 	= 0.00284340847535510576186908651500222048039496148800997102888268796349318098654237740834833759922330881380316827;

	nodes[15] 	= 6.3784824489169119679840591229611184764072410695019337618210722428507152423615233689152364083555753200923010781949526514932272151;
	weights[15] 	= 0.0013826116758439605661408255997215888532623413774890455969498478263521008550981435305200633900166839043452665;

	nodes[16] 	= 7.2193602082647388977131552559798570939362453745051888635161132404212566858058799645612187173323119452678388811132491012363737352;
	weights[16] 	= 0.0006351647717174251628990736154925278665799835354308939901902234335213004693277014379551616155133658722611667;

	nodes[17] 	= 8.1133446975619666642807732921619726198447064518696188386181067854843289515554850195790333783331073188437393394714854102778165553;
	weights[17] 	= 0.000275739969987877491043970845350936063487998386012509247963700431647249243232080290014903047512069017274843;

	nodes[18] 	= 9.0606875115786676103715319974376849692518847109779837873274162124446819704567031632430848904333811371282345444095683544501951204;
	weights[18] 	= 0.000113136161890498658333412475023539656688291078116410381328017568768701046166353980331050848981306028781809;

	nodes[19] 	= 10.061657217920365047545138464834515450966396483846565937694980099776124824555447959624985431684331316952967506573734425328236508;
	weights[19] 	= 0.00004387518309801511431495637693682620039127733078942357854318983221190037837029658751603502546499164492613;

	nodes[20] 	= 11.116539796327313257713010262076615029418339471798390564264983460931541484509979052877341452063750963537663617580782278930593808;
	weights[20] 	= 0.0000160823977607240615763199019705052882794507566311228033867800155994897284353170688946959409368352203776;

	nodes[21] 	= 12.225639112560641698844075859764186815651483286708329984630390626032328332620714332165561112782642316147347120967257153336746013;
	weights[21] 	= 5.5714800483349181600422356776249199944550592096252286405339948310381887481870300304297651939179913581e-6;

	nodes[22] 	= 13.389277428867983239134067642279229344449551818202441821734498665046425761725952892912765263816079233941214774561768476652425466;
	weights[22] 	= 1.8240205636508686249916106763245506810171214585616000578983330547102313424030529020668052296283530758e-6;

	nodes[23] 	= 14.607795953212265578608431795502004923461162658609526411750790370885687550566364936409125411955586934216951494625477001182863883;
	weights[23] 	= 5.64234685747052675465977818681205597912515345409353470152517302627562407944222966175110544153534922e-7;

	nodes[24] 	= 15.881555429656905316931696900835046774860169644312268917804014602853032115798288557121116680461070321975532778311373656596948793;
	weights[24] 	= 1.64882294998539333310087075592961027513284029324673282771751009707281299892036406717580297432031774e-7;

	nodes[25] 	= 17.210936772530592312175558238882021392788984881003421403475181789194914050952725847124729348867469514334959364702381033611584188;
	weights[25] 	= 4.5506013933715985723332220348710164171669769829076547617011872526528903467931037411402718750542884e-8;

	nodes[26] 	= 18.59634174724747148527200308474123594441554148586443960940696629155541974994335466617803314692834302153259737705919664729190436;
	weights[26] 	= 1.185835466607614446944173593308908864766429258537557964665662922493546096185090682135092516297386e-8;

	nodes[27] 	= 20.038193700936486412013902919853932192120710028757344649852939513491896297757895311011704367292811650709991105405909790710856446;
	weights[27] 	= 2.91679561068135632839031585853731211951579443642077271258140335579619961559861937467323906862014e-9;

	nodes[28] 	= 21.536938346340012574113307499594324530789427247402113493039593547102209744012525169313292994003834216458187923374482603627310151;
	weights[28] 	= 6.7696116836719673439825073446507694364248413881403002039876163204133845831018036224818676996532e-10;

	nodes[29] 	= 23.09304460278018967012773266986785073978956005999604858514561933779683757481887069986415309722415686933753326982105579479611588;
	weights[29] 	= 1.4819499836703112042936182264527237808866922416899898064130067421697666778235593779134551067142e-10;

	nodes[30] 	= 24.707005498365573657876772526723634132286689379066186602968162618940062345323814439636519387984518379505318860726874509869877587;
	weights[30] 	= 3.058700451737857163777474992447864396342253045789634322742125366188253575576438164972710956701e-11;

	nodes[31] 	= 26.379339138025454112291078051619248026174269654794177553059514874978826665465940732984921059483098851013636996099590537583804332;
	weights[31] 	= 5.94951231320949320222944055621833925735814120841969682937162975133707121428304764419183687872e-12;

	nodes[32] 	= 28.110589742419664621608907920998865964111856488422066994754845078502605254777178950921767360465210228708046378671530113741912541;
	weights[32] 	= 1.09008410061550172644960839909483966053146002122655002264289259508507108624148706486843870313e-12;

	nodes[33] 	= 29.901328763283961261357911426758081470843113209917861459459406189045677229806970416515981129518584071402768126113071074350107148;
	weights[33] 	= 1.8804063918285552873449357420079098230546148564601963701931160177056568321037215330691175651e-13;

	nodes[34] 	= 31.752156081341953485579725069290260660057146995878531799466395747833802691096908990105770703805056638680325484676234540013134233;
	weights[34] 	= 3.052254984068018410341749580813771275795146392576088885139449258193622554124525565141790745e-14;

	nodes[35] 	= 33.663701293552076566279695313455599663477786093217988943015692687395579697287893179089725649489548736324871300026164262157233854;
	weights[35] 	= 4.65925773316202434156696713011157869572523225110052001163619069055103339905459897958261656e-15;

	nodes[36] 	= 35.636625097171340914843281145211642099094768886436406930448375587909655889040637144491364594478364327766599698612531460039773174;
	weights[36] 	= 6.6845736377435149833412447338648966323328572667937812708490210883747262328100909005163963e-16;

	nodes[37] 	= 37.671620778917148746964926299594715318020976385400015417488457807263808357440211852943234617647429768544419551084905625076388151;
	weights[37] 	= 9.0076248365653203479536478638862707756508668177464615624452811508374162172463593516127787e-17;

	nodes[38] 	= 39.76941581840657130901835782830333852000339663259042017638142011780454231234435372528700554926681582273534762599307981157110111;
	weights[38] 	= 1.1392756456457389924289455412733361320965779939945108801353058336058468631079418616720094e-17;

	nodes[39] 	= 41.93077361606333874754369394097818604996115715570008598005099328090471896800328472308835709960649855461534221288390261291016949;
	weights[39] 	= 1.351496197399314593696786360045354936160743151238755468585036333406820802463561703147469e-18;

	nodes[40] 	= 44.156495356822946115782647135793709975527873050665670771692496066643681025673481371517240187374793094941946840302314197279794622;
	weights[40] 	= 1.502575840726936195121879000082479244060947194783176278172253383512632800340833229784712e-19;

	nodes[41] 	= 46.447422022255018326085913116459395592649847077386221354239842071058212297740486644415011316439212802118733928426925395005168449;
	weights[41] 	= 1.56438402019921492287255453716121732034829799596449648023787986628967612307544340594429e-20;

	nodes[42] 	= 48.80443656518197843096993491383428823057580380991847552227180110492036320056478321584848168981153862234923669216736767103079382;
	weights[42] 	= 1.52393520712534640697614200074125600498160317330796690568439977731166794891656836411649e-21;

	nodes[43] 	= 51.228466262530610478210770091978311931747012462495293149125062910519004439270207695839796293525073056210993683907747664137111926;
	weights[43] 	= 1.3877670300200887461242913187467633506255442574416635015575703216004062886098884251625e-22;

	nodes[44] 	= 53.720485264039456906632561480007660766600977483056444109185133088906225647259060387300734702550667185525524920861746622919926338;
	weights[44] 	= 1.1802752794173011422863367645739350814993456314316749635914333474896589815953297555125e-23;

	nodes[45] 	= 56.281517356596903422399858385809056911649860014251227685026372832007533632101461376095889887543995203346814232309338368657197292;
	weights[45] 	= 9.365572923149480888948457226280332889924452611382200169544775185816087820650395004e-25;

	nodes[46] 	= 58.912638966445790125483347506250974681904317438927233663904848567575629940884235326976343600536375083280311977076077166856756139;
	weights[46] 	= 6.92650128768910727620812873285726171619820624402223099948270757016869884027250731049e-26;

	nodes[47] 	= 61.614982424312101256205260171658991667099617390171303121201834791796804170284966119315900876848257437565053203436256987098005965;
	weights[47] 	= 4.76915604028947424144732682641667189262476583531720272095007098954506025254500199621e-27;

	nodes[48] 	= 64.389739521759254059677622901385286732030228513468060052996576017222387661481524327777784057657030429115671218662030335892434397;
	weights[48] 	= 3.0535883693639163850872736547046206652097068172230330657173042597317161035566297849e-28;

	nodes[49] 	= 67.238165390809263594153867530272328671286449940036205208527208652738796444465318016027133412538942056777178183092829363509965505;
	weights[49] 	= 1.8158763395675336999559363146411192942002933686434082685670430572370759377824081329e-29;

	nodes[50] 	= 70.161582743195798144581048759323267547065484090170323452904774976784903852229405884609076330811345020388020347319573699638864928;
	weights[50] 	= 1.0016239729606731952351579373951039258011120336505875262444396520178436187402443252e-30;

	nodes[51] 	= 73.161386510628022206534614838364085100355377535384738633378221596498183099828639197961400322241147315563581988527720032537681269;
	weights[51] 	= 5.117644054432073675737621394578350261594128100380399432593532074080502820097433836e-32;

	nodes[52] 	= 76.239048933276432037019091849326766799396938357237145719879717795253534646135770301077530589632285983981299819091109503501574731;
	weights[52] 	= 2.418537832219781127157564535574564107841082128742393883753086292480955245762100779e-33;

	nodes[53] 	= 79.396125150498246007036026160323800501577119013471934825297608962015621816871055219516060974453601030932321148724965607332344211;
	weights[53] 	= 1.055571200688440973709765960910764487157241839305133714988152908897880126193142853e-34;

	nodes[54] 	= 82.634259355789893931899532465425546750521742044326014061932947221141531183557177461087859595793011271701988539399358448497273433;
	weights[54] 	= 4.24785484653033283428708648086370426872316721673729917909783370361807657047582803e-36;

	nodes[55] 	= 85.955191587319689331030112720676266744560247652156572714274737291691071183678277043787134380806202352473021588333382831052233607;
	weights[55] 	= 1.57345126047707752341409611068391222968176057690667762480861736870446078419760422e-37;

	nodes[56] 	= 89.360765236439902742619352805598516619929933508897305879527976179297323236489716692165376937310739261419443155237966403269356237;
	weights[56] 	= 5.35485308786263970965092185047922370621327364567117165851297960382239164263179664e-39;

	nodes[57] 	= 92.852935369656136073850638266091841979722144508862596102865157301289029455871693914327061463634995312505316982263853618540457341;
	weights[57] 	= 1.67114138623602886321800794265260253319434105851185759677066688918056481635614098e-40;

	nodes[58] 	= 96.433777975079856440326191989547292812802067939560121172662063445195663362963725290054724167100380421789996022764755815577275418;
	weights[58] 	= 4.772638592840318669671697980779774001714966569396092120599514521009840851021181e-42;

	nodes[59] 	= 100.1055002629519166797620057781026789396989440187715746512854574436294976588803145636671130669831731427286832558050617475396272;
	weights[59] 	= 1.24461542327211400888806380573846948750259991775083058515047208494569289333976891e-43;

	nodes[60] 	= 103.87045217208401251988616794669598183364261691946259161237291969106366891238057062113432573159691141292509683629340604866150954;
	weights[60] 	= 2.9568746250610227421772485272399643481085335000909268948952673056202025446464481e-45;

	nodes[61] 	= 107.73113926088292095729224958510043825842307385481155801876817158577513701166501377485296562105313851861098621242799949627204127;
	weights[61] 	= 6.3837270537895548597033042109909344955215667424420026782292944194450952606208081e-47;

	nodes[62] 	= 111.69023719409228152274309140875175191932558216307550575655269921084206672509408916351014688301581159146388583434134438171310829;
	weights[62] 	= 1.2491323725684231208911527159301993112415304061421920611288018553642596946902992e-48;

	nodes[63] 	= 115.7506080759045595131834688901344708406079724200789457132644195130292363372391368046201592736070730922650127369939548266438878;
	weights[63] 	= 2.2090419771352513301783866661050796795990164452107589274660174246804455457587622e-50;

	nodes[64] 	= 119.91531892845600178145791354538133383815347770601155154002081177081671261477277871720267699918716284302214089469423246905359887;
	weights[64] 	= 3.5199864956784988674121044415616810489226711548555598781784863527627725372997323e-52;

	nodes[65] 	= 124.18766267424256555409266494378748748692489269309479824691536129560370189363632086431804167847863958157919825742847653778449888;
	weights[65] 	= 5.0373518882812515169848292710087937114266904892652826200357114090321853672009839e-54;

	nodes[66] 	= 128.57118205471407747268720099930327980965284019537730726622516178350537838607014368534638960446800913214186208846018905899880013;
	weights[66] 	= 6.451532417064822582824309018789465318478168132560178382920290488460554943898686e-56;

	nodes[67] 	= 133.06969700919887293011603467896496249274462670799774890530805512196458625961452585664956023051873743283115281504499079801543007;
	weights[67] 	= 7.366791173581172114011570300729212510493927127113650167363181566125517993084292e-58;

	nodes[68] 	= 137.68733615365946831704156892226347504622365002686734168094584834906468650111735194261437315220174313575562570629920874381892789;
	weights[68] 	= 7.469152462839147519840277279522568555888023697608759109207139493927101082938818e-60;

	nodes[69] 	= 142.42857314463936331323628767936843056538929642499401662657733325648474677937166841217927082726339117022792742554057610436528035;
	weights[69] 	= 6.694463972778089952855964196308368660738862645819306487909305006585682131585206e-62;

	nodes[70] 	= 147.29826889966062959218379058765855265645750234707887918318381619742802912461651850109951738818995304385910508004163131713296786;
	weights[70] 	= 5.2786047053175158411155603664377317191445807072098067019423448855411650677420181e-64;

	nodes[71] 	= 152.30172088426704962891147528668375442276438589390416295321933587590666365128025729687082653610729500135880878676123827712921039;
	weights[71] 	= 3.642510407106861755380785026162338540673292927175138159208248254737836846918704e-66;

	nodes[72] 	= 157.44472098579494120616784679112235016401951287044717528110702015545414742214657788068673297355732192689068980164465537810616847;
	weights[72] 	= 2.1870947493414929301286093267594446281232101097313749824161641609254602867533434e-68;

	nodes[73] 	= 162.73362389978386427385680358909298024504357392870206410671768691428496839252772786220248297750262176034186173801648809164430555;
	weights[73] 	= 1.13549267145024586029722382678946935383989061142531873595221692987128349616729193e-70;

	nodes[74] 	= 168.17542849200795283292947378146384263831258941162486627146230575691569209818887495377555656253625846747871826369229137024266026;
	weights[74] 	= 5.0621957528006922810225047576516210518392359667825904392895179521665095840273011e-73;

	nodes[75] 	= 173.77787531794404655267639944254763805121717538918206044379852171362605656244188468590918844612933039991316570646896126212283922;
	weights[75] 	= 1.92309455571512479425100551320166647998825305030284323243688286587563715598911127e-75;

	nodes[76] 	= 179.54956445549477731968112424075040126791068586946097803698355597829203517808919242799361140814291957248783195111393912433829368;
	weights[76] 	= 6.17261978152671155023205080926658090711148030507121857388857937977416452728750711e-78;

	nodes[77] 	= 185.5000991442821687447949946253288075783650298389686800405399359292305380728407000181474612834493647055288172936950958492475205;
	weights[77] 	= 1.658116366934699814121181224490195321741101901931100223044705914271908582832257849e-80;

	nodes[78] 	= 191.64026258848975497374302110349337703873212141629368337556119493050775973768589590885586283844397392749603719387672957526910557;
	weights[78] 	= 3.688078285108679821439320560321368441024523298121473682951574226555624947913263905e-83;

	nodes[79] 	= 197.98223791899623514204792762856570834176185156687602250807348249606939253360894139612177491454467305385927516502987341208634341;
	weights[79] 	= 6.711003906926944359404046039664359149333250297521874800199121346400333118703241196e-86;

	nodes[80] 	= 204.53988511337843001780945619136476475592490290073536137579430696705618557612541907133487218637325176172559127093132688973118438;
	weights[80] 	= 9.854187100933006146094901295907051677281558229586610264497149580256573598264031012e-89;

	nodes[81] 	= 211.32909426116799045993635695263822241207526811529259721190682946278428727507865907757225519326300427973002696096586072596300544;
	weights[81] 	= 1.1494072769098418720268956164311030236081054767732520965589278963853652075292620273e-91;

	nodes[82] 	= 218.36824295658660036269500215686021376102146603508825682025615849013647241772113531663888640185824095375144581038719514098778062;
	weights[82] 	= 1.04581677749343043078673367041988925811962070381553935844718270645456051825362996545e-94;

	nodes[83] 	= 225.67879852346945803810413506512438446973205842292089549103023487211312510268115685525077383268055859798965008754579946389075289;
	weights[83] 	= 7.26695241901888029440921341491521916298362592248731370150637214222910111195488972224e-98;

	nodes[84] 	= 233.28612622783123869025476003528231099623824283679258642633366324934316320891610569520153161323784784473568855725985752576803596;
	weights[84] 	= 3.76083100898716661008317880377706147202898194188083207653946668071518808794549262412e-101;

	nodes[85] 	= 241.22059803677631898108138131451161871208538785321892913414934134910193226847549260074936812801540518865150620114116554688956162;
	weights[85] 	= 1.4067947939056761885202422583977735241974282813587013026288479612386729516273715479167e-104;

	nodes[86] 	= 249.51915306252911237978349404476144761799999106174841689756331027786306565383313374087697719243573983052847887188431974171197511;
	weights[86] 	= 3.6675043999190525855984122117266190098957059343339471171517203622588959771215571680129e-108;

	nodes[87] 	= 258.22756081641923897894028648155924172864334689504341793993110662229725456932222724714263977998485514237110729775867079886847713;
	weights[87] 	= 6.3696566139178500196384247105534583226232674254931261667841030571770880424198183046983e-112;

	nodes[88] 	= 267.40382415709862625301107991500426883929459645439463236379502247089360290424819744114028734901908872059458678590620163852146474;
	weights[88] 	= 6.9609778479775339289944541125544242040972492807247761646400607001044059173047497087096e-116;

	nodes[89] 	= 277.12352531608182714335155234560525740732531024222924963889431197138261253898952702074538695789748341101697719795794619900569269;
	weights[89] 	= 4.443883681138463016635455517644115310204447586895029790976888742137654150364895960946719e-120;

	nodes[90] 	= 287.48869682640987277527707867811162297560727626466572469424590869024755920278833255742293652584317721304404293541488318064290638;
	weights[90] 	= 1.49933366118529321603630907749298357079304705443344684126187288783364227590950042050652938e-124;

	nodes[91] 	= 298.64361369930472927688675113011071271331639433234463140710402508836081304056445856287198446537725858945905962969203619851794613;
	weights[91] 	= 2.321125895301340260875550535133128328035453212706294524970448798636528953737448195430251289e-129;

	nodes[92] 	= 310.80567968618625637751356726738483748567258637841692293649674022527665245103922729196867809686884469657979569383813953874431081;
	weights[92] 	= 1.333283837705607190258421966741241902045053544010398160798064422905961643802120133813319125e-134;

	nodes[93] 	= 324.33445041231463305026301747304938096643339111240925923934287095834168916278153792776434258382100360164592058277610387209274199;
	weights[93] 	= 2.002600265965908615414441479921814804721519533353858698602077694030873696616304722468629402137e-140;

	nodes[94] 	= 339.921409310730665223470678915056927433618280037177449916062906737730598472377833813843804252451105895460544246881402427764463;
	weights[94] 	= 4.0287862132504576873382877049176553915465982783266565981426068078753555900278242854723967669957e-147;

	nodes[95] 	= 359.35766828583970293938267091068552464051162293431556380971684100651122591831317723366999445386197084682140064974585708592048615;
	weights[95] 	= 1.9574149519693184302507863177091761138674537944811929082494394647001031853946509405903904802379361e-155;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_96_hpp__)*/