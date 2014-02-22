//
//        Gauss_Legendre_Nodes_and_Weights_43.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 43.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_43_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_43_hpp__

void Gauss_Legendre_Nodes_and_Weights_43(long double*& nodes, long double*& weights) {
	nodes	= new long double[43];
	weights	= new long double[43];

	nodes[0] 	= 0;
	weights[0] 	= 0.072215751693798987977462331713736880147070690525250348970155346888440596368419877890857518187740612278728638170732229450171325613;

	nodes[1] 	= -0.072152990874586235422327250955561094857655276660614305524470443155025687228453226176846724363780351335419134149114484314800479457;
	weights[1] 	= 0.0720275019714219743453075516708570877535042459474147016448449738725959872303670597353621504816762120184349025299321888367527957;

	nodes[2] 	= 0.072152990874586235422327250955561094857655276660614305524470443155025687228453226176846724363780351335419134149114484314800479457;
	weights[2] 	= 0.0720275019714219743453075516708570877535042459474147016448449738725959872303670597353621504816762120184349025299321888367527957;

	nodes[3] 	= -0.14392980951071331077029993761074468868278888347134264823300773825365490399804926458605862323822692443696949537592943149765946866;
	weights[3] 	= 0.07146373425251414129758111770291024858090001936779567323931861212031975305055411149543232047911965782376614754514866983912759;

	nodes[4] 	= 0.14392980951071331077029993761074468868278888347134264823300773825365490399804926458605862323822692443696949537592943149765946866;
	weights[4] 	= 0.07146373425251414129758111770291024858090001936779567323931861212031975305055411149543232047911965782376614754514866983912759;

	nodes[5] 	= -0.21495624486051820901487838147367495373722428638545304444245128162805361851176464802205299288779732897953861385181686523153316658;
	weights[5] 	= 0.070527387765085028126286355477940743183736166784964150067785882169459214486295232506045111786037208968466062908531857287096;

	nodes[6] 	= 0.21495624486051820901487838147367495373722428638545304444245128162805361851176464802205299288779732897953861385181686523153316658;
	weights[6] 	= 0.070527387765085028126286355477940743183736166784964150067785882169459214486295232506045111786037208968466062908531857287096;

	nodes[7] 	= -0.28486199803291362710572289483833793178587981775426116955275308523350302878223319498306154519215917914725031801136531925732044857;
	weights[7] 	= 0.06922334419365668428229947912263514780930498957092782381957157848661868726342082345654519602365067261136813669130434302572;

	nodes[8] 	= 0.28486199803291362710572289483833793178587981775426116955275308523350302878223319498306154519215917914725031801136531925732044857;
	weights[8] 	= 0.06922334419365668428229947912263514780930498957092782381957157848661868726342082345654519602365067261136813669130434302572;

	nodes[9] 	= -0.35328261286430380664547636414346787178044503014256554223927414565852913425823886715158875409440288452339454286286708695875207317;
	weights[9] 	= 0.0675584022293651691924079047562655921429462925857296082735457925344986680024759503027939255467420026696096307946025200499;

	nodes[10] 	= 0.35328261286430380664547636414346787178044503014256554223927414565852913425823886715158875409440288452339454286286708695875207317;
	weights[10] 	= 0.0675584022293651691924079047562655921429462925857296082735457925344986680024759503027939255467420026696096307946025200499;

	nodes[11] 	= -0.41986137602926925248727939456056802607498890771457094808735294343140156225069189490818384746381200845199869294663278559874746459;
	weights[11] 	= 0.065541242126322797491233764249207830224962533778454826322529506813199237665246218342794189573927231573803570483740043044;

	nodes[12] 	= 0.41986137602926925248727939456056802607498890771457094808735294343140156225069189490818384746381200845199869294663278559874746459;
	weights[12] 	= 0.065541242126322797491233764249207830224962533778454826322529506813199237665246218342794189573927231573803570483740043044;

	nodes[13] 	= -0.48425117678573472406963343474851377799357708187172329632200571815533072687561096291188985268871238119866193404416357182218119279;
	weights[13] 	= 0.06318238044939611232562981777340826425669623463946884668037323809631300311378329012392995557807019060654892406672755766;

	nodes[14] 	= 0.48425117678573472406963343474851377799357708187172329632200571815533072687561096291188985268871238119866193404416357182218119279;
	weights[14] 	= 0.06318238044939611232562981777340826425669623463946884668037323809631300311378329012392995557807019060654892406672755766;

	nodes[15] 	= -0.54611631666008471914040504717966083665485422412475580262460279172606607438583123315680033372077769236989042186660254432461720943;
	weights[15] 	= 0.0604941152499912945196787419913627933585088798704285874312181245382904179994473708969532086763586400682830188304226327;

	nodes[16] 	= 0.54611631666008471914040504717966083665485422412475580262460279172606607438583123315680033372077769236989042186660254432461720943;
	weights[16] 	= 0.0604941152499912945196787419913627933585088798704285874312181245382904179994473708969532086763586400682830188304226327;

	nodes[17] 	= -0.60513425963960093572508307112395522143836980789452728929679328226778761633201396934723601876072372833186507287274041096417371076;
	weights[17] 	= 0.057490461956910519427608916844416511927868868194565432689231139596031721268120518945778840897001295419840778772759494;

	nodes[18] 	= 0.60513425963960093572508307112395522143836980789452728929679328226778761633201396934723601876072372833186507287274041096417371076;
	weights[18] 	= 0.057490461956910519427608916844416511927868868194565432689231139596031721268120518945778840897001295419840778772759494;

	nodes[19] 	= -0.6609973137514981331651347637413453941131568125342132934947593192453970234273803579039497889105314728165441926345184116950927948;
	weights[19] 	= 0.05418708031888178686337317832626541358839055267071128470353816551726489853492111753045320023234484547440272284357569;

	nodes[20] 	= 0.6609973137514981331651347637413453941131568125342132934947593192453970234273803579039497889105314728165441926345184116950927948;
	weights[20] 	= 0.05418708031888178686337317832626541358839055267071128470353816551726489853492111753045320023234484547440272284357569;

	nodes[21] 	= -0.71341423526895705485192087799090410264252916711363611639604966302635879620712909213369886241143295590754911935768551347108156525;
	weights[21] 	= 0.0506011927843901565238503989530147457498980090980121909738442843774018306911447643240288389440891782434088275957582;

	nodes[22] 	= 0.71341423526895705485192087799090410264252916711363611639604966302635879620712909213369886241143295590754911935768551347108156525;
	weights[22] 	= 0.0506011927843901565238503989530147457498980090980121909738442843774018306911447643240288389440891782434088275957582;

	nodes[23] 	= -0.76211174719495512146032846302904618780759525868595775625125375455635848771573563916358260335705549739519130893624871686633564752;
	weights[23] 	= 0.0467514947543465800106467663371029339328630959356638568441917380521869706746941697879306936667853324055161350525299;

	nodes[24] 	= 0.76211174719495512146032846302904618780759525868595775625125375455635848771573563916358260335705549739519130893624871686633564752;
	weights[24] 	= 0.0467514947543465800106467663371029339328630959356638568441917380521869706746941697879306936667853324055161350525299;

	nodes[25] 	= -0.80683596413693863527907474087751212606088624348175259663307053216470436554176959425252133741837634780910585480194565658633602482;
	weights[25] 	= 0.042658057197982083763807205338513894104947091236767250673339329033695008070429587568380900514637177112133934309006;

	nodes[26] 	= 0.80683596413693863527907474087751212606088624348175259663307053216470436554176959425252133741837634780910585480194565658633602482;
	weights[26] 	= 0.042658057197982083763807205338513894104947091236767250673339329033695008070429587568380900514637177112133934309006;

	nodes[27] 	= -0.84735371620931504899908608582179251751259654747723988373417318954255611247207656928408137318672218023095043682332739348584201843;
	weights[27] 	= 0.038342222194132657572128424662849114880072562868397175520859848906858317483906991206064038370095332851874698119899;

	nodes[28] 	= 0.84735371620931504899908608582179251751259654747723988373417318954255611247207656928408137318672218023095043682332739348584201843;
	weights[28] 	= 0.038342222194132657572128424662849114880072562868397175520859848906858317483906991206064038370095332851874698119899;

	nodes[29] 	= -0.88345376521861686333767801164216741786216669424245159853029774638990485695406069352613985438951954014274181252607503711913706692;
	weights[29] 	= 0.03382649208686029234496847575380209105330161064713236692120216893114583108052838174937560095284938935760805271201;

	nodes[30] 	= 0.88345376521861686333767801164216741786216669424245159853029774638990485695406069352613985438951954014274181252607503711913706692;
	weights[30] 	= 0.03382649208686029234496847575380209105330161064713236692120216893114583108052838174937560095284938935760805271201;

	nodes[31] 	= -0.91494790720613872945610287079928561674578010310842305699980049137411922961917255335130474400142734471506463777153713601765718723;
	weights[31] 	= 0.0291344132614984949159404248257811937875505698401920319599705414196282293844826534499522161608171823200205765003;

	nodes[32] 	= 0.91494790720613872945610287079928561674578010310842305699980049137411922961917255335130474400142734471506463777153713601765718723;
	weights[32] 	= 0.0291344132614984949159404248257811937875505698401920319599705414196282293844826534499522161608171823200205765003;

	nodes[33] 	= -0.9416719568476378618184773903979382714664760898138277578187949634125843856668318235099309132410061892066641615679510115395591688;
	weights[33] 	= 0.02429045661383881590201832425424924845523703933581213749868522167959554157732406033901732797653521994548568059909;

	nodes[34] 	= 0.9416719568476378618184773903979382714664760898138277578187949634125843856668318235099309132410061892066641615679510115395591688;
	weights[34] 	= 0.02429045661383881590201832425424924845523703933581213749868522167959554157732406033901732797653521994548568059909;

	nodes[35] 	= -0.96348661301407999341019496357424393986761891227871254633533837760719032557504803995532992415665044373829264129063951803685158371;
	weights[35] 	= 0.01931990142368390039612461089207135231702355908825696855523372443515823900591944209920696122744903385107089257715;

	nodes[36] 	= 0.96348661301407999341019496357424393986761891227871254633533837760719032557504803995532992415665044373829264129063951803685158371;
	weights[36] 	= 0.01931990142368390039612461089207135231702355908825696855523372443515823900591944209920696122744903385107089257715;

	nodes[37] 	= -0.9802782209802553315055293821811363901808675965195734841724893279111996319375606661495770334522196489477699426145942432095946816;
	weights[37] 	= 0.01424875643157648610854160172200419357207399314416233527423287907996924202123831820977220272980592867824800935569;

	nodes[38] 	= 0.9802782209802553315055293821811363901808675965195734841724893279111996319375606661495770334522196489477699426145942432095946816;
	weights[38] 	= 0.01424875643157648610854160172200419357207399314416233527423287907996924202123831820977220272980592867824800935569;

	nodes[39] 	= -0.99195955759324414642071834132961801638705322595895272821468220018605638044281632131939249127357562820321746451338334450875636571;
	weights[39] 	= 0.00910399663740140331886860829589672381301797555982670407706283368224965967872763525826456377604239180902813604355;

	nodes[40] 	= 0.99195955759324414642071834132961801638705322595895272821468220018605638044281632131939249127357562820321746451338334450875636571;
	weights[40] 	= 0.00910399663740140331886860829589672381301797555982670407706283368224965967872763525826456377604239180902813604355;

	nodes[41] 	= -0.9984723322425077135176361873183924119620507178476091432930834367833803290305468656358295283544157007271916046020116010321389843;
	weights[41] 	= 0.003919490253844127282967165192576435433660364572690872344342743213299243532762363726489797312095570051716842582899;

	nodes[42] 	= 0.9984723322425077135176361873183924119620507178476091432930834367833803290305468656358295283544157007271916046020116010321389843;
	weights[42] 	= 0.003919490253844127282967165192576435433660364572690872344342743213299243532762363726489797312095570051716842582899;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_43_hpp__)*/