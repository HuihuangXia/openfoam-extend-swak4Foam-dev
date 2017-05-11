<div id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#orgab43e02">1. Description</a></li>
<li><a href="#org1156bbf">2. About this document</a>
<ul>
<li><a href="#org00ad5a1">2.1. Scope</a></li>
<li><a href="#org431202d">2.2. Technical</a></li>
</ul>
</li>
<li><a href="#orge744564">3. Contributors etc</a>
<ul>
<li><a href="#orgef59614">3.1. Original Author</a></li>
<li><a href="#orgfedf9ac">3.2. Current Maintainer</a></li>
<li><a href="#org51e88ee">3.3. Contributors</a></li>
<li><a href="#orgd2d59d8">3.4. Documentation</a></li>
</ul>
</li>
<li><a href="#org426fcec">4. Installation/Compilation</a>
<ul>
<li><a href="#orge25fc7c">4.1. Requirements</a></li>
<li><a href="#orgd7034e5">4.2. Building</a>
<ul>
<li><a href="#org81baf55">4.2.1. Additional configuration</a></li>
<li><a href="#org4d1f43a">4.2.2. Possible compilation failure with old 2.0.x-versions</a></li>
<li><a href="#org1fbc687">4.2.3. Special versions of the python integration</a></li>
</ul>
</li>
<li><a href="#org6fc20e1">4.3. Global installation</a></li>
<li><a href="#orgd98d4df">4.4. Packaging</a>
<ul>
<li><a href="#orgf874b1a">4.4.1. Debian</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#orga604e9f">5. Contents</a>
<ul>
<li><a href="#org3d65564">5.1. Libraries</a>
<ul>
<li><a href="#orgcee547c">5.1.1. <code>swak4FoamParsers</code></a></li>
<li><a href="#org16bc646">5.1.2. <code>simpleFunctionObjects</code></a></li>
<li><a href="#org488bfb0">5.1.3. <code>groovyBC</code></a></li>
<li><a href="#org6091956">5.1.4. <code>swakFunctionObjects</code></a></li>
<li><a href="#org84cbe1a">5.1.5. <code>simpleSwakFunctionObjects</code></a></li>
<li><a href="#org411ac78">5.1.6. <code>swakSourceFields</code></a></li>
<li><a href="#orgcdd3358">5.1.7. <code>swakFvOptions</code></a></li>
<li><a href="#org72b4250">5.1.8. <code>swakTopoSources</code></a></li>
<li><a href="#org60854b0">5.1.9. <code>swakFiniteArea</code></a></li>
<li><a href="#orgc8a41fb">5.1.10. <code>groovyStandardBCs</code></a></li>
<li><a href="#org5b65be8">5.1.11. <code>pythonIntegration</code></a></li>
<li><a href="#org28b68cb">5.1.12. <code>simpleLagrangianFunctionObjects</code></a></li>
<li><a href="#org4fe85d8">5.1.13. <code>simpleSearchableSurfaces</code></a></li>
<li><a href="#org70a0ba8">5.1.14. <code>fluFunctionObjectDriver</code></a></li>
<li><a href="#org6fa192c">5.1.15. <code>swakLagrangianParser</code></a></li>
<li><a href="#org18b1d50">5.1.16. <code>swakStateMachine</code></a></li>
<li><a href="#orgfcd19fe">5.1.17. <code>swakDynamicMesh</code></a></li>
<li><a href="#org501c861">5.1.18. <code>functionPlugins</code></a>
<ul>
<li><a href="#org1dae69a">5.1.18.1. lagrangianCloudAdaptors-directory</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org6e9e67e">5.2. Utilities</a>
<ul>
<li><a href="#org173a5ef">5.2.1. <code>funkySetFields</code></a></li>
<li><a href="#orga85706a">5.2.2. <code>funkySetAreaFields</code></a></li>
<li><a href="#org5b0eff0">5.2.3. <code>funkySetBoundaryField</code></a></li>
<li><a href="#orge11fe8a">5.2.4. <code>replayTransientBC</code></a></li>
<li><a href="#orgfa60870">5.2.5. <code>funkyDoCalc</code></a></li>
<li><a href="#orgfcdee53">5.2.6. <code>calcNonUniformOffsetsForMapped</code></a></li>
<li><a href="#orgcb40a4b">5.2.7. <code>fieldReport</code></a></li>
<li><a href="#org836cf22">5.2.8. <code>funkyPythonPostproc</code></a></li>
<li><a href="#org9dd34d1">5.2.9. <code>funkySetLagrangianField</code></a></li>
<li><a href="#org62bd55c">5.2.10. <code>writeBoundarySubfields</code></a></li>
</ul>
</li>
<li><a href="#orgc119330">5.3. Examples</a>
<ul>
<li><a href="#org81ac267">5.3.1. groovyBC</a>
<ul>
<li><a href="#org6fd13be">5.3.1.1. pulsedPitzDaily</a></li>
<li><a href="#org4af872e">5.3.1.2. wobbler</a></li>
<li><a href="#orgff9fbba">5.3.1.3. circulatingSplash</a></li>
<li><a href="#org37260ac">5.3.1.4. movingConeDistorted</a></li>
<li><a href="#orgaf79946">5.3.1.5. average-t-junction</a></li>
<li><a href="#org42ee489">5.3.1.6. delayed-t-junction</a></li>
<li><a href="#org9421fb1">5.3.1.7. multiRegionHeaterFeedback</a></li>
<li><a href="#org27e3bde">5.3.1.8. fillingTheDam</a></li>
<li><a href="#org50a765b">5.3.1.9. sprinklingInlet</a></li>
<li><a href="#org0ac88e5">5.3.1.10. potentialPitzDaily</a></li>
<li><a href="#org3dde555">5.3.1.11. lookupDambreak</a></li>
</ul>
</li>
<li><a href="#org63a13c1">5.3.2. FunkyDoCalc</a></li>
<li><a href="#org195ee96">5.3.3. FunkySetFields</a></li>
<li><a href="#orgb0e0130">5.3.4. FunkySetBoundaryFields</a></li>
<li><a href="#orgd81840b">5.3.5. InterFoamWithSources</a></li>
<li><a href="#org1d9361d">5.3.6. InterFoamWithFixed</a>
<ul>
<li><a href="#org4176115">5.3.6.1. <code>interFoamWithSources</code></a></li>
<li><a href="#org6fa4196">5.3.6.2. <code>mixingThing</code></a></li>
</ul>
</li>
<li><a href="#org4ebec15">5.3.7. FiniteArea</a>
<ul>
<li><a href="#org7fbfb6e">5.3.7.1. <code>swakSurfactantFoam</code></a></li>
<li><a href="#org783ec6c">5.3.7.2. <code>planeTransport</code></a></li>
</ul>
</li>
<li><a href="#orga595eb7">5.3.8. FvOptions</a>
<ul>
<li><a href="#org920998c">5.3.8.1. angleDuctWithSources</a></li>
<li><a href="#org339ab43">5.3.8.2. heatExchangerSources</a></li>
</ul>
</li>
<li><a href="#org5aa4523">5.3.9. other</a>
<ul>
<li><a href="#org95bfe2a">5.3.9.1. <code>angledDuctImplicit</code></a></li>
<li><a href="#org4cc87c0">5.3.9.2. <code>angledDuctImplicitTransient</code></a></li>
<li><a href="#orgef25138">5.3.9.3. <code>capillaryRise</code></a></li>
<li><a href="#org667a481">5.3.9.4. <code>mixingDam</code></a></li>
<li><a href="#org207700b">5.3.9.5. <code>counterFlowFlame2DInitialized</code></a></li>
<li><a href="#org8a04268">5.3.9.6. <code>simpleBendedPipe</code></a></li>
<li><a href="#org99091d0">5.3.9.7. <code>topoSetDamBreak</code></a></li>
</ul>
</li>
<li><a href="#orgf761560">5.3.10. FromPresentations</a>
<ul>
<li><a href="#org30c7bc8">5.3.10.1. OSCFD<sub>cleaningTank3D</sub></a></li>
<li><a href="#orgf0cd70b">5.3.10.2. OSCFD<sub>cleaningTank2D</sub></a></li>
<li><a href="#orge6ef00d">5.3.10.3. OFW8<sub>sandPitOfCarcoon</sub></a></li>
<li><a href="#org0ac490b">5.3.10.4. OFW8<sub>landspeedersInCanyon</sub></a></li>
</ul>
</li>
<li><a href="#org495aa46">5.3.11. PythonIntegration</a>
<ul>
<li><a href="#orgfc743f8">5.3.11.1. <code>manipulatedPitzDaily</code></a></li>
<li><a href="#orgebcc036">5.3.11.2. <code>findPointPitzDaily</code></a></li>
<li><a href="#orgb3c6102">5.3.11.3. <code>bed2OfPisa</code></a></li>
<li><a href="#org2c4012f">5.3.11.4. <code>multiRegionHeaterBuildFunctionObjects</code></a></li>
<li><a href="#org3e02ec6">5.3.11.5. <code>slicedPitzDaily</code></a></li>
</ul>
</li>
<li><a href="#org8e7fabf">5.3.12. <code>CodeStream</code></a></li>
<li><a href="#org55bdf05">5.3.13. solvePDE</a>
<ul>
<li><a href="#org81f2693">5.3.13.1. flangeWithPDE</a></li>
<li><a href="#orgf1a86cd">5.3.13.2. pitzDailyWithPDE</a></li>
</ul>
</li>
<li><a href="#orge4500f6">5.3.14. BasicSourceSubclasses</a>
<ul>
<li><a href="#org1ec1eaf">5.3.14.1. pitzDailyWithSwirl</a></li>
<li><a href="#org11b5597">5.3.14.2. pitzDailyWithExplicitPoroPlug</a></li>
<li><a href="#org26ed3b1">5.3.14.3. pitzDailyWithImplicitPoroPlug</a></li>
</ul>
</li>
<li><a href="#org408683b">5.3.15. Lagrangian</a>
<ul>
<li><a href="#orgf24f38f">5.3.15.1. functionObjects</a></li>
<li><a href="#org607e0ab">5.3.15.2. parser</a></li>
</ul>
</li>
<li><a href="#org17bacae">5.3.16. SimpleSurface</a>
<ul>
<li><a href="#org3f637fc">5.3.16.1. twoMotorbikesAndAWall</a></li>
<li><a href="#orgf6d3a6b">5.3.16.2. littleVolcano</a></li>
<li><a href="#org696af3c">5.3.16.3. chargedPlates</a></li>
</ul>
</li>
<li><a href="#orgd23f28c">5.3.17. manipulateFvSolutionFvSchemes</a>
<ul>
<li><a href="#org5ae06a8">5.3.17.1. pitzDailyTimeSwitched</a></li>
<li><a href="#orgb5ec5c2">5.3.17.2. pitzDailyStateMachineSwitched</a></li>
</ul>
</li>
<li><a href="#org39271be">5.3.18. StateMachine</a>
<ul>
<li><a href="#org344b7fb">5.3.18.1. stateCavity</a></li>
</ul>
</li>
<li><a href="#orgb01de19">5.3.19. DynamicMesh</a>
<ul>
<li><a href="#org1597e0c">5.3.19.1. hecticInletACMI2D</a></li>
<li><a href="#orgc728d7f">5.3.19.2. rotatingTank2D</a></li>
<li><a href="#org16476dd">5.3.19.3. switchedInletACMI2D</a></li>
<li><a href="#org64b1e5e">5.3.19.4. switchedTJunction</a></li>
</ul>
</li>
<li><a href="#orgb04312a">5.3.20. tests</a>
<ul>
<li><a href="#orge7e9cee">5.3.20.1. <code>randomCavity</code></a></li>
<li><a href="#orga2308f8">5.3.20.2. <code>AMIPipe</code></a></li>
</ul>
</li>
<li><a href="#org4ecd196">5.3.21. BugCases</a></li>
</ul>
</li>
<li><a href="#org19cc757">5.4. <code>maintainanceScripts</code></a></li>
<li><a href="#org5712c4f">5.5. Documentation</a></li>
<li><a href="#org116cc92">5.6. releaseTesting</a></li>
<li><a href="#orgcd5fd7d">5.7. distroPatches</a></li>
</ul>
</li>
<li><a href="#orgf386ee9">6. Bug reporting and Development</a>
<ul>
<li><a href="#orgad82c86">6.1. Bug reports</a>
<ul>
<li><a href="#orgca8a9a1">6.1.1. Things to do before reporting bug</a></li>
</ul>
</li>
<li><a href="#orge8f34ea">6.2. Development</a>
<ul>
<li><a href="#org73a596a">6.2.1. Suggest reading</a></li>
<li><a href="#org89759e2">6.2.2. Special branches</a></li>
<li><a href="#org03500c8">6.2.3. Distributed bug-tracking</a></li>
<li><a href="#orgd8267fd">6.2.4. Maintaining feature and hotfix-branches</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org7158d7a">7. Copyright</a></li>
<li><a href="#org2846b56">8. Known bugs</a>
<ul>
<li><a href="#org32376fe">8.1. Moving meshes and <code>sampledSurfaces</code></a></li>
<li><a href="#org2de6b6b">8.2. Missing support for interpolation and point-Fields</a></li>
<li><a href="#orgd92d3b3">8.3. Caching of loaded fields not working</a></li>
<li><a href="#org04ea45f">8.4. Possible enhancements of the code</a>
<ul>
<li><a href="#org4d1c9c0">8.4.1. Pointers in the driver code</a></li>
</ul>
</li>
<li><a href="#org9f83d6f">8.5. Possible memory loss</a></li>
<li><a href="#org46ca37c">8.6. Non-treatment of the inner product <code>&amp;</code> of symmetric tensors</a></li>
<li><a href="#orge4c9fb1">8.7. No point-vector construction for Subsets</a></li>
<li><a href="#org6c95b5e">8.8. No tab-completion for regular Python-shell and old IPython-versions</a></li>
<li><a href="#org0b96cab">8.9. Failure of <code>groovyBC</code> for <code>commsType</code> <code>blocking</code></a></li>
<li><a href="#orga8c743b">8.10. Failure with <code>sampledSurfaces</code> that change size on certain distros</a></li>
<li><a href="#org35a3c23">8.11. <code>solverPerformanceToGlobalVariables</code> only works for scalar fields</a></li>
</ul>
</li>
<li><a href="#orgf8c87bd">9. History</a>
<ul>
<li><a href="#org5923608">9.1. 2010-09-13 - version number : 0.1</a></li>
<li><a href="#org5576511">9.2. 2010-12-18 - version number : 0.1.1</a>
<ul>
<li><a href="#org37597db">9.2.1. Parser for <code>sampledSurfaces</code></a></li>
<li><a href="#org568723a">9.2.2. Multiline <code>variables</code></a></li>
<li><a href="#org2abf776">9.2.3. Two maintainance-scripts were added</a></li>
<li><a href="#orgfeb9166">9.2.4. Parsers using 'external variables' are now run-time selectable</a></li>
</ul>
</li>
<li><a href="#org51faeaa">9.3. 2011-01-30 - version number : 0.1.2</a>
<ul>
<li><a href="#org8c24bea">9.3.1. Support for <i>Finite Area</i>-stuff</a></li>
<li><a href="#orgd084e7a">9.3.2. Bugfix for compiling in single precision</a></li>
<li><a href="#orgc9a782e">9.3.3. New function <code>nearDist</code></a></li>
</ul>
</li>
<li><a href="#orgf7da55b">9.4. 2011-04-20 - version number : 0.1.3</a>
<ul>
<li><a href="#orgf0f1550">9.4.1. New utility <code>funkySetAreaField</code></a></li>
<li><a href="#orga791bd6">9.4.2. Refactoring of <code>groovyBC</code> and groovified boundary conditions</a></li>
<li><a href="#org0045761">9.4.3. Easier deployment</a></li>
<li><a href="#org836cab2">9.4.4. Force equations</a></li>
<li><a href="#org2d22b9c">9.4.5. New utility <code>funkyDoCalc</code></a></li>
<li><a href="#org54b113b">9.4.6. Debian packaging</a></li>
<li><a href="#org7c1ad65">9.4.7. Lookup-tables</a></li>
<li><a href="#orgf98d294">9.4.8. Stored variables</a></li>
<li><a href="#org2f32301">9.4.9. Sampled sets</a></li>
</ul>
</li>
<li><a href="#org37b772f">9.5. 2011-07-26 - version number : 0.1.4</a>
<ul>
<li><a href="#orgb5ded52">9.5.1. Port to OpenFOAM 2.0</a></li>
<li><a href="#org8033a3a">9.5.2. New features:</a>
<ul>
<li><a href="#org7fdcb0d">9.5.2.1. Rewrite of <code>rand</code> and <code>randNormal</code></a></li>
<li><a href="#org57b5527">9.5.2.2. Binary <code>min</code> and <code>max</code></a></li>
<li><a href="#org33fdd24">9.5.2.3. Allow writing of only volume-fields in <code>funkySetAreaFields</code></a></li>
<li><a href="#org76374d5">9.5.2.4. Internal changes</a></li>
</ul>
</li>
<li><a href="#orge8dd339">9.5.3. Bug-fixes</a>
<ul>
<li><a href="#orgca215ee">9.5.3.1. <code>funkySetAreaFields</code> did not check for the correct fields</a></li>
<li><a href="#org9c40eb1">9.5.3.2. <code>surfaceProxy</code> uses the wrong geometric data</a></li>
<li><a href="#orgec496c7">9.5.3.3. Avoid floating point exceptions with division of fields</a></li>
</ul>
</li>
<li><a href="#org83ec7dc">9.5.4. Packaging</a>
<ul>
<li><a href="#org874103f">9.5.4.1. Update Debian packaging</a></li>
<li><a href="#orge9e48bc">9.5.4.2. Deployment scripts</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org669df64">9.6. 2011-10-03 - version number : 0.1.5</a>
<ul>
<li><a href="#orgb6be5c1">9.6.1. New features</a>
<ul>
<li><a href="#orgb388a8f">9.6.1.1. <code>replayTransientBC</code> now supports multiple regions</a></li>
<li><a href="#orge22af5b">9.6.1.2. <code>replayTransientBC</code> allows execution of functionObjects</a></li>
<li><a href="#org199acf5">9.6.1.3. <code>Python</code>-embedding</a></li>
<li><a href="#org7f71b95">9.6.1.4. Global variables</a></li>
<li><a href="#org4b3f5ba">9.6.1.5. Using OF 2.0 codeStreams</a></li>
<li><a href="#orga447b61">9.6.1.6. Simplified boundary condition <code>groovyBCFixedValue</code></a></li>
<li><a href="#org39702f2">9.6.1.7. Function objects to solve PDEs</a></li>
</ul>
</li>
<li><a href="#org440ce7f">9.6.2. Administrative and packaging</a>
<ul>
<li><a href="#orgddf2d26">9.6.2.1. Inject <code>swak4Foam</code> into a distro</a></li>
<li><a href="#orgd577f65">9.6.2.2. Absorb <code>simpleFunctionObjects</code></a></li>
</ul>
</li>
<li><a href="#org507b5dd">9.6.3. Bugfixes</a>
<ul>
<li><a href="#org1823605">9.6.3.1. Variables not working for parallel computations</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org66304f7">9.7. 2012-01-04 - version number : 0.1.6</a>
<ul>
<li><a href="#org7614a05">9.7.1. Cases changed</a>
<ul>
<li><a href="#orge5b108f">9.7.1.1. <code>circulatingSplash</code></a></li>
</ul>
</li>
<li><a href="#orgcf060f0">9.7.2. Infrastructure</a>
<ul>
<li><a href="#orgede8018">9.7.2.1. Check for correct <code>bison</code>-version</a></li>
<li><a href="#org303124d">9.7.2.2. Supply a header with preprocessor-symbols about the used OF-version</a></li>
</ul>
</li>
<li><a href="#org6c0e649">9.7.3. Technical</a>
<ul>
<li><a href="#org766bad7">9.7.3.1. Refactoring of the FieldDriver</a></li>
<li><a href="#org7852c18">9.7.3.2. Refactoring of the FaFieldDriver</a></li>
<li><a href="#org3f0f2a9">9.7.3.3. Writing of <code>storedVariables</code></a></li>
<li><a href="#org2527605">9.7.3.4. <code>simpleFunctionObjects</code> now write vectors and tensors without brackets</a></li>
<li><a href="#orgef33c10">9.7.3.5. A <i>default mesh</i> for the drivers exists</a></li>
</ul>
</li>
<li><a href="#orge0a57a9">9.7.4. New features</a>
<ul>
<li><a href="#orgcfde53f">9.7.4.1. General <code>phi</code> in <code>solveTransportPDE</code></a></li>
<li><a href="#orgac691e3">9.7.4.2. <code>funkySetFields</code> now also writes surfaceFields</a></li>
<li><a href="#orgeed3acf">9.7.4.3. Function objects now <code>surfaceField</code>-aware</a></li>
<li><a href="#orgd45f28a">9.7.4.4. <code>funkySetFields</code> and function objects support tensors</a></li>
<li><a href="#org834e9ae">9.7.4.5. Extension of the <code>expressionToFace</code> <code>topoSet</code></a></li>
<li><a href="#org13df1ad">9.7.4.6. <code>addGlobalVariable</code> allows setting more than one value</a></li>
<li><a href="#org863697a">9.7.4.7. Function object <code>calculateGlobalVariables</code></a></li>
<li><a href="#orgc7aac51">9.7.4.8. Generate a dummy <code>phi</code> in <code>replayTransientBC</code></a></li>
<li><a href="#org61e0540">9.7.4.9. Function object to dump expression results</a></li>
<li><a href="#orgb0c68c9">9.7.4.10. Additional options for <code>funkySetFields</code></a></li>
<li><a href="#org11f980d">9.7.4.11. Boundary condition <code>groovcBCDirection</code></a></li>
<li><a href="#org9050ac8">9.7.4.12. Boundary condition <code>groovyBCJump</code></a></li>
<li><a href="#org189e2d9">9.7.4.13. <code>simpleFunctionObjects</code> write CSV-files</a></li>
<li><a href="#orga9599f4">9.7.4.14. Submeshes automatically read if <code>searchOnDisc</code> specified</a></li>
<li><a href="#orgb1fb839">9.7.4.15. Conditional <code>functionObjects</code></a></li>
<li><a href="#org966119c">9.7.4.16. <code>functionObject</code> that reads gravitation</a></li>
<li><a href="#org0fb02d6">9.7.4.17. PDE-functionObjects for <code>finiteArea</code></a></li>
<li><a href="#org32070c4">9.7.4.18. Subclass to <code>DataEntry</code> that uses <i>swak</i>-expressions</a></li>
<li><a href="#org26ae726">9.7.4.19. <code>funkySetAreaField</code> now also writes edgeFields</a></li>
</ul>
</li>
<li><a href="#org1caffb3">9.7.5. Bug fixes</a>
<ul>
<li><a href="#org0f16cca">9.7.5.1. Compilation with Intel-Compiler possible</a></li>
<li><a href="#orgf5eb7de">9.7.5.2. Access to tensor-components not working</a></li>
<li><a href="#org34e9769">9.7.5.3. Constants for surfaceFields not working</a></li>
<li><a href="#org034c852">9.7.5.4. <code>snGrad</code> does not work for patches if the file is on disc</a></li>
<li><a href="#org03a0ba0">9.7.5.5. <code>potentialFoam</code> does not correctly use a <code>groovyBC</code></a></li>
<li><a href="#orgf7c178d">9.7.5.6. Extra evaluation of boundary conditions causes failure</a></li>
</ul>
</li>
<li><a href="#orge94c928">9.7.6. Discontinued features</a>
<ul>
<li><a href="#org3496431">9.7.6.1. <code>groovyFlowRateInletVelocity</code></a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org49ec949">9.8. 2012-04-13 - version number : 0.2.0 Friday the 13th</a>
<ul>
<li><a href="#orgfca7461">9.8.1. New features</a>
<ul>
<li><a href="#org761b730">9.8.1.1. Region name in <code>simpleFunctionObject</code>.outputs</a></li>
<li><a href="#org4d57f95">9.8.1.2. Temporal operators <code>ddt</code> and <code>oldTime</code></a></li>
<li><a href="#org677b68b">9.8.1.3. Boundary condition <code>groovcBCDirection</code></a></li>
<li><a href="#org361e7ee">9.8.1.4. Boundary condition <code>groovyBCJump</code></a></li>
<li><a href="#orgff98880">9.8.1.5. Function to return the position of minimum and maximum</a></li>
<li><a href="#org27b0bd4">9.8.1.6. Support for <code>pointFields</code> in the field-parsers</a></li>
<li><a href="#orge4f5511">9.8.1.7. Support for tensors in the <code>finiteArea</code>-field parser</a></li>
<li><a href="#orgc8af90e">9.8.1.8. New convenience-variables for the Python-Integration</a></li>
<li><a href="#org4a481c0">9.8.1.9. Additional operators from the <code>fvc</code>-namespace</a></li>
</ul>
</li>
<li><a href="#orgdd1974c">9.8.2. Infrastructure</a>
<ul>
<li><a href="#orgb2e50b9">9.8.2.1. Full parallel compilation</a></li>
<li><a href="#org49b738c">9.8.2.2. Version numbers and version number reporting</a></li>
</ul>
</li>
<li><a href="#orgcf2a249">9.8.3. Packaging</a>
<ul>
<li><a href="#org90f76c7">9.8.3.1. Update of the Debian-Packaging</a></li>
</ul>
</li>
<li><a href="#org2fc9efe">9.8.4. Changes in the behavior</a>
<ul>
<li><a href="#orgb439b75">9.8.4.1. Directory variables in Python-integration</a></li>
<li><a href="#orgaaf64ad">9.8.4.2. User must acknowledge parallelization in Python-integration</a></li>
</ul>
</li>
<li><a href="#org2ee34c5">9.8.5. Bug fixes</a>
<ul>
<li><a href="#org1391e45">9.8.5.1. <code>interFoam</code>-based example solvers do not compile on 2.1</a></li>
<li><a href="#org5e0d59f">9.8.5.2. <code>-allowFunctionObjects</code>-option not working for <code>replayTransientBC</code></a></li>
<li><a href="#org6bab720">9.8.5.3. Field itself can not be used in <code>funkySetBoundaryField</code></a></li>
<li><a href="#org8092702">9.8.5.4. No gradient for vectors in FieldParser</a></li>
<li><a href="#orge6ff9ac">9.8.5.5. Some operators for tensors not working in 1.6-ext</a></li>
<li><a href="#org967e469">9.8.5.6. <code>x</code>, <code>y</code>, <code>z</code> and <code>xy</code> etc not available as field names</a></li>
<li><a href="#org1562cc7">9.8.5.7. Missing tensor components for point-Fields in some parsers</a></li>
<li><a href="#org72af24f">9.8.5.8. No vector construction possible for point-vectors (and tensors) in PatchField</a></li>
<li><a href="#org6617aa0">9.8.5.9. Incomprehensible error message in <code>funkySetFields</code> if the field is missing</a></li>
<li><a href="#org0fc7bc6">9.8.5.10. Missing <code>magSqr</code> in parsers</a></li>
<li><a href="#org57d597c">9.8.5.11. Wrong size when composing vectors and tensors for point-fields</a></li>
<li><a href="#org6d3c030">9.8.5.12. <code>icc</code> does not compile <code>executeIfExecutableFitsFunctionObject</code> on Linux</a></li>
<li><a href="#org4fb1178">9.8.5.13. Enhancement to the <code>trackDictionary</code>-functionObject</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org274d61d">9.9. 2012-10-18 - version number : 0.2.1</a>
<ul>
<li><a href="#org657c240">9.9.1. Requirements</a>
<ul>
<li><a href="#org7d83ea8">9.9.1.1. <code>flex 2.5.35</code></a></li>
<li><a href="#org58deed6">9.9.1.2. <code>bison 2.4</code></a></li>
</ul>
</li>
<li><a href="#org69d9498">9.9.2. Bug fixes</a>
<ul>
<li><a href="#orge769ee9">9.9.2.1. Make sure that <code>Allwmake</code> always uses the <code>bash</code></a></li>
<li><a href="#org42d4727">9.9.2.2. <code>downloadSimpleFunctionObjects.sh</code> still in Makefile</a></li>
<li><a href="#org2b69549">9.9.2.3. <code>grad</code> in fields added dimensions</a></li>
<li><a href="#org30dbdf5">9.9.2.4. Default <code>condition</code> for surface fields wrong size in <code>funkySetFields</code></a></li>
<li><a href="#org1f2ba16">9.9.2.5. <code>mappedFvPatch</code> not treated like regular patches</a></li>
<li><a href="#orgb089f89">9.9.2.6. <code>flip()</code> for <code>faceSet</code> not correctly calculated</a></li>
<li><a href="#orgc4bb4f9">9.9.2.7. <code>fset()</code> crashes when <code>faceSet</code> has boundary faces</a></li>
<li><a href="#org0e21435">9.9.2.8. <code>groovyBC</code> produced incorrect results with <code>wallHeatFlux</code> etc</a></li>
<li><a href="#org0959ecb">9.9.2.9. Global variables not found in <code>faField</code></a></li>
<li><a href="#org303ac6a">9.9.2.10. Wrong type of condition field in <code>funkySetAreaFields</code></a></li>
<li><a href="#orgd442da7">9.9.2.11. <code>calculated</code>-patches \(0\) for some operations</a></li>
<li><a href="#org00fb866">9.9.2.12. <code>sqr</code> of a <code>vector</code> should produce a <code>symmTensor</code></a></li>
<li><a href="#org069c192">9.9.2.13. <code>funkySetFields</code> produced wrong values on processor patches</a></li>
<li><a href="#orgdb0bf5d">9.9.2.14. <code>sortedToc</code> does not exist for <code>1.6-ext</code></a></li>
<li><a href="#org31569ed">9.9.2.15. Wrong <code>size()</code> and <code>pointSize()</code> reported for <code>FaField</code>-driver</a></li>
<li><a href="#org6a88609">9.9.2.16. Memory leak in the field drivers</a></li>
<li><a href="#org1146cb3">9.9.2.17. Maintenance scripts not working with non-=bash= <code>/bin/sh</code></a></li>
<li><a href="#orge4d586d">9.9.2.18. <code>cof</code> and <code>diag</code> undefined</a></li>
<li><a href="#orgf95bc2a">9.9.2.19. No new file created if number of patches for patchAverage changes</a></li>
<li><a href="#org29fb2e6">9.9.2.20. <code>variables</code> intolerant on spaces</a></li>
<li><a href="#org3bc2088">9.9.2.21. Missing <code>div</code>-operations</a></li>
<li><a href="#org84f22a3">9.9.2.22. Fields created by <code>expressionField</code> written too late</a></li>
<li><a href="#orgfb0486a">9.9.2.23. <code>storedVariables</code> did not require a <code>initialValue</code></a></li>
<li><a href="#org228e001">9.9.2.24. Dimension checking makes <code>expressionField</code> fail</a></li>
<li><a href="#orga335fea">9.9.2.25. <code>expressionField</code> at last timestep not written</a></li>
<li><a href="#orga5c577c">9.9.2.26. <code>groovyBC</code> makes <code>interFoam</code>-runs fail unpredictably</a></li>
<li><a href="#org589dc16">9.9.2.27. Global variables of different sizes break parallel runs</a></li>
<li><a href="#orgff1e5ed">9.9.2.28. Fields treated with <code>readAndUpdateFields</code> were written one timestep too late</a></li>
</ul>
</li>
<li><a href="#org950906c">9.9.3. Enhancements</a>
<ul>
<li><a href="#orgde474fc">9.9.3.1. Topology-operators now support <code>variables</code> etc</a></li>
<li><a href="#orgb40bb42">9.9.3.2. Fields touched by <code>manipulateField</code> being written</a></li>
<li><a href="#orge7fd994">9.9.3.3. Indicator functions <code>onPatch</code> and <code>internalFace</code> added to field-expressions</a></li>
<li><a href="#org348f3be">9.9.3.4. Non-uniform second argument for <code>pow</code></a></li>
<li><a href="#orga84cf6d">9.9.3.5. Added transpose to the tensors</a></li>
<li><a href="#org4611ed8">9.9.3.6. Added unit tensor <code>I</code> to parsers</a></li>
<li><a href="#org5c2a1f8">9.9.3.7. Added the <i>Hodge dual</i> operator</a></li>
<li><a href="#org36395f1">9.9.3.8. <code>replayTransientBC</code> can now switch on function-objects via dictionary</a></li>
<li><a href="#orgbb00681">9.9.3.9. <code>replayTransientBC</code> can now create a <code>phi</code>-field via dictionary</a></li>
<li><a href="#orgc7231c1">9.9.3.10. <code>expressionField</code> now allows the specification of a dimension</a></li>
</ul>
</li>
<li><a href="#org26392a3">9.9.4. New features</a>
<ul>
<li><a href="#org3a669bf">9.9.4.1. Allow dynamically loaded plugins that add new functions to parsers</a></li>
<li><a href="#orgd9fdb9a">9.9.4.2. Dynamically generated lists of <code>functionObjects</code></a></li>
<li><a href="#org48d86e6">9.9.4.3. Function object <code>readAndUpdateFields</code></a></li>
<li><a href="#org42910e9">9.9.4.4. Source terms based on <code>basicSource</code></a></li>
<li><a href="#orgf9c871b">9.9.4.5. Function objects that stop a run gracefully</a></li>
<li><a href="#orgfbf46c8">9.9.4.6. Function-objects to load thermophysical and turbulence models</a></li>
<li><a href="#org3de2bb9">9.9.4.7. Function-objects that create and evolve clouds of lagrangian particles</a></li>
<li><a href="#org509bf7d">9.9.4.8. Function-object <code>manipulatePatchField</code> to manipulate the field on patches</a></li>
<li><a href="#org3ac958b">9.9.4.9. Delayed variables to simulate responses</a></li>
<li><a href="#org348ffda">9.9.4.10. Allow preloading of fields in <code>funkySetFields</code></a></li>
</ul>
</li>
<li><a href="#org4cda2d8">9.9.5. Infrastructure</a>
<ul>
<li><a href="#org361f763">9.9.5.1. Compilation script checks <code>SWAK4FOAM_SRC</code></a></li>
<li><a href="#org51d1924">9.9.5.2. <code>Allwmake</code> creates symbolic links in <code>swakFiniteArea</code></a></li>
<li><a href="#org658a1ff">9.9.5.3. Reformatting of the parser sources</a></li>
<li><a href="#orgabb9ca1">9.9.5.4. Move non-parser sources in <code>swak4FoamParsers</code> into sub-directories</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#orga5d994b">9.10. 2013-02-28 - version number : 0.2.2</a>
<ul>
<li><a href="#orgb2f7db2">9.10.1. Incompatibilities to previous versions</a>
<ul>
<li><a href="#orgb1f4d1b">9.10.1.1. Python-integration library renamed</a></li>
<li><a href="#orga53dbcb">9.10.1.2. Change in write behaviour of <code>expressionField</code> and <code>manipulateField</code></a></li>
</ul>
</li>
<li><a href="#org56aad7a">9.10.2. Bug fixes</a>
<ul>
<li><a href="#orgb810664">9.10.2.1. 2.x-branch did not compile on 2.0</a></li>
<li><a href="#orge8b2eee">9.10.2.2. <code>groovyBC</code>: <code>value</code> reset to \(0\) during construction</a></li>
<li><a href="#orgd8dc9b7">9.10.2.3. Unspecified <code>value</code> in <code>addGlobalVariables</code> produces obscure error message</a></li>
<li><a href="#orgfb2420a">9.10.2.4. Did not compile on <code>1.6-ext</code></a></li>
<li><a href="#org62a8179">9.10.2.5. Python integration did not get global variables</a></li>
<li><a href="#orgfcc2526">9.10.2.6. <code>maintainanceScripts/makeSwakVersionFile.py</code> failed when no Mercurial is installed</a></li>
<li><a href="#org2a0f67a">9.10.2.7. Non-uniform variables for <code>internalField</code> only worked correctly for volume fields</a></li>
<li><a href="#org00138da">9.10.2.8. Division of <code>faceFields</code> causes division by zero</a></li>
<li><a href="#org51784e2">9.10.2.9. <code>valuePatches</code> did not work for mapped patches</a></li>
<li><a href="#org025e8d0">9.10.2.10. Recent versions of 2.1.x break compilation of <code>CommonValueExpressionDriver.C</code></a></li>
<li><a href="#org3438968">9.10.2.11. <code>expressionField</code> and <code>manipulateField</code> did not honor the <code>outputControl</code>-entry</a></li>
<li><a href="#orgec6fbb9">9.10.2.12. Double <code>namespace Foam</code> makes compilation of <code>groovyJump</code> fail with <code>icc</code></a></li>
</ul>
</li>
<li><a href="#org0714da0">9.10.3. New Examples</a>
<ul>
<li><a href="#orgd33a946">9.10.3.1. Cases from the <i>OSCFD12</i> Conference in London</a></li>
</ul>
</li>
<li><a href="#org6633620">9.10.4. New features</a>
<ul>
<li><a href="#orgf11f1ce">9.10.4.1. Access fields from different cases</a></li>
<li><a href="#orga59e97e">9.10.4.2. Patch-expressions now support mapped-patches</a></li>
<li><a href="#org2153042">9.10.4.3. Function objects that manipulate time</a></li>
<li><a href="#org7054fa9">9.10.4.4. Plugin-functions for chemical model</a></li>
<li><a href="#org47b3c1b">9.10.4.5. Plugin-functions for radiation model</a></li>
</ul>
</li>
<li><a href="#orgfee3070">9.10.5. Enhancements</a>
<ul>
<li><a href="#orgdebb607">9.10.5.1. Python-Integration now supports numpy-arrays</a></li>
<li><a href="#org6fc4dc9">9.10.5.2. Optional parameter <code>writeCode=/=writeFile</code> for <code>pythonIntegrationFunctionObject</code></a></li>
<li><a href="#org62b36ef">9.10.5.3. Python-integration has convenience-functions to create data files</a></li>
<li><a href="#orgb120a39">9.10.5.4. Switch off dimension checking in <code>funkyDoCalc</code></a></li>
<li><a href="#orgdee535d">9.10.5.5. <code>funkySetFields</code> allows accessing fields from another mesh</a></li>
<li><a href="#org3ed3dc7">9.10.5.6. <code>funkyDoCalc</code> allows specifying foreign meshes</a></li>
<li><a href="#org741c326">9.10.5.7. Function objects to load and update foreign meshes</a></li>
<li><a href="#org49efd4c">9.10.5.8. <code>replaxTransientBC</code> outputs timestep</a></li>
<li><a href="#org36bc4a9">9.10.5.9. New accumulation <code>weightedAverage</code></a></li>
<li><a href="#org19c6a4d">9.10.5.10. <code>expressionField</code> reports name and type of the created field</a></li>
<li><a href="#org3903fda">9.10.5.11. New boundary condition <code>groovyPartialSlip</code> in <code>groovyStandardBCs</code></a></li>
<li><a href="#orgf8c7a86">9.10.5.12. <code>funkySetFields</code> allows switching off the correction of BCs</a></li>
<li><a href="#org0dea3b3">9.10.5.13. Allow selection of additional regions in <code>funkySetFields</code></a></li>
<li><a href="#org2694438">9.10.5.14. Adding a <code>-preloadFields</code>-option to <code>funkySetFields</code></a></li>
<li><a href="#org16c6791">9.10.5.15. <code>replayTransientBC</code> now supports all volume types</a></li>
<li><a href="#org581be25">9.10.5.16. <code>replayTransientBC</code> preloads fields</a></li>
<li><a href="#orgb0ab3e1">9.10.5.17. <code>replayTransientBC</code> allows selection of time-steps</a></li>
</ul>
</li>
<li><a href="#orgfc3ea3c">9.10.6. Infrastructure</a>
<ul>
<li><a href="#orgebab8dd">9.10.6.1. <code>Allwmake</code> stops if building of <code>swak4FoamParsers</code> fails</a></li>
<li><a href="#orgd7c36ee">9.10.6.2. Header <code>swak.H</code> with version information and macros</a></li>
<li><a href="#orge46d568">9.10.6.3. <code>accumulations</code>-entries converted to <code>NamedEnums</code></a></li>
<li><a href="#orgbf87c54">9.10.6.4. Additional maintenance script for special python-versions</a></li>
</ul>
</li>
<li><a href="#orgc20d204">9.10.7. Cosmetics</a>
<ul>
<li><a href="#orgdb1f66b">9.10.7.1. Change type of <code>name</code> in parsers to <code>word</code></a></li>
<li><a href="#org345e3cd">9.10.7.2. Updated contributor lists in <code>README</code> and sources</a></li>
<li><a href="#org59d1478">9.10.7.3. Rewritten methods that return pointers</a></li>
</ul>
</li>
<li><a href="#orgd9bd0a5">9.10.8. Documentation</a>
<ul>
<li><a href="#orgc103c67">9.10.8.1. Start of the reference-manual</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#orgfa2e9ed">9.11. 2013-03-18 - version number : 0.2.3</a>
<ul>
<li><a href="#orgac0bbbc">9.11.1. Supports OpenFOAM 2.2</a></li>
<li><a href="#org8e9b76d">9.11.2. Incompatibilities to previous versions</a>
<ul>
<li><a href="#orgf5ea5ca">9.11.2.1. <code>simpleFunctionObjects</code> and <code>simpleLagrangianFunctionObjects</code> no longer independent from rest</a></li>
</ul>
</li>
<li><a href="#org5c59687">9.11.3. Bug fixes</a>
<ul>
<li><a href="#orgafe183d">9.11.3.1. Compiles on <code>1.6-ext</code> again</a></li>
<li><a href="#orgb9fcf43">9.11.3.2. Missing field files for the OSCFD2012-cases</a></li>
<li><a href="#org203b1ef">9.11.3.3. Did not compile on <code>2.0.x</code></a></li>
</ul>
</li>
<li><a href="#org3e7cd46">9.11.4. New features</a>
<ul>
<li><a href="#orgdb89cb2">9.11.4.1. Writing of sampled surfaces and sampled sets</a></li>
</ul>
</li>
<li><a href="#org6a9fc17">9.11.5. Enhancements</a>
<ul>
<li><a href="#orgd299ba6">9.11.5.1. Parsers now support <code>eigenValues</code> and <code>eigenVectors</code></a></li>
<li><a href="#org0bbfa45">9.11.5.2. Extract rows from tensors with component operator</a></li>
<li><a href="#org97baab6">9.11.5.3. Variable names that are identical to fields trigger a Warning</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org581c7bd">9.12. 2013-05-24 - version number : 0.2.4</a>
<ul>
<li><a href="#org6feb20d">9.12.1. Incompatibilities to previous versions</a>
<ul>
<li><a href="#org13577d5">9.12.1.1. Data directories now generated in folder <code>postProcessing</code> instead of case folder</a></li>
<li><a href="#org041a825">9.12.1.2. <code>ExpressionResult</code> from old versions are not correctly read</a></li>
<li><a href="#orgaf47cdb">9.12.1.3. Adaption of cases to 2.2</a></li>
</ul>
</li>
<li><a href="#org571dd67">9.12.2. Infrastructure</a>
<ul>
<li><a href="#orgc588e43">9.12.2.1. Additional flags for the compilation of the parsers</a></li>
<li><a href="#orgc1cd6df">9.12.2.2. Use <code>bash</code> instead of <code>sh</code> in maintainance scripts</a></li>
<li><a href="#orgb8249b1">9.12.2.3. Build-script prints swak-version in the beginning</a></li>
</ul>
</li>
<li><a href="#orgfca88e5">9.12.3. Cosmetics</a>
<ul>
<li><a href="#orge8a44e6">9.12.3.1. Methods use <code>word</code> for names instead of <code>string</code></a></li>
</ul>
</li>
<li><a href="#org5675118">9.12.4. Bug fixes</a>
<ul>
<li><a href="#org512a6a3">9.12.4.1. Compilation on Fujitsu (and probably Intel) compilers</a></li>
<li><a href="#org88607a1">9.12.4.2. <code>executeIf</code>-function objects are executed if <code>readDuringConstruction</code> is set to <code>true</code></a></li>
<li><a href="#orgf977180">9.12.4.3. Expression results are not correctly read from binary file</a></li>
<li><a href="#org0642968">9.12.4.4. Generated fields like <code>vol()</code> were registered</a></li>
<li><a href="#org72175ae">9.12.4.5. Missing files in <code>potentialPitzDaily</code>-case</a></li>
<li><a href="#orgc176940">9.12.4.6. <code>log(vol())</code> gives floating point exception</a></li>
</ul>
</li>
<li><a href="#orgb6f6750">9.12.5. New features</a>
<ul>
<li><a href="#orgf8bd6dc">9.12.5.1. Library with additional <code>searchableSurfaces</code></a></li>
<li><a href="#orgfcaaafc">9.12.5.2. New variable type <code>StackedExpressionResult</code></a></li>
<li><a href="#org8660b2b">9.12.5.3. Function object <code>dumpGlobalVariable</code></a></li>
<li><a href="#orgb21e24b">9.12.5.4. Function object <code>removeGlobalVariable</code></a></li>
<li><a href="#org4225e9f">9.12.5.5. Optional entry <code>aliases</code> for parser specifications</a></li>
<li><a href="#org2ffd7db">9.12.5.6. Function object to dump registered objects</a></li>
<li><a href="#orgfa8eb6f">9.12.5.7. Function object that only executes its children if the run is serial/parallel</a></li>
<li><a href="#org1f8301b">9.12.5.8. Function objects to calculate distributions</a></li>
</ul>
</li>
<li><a href="#org1bbeb4a">9.12.6. Enhancements</a>
<ul>
<li><a href="#orgd3d21db">9.12.6.1. Global variables now can be subclasses of <code>ExpressionResult</code></a></li>
<li><a href="#orgaf3dd09">9.12.6.2. <code>endTime</code> now added to Python-wrapper</a></li>
<li><a href="#org2e79c04">9.12.6.3. Force write if <code>endTime</code> set by time-manipulation is reached</a></li>
<li><a href="#org8a0edd8">9.12.6.4. Function-objects based on <code>patch</code> from the <code>simpleFunctionObjects</code> now accept regular expression</a></li>
<li><a href="#org05744d1">9.12.6.5. More flexible output control for functionObjects based on <code>simpleFunctionObjects</code></a></li>
<li><a href="#org97ec0bb">9.12.6.6. <code>swakDataEntry</code> improved</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org9a2dcd2">9.13. 2014-01-24 - version number : 0.3.0</a>
<ul>
<li><a href="#org7ea1410">9.13.1. Incompatibilities to previous versions</a>
<ul>
<li><a href="#org1e8ba3e">9.13.1.1. Support of <i>old</i> <code>1.6-ext</code> lost</a></li>
</ul>
</li>
<li><a href="#orgf279a18">9.13.2. New supported versions</a>
<ul>
<li><a href="#orga6118f6">9.13.2.1. Added support for Foam 3.0</a></li>
</ul>
</li>
<li><a href="#org79a91d0">9.13.3. Infrastructure</a>
<ul>
<li><a href="#orgf930e02">9.13.3.1. Make error messages in <code>Allwmake</code> more verbose</a></li>
<li><a href="#org43dbe25">9.13.3.2. <code>simpleFunctionObjects</code> no longer considered an independent project</a></li>
<li><a href="#org050f839">9.13.3.3. <code>Allwmake</code> makes sure that swak is compiled for the same installation</a></li>
<li><a href="#org8ccb0d2">9.13.3.4. Additional macros for Debugging output</a></li>
<li><a href="#org9d4b7e1">9.13.3.5. Separate option for compiling the output of <code>flex</code></a></li>
<li><a href="#orga8d3a1b">9.13.3.6. Fixing race condition with big <code>WM_NCOMPPROCS</code></a></li>
<li><a href="#org7560129">9.13.3.7. Updates to Debian-packaging</a></li>
</ul>
</li>
<li><a href="#org487e26f">9.13.4. Documentation</a>
<ul>
<li><a href="#org5378a0f">9.13.4.1. Documentation of <code>accumulations</code></a></li>
<li><a href="#org19fd9a2">9.13.4.2. General documentation of the Python-embedding</a></li>
</ul>
</li>
<li><a href="#org22dfdf2">9.13.5. Incompatibilities to previous versions</a>
<ul>
<li><a href="#org98af9fb">9.13.5.1. <code>outputControlMode</code> <code>timestep</code> renamed to <code>timeStep</code></a></li>
</ul>
</li>
<li><a href="#org28f83a0">9.13.6. Bug fixes</a>
<ul>
<li><a href="#org3df741a">9.13.6.1. Missing <code>timeSet</code> in function-objects</a></li>
<li><a href="#org6647ce4">9.13.6.2. <code>sourceImplicit</code> unstable</a></li>
<li><a href="#org4a44bd0">9.13.6.3. Fixed bug were only one <code>swakCoded</code> worked at a time</a></li>
<li><a href="#orgc172b46">9.13.6.4. Incorrectly read entries in <code>swakCoded</code></a></li>
<li><a href="#org2a29057">9.13.6.5. No logical variables found by most parsers</a></li>
<li><a href="#orgfb07946">9.13.6.6. <code>sampledSurface</code> not correctly updated at time of write</a></li>
<li><a href="#org7333409">9.13.6.7. <code>sumMag</code>-accumulation now working</a></li>
<li><a href="#org607ece4">9.13.6.8. Calculation of weight fields failed if size on one processor was \(0\)</a></li>
<li><a href="#org78a2d07">9.13.6.9. <code>groovyTotalPressure</code> does not read <code>value</code></a></li>
<li><a href="#orgab82de7">9.13.6.10. For multiple times the option <code>addDummyPhi</code> makes <code>funkySetFields</code> crash</a></li>
<li><a href="#org0ee7264">9.13.6.11. <code>aliases</code> not constructed from dictionary</a></li>
<li><a href="#org5bf9de6">9.13.6.12. Gravity not correctly passed in <code>evolveXXCloud</code></a></li>
<li><a href="#org36b5518">9.13.6.13. <code>writeOften</code> writes all the time</a></li>
<li><a href="#org68d60f4">9.13.6.14. Python-integration does not return single scalars as uniform</a></li>
<li><a href="#org9d74187">9.13.6.15. <code>basicSource</code> working again for OF 2.1</a></li>
<li><a href="#org8933283">9.13.6.16. <code>faceZone</code> and <code>faceSet</code> do not correctly work on parallel runs</a></li>
<li><a href="#org8b03e06">9.13.6.17. Allow user to override <code>notImplemented</code> in <code>movePoints</code> and <code>moveMesh</code> of function objects</a></li>
</ul>
</li>
<li><a href="#orgea1a217">9.13.7. New features</a>
<ul>
<li><a href="#org7df53f8">9.13.7.1. Function object that executes if the OpenFOAM-version is right</a></li>
<li><a href="#orgdfc1782">9.13.7.2. Function object that is only executed if the current time is the <code>startTime</code></a></li>
<li><a href="#org98f722d">9.13.7.3. Function object that calculates the potential flow</a></li>
<li><a href="#org96d43e2">9.13.7.4. Function object that forces a recalculation of <code>phi</code></a></li>
<li><a href="#org760d8ed">9.13.7.5. Function object that corrects thermophysical model</a></li>
<li><a href="#org16bd01b">9.13.7.6. Function objects that recalculate the energy of a thermophysical model</a></li>
<li><a href="#org8d31b02">9.13.7.7. Function object that calculates the average of one variable as a function of another</a></li>
<li><a href="#orgffa1627">9.13.7.8. New utility <code>fieldReport</code></a></li>
<li><a href="#org39415fe">9.13.7.9. New utility <code>funkyPythonPostproc</code></a></li>
<li><a href="#orga13d9a8">9.13.7.10. New utility <code>funkySetLagrangianParticle</code></a></li>
</ul>
</li>
<li><a href="#org1a962e8">9.13.8. Enhancements</a>
<ul>
<li><a href="#org2602635">9.13.8.1. Additional parser for lagrangian particles</a></li>
<li><a href="#org55c210e">9.13.8.2. Function objects that calculate PDEs can use fields from memory</a></li>
<li><a href="#orgeec096e">9.13.8.3. Function objects that calculate PDEs can write fields before solving</a></li>
<li><a href="#org3fa9915">9.13.8.4. simpleFunctionObjects have addition <code>outputControlMode</code></a></li>
<li><a href="#orge10c5b8">9.13.8.5. Conditional functionObjects now have optional <code>else</code></a></li>
<li><a href="#orge46256c">9.13.8.6. <code>swakCoded</code> now allows addition of data to functionObject</a></li>
<li><a href="#org4e6f930">9.13.8.7. Parsers in <code>swakFiniteArea</code> no also have complete tensor-operations</a></li>
<li><a href="#org04963f6">9.13.8.8. <code>swakExpressionDistribution</code> now allows non-scalar weights</a></li>
<li><a href="#orgd9e77b3">9.13.8.9. More options for <code>accumulations</code></a></li>
<li><a href="#org9f613ef">9.13.8.10. Python code files are now searched more flexible</a></li>
<li><a href="#org290d6cd">9.13.8.11. Python integration now uses <code>IPython</code> if possible</a></li>
<li><a href="#orgfeff06e">9.13.8.12. Preload libraries in the Python integration</a></li>
<li><a href="#orgf32e942">9.13.8.13. Added standard function <code>weight()</code></a></li>
<li><a href="#orgca22499">9.13.8.14. <code>funkyDoCalc</code> now writes files</a></li>
<li><a href="#orga7c7881">9.13.8.15. PDE-functionObjects now relax their equations</a></li>
<li><a href="#orgf566421">9.13.8.16. Full set of <code>laplacian</code>-operations in <code>internalField</code>-parser</a></li>
<li><a href="#org3f0fa59">9.13.8.17. Function object <code>swakExpression</code> now has optional <code>mask</code></a></li>
</ul>
</li>
<li><a href="#org97b80c4">9.13.9. Examples</a>
<ul>
<li><a href="#org3da7ce0">9.13.9.1. Moved the OSCFD-examples to a different directory</a></li>
<li><a href="#orgac16b2f">9.13.9.2. Added examples from the swak-training at the 8th Workshop</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#orgd54014e">9.14. 2014-07-11 - version number : 0.3.1</a>
<ul>
<li><a href="#org370f7d2">9.14.1. Incompatibilities to previous versions</a>
<ul>
<li><a href="#orgfc54980">9.14.1.1. Additional required code snipplet for some Python-functionObjects</a></li>
<li><a href="#orga991547">9.14.1.2. Dimension required for stuff in <code>swakSourceFields</code></a></li>
</ul>
</li>
<li><a href="#orgc1c8d2f">9.14.2. New supported versions</a>
<ul>
<li><a href="#orge0f40ca">9.14.2.1. Added support for OpenFOAM 2.3</a></li>
<li><a href="#org1d84f94">9.14.2.2. Added support for Foam-Extend 3.1</a></li>
</ul>
</li>
<li><a href="#org13a6622">9.14.3. Infrastructure</a>
<ul>
<li><a href="#orgd44b5ce">9.14.3.1. Improved macros for Foam versions</a></li>
<li><a href="#org41e47d9">9.14.3.2. Support for private installation of bison</a></li>
</ul>
</li>
<li><a href="#orgd6bae9b">9.14.4. Documentation</a>
<ul>
<li><a href="#org6f44a5a">9.14.4.1. Information about macro-expansion added</a></li>
</ul>
</li>
<li><a href="#orgeb70d50">9.14.5. Bug fixes</a>
<ul>
<li><a href="#orgf74be72">9.14.5.1. Invalid entries in distributions from <code>swakExpressionAverageDistribution</code></a></li>
<li><a href="#org65c8d28">9.14.5.2. <code>swakExpressionAverageDistribution</code> not correctly working in parallel</a></li>
<li><a href="#org4f92d5e">9.14.5.3. <code>fvOptions</code> in <code>swakSourceFields</code> now actually working</a></li>
<li><a href="#org53c1d11">9.14.5.4. <code>fvOptions</code> did not honor the <code>selectionMode</code>-entry</a></li>
<li><a href="#org87923f0">9.14.5.5. <code>patchFunctionObject</code> fails for some parallel runs</a></li>
<li><a href="#orgff243aa">9.14.5.6. <code>funkyPythonPostproc</code> not executing function objects</a></li>
<li><a href="#org703bf60">9.14.5.7. Temporary fields shadow 'real' fields in <code>foam-extend-3.1</code></a></li>
</ul>
</li>
<li><a href="#orgfedc21b">9.14.6. New features</a>
<ul>
<li><a href="#org60352dc">9.14.6.1. Boundary condition <code>groovyFixedNormalSlip</code> in <code>groovyStandardBCs</code></a></li>
<li><a href="#org37b0fd1">9.14.6.2. New utility <code>funkyWarpMesh</code></a></li>
<li><a href="#orga30dded">9.14.6.3. Function objects that write additional writes depending on the flow conditions</a></li>
<li><a href="#org6981460">9.14.6.4. Function object <code>writeOldTimesOnSignal</code> with new signal handlers</a></li>
<li><a href="#orge2198d6">9.14.6.5. New library with <code>fvOptions</code></a></li>
<li><a href="#org306b5ef">9.14.6.6. Macro expansion</a></li>
</ul>
</li>
<li><a href="#org1fa66e5">9.14.7. Enhancements</a>
<ul>
<li><a href="#org970a28e">9.14.7.1. <code>expressionField</code> now allows setting of dimensions</a></li>
<li><a href="#orgcf24d37">9.14.7.2. New function <code>distToPatch</code> in Field-parser</a></li>
<li><a href="#orga5c87ad">9.14.7.3. <code>panicDump</code> now allows storing old values</a></li>
<li><a href="#orgfd13b07">9.14.7.4. <code>swakExpressionAverageDistribution</code> records extremes and number of samples</a></li>
<li><a href="#orgd4365a7">9.14.7.5. Python-function objects that return a boolean now have a initialization-snipplet</a></li>
<li><a href="#org610f657">9.14.7.6. <code>fvOptions</code>-support in PDE-function objects</a></li>
</ul>
</li>
<li><a href="#orga28e1ee">9.14.8. Examples</a>
<ul>
<li><a href="#org4b13ad8">9.14.8.1. <code>other/simpleBendedPipe</code></a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#orgc94c608">9.15. 2015-05-31 - version number : 0.3.2</a>
<ul>
<li><a href="#orgfabd54e">9.15.1. Future changes</a>
<ul>
<li><a href="#orgdde37e3">9.15.1.1. Discontinuation of the <code>1.x</code>-branch</a></li>
<li><a href="#org04a4bd3">9.15.1.2. Fixing examples</a></li>
</ul>
</li>
<li><a href="#orga1f4f99">9.15.2. Incompatibilities</a>
<ul>
<li><a href="#org1e8b487">9.15.2.1. Changed behavior of <code>groovyBC</code> during initialization</a></li>
<li><a href="#org9d305b2">9.15.2.2. Changed semantics for boolean values in <code>internalField</code></a></li>
<li><a href="#org64d1072">9.15.2.3. Better detection of single values</a></li>
<li><a href="#org56f9a63">9.15.2.4. Parser for kinematic parcels replaces <code>minParticleMass</code> with <code>minParcelMass</code></a></li>
<li><a href="#orgba8cb4b">9.15.2.5. <code>SIGTERM</code> automatically switched on for parallel runs in <code>writeOldTimesOnSignal</code></a></li>
<li><a href="#orgb69b37c">9.15.2.6. Changed bin-with in <code>swakExpressionAverageDistribution</code></a></li>
<li><a href="#orgfeaf19a">9.15.2.7. <code>funkyPythonPostproc</code> writes function object data to a different directory</a></li>
</ul>
</li>
<li><a href="#org4892385">9.15.3. New supported versions</a>
<ul>
<li><a href="#org1047a79">9.15.3.1. Added support for Foam-Extend 3.2</a></li>
<li><a href="#orga1f3c6b">9.15.3.2. Added support for OpenFOAM 2.4.0</a></li>
</ul>
</li>
<li><a href="#orgd279063">9.15.4. Internals (for developers)</a>
<ul>
<li><a href="#org269579b">9.15.4.1. Type of booleans changed for <code>internalField</code></a></li>
</ul>
</li>
<li><a href="#org11f6a34">9.15.5. Bug fixes</a>
<ul>
<li><a href="#org171ebc4">9.15.5.1. <code>swakExpressionAverageDistribution</code> fails for small spans</a></li>
<li><a href="#org82b1b70">9.15.5.2. Quantile calculations (including <code>median</code>) not correctly working in parallel</a></li>
<li><a href="#org996b9b5">9.15.5.3. <code>PDE</code>-function objects broken because of <code>fvOptions</code></a></li>
<li><a href="#org94f9f4c">9.15.5.4. Restart in <code>binary</code> not working (with global variables)</a></li>
<li><a href="#orgbad5ca8">9.15.5.5. Single values were passed as arrays</a></li>
<li><a href="#org40152df">9.15.5.6. Distributions not written if there is only a single bin</a></li>
<li><a href="#org97c426f">9.15.5.7. <code>weightedAverage</code> for <code>AccumulationCalculation</code> fails for zero-size fields</a></li>
<li><a href="#org6b5f8db">9.15.5.8. <code>writeOldTimesOnSignal</code> fails with <code>writeCurrent</code></a></li>
<li><a href="#orgb2e2e5f">9.15.5.9. Turbulence plugin-functions did not correct the boundary field</a></li>
<li><a href="#org7608fb1">9.15.5.10. Some <code>maintainanceScripts</code> do not work under Python 3</a></li>
<li><a href="#orge7aef2d">9.15.5.11. Function <code>distToPatch</code> now working</a></li>
<li><a href="#org891ba58">9.15.5.12. Not all <code>processorX</code> written in <code>writeTimesOnSignal</code></a></li>
</ul>
</li>
<li><a href="#org9a32c54">9.15.6. Infrastructure</a>
<ul>
<li><a href="#org8631510">9.15.6.1. Script for generating releases</a></li>
<li><a href="#org49c9dff">9.15.6.2. Automatic <code>swakConfiguration</code></a></li>
</ul>
</li>
<li><a href="#orgaa48775">9.15.7. New features</a>
<ul>
<li><a href="#org26cd739">9.15.7.1. Additional distance-functions in field-parser</a></li>
<li><a href="#org3ef0b76">9.15.7.2. New function-plugin <code>swakMeshWaveFunctionPlugin</code> for mesh related distances etc</a></li>
<li><a href="#orgbc1d535">9.15.7.3. Additional function in <code>swakMeshQualityFunctionPlugin</code></a></li>
<li><a href="#org82ca1e1">9.15.7.4. Function object for developers that raises a signal at the defined time</a></li>
<li><a href="#orgf9b174e">9.15.7.5. New function-object <code>executeIfSetOrZone</code> that only executes if sets or zones are present</a></li>
<li><a href="#orgf1f8279">9.15.7.6. New function object <code>executeIfPatch</code> that only executes if patches are present</a></li>
<li><a href="#orgd868441">9.15.7.7. Function object <code>listMeshData</code> displays data stored in mesh</a></li>
<li><a href="#orgfb70df2">9.15.7.8. Function object <code>solverPerformanceToGlobalVariables</code></a></li>
<li><a href="#org89f6023">9.15.7.9. Function objects for manipulating <code>fvSchemes</code> and <code>fvSolution</code></a></li>
</ul>
</li>
<li><a href="#org4e0a528">9.15.8. Enhancements</a>
<ul>
<li><a href="#org1fe62ea">9.15.8.1. <code>groovyBC</code> now has a better initialization if <code>value</code> is unset</a></li>
<li><a href="#org6f596e1">9.15.8.2. Function objects <code>writeFieldsOften</code> and <code>writeAditionalFields</code> now write Lagrangian clouds</a></li>
<li><a href="#orgada7f40">9.15.8.3. Added option <code>-functionPlugins</code> to <code>funkySetFields</code> and other utilities</a></li>
<li><a href="#org54da6d9">9.15.8.4. Optional parameter <code>functionPlugins</code> for parsers created with a dictionary</a></li>
<li><a href="#org0d42d6c">9.15.8.5. Additional signals added to <code>writeTimesOnSignal</code></a></li>
<li><a href="#org255d75b">9.15.8.6. <code>pythonIntegration</code> does nothing if no code is present</a></li>
<li><a href="#orgcb7b6e3">9.15.8.7. <code>funkyDoCalc</code> uses <code>weight</code> and <code>mask</code></a></li>
<li><a href="#orgd9e3bba">9.15.8.8. <code>funkyDoCalc</code> allows setting bin width and number</a></li>
<li><a href="#org45b5cc7">9.15.8.9. Timeout in <code>writeOldTimesOnSignal</code> to allow other processes to finish writing</a></li>
<li><a href="#org5414522">9.15.8.10. <code>writeAndEnd</code>-function objects now allow storing and writing previous time-steps</a></li>
<li><a href="#orgba61c9f">9.15.8.11. <code>fvOption</code>-subclasses now support additional forms of <code>addSup</code></a></li>
<li><a href="#org21b3176">9.15.8.12. <code>swakExpressionAverageDistribution</code> allows specifying the limits</a></li>
<li><a href="#org5ac395a">9.15.8.13. Function objects derived from <code>simpleDataFunctionObject</code> now can write to a different directory than <code>postProcessing</code></a></li>
<li><a href="#orgbd7274d">9.15.8.14. <code>funkySetFields</code> allows correcting the boundary conditions afterwards</a></li>
</ul>
</li>
<li><a href="#orgdbbbcb8">9.15.9. Examples</a>
<ul>
<li><a href="#orgbefc428">9.15.9.1. <code>icoFoamCavityWithParcel</code> as a minimal example for adding lagrangian particles</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#org695e513">9.16. 2016-07-17 - version number : 0.4.0</a>
<ul>
<li><a href="#org37dc9fd">9.16.1. New supported versions</a>
<ul>
<li><a href="#org867e2df">9.16.1.1. Rolling support for <code>OpenFOAM-dev</code></a></li>
<li><a href="#orgb9663be">9.16.1.2. Support for OpenFOAM 3.0</a></li>
<li><a href="#org3acf1dd">9.16.1.3. Support for <code>foam-extend</code> 4.0</a></li>
<li><a href="#orgb514f3d">9.16.1.4. Support for the OpenFOAM v3.0+ version</a></li>
</ul>
</li>
<li><a href="#orgb9314f5">9.16.2. Bug fixes</a>
<ul>
<li><a href="#org406a995">9.16.2.1. <code>fieldReport</code> doesn't work with all field names</a></li>
<li><a href="#org85849c1">9.16.2.2. Construction of <code>SimpleDistribution</code> may fail for zero-size fields</a></li>
<li><a href="#org4281393">9.16.2.3. Wrong type for cloud in <code>writeFieldsGeneral</code></a></li>
<li><a href="#org2fb9b7e">9.16.2.4. <code>solverPerformanceToGlobalVariables.C</code> did not compile with OF 2.2</a></li>
<li><a href="#org7ae540d">9.16.2.5. Solid thermophysics not available in the <code>ThermoTurb</code> function plugin</a></li>
<li><a href="#orgfa8cf34">9.16.2.6. <code>lookup</code>-tables no working in <code>faField</code>-parser</a></li>
<li><a href="#org3b3ab06">9.16.2.7. <code>swakDataEntry</code> not correctly written for some versions of OpenFOAM</a></li>
<li><a href="#orgaa4853f">9.16.2.8. <code>executeFunctionObjectsFvOption</code> always executed for <code>makeRelative</code> and <code>makeAbsolute</code></a></li>
<li><a href="#orge40b6a7">9.16.2.9. Does not compile with <code>WM_LABEL_SIZE=64</code></a></li>
<li><a href="#org01e9afe">9.16.2.10. Tensor-fields not correctly handled by <code>replayTransientBC</code></a></li>
<li><a href="#orgb06d883">9.16.2.11. Surfaces created by <code>createSampledSurface</code> not updated during mesh movement</a></li>
<li><a href="#orgc1141af">9.16.2.12. <code>funkySetFields</code> does not set dimensions</a></li>
<li><a href="#org1085d4e">9.16.2.13. <code>funkySetBoundaryField</code> does not compress files</a></li>
<li><a href="#orge7b7da6">9.16.2.14. <code>swakExpression</code> not working for point fields</a></li>
</ul>
</li>
<li><a href="#org560b6f6">9.16.3. Infrastructure</a></li>
<li><a href="#org3c8846a">9.16.4. Documentation</a>
<ul>
<li><a href="#org8daf295">9.16.4.1. Adaption of the reference guide for new <code>org-mode</code></a></li>
</ul>
</li>
<li><a href="#org3d59daa">9.16.5. New features</a>
<ul>
<li><a href="#orgc92cfab">9.16.5.1. 2D-lookup tables supported in grammars</a></li>
<li><a href="#org6ade180">9.16.5.2. Added a function plugin for dynamic meshes</a></li>
<li><a href="#orgb0d81c2">9.16.5.3. Function object to load <code>cell</code>, <code>face</code> and <code>pointSet</code></a></li>
<li><a href="#org775709d">9.16.5.4. Function object to create and manipulate <code>cell</code>, <code>face</code> and <code>pointSets</code></a></li>
<li><a href="#org84e5d40">9.16.5.5. Function object that executes other function objects only at write time</a></li>
<li><a href="#orgec41a33">9.16.5.6. Added a function plugin for MRF cases</a></li>
<li><a href="#orgf3cfb18">9.16.5.7. Added library <code>simpleCloudFunctionObjects</code> with function objects for particle clouds</a></li>
<li><a href="#org358f60e">9.16.5.8. Add library <code>swakCloudFunctionObjects</code> with function objects that use expressions for clouds</a></li>
<li><a href="#orgbdbc4d4">9.16.5.9. <code>streamFunction</code> added to <code>VelocityField</code> function-plugin</a></li>
</ul>
</li>
<li><a href="#org3a20477">9.16.6. Enhancements</a>
<ul>
<li><a href="#orgf968a63">9.16.6.1. Added function for <code>smooth</code>, <code>sweep</code>, <code>spread</code> to <code>FvcSchemes</code>-function plugin</a></li>
<li><a href="#org29b7174">9.16.6.2. Additional functions in plugin <code>ThermoTurb</code></a></li>
<li><a href="#orgaacd6ff">9.16.6.3. Conditional function objects now allow construction of their <code>functions</code> at start</a></li>
<li><a href="#org9625fdf">9.16.6.4. <code>manipulateField</code>-function object can switch <b>off</b> manipulating at start</a></li>
<li><a href="#org5618d02">9.16.6.5. <code>replayTransientBC</code> now handles surface and point fields</a></li>
<li><a href="#orgf32ef62">9.16.6.6. <code>replayTransientBC</code> reads <code>fvOptions</code></a></li>
<li><a href="#orgcaa4b49">9.16.6.7. PDE-function objects now have additional <code>solveAt</code>-option <code>never</code></a></li>
<li><a href="#org627f043">9.16.6.8. <code>replayTransientBC</code> reports execution time</a></li>
<li><a href="#orgd902b7e">9.16.6.9. Added parameter <code>sourceImplicitUseSuSp</code> to <code>PDE</code>-function objects</a></li>
<li><a href="#org6706354">9.16.6.10. <code>replayTransientBC</code> can read and update dynamic meshes</a></li>
<li><a href="#org2a7fe3d">9.16.6.11. <code>solveTransportPDE</code> function object now aware of mesh movement</a></li>
<li><a href="#orgd2c0c9e">9.16.6.12. <code>funkySetLagrangianFields</code> allows creating fields of arbitrary types</a></li>
<li><a href="#org045a2eb">9.16.6.13. Unconverged steady solution of PDE-function objects are reset</a></li>
<li><a href="#orga70dc78">9.16.6.14. Additional output options for function obkjects based on <code>simpleFunctionObjects</code></a></li>
<li><a href="#org9a6302e">9.16.6.15. <code>dumpSwakExpression</code> now works in parallel as well</a></li>
<li><a href="#org5aa774f">9.16.6.16. Missing properties <code>age</code> and <code>dTarget</code> added to KinematicCloud parser</a></li>
</ul>
</li>
<li><a href="#org5546a01">9.16.7. Examples</a>
<ul>
<li><a href="#org14c70c2">9.16.7.1. <code>solverPDE/pitzDailyWithPDE</code> extended</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#orgb8d297b">9.17. Next release - version number : 0.4.1</a>
<ul>
<li><a href="#orgb3bc5bc">9.17.1. New supported versions</a>
<ul>
<li><a href="#org1d0298f">9.17.1.1. Support for OpenFOAM v1606+</a></li>
<li><a href="#org2815f99">9.17.1.2. Support for OpenFOAM 4.0</a></li>
<li><a href="#orgd3d8ff4">9.17.1.3. Support for OpenFOAM 4.1</a></li>
<li><a href="#org088e4de">9.17.1.4. Support for OpenFOAM v1612+</a></li>
</ul>
</li>
<li><a href="#orgf2c6815">9.17.2. Incompatibilities</a>
<ul>
<li><a href="#org40d245e">9.17.2.1. Changed location of files by <code>simpleFunctionObject</code> and subclasses for multi-region-cases</a></li>
</ul>
</li>
<li><a href="#org6eb48b0">9.17.3. Bug fixes</a>
<ul>
<li><a href="#orgf08bae2">9.17.3.1. Destruction of <code>dummyPhi</code> causes error message</a></li>
<li><a href="#org4f48173">9.17.3.2. <code>functionObjectListProxy</code> does not honor <code>outputTime</code></a></li>
<li><a href="#org3c12117">9.17.3.3. Plugin functions with <code>bool</code> results not supported by all drivers</a></li>
<li><a href="#org7149c28">9.17.3.4. No plugin function for <code>cloud</code> possible</a></li>
<li><a href="#orgfaf2b19">9.17.3.5. Wrong syntax in primitive types of plugin-function causes C++-error</a></li>
<li><a href="#orgb05d3bb">9.17.3.6. Initialization function objects in <code>simpleFunctionObjects</code> fail in parallel</a></li>
<li><a href="#org24c43e3">9.17.3.7. Writing <code>storedVariables</code> fails for single values in parallel</a></li>
<li><a href="#orgd95a945">9.17.3.8. <code>executeIfOpenFOAMVersionBiggerEqual</code> not correctly working with alphabetic patch versions</a></li>
<li><a href="#org35b32b9">9.17.3.9. <code>mqFaceMaximum</code> and <code>mqFaceMinimum</code> in the <code>LocalCalculations</code>-plugin fail for patch types without values</a></li>
<li><a href="#org63baea6">9.17.3.10. <code>simpleFunctionObject</code> did not pass parent directory correctly</a></li>
<li><a href="#org94b711b">9.17.3.11. <code>ThermoTurb</code> functionPlugin not working with new <code>thermoType</code>-format</a></li>
<li><a href="#org6b47d3c">9.17.3.12. <code>solidThermo</code> instances could not use <code>basicThermo</code>-methods in <code>ThermoTurb</code>-plugin</a></li>
<li><a href="#orgc87c1be">9.17.3.13. Global variables recognized but not correctly used by some drivers</a></li>
</ul>
</li>
<li><a href="#org1d7ce4a">9.17.4. Internals (for developers)</a>
<ul>
<li><a href="#org355caf0">9.17.4.1. <code>ExpressionResult</code> now stores single values separately</a></li>
<li><a href="#org9d4bae3">9.17.4.2. Rewrite of <code>functionObject</code> removes the <code>start()</code>-method</a></li>
</ul>
</li>
<li><a href="#org87884fe">9.17.5. Infrastructure</a>
<ul>
<li><a href="#org692aebc">9.17.5.1. Add the development branch to the version string in utilities</a></li>
</ul>
</li>
<li><a href="#org79adae2">9.17.6. Documentation</a></li>
<li><a href="#orgf790cab">9.17.7. New features</a>
<ul>
<li><a href="#org22fbacc">9.17.7.1. Function plugin <code>ShiftField</code> that allows shifting volume fields</a></li>
<li><a href="#org6625f01">9.17.7.2. Library <code>swakStateMachine</code> to easily implement switching in cases</a></li>
<li><a href="#orga50b8bc">9.17.7.3. Function object <code>stateMachineFvSolutionFvSchemes</code> to switch numerics accorrding to a state machine</a></li>
<li><a href="#orgbcd372a">9.17.7.4. Function plugin <code>Quantile</code> for calculations with the distribution of a function</a></li>
<li><a href="#orgc958402">9.17.7.5. Function <code>outputTime()</code> to indicate output time</a></li>
<li><a href="#org261a825">9.17.7.6. Utility <code>writeBoundarySubfields</code> to write subfields of boundary conditions</a></li>
<li><a href="#org83bb4c9">9.17.7.7. Library <code>swakDynamicMesh</code> with "swakified" dynamic mesh subclasses</a></li>
<li><a href="#orgbee5655">9.17.7.8. Record current residual of the equations with <code>fvOptions</code></a></li>
<li><a href="#orge318d91">9.17.7.9. Setting time-step with an expression: <code>setDeltaTBySwakExpression</code></a></li>
</ul>
</li>
<li><a href="#org50d15a9">9.17.8. Enhancements</a>
<ul>
<li><a href="#org134732e">9.17.8.1. Primitive parser for Plugin-functions now supports tensor types</a></li>
<li><a href="#org8a4a152">9.17.8.2. Plugin-functions now can use <code>variables</code> (under certain circumstances)</a></li>
<li><a href="#org01d9b10">9.17.8.3. Timeline function objects now optionally write value at start time</a></li>
<li><a href="#org10f9d82">9.17.8.4. Additional functions in the radiation function plugin</a></li>
<li><a href="#org27e4803">9.17.8.5. Improvement of <code>readAndUpdateFields</code>: surface fields, output, switching</a></li>
<li><a href="#org46af9ec">9.17.8.6. <code>executeIfStartTime</code> now also allows execution if it is "only" a restart</a></li>
<li><a href="#org56bc05b">9.17.8.7. <code>reportAvailableFvOptions</code> now reports <code>constrain</code>-methods</a></li>
<li><a href="#orgc6d7dbf">9.17.8.8. <code>constrain</code> method added to <code>fvOptions</code></a></li>
<li><a href="#orgb98969a">9.17.8.9. <code>simpleFunctionObjects</code> in multi-region cases now write to sub-directories of <code>postProcessing</code></a></li>
<li><a href="#orga96ce5e">9.17.8.10. <code>funkyWarpMesh</code> allows reading function objects</a></li>
<li><a href="#org0095fc2">9.17.8.11. <code>executeIfStartTime</code> now also allows execution if it is "only" a restart</a></li>
<li><a href="#orgcbb8ce2">9.17.8.12. Scoped macro expansion now works for <code>storedVariables</code> and <code>swakDataEntry</code></a></li>
</ul>
</li>
<li><a href="#orge43682f">9.17.9. Examples</a>
<ul>
<li><a href="#orgce67209">9.17.9.1. <code>FvOptions/heatExchangerSources</code></a></li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
OA# -\*- mode: org -\*-


<a id="orgab43e02"></a>

# Description

A collection of libraries and tools that let the user handle
OpenFOAM-data based on expressions


<a id="org1156bbf"></a>

# About this document


<a id="org00ad5a1"></a>

## Scope

This file gives an overview of `swak4Foam` and a history of the
features. It is not a canonical documentation.


<a id="org431202d"></a>

## Technical

This file is written in the mighty `org-mode` (see
<http://orgmode.org/>) a markup/outline-mode for (X)Emacs. Using this
mode it can be easily (using 3 keystrokes &#x2026; it's Emacs) to PDF or
HTML to make it more readable (and add a table of contents).

Please don't try to "beautify" it with any other text editor as
this will surly mess up the markup (and keeping the file
*org-compatible* outside of the `org-mode` is a pain in the neck.

The Markdown-variant `README.md` is only there to be displayed in a
human-readable form by the web-interface to `mercurial` at
`sourceforge.net`. It is generated from `REAME` and only updated
during releases. **Don't edit it**.


<a id="orge744564"></a>

# Contributors etc


<a id="orgef59614"></a>

## Original Author

Bernhard Gschaider (bgschaid@hfd-research.com)


<a id="orgfedf9ac"></a>

## Current Maintainer

Bernhard Gschaider (bgschaid@hfd-research.com)


<a id="org51e88ee"></a>

## Contributors

In alphabetical order of the surname

-   **Martin Beaudoin:** `trackDictionary` in `simpleFunctionObjects`
-   **Martin Becker:** The `potentialPitzDaily`-case (demonstrating a
    problem with `groovyBC`)
-   **Oliver Borm:** `patchMassFlowAverage` in `simpleFunctionObjects`
-   **Peter Keller:** `sprinklerInlet`-case
-   **Martin Kroeger:** `mtv` surface writer in `simpleFunctionObjects`
-   **Andreas Otto:** fixed the `circulatingSplash`-case
-   **Alexey Petrov:** `pythonFlu`-integration
-   **Bruno Santos:** -   Compilation with Intel compiler and Mingw
    -   Rewrite of `mybison` and `myflex` to allow parallel compilation
        with `WM_COMPPROCS`
    -   Generation of dependencies for files that need Bison generated
        tab.hh files. This allows not having race conditions during
        parallel compilation
-   **Hrvoje Jasak:** Fixes to compile on Intel and CLang
-   **E.David Huckaby:** Add the writing of particles to `writeFieldsOften`
-   **Alexey Matveichev:** -   release generation script.
    -   Automatic `swakConfiguration`
-   **Mark Olesen:** -   port to OpenFOAM+ v1612
    -   improvements to scripts
-   **Philippose Rajan:** -   Bugfix for segmentation faults in parallel

If anyone is forgotten: let me know

According to the commits in the `mercurial`-repository (and
the repositories of the projects from which swak emerged)
contributors are (ordered by the year of their first contribution):

-   2006-2016 Bernhard F.W. Gschaider <bgschaid@hfd-research.com>
-   2008 Hannes Kroeger (hannes@kroegeronline.net)
-   2008-2009, 2012 Martin Beaudoin, Hydro-Quebec (beaudoin.martin@ireq.ca)
-   2010 Marianne Mataln <mmataln@ice-sf.at>
-   2010 Oliver Borm (oli.borm@web.de)
-   2011 Alexey Petrov <alexey.petrov.nnov@gmail.com>
-   2011 Petr Vita <petr.vita@unileoben.ac.at>
-   2012-2016 Bruno Santos <wyldckat@gmail.com>
-   2013 Georg Reiss <georg.reiss@ice-sf.at>
-   2014 Hrvoje Jasak <h.jasak@wikki.co.uk>
-   2014 David Huckaby <e.david.huckaby@netl.doe.gov>
-   2015 Domink Christ <d.christ@wikki.co.uk>
-   2015 Alexey Matveichev <alexey.matveichev@gmail.com>
-   2016 Mark Olesen <mark@opencfd>


<a id="orgd2d59d8"></a>

## Documentation

See: <http://openfoamwiki.net/index.php/contrib/swak4Foam>


<a id="org426fcec"></a>

# Installation/Compilation


<a id="orge25fc7c"></a>

## Requirements

-   Version 2.0 or higher of OpenFOAM and version 3.0 or higher of
    Foam.  The `OpenFOAM-dev` is also supported but because this is
    frequently changing compilation may fail. The branch
    `feature/port_of-dev` of the development repository **may** work
    better
-   the compiler generators `bison` and `flex`
    -   **bison:** `swak4Foam` is known to work with `bison` version 2.4 and
        higher. Version 2.3 compiles but the plugin-functionality does
        not work correctly.
        Version 3.0 does **not** work
    -   **flex:** since the introduction of the plugin functions at least
        a flex version of `2.5.33` is required (`2.5.35` is the
        lowest **confirmed** version)

Both of these are mainstream packages (they are for instance needed
to compile `gcc`) and should exist on every Linux distribution. Use
the package manager of your distribution to install them and **only**
if the compilation process of `swak4Foam` complains about too low
or too high versions compile special version. This can be easily
done by calling

    ./maintainanceScripts/compileRequirements.sh

in the directory of the sources. This will download a fitting
`bison` version, compile it and install it in such a way that it is
**only** used during the compilation of `swak4Foam`.

`swak4Foam` tries to keep the requirements on these as low as
possible and sometimes lower versions than the ones reported **may**
work. If they do please report so.

The version of bison can be checked with

    bison -V

The version of flex with

    flex -V


<a id="orgd7034e5"></a>

## Building

    wmake all

at the base directory should build all the libraries and
tools.

Rerun the command to make sure that there was no problem with the
compilation (this should be quite fast and only report libraries
being created and some administrative stuff)


<a id="org81baf55"></a>

### Additional configuration

Some features (currently only the `Python`-integration may need
third party software. The paths to these packages can be
configured in a file `swakConfiguration` (an example file
`swakConfiguration.example` is provided. There is also a file
`swakConfiguration.automatic` that tries to automatically
determine the location of Python. It does not work on all systems
and therefor is not enabled by default). If that file is not
present these unconfigured features will not be compiled.

Environment variables that can be set in this file are:

-   **SWAK<sub>PYTHON</sub><sub>INCLUDE</sub>:** Path to the `Python.h` file of the used
    `python`-installation
-   **SWAK<sub>PYTHON</sub><sub>LINK</sub>:** Options to link the `python`-library to the
    library for the `python`-integration
-   **SWAK<sub>USER</sub><sub>PLUGINS</sub>:** A list of paths separated by
    semicolons. These are the directories of libraries with
    function-plugins. They are compiled in the course of the
    normal `swak`-compilation. This makes sure that they are
    consistent with the `swak`-release in the case of an update
-   **SWAK<sub>COMPILE</sub><sub>GRAMMAR</sub><sub>OPTION</sub>:** Additional compiler switches for
    the C-files generated by `bison`. Usually used if the default
    optimization switches are too aggressive and compilation
    takes to long (then a value like `-O0` would for instance
    switch off all optimizations)
-   **SWAK<sub>COMPILE</sub><sub>LEXER</sub><sub>OPTION</sub>:** Additional compiler switches for
    files generated by `flex`. For some compilers (Intel)
    aggressive optimization when compiling these files may cause
    uninitialized memory and crashes. This variable can be used
    to switch off the optimization (usually this fixes the
    problems)
-   **SWAK<sub>TEST</sub><sub>RACE</sub><sub>CONDITIONS</sub>:** Meant to be used only by developers,
    for performing a verification on whether race conditions occur
    during parallel compilation, regarding the grammar parsers.


<a id="org4d1f43a"></a>

### Possible compilation failure with old 2.0.x-versions

With older versions of 2.0.x (or 2.0 or 2.0.1) it is possible that
the compilation of  `swakCodedFunctionObject` will fail. In that
case remove the last parameter to the
`codedFunctionObject`-constructor in `swakCodedFunctionObject.C`
(it is clearly marked by a comment)


<a id="org1fbc687"></a>

### Special versions of the python integration

**Note**: This section is very special and won't be needed by most
people

The library `libswakPythonIntegration.so` links against a specific
version of the python library. In certain circumstances (for
instance the OS of the cluster is different from the one that swak
was compiled on) this python-version is not available on the
target machine. While all other parts of swak will work the
python-integration won't load on the target machine. To fix this
problem a workaround is provided:

The script `maintainanceScripts/makeSpecialPythonLibrary.sh`
compiles a special version of the `libswakPythonIntegration.so`
that is identified by an additional suffix (for instance the
suffix `Cluster` makes a file
`libswakPythonIntegrationCluster.so`). That script has to be run
**on the target system** and needs 3 parameters:

1.  `SWAK_PYTHON_INCLUDE`
2.  `SWAK_PYTHON_LINK`
3.  The suffix

For instance

    ./maintainanceScripts/makeSpecialPythonLibrary.sh -I/opt/local/Library/Frameworks/Python.framework/Versions/2.5/include/python2.5 "-L/opt/local/lib -lpython2.5" Version2.5

compiles a version for an old python.

To enable the python-integration in `libs` in `controlDict` **both**
python-integrations have to be specified. One of them will fail on
each machine (because the required python-library is not there),
the other one will provide the python-functionObjects.

Note: the special libraries won't be updated automatically on the
target system. Doing so is the responsibility of the user.


<a id="org6fc20e1"></a>

## Global installation

If the libraries and utilities are considered stable and the should
be available to everyone (without having to recompile them) the
script `copySwakFilesToSite.sh` in the directory
`maintainanceScripts` can be used to copy them to the
global site-specific directories.

The script `removeSwakFilesFromSite.sh` in the directory
`maintainanceScripts` removes all these files
from the global directories. The `removeSwakFilesFromLocal.sh` does
the same for the user directories (this makes sure that no
self-compiled version *shadows* the global version (which would
lead to strange results)

There is a `Makefile` attached. `make globalinstall` compiles `swak4Foam`
and installs it into the global directories

**Note:** Due to the order in which library direcories are searched
for with `-L` a global installation might break the
compilation. **If you don't know what this means: don't attempt a
global installation**


<a id="orgd98d4df"></a>

## Packaging


<a id="orgf874b1a"></a>

### Debian

The command `build dpkg` builds a Debian/Ubuntu package for
the **currently enabled** OpenFOAM-package. Note:

-   it is assumed that the currently used OF-version was also
    installed by the package manager
-   the `dev` package is built but poorly maintained

Changes in the packaging should be done in the branch
`debianPackaging` of the Mercurial-repository and later be
merged to the `default`-branch.

Packaging for OpenFOAM 2.x should be done in the branch
`debianPackaging_2.x`

**Note:** Due to the problem described with the global installation
it might be necessary to deinstall a previously installed package
to successfully build a new package


<a id="orga604e9f"></a>

# Contents


<a id="org3d65564"></a>

## Libraries

Collection of Libraries


<a id="orgcee547c"></a>

### `swak4FoamParsers`

The basis of `swak4Foam`: the expression parsers with the logic to
access the *OpenFOAM* data-structures.

None of the other software pieces compile without it.

Also defines a subclass to `DataEntry` that uses
`swak`-expressions and a function object `initSwakFunctionObject`
that might be used if this fails


<a id="org16bc646"></a>

### `simpleFunctionObjects`

A collection of function objects that was previously separately
available at
<http://openfoamwiki.net/index.php/Contrib_simpleFunctionObjects>.

Provides consistent output of values (on patches and fields) and
more.


<a id="org488bfb0"></a>

### `groovyBC`

Implements the infamous `groovyBC`. A boundary condition that
allows arbitrary expressions in the field-file


<a id="org6091956"></a>

### `swakFunctionObjects`

Function objects that have no additional requirements. Mainly used
for manipulating and creating fields with expressions

-   **addGlobalVariable:** Adds a variable to a global
    swak-namespace. Mainly used for debugging and resolving
    issues where a variable is needed in a BC before it is defined.
-   **expressionField:** Create a new field from an expression
-   **clearExpressionField:** Erase a field created with
    `expressionField`
-   **manipulateField:** Modify a field in memory
-   **createSampledSet:** Create a sampled set that can be used by
    other swak-entities (mainly boundary conditions)
-   **createSampledSurface:** Create a sampled surface that can be used by
    other swak-entities (mainly boundary conditions)
-   **swakCoded:** Child of the `coded`-functionObject that can read
    and write global variables from and to
    swak-namespaces

    Assumes that the `SWAK4FOAM_SRC` environment
    variable is set to the `Libraries`-directory of the
    `swak4Foam`-sources
-   **solveLaplacianPDE:** Solve the Poisson equation

\begin{equation}
\frac{\partial \rho T}{\partial t} - \nabla \lambda \nabla T =
S_{expl} + S_{impl} T
\end{equation}

for \(T\) where \(\rho\), \(\lambda\) and \(S\) can be specified

-   **solveTransportPDE:** Solve the transport equation

\begin{equation}
\frac{\partial \rho T}{\partial t} + \div(\phi,T) - \nabla \lambda \nabla T =
S_{expl} + S_{impl} T
\end{equation}

for \(T\) where \(\rho\), \(\lambda\) and \(S\) can be
specified. Plus the name of the field \(\phi\)

-   **addForeignMeshes:** this allows specifying new foreign
    meshes. These can be used in subsequent function-objects or
    other swak-expressions on `internalFields`
-   **foreignMeshesFollowTime:** this allows specifying a list of
    meshes whose time is set to the current time of the running
    case


<a id="org84cbe1a"></a>

### `simpleSwakFunctionObjects`

Function objects based on the `simpleFunctionObjects`-library
(which is a prerequisite for compiling it).

Evaluate expressions and output the results


<a id="org411ac78"></a>

### `swakSourceFields`

These classes allow to manipulate the solution. To use these the
solver has to be modified.

-   **expressionSource:** Field that is calculated from an
    expression. To be used as source-term or coefficient in some
    solver
-   **forceEquation:** force an equation to fixed values in selected
    locations. Has to be used after constructing
    the equation and before solving

These sources are based on `basicSource` and can be used
**without** a modification of the solver (they are only available in
the 2.x version):

-   **SwakSetValue:** sets values according to a mask or the
    mechanism provided by `basicSource`
-   **SwakExplicitSource:** Uses the calculated source term on the
    right hand side of the equation
-   **SwakImplicitSource:** Uses a calculated scalar-field to add an
    implicit source term (source is **without** the actual field)


<a id="orgcdd3358"></a>

### `swakFvOptions`

Starting from OpenFOAM 2.2 this library has additional `fvOptions`


<a id="org72b4250"></a>

### `swakTopoSources`

`topoSources` for `cellSet` and `faceSet`. Can be used with the
`cellSet` and `faceSet`-utilities


<a id="org60854b0"></a>

### `swakFiniteArea`

Implements parsers for the `finiteArea`-stuff in 1.6-ext. Also
implements `groovyBC` for `areaField` and `expressionField` and
other function objects


<a id="orgc8a41fb"></a>

### `groovyStandardBCs`

Collection of boundary conditions that give standard boundary
conditions the possibility to use expression for the coefficients

Contributions to this library are explicitly encouraged. Please
use the Mercurial-branch `groovyStandardBCs` to *groovyify*
standard boundary conditions.


<a id="org5b65be8"></a>

### `pythonIntegration`

Embeds a `Python`-interpreter.

-   **`pythonIntegrationFunctionObject`:** Executes `Python`-code
    at the usual execution times of functionObjects. The
    interpreter keeps its state

This library is only compiled if the paths to the Python-Headers
are configured in the `swakConfiguration`-file (see above)


<a id="org28b68cb"></a>

### `simpleLagrangianFunctionObjects`

Function objects that allow the easy addition of lagrangian
clouds to a case. No other libraries from `swak4Foam` are needed
for this


<a id="org4fe85d8"></a>

### `simpleSearchableSurfaces`

Additional `searchableSurfaces` (for use in `snappyHexMesh`)
which include boolean operations for other surfaces and
coordinate transformations


<a id="org70a0ba8"></a>

### `fluFunctionObjectDriver`

Driver for `functionObjects` that implemented entirely in `Python`
using the `pythonFlu`-library


<a id="org6fa192c"></a>

### `swakLagrangianParser`

Parser for calculating expressions on clouds of lagrangian particles


<a id="org18b1d50"></a>

### `swakStateMachine`

Library with function objects and plugin functions to work with
simple state machines


<a id="orgfcd19fe"></a>

### `swakDynamicMesh`

Library with classes that combine swak with dynamic meshes


<a id="org501c861"></a>

### `functionPlugins`

Directory with a number of libraries with function-plugins:

-   **swakFacSchemesFunctionPlugin:** functions with selectable
    discretization schemes for FAM (only used in 1.6-ext)
-   **swakFvcSchemesFunctionPlugin:** functions with selectable
    schemes for FVM
-   **swakLocalCalculationsFunctionPlugin:** calculations that are
    local to a cell (Minimum of the face values or so)
-   **swakMeshQualityFunctionPlugin:** calculate mesh quality criteria
    like orthogonality, skewness and ascpect ratio
-   **swakRandomFunctionPlugin:** different random number
    distributions. Currently only exponential
-   **swakSurfacesAndSetsFunctionPlugin:** calculates distances from
    `sampledSurfaces` and `sampledSets` and projects calculated
    values from these onto a volume field
-   **swakThermoTurbFunctionPlugin:** Access functions from the
    thermophysical model and the turbulence model in the current
    region. Loads the model only if necessary
-   **swakTransportTurbFunctionPlugin:** Same as above but for
    incompressible models
-   **swakLagrangianCloudSourcesFunctionPlugin:** Functions that get
    informations like source terms from clouds of particles (due
    to technical reasons this works only for the regular
    *intermediate* clouds)
-   **swakVelocityFunctionPlugin:** Functions that work on the flow
    field (currently only the local Courant-number)
-   **swakChemistryModelFunctionPlugin:** Functions that calculate
    chemistry properties (reaction rates etc)
-   **swakRadiationModelFunctionPlugin:** Functions that calculate
    properties of the radiation model
-   **swakMeshWaveFunctionPlugin:** Functions that use the
    `MeshWave`-algorithm to calculate grid-dependent properties
    like number of mesh layers


<a id="org1dae69a"></a>

#### lagrangianCloudAdaptors-directory

Because of the templating all plugin-functions have to be
reinstaniated for new particle classes. The libraries in this
directory

-   reimplement the functions from
    `swakLagrangianCloudSourcesFunctionPlugin`
-   the `CloudProxy` for the `cloud` parser

for special particle classes. These are

-   **coalCloudAdaptor:** the library `libswakCoalCloudAdaptor` that
    handels the `CoalParcel`-class

These libraries have to be included in the `libs`-entry to
be able to handle these libraries


<a id="org6e9e67e"></a>

## Utilities


<a id="org173a5ef"></a>

### `funkySetFields`

Utility that allows creation and manipulation of files with
expressions


<a id="orga85706a"></a>

### `funkySetAreaFields`

Utility like `funkySetFields` for `areaFields` (only works with
1.6-ext)


<a id="org5b0eff0"></a>

### `funkySetBoundaryField`

Sets any field on a boundary to a non-uniform value based on an
expression.

Acts without deeper understanding of the underlying boundary condition


<a id="orge11fe8a"></a>

### `replayTransientBC`

Utility to quickly test whether a groovyBC gives the expected
results. Writes the specified fields with the applied boundary
condition but doesn't do anything else.

Can be used for other BCs as well


<a id="orgfa60870"></a>

### `funkyDoCalc`

Evaluates expressions that are listed in a dictionary using data
that is found on the disc and prints summarized data (min, max,
average, sum) to the screen


<a id="orgfcdee53"></a>

### `calcNonUniformOffsetsForMapped`

Calculates the `offsets`-entry in the `polyMesh/boundary`-file
according to the specification in a dictionary. Only needed if you
have mapped patches and the regular uniform offset is not enough
for your purposes


<a id="orgcb40a4b"></a>

### `fieldReport`

Utility that quickly does some quantitative analysis (minimum,
maximum, average etc ) on a field on the disc (internal field but
also patches, sets, zones, &#x2026;)


<a id="org836cf22"></a>

### `funkyPythonPostproc`

This utility loads specified fields into memory, executes a list
of user-specified function objects whose data is then passed to a
python script which does the user-specified analysis.


<a id="org9dd34d1"></a>

### `funkySetLagrangianField`

Utility to calculate fields for a lagrangian cloud (or setting it
up from scratch)


<a id="org62bd55c"></a>

### `writeBoundarySubfields`

Utility to write fields with subfields from boundary conditions
like `refValue` for post-processing


<a id="orgc119330"></a>

## Examples

If not otherwise noted cases are prepared by a simple
`blockMesh`-call.

**Note**: All the cases here are strictly for demonstration purposes and
resemble nothing from the 'real world'

**Note**: Due to various changes in the case syntax between OpenFOAM
 2.0 and 2.2 (for instance `thermophysicalProperties`, wall
 functions etc) not all of the examples work with all
 OpenFOAM-installations "out of the box". Slight adaptions may be
 necessary

Some of the cases use the `pyFoamPrepareCase.py`-utility of [PyFoam](https://openfoamwiki.net/index.php/Contrib/PyFoam)
to set up the case for the current OpenFOAM-version

To run on multiple OpenFOAM-versions the cases sometimes have more
entries in the dictionaries

Also have a look at `Documentation/exampleCompatibilityMatrix.org`
to see with which versions which cases should work.

Usually the cases have been derived from regular tutorial
cases. After their first implementation they were only adapted to
run in new OpenFOAM versions but improvements in the tutorials are
usually not ported. The reason is that these are just example
cases for `swak4Foam`, not *best practice* examples for OpenFOAM


<a id="org81ac267"></a>

### groovyBC

The old `groovyBC`-Demos


<a id="org6fd13be"></a>

#### pulsedPitzDaily

-   **Solver:** pisoFoam
-   **Also demonstrates:** `manipulateField`, `expressionField` and
    `clearField` from the
    `swakFunctionObjects`. `patchExpression` from
    `simpleSwakFunctionObjects`. `solveLaplacianPDE` and
    `solveTransportPDE` for solving equations,
    `pythonIntegration` with calculations using `numpy`
-   **Preparation:** `pyFoamPrepareCase.py`


<a id="org4af872e"></a>

#### wobbler

-   **Solver:** solidDisplacementFoam


<a id="orgff9fbba"></a>

#### circulatingSplash

-   **Solver:** interDyMFoam
-   **Preparation:** `pyFoamPrepareCase.py`


<a id="org37260ac"></a>

#### movingConeDistorted

-   **Solver:** pimpleDyMFoam
-   **Also demonstrates:** `swakExpression` with `surface`. Due to a
    problem described below this currently doesn't work


<a id="orgaf79946"></a>

#### average-t-junction

-   **Solver:** pimpleFoam
-   **Mesh preparation:** `pyFoamPrepareCase.sh`


<a id="org42ee489"></a>

#### delayed-t-junction

-   **Solver:** pimpleFoam
-   **Mesh preparation:** `pyFoamPrepareCase.sh`
-   **Demonstrates:** Delayed variables to simulate an inflow that
    depends on the value of the outflow


<a id="org9421fb1"></a>

#### multiRegionHeaterFeedback

-   **Solver:** chtMultiRegionFoam
-   **Mesh preparation:** Execute the script `prepare.sh` in that
    directory
-   **Also demonstrated:** `patchExpression` and `swakExpression` from
    `simpleSwakFunctionObjects`.


<a id="org27e3bde"></a>

#### fillingTheDam

-   **Solver:** interFoam
-   **Also demonstrates:** Usage of a `sampledSet` defined in the
    `controlDict` do determine the average filling height. Also
    stored variables for not switching back once the criterion
    is reached. Global variables defined by a function object


<a id="org50a765b"></a>

#### sprinklingInlet

-   **Solver:** interFoam
-   **Description:** Winner of the `swak4Foam`-competition at the 6th
    OpenFOAM-Workshop (2011). By Peter Keller


<a id="org0ac88e5"></a>

#### potentialPitzDaily

-   **Solver:** potentialFoam
-   **Description:** Demonstrates the use of `groovyB` with
    `potentialFoam` (also a problem connected with
    that). Provided by Martin Backer


<a id="org3dde555"></a>

#### lookupDambreak

-   **Solver:** interFoam
-   **Preparation:** run `pyFoamPrepareCase.py`
-   **Description:** Demonstrates the use of 2-dimensional lookup
    tables. For the initialization as well as the boundary
    condition


<a id="org63a13c1"></a>

### FunkyDoCalc

Example dictionaries for `funkyDoCalc`


<a id="org195ee96"></a>

### FunkySetFields

Example dictionary for `funkySetFields`


<a id="orgb0e0130"></a>

### FunkySetBoundaryFields

Example dictionary for `funkySetBoundaryFields`. Sets nonsense
boundary conditions for the world famous `damBreak`-case


<a id="orgd81840b"></a>

### InterFoamWithSources

Demonstrates usage of `expressionSource`

Due to differences in the original `interFoam`-solver this doesn't
work on certain OpenFOAM-versions (most specifically
`1.6-ext`). The current solver works with 2.1. For older
OF-versions use the sources labeled `_pre2.1`.

The only modifications to the original solver are found at the end
of `createFields.H` and in `UEqn.H` (the added source terms).


<a id="org1d9361d"></a>

### InterFoamWithFixed

Demonstrates usage of `forceEquation`

Due to differences in the original `interFoam`-solver this doesn't
work on certain OpenFOAM-versions (most specifically
`1.6-ext`). The current solver works with 2.1. For older
OF-versions use the sources labeled `_pre2.1`.

The only modifications to the original solver are found at the end
of `createFields.H` and in `UEqn.H` (the fixing of the velocities).


<a id="org4176115"></a>

#### `interFoamWithSources`

Slightly modified version of `interFoam`. Adds a source term to
the momentum equation. The source term is an expression that is
defined at run-time


<a id="org6fa4196"></a>

#### `mixingThing`

Demonstration case for it.

-   **Preparation:** Run the script `prepare.sh` to prepare the case


<a id="org4ebec15"></a>

### FiniteArea

Demonstration of the `finiteArea`-stuff that works with 1.6-ext


<a id="org7fbfb6e"></a>

#### `swakSurfactantFoam`

Variation of `surfactantFoam` that adds an `expressionSource`


<a id="org783ec6c"></a>

#### `planeTransport`

Demonstration case

-   **Preparation:** Use `blockMesh` and `makeFaMesh`
-   **Solver:** `surfactantFoam` (without source term) or
    `swakSurfactantFoam`
-   **Demonstrates:** FAM-specific `swakExpressions` and `groovyBC`
    (as well as the `expressionSource`)


<a id="orga595eb7"></a>

### FvOptions

Cases that demonstrate `swakSourceFields`


<a id="org920998c"></a>

#### angleDuctWithSources

-   **Solver:** rhoPimpleFoam
-   **Mesh preparation:** Execute `pyFoamPrepareCase.py .`
-   **Demonstrates:** Simple expression sources (adds a *heat source*
    to the solid)


<a id="org339ab43"></a>

#### heatExchangerSources

-   **Solver:** chtMultiRegionFoam
-   **Mesh preparation:** Execute `pyFoamPrepareCase.py .`
-   **Demonstrates:** Getting the residuals of the matrix with the
    `matrixChangeBefore` and `matrixChangeAfter`
    `fvOptions`


<a id="org5aa4523"></a>

### other

Cases that don't have a `groovyBC`


<a id="org95bfe2a"></a>

#### `angledDuctImplicit`

-   **Solver:** rhoPorousMRFSimpleFoam
-   **Mesh preparation:** Execute the `makeMesh.sh`-script in that
    directory. If you want to run in parallel call the
    `decomposeMesh.sh`-script with the number of processors as
    an argument
-   **Demonstrates:** Usage of the `swakTopoSources`. Compares
    different approaches to evaluating with the
    `swakExpression`-functionObject. Also an example dictionary
    that demonstrates the use of `funkyDoCalc`. Demonstrates
    "live" comparing to another case using *foreign meshes*


<a id="org4cc87c0"></a>

#### `angledDuctImplicitTransient`

-   **Solver:** rhoPorousMRFPimpleFoam
-   **Mesh preparation:** Execute the `makeMesh.sh`-script in that
    directory. If you want to run in parallel call the
    `decomposeMesh.sh`-script with the number of processors as
    an argument
-   **Demonstrates:** The same as `angledDuctImplicit` but also the
    output of temporal changes


<a id="orgef25138"></a>

#### `capillaryRise`

-   **Solver:** interFoam
-   **Case preparation:** run the `pyFoam`-utility `pyFoamPrepareCase.py`
-   **Demonstrates:** Usage of a sampled surface to track the
    interface in a VOF-simulation


<a id="org667a481"></a>

#### `mixingDam`

-   **Solver:** interFoam
-   **Case preparation:** run the supplied script `prepareCase.sh`
-   **Demonstrates:** Emulate a "moving gravitation" by using the
    `manipulateField`-functionObject to recalculate
    `gh` and `ghf`


<a id="org207700b"></a>

#### `counterFlowFlame2DInitialized`

Demonstrates initializing a case with initial conditions that
approximate the real flow.

-   **Solver:** reactingFoam
-   **Case preparation:** run `pyFoamPrepareCase.py`. **Caution:** this
    has to be done **every** time before running the case because
    the initialized fields are rewritten
-   **Demonstrates:** Demonstrates setting calculated initial
    conditions with functionObjects


<a id="org8a04268"></a>

#### `simpleBendedPipe`

Demonstrates the use of `funkyWarpMesh` and post-processing on
bended pip geometries

-   **Solver:** simpleFoam
-   **Case preparation:** Run `prepare.sh`


<a id="org99091d0"></a>

#### `topoSetDamBreak`

Case to demonstrate various things about `cell` and `faceSet`

-   **Solver:** interFoam
-   **Case preparation:** Run `pyFoamPrepareCase.py .`


<a id="orgf761560"></a>

### FromPresentations

Cases that were shown in some presentations


<a id="org30c7bc8"></a>

#### OSCFD<sub>cleaningTank3D</sub>

-   **Solver:** interFoam
-   **Case preparation:** run the `prepareCase.sh`-script
-   **Description:** The case described on the slides of the
    talk about `swak4Foam` at the  OSCFD-conference
    2012 in London
-   **Demonstrates:** Boundary conditions, function objects, global
    variables and delayed variables


<a id="orgf0cd70b"></a>

#### OSCFD<sub>cleaningTank2D</sub>

A 2D-variant of the above case


<a id="orge6ef00d"></a>

#### OFW8<sub>sandPitOfCarcoon</sub>

-   **Solver:** twoPhaseEulerFoam
-   **Case preparation:** run the `prepareCase.sh`-script
-   **Description:** Simulate a sand-monster from the StarWars-movie
    "Return of the Jedi"
-   **Demonstrates:** Use of `funkySetFields`, `groovyBC` and
    functionObjects for lagrangian particles


<a id="org0ac490b"></a>

#### OFW8<sub>landspeedersInCanyon</sub>

-   **solver:** simpleFoam
-   **Case preparation:** run the `prepareCase.sh`-script
-   **Description:** Simulates two landSpeeders (as seen in the
    StarWars-movie "A New Hope")
-   **Demonstrates:** Advanced searchableSurfaces (for
    `snappyHexMesh`), functionObject for passive
    scalar, functionObject to calculate
    distributions


<a id="org495aa46"></a>

### PythonIntegration

Demonstrate the integration of `Python`. Mostly using `PyFoam` but
also with `pythonFlu`


<a id="orgfc743f8"></a>

#### `manipulatedPitzDaily`

-   **Solver:** simpleFoam
-   **Demonstrates:** Usage of `PyFoam` to manipulate the
    `fvSolution`-file during the run (possible
    application: unphysical initial conditions
    cause the run to fail during startup with
    "normal" relaxation values)


<a id="orgebcc036"></a>

#### `findPointPitzDaily`

-   **Solver:** simpleFoam
-   **Demonstrates:** Usage of the `pythonFlu`-integration to find
    the point where the recirculation behind the
    step ends. Also tries to plot the result using
    the `matplotlib`-library


<a id="orgb3c6102"></a>

#### `bed2OfPisa`

-   **Solver:** twoPhaseEulerFoam
-   **Demonstrates:** Usage of `PyFoam` to read the direction of
    gravity and feeding it into a `goovyBC` via
    global variables
-   **Case preparation:** Just call `funkySetFields -time 0`


<a id="org2c4012f"></a>

#### `multiRegionHeaterBuildFunctionObjects`

-   **Solver:** chtMultiRegionFoam
-   **Demonstrates:** Building the specification of function objects
    at run-time via a Python-script


<a id="org3e02ec6"></a>

#### `slicedPitzDaily`

-   **Solver:** simpleFoam
-   **Demonstrates:** Using a python-script to dynamically generate
    multiple function objects (sampled
    surfaces). Using stack-variables to calculate
    the results and write them. Using a stored
    stack-variable to monitor the pressure at a
    point and stop the run if the pressure didn't
    change there for the last 50 iterations


<a id="org8e7fabf"></a>

### `CodeStream`

Demonstrates working together with the `coded`-stuff in OpenFOAM 2.0


<a id="org55bdf05"></a>

### solvePDE

Examples for the `functionObjects` that can solve *Partial
Differential equations*


<a id="org81f2693"></a>

#### flangeWithPDE

-   **Solver:** laplacianFoam
-   **Demonstrates:** The usage of the `functionObject` that solves
    the laplacian (Poisson) equation and
    (hopefully) that it gets the same result as the
    native solver
-   **Case preparation:** `pyFoamPrepareCase.py`


<a id="orgf1a86cd"></a>

#### pitzDailyWithPDE

-   **Solver:** scalarTransportFoam
-   **Demonstrates:** Solving additional transport equations


<a id="orge4500f6"></a>

### BasicSourceSubclasses

These examples test the source terms based on `basicSource`. They
only work with OpenFOAM 2.x and all use the `simpleFoam`-solver


<a id="org1ec1eaf"></a>

#### pitzDailyWithSwirl

-   **Demonstrates:** Fixing the values of the velocity in a region
    with `SwakSetValues`


<a id="org11b5597"></a>

#### pitzDailyWithExplicitPoroPlug

-   **Demonstrates:** Implementing a simple porous plug by adding the
    Darcy-term as a source term with
    `SwakExplicitSource`


<a id="org26ed3b1"></a>

#### pitzDailyWithImplicitPoroPlug

-   **Demonstrates:** Same as `pitzDailyWithExplicitPoroPlug` but
    with an implicit source term with
    `SwakImplicitSource`


<a id="org408683b"></a>

### Lagrangian

Stuff that has to do with lagrangian particles


<a id="orgf24f38f"></a>

#### functionObjects

Tests for the functionObjects that create and evolve a cloud of
particles (library `simpleLagrangianFunctionObjects`)

1.  hotStream

    -   **Solver:** `replayTransientBC`
    -   **Mesh preparation:** `pyFoamPrepareCase.py .`
    -   **Demonstrates:** 3 clouds (kinematic, reacting,
        solidParticle). Loading of a thermophysical
        model with a functionObject. Plugin functions
        for information about the clouds

2.  angledDuctWithBalls

    -   **Solver:** rhoPimpleFoam
    -   **Demonstrates:** Thermo-cloud. Functions for lagrangian
        particles

3.  icoFoamCavityWithParcel

    -   **Solver:** icoFoam
    -   **Demonstrates:** Simplest way to add particles to a case


<a id="org607e0ab"></a>

#### parser

Testing the `cloud`-parser for lagrangiant particles

1.  parcelInBoxWithExpressions

    -   **Solver:** reactingParcelFoam
    -   **Demonstrates:** Adding evaluations on the cloud to a regular
        case

2.  simplifiedSiwek

    Variation of the tutorial case

    -   **Solver:** coalChemistryFoam
    -   **Demonstrates:** creating new clouds with
        `funkySetLagrangianField` and evaluations on
        clouds during the simulation
    -   **Mesh preparation:** run the `pyFoamPrepareCase.py .` script to set up
        the mesh and the fields


<a id="org17bacae"></a>

### SimpleSurface

Examples for the use of the `simpleSearchableSurfaces`-library.


<a id="org3f637fc"></a>

#### twoMotorbikesAndAWall

-   **Solver:** simpleFoam (alternatively use the
    `caseRun.sh`-script)
-   **Case preparation:** Script `caseSetup.sh` is provided
-   **Demonstrates:** Using the same STL-file more than once in a
    case by applying coordinate
    transformations. **Note:** the physics of this
    case are more than questionable as the frame
    of reference for both motorbikes is wrong


<a id="orgf6d3a6b"></a>

#### littleVolcano

-   **Solver:** interFoam
-   **Case preparation:** Script `caseSetup.sh` is provided
-   **Demonstrates:** Boolean operations on STL-files


<a id="org696af3c"></a>

#### chargedPlates

-   **Solver:** electrostaticFoam
-   **Case preparation:** Script `caseSetup.sh` is provided
-   **Demonstrates:** Boolean operations with regular surfaces

Physics of the case not as expected (charge-distribution)


<a id="orgd23f28c"></a>

### manipulateFvSolutionFvSchemes

Demonstrates the use of function objects that change the numerics
during the run


<a id="org5ae06a8"></a>

#### pitzDailyTimeSwitched

The regular `simpleFoam`-tutorial. Modified so that it switches
to higher relaxation factors during the run


<a id="orgb5ec5c2"></a>

#### pitzDailyStateMachineSwitched

`simpleFoam`-tutorial. Uses state machines to change the
discretization periodically


<a id="org39271be"></a>

### StateMachine

Demonstrate the usage of state machines


<a id="org344b7fb"></a>

#### stateCavity

The case is only an excuse for the state machines

-   **Running:** `replayTransientBC -allowFunctionObjects`
-   **Case setup:** `pyFoamPrepareCase.py`


<a id="orgb01de19"></a>

### DynamicMesh

Examples that demonstrate dynamic mesh applications


<a id="org1597e0c"></a>

#### hecticInletACMI2D

Variation of a tutorial case where the oscillation has been
replaced by an expression

-   **Solver:** `pimpleDyMFoam`
-   **Case setup:** `pyFoamPrepareCase.py`
-   **Demonstrates:** The `swakMotion` function for `solidBodyMotion`


<a id="orgc728d7f"></a>

#### rotatingTank2D

-   **Solver:** `interDyMFoam`
-   **Case setup:** `pyFoamPrepareCase.py`
-   **Demonstrates:** The `swakMotion` function for `solidBodyMotion`


<a id="org16476dd"></a>

#### switchedInletACMI2D

-   **Solver:** `pimpleDyMFoam`
-   **Case setup:** `pyFoamPrepareCase.py`
-   **Demonstrates:** The `groovyCyclicACMI` patch type


<a id="org64b1e5e"></a>

#### switchedTJunction

-   **Solver:** `compressibleInterDyMFoam`
-   **Case setup:** `pyFoamPrepareCase`
-   **Demonstrates:** The `groovyCyclicACMI` patch type. State machines. `funkyWarpMesh` utility


<a id="orgb04312a"></a>

### tests

Simple test cases for specific features. The names of the
directories should give you a hint what is tested there. Most of
them don't need a real solver but `replayTransientBC` or
`scalarTransportFoam`.

**Note**: for some features these cases are the only example there
 is. Sorry


<a id="orge7e9cee"></a>

#### `randomCavity`

Testing of different seeds for the `rand`-function. Also tests
the `randFixed`-function


<a id="orga2308f8"></a>

#### `AMIPipe`

Simple geometry for testing function objects with AMI. "Execute"
with `replayTransientBC`, `pimpleFoam` or `pimpleDyMFoam`

Features can be "switched off" with `pyFoamPrepareCase.py`. What
can be switched on is a location dependent pressure jump on one
of the interfaces implemented with `groovyBCJumpAMI`


<a id="org4ecd196"></a>

### BugCases

These are cases provided by users to demonstrate bugs. Not
maintained nor documented and may be removed at any time


<a id="org19cc757"></a>

## `maintainanceScripts`

Undocumented scripts used for maintaining `swak4Foam`. **If you
don't understand them, don't use them**


<a id="org5712c4f"></a>

## Documentation

Additional documentation. Most written in `org-mode`

Current contents:

-   **swak4FoamReference:** Reference manual of swak4Foam. Especially
    concepts like expression syntax and parameters


<a id="org116cc92"></a>

## releaseTesting

Scripts and configuration to test for a release in a virtual
machine using `vagrant`. Also to be used for packaging


<a id="orgcd5fd7d"></a>

## distroPatches

Patches that have to be applied to releases to get swak4Foam to
work with them. These are only needed to fix problems of the
distributions


<a id="orgf386ee9"></a>

# Bug reporting and Development


<a id="orgad82c86"></a>

## Bug reports

The preferred place for bug reports is
<http://sourceforge.net/apps/mantisbt/openfoam-extend/search.php?project_id=10&sticky_issues=on&sortby=last_updated&dir=DESC&hide_status_id=90>

A sourceforge-account is required for reporting

Please **always** report the FOAM-version you use. As `OpenFOAM-dev`
is a moving target only bug-reports that add fixes are handled for this.


<a id="orgca8a9a1"></a>

### Things to do before reporting bug

If you're reporting a bug about the compilation please run
`Allwmake` **twice** and only report the messages from the second
run. This makes analyzing the log easier as only the unsuccessful
commands will be reported.

If the problem seems to be a missing library rerun the compilation
to make sure that there wasn't a problem with that.


<a id="orge8f34ea"></a>

## Development

Contributions to to `swak4Foam` are most welcome. If you want to
contribute clone the Mercurial archive of the sources

    hg clone http://openfoam-extend.hg.sourceforge.net:8000/hgroot/openfoam-extend/swak4Foam

Change to the branch that you want to improve (usually `default`)
and create a new branch

    hg branch <branchName>

where `<branchname>` is an easily identifiable name that makes the
purpose of the branch clear (for instance
`hotfix/WrongRandomFunction` or `feature/HyperbolicFunctions`). Don't
work on the `default` branch or any other branches that are not
"yours". Such contributions will not be merged

Once development on the branch is finished export the relevant
changesets with

    hg export <nodeID>

(`nodeID` being the ids of "your" changesets) and send them to the
maintainer (or attach them to a bug report on Manits). The changes
will be reviewed and merged into the `default` branch (do not
attempt to do this yourself). Patches generated with `hg export`
make sure that all changes are attributed to the original developer
(you).

An alternative would be the `bundle` command. Just do

    hg bundle <bundlefile>

and then send the `bundlefile`. This will include **all** commits
that are not in the upstream repository and will allow similar
inclusion in the upstream as `export`.

Once you have proven by successfully submitting changesets via `hg
   export` you can ask for write access to the mercurial repository.

Only if you got through Mercurial it can be ensured that your
contribution is recognized (if you want to stay anonymous send
patches).


<a id="org73a596a"></a>

### Suggest reading

These topics may be "new" for the average OF-developer:

-   **Mercurial:** A short tutorial on this can be found at
    <http://mercurial.selenic.com/guide/>. If you already
    know `git` the
    <http://mercurial.selenic.com/wiki/GitConcepts> may
    be enough for you
-   **bison/flex:** This pair of compiler generator tools generate the
    parsers for the expressions. Google for a tutorial
    that looks promising to you.

    For a short example that shows how a new function
    was added to two parsers have a look at this
    changeset that added the `cpu()`-function to the
    field and the the patch-parser (usually you'll
    have to write a new method for the driver too):

    hg diff -c 8604e865cce6


<a id="org89759e2"></a>

### Special branches

Currently the main branches are:

-   **default:** The **main** branch. This is the brancht that the
    general public will receive. It compiles under
    OpenFOAM 2.0 and higher
-   **debianPackaging:** Branch for generating new Debian-packages of
    `swak4Foam`. If somebody wants to "inherit" this: contact the
    maintainer
-   **develop:** Actual development branch


<a id="org03500c8"></a>

### Distributed bug-tracking

As an experimental feature distributed bug-tracking was introduced
using the *Artemis*-extension for *Mercurial* (see
<http://hg.mrzv.org/Artemis/>). An up-to-date version can be
installed by

    hg clone http://hg.mrzv.org/Artemis/

somewhere and installing the plugin by editing `.hgrc`.

This is **not** the official bug-tracker for `swak4Foam`. It is used
for keeping track of new features that are to be introduced to
`swak4Foam` and may be discontinued if the experiment proves to be
unsuccessful.


<a id="orgd8267fd"></a>

### Maintaining feature and hotfix-branches

The repository comes with a `.hgflow`-file that is set for the
`hgflow`-extension found at
<https://bitbucket.org/yujiewu/hgflow/wiki/Home> (there are multiple
branches of this extension. This **seems** to be the most up-to date
and still under active development)

In the future this repository will try to stick to the model
described in <http://nvie.com/posts/a-successful-git-branching-model/>


<a id="org7158d7a"></a>

# Copyright

`swak4Foam` is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2 of the License, or (at your
option) any later version.  See the file COPYING in this directory,
for a description of the GNU General Public License terms under which
you can copy the files.


<a id="org2846b56"></a>

# Known bugs

The following list is not complete. If the Artemis extension (see
above) is installed then

    hg ilist

gives a more up-to-date list


<a id="org32376fe"></a>

## Moving meshes and `sampledSurfaces`

It seems that with moving meshes `sampledSurfaces` don't get
updated. This seems to be a problem with OpenFOAM itself (the
regular `surfaces`-functionObject doesn't get updated. This is
currently investigated


<a id="org2de6b6b"></a>

## Missing support for interpolation and point-Fields

Apart from patches and internal fields the support for
interpolation from cells to faces (and vice versa) is incomplete as
well as point fields (although they are supported in the grammar)


<a id="orgd92d3b3"></a>

## Caching of loaded fields not working

This is especially evident for the `funkyDoCalc`-example


<a id="org04ea45f"></a>

## Possible enhancements of the code

Not really bugs, but stuff that bugs me


<a id="org4d1c9c0"></a>

### Pointers in the driver code

This is necessary because of `bison`. Investigate possibilities to
replace these by `tmp` and `autoPtr`


<a id="org9f83d6f"></a>

## Possible memory loss

`valgrind` reports some lost memory for stuff that is not directly
allocated by `swak4Foam` (in OpenFOAM-sources)

Will investigate. Relevant places are marked by comments in the
code. Also the construction of `sampledSet` seems to loose memory

Currenly problematice parts seem to be:

-   update and `magSf`-calculation of `SampledSurface` (marked in
    `SampledSurfaceExpressionDriver.C`)
-   Python interpreter (but no calls in swak were found in the
    stack-trace that could be responsible)


<a id="org46ca37c"></a>

## Non-treatment of the inner product `&` of symmetric tensors

Before OpenFOAM 2.1 the inner product of two symmetric tensors was
a symmetric tensor. Since 2.1 it is a general tensor. As the
general treatment in the grammar would be confusing currently the
this product was removed from the grammar and therefor will not be
correctly parsed


<a id="orge4c9fb1"></a>

## No point-vector construction for Subsets

The same problem that was mentioned in
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=130>
is also true for subsets. But as the interpolation is not
implemented for most subsets this will be postponed


<a id="org6c95b5e"></a>

## No tab-completion for regular Python-shell and old IPython-versions

The tab-completion does not work except for up-to-date versions of
IPython. This seems to be a problem with the `readline`-library
inside an embedded Python. Low priority


<a id="org0b96cab"></a>

## Failure of `groovyBC` for `commsType` `blocking`

If the `commsType` is set to `blocking` then the MPI-communications
of `groovyBC` cause problems in MPI and a fatal error.

Currently the only workaround is to edit
`$WM_PROJECT_DIR/etc/controlDict` so that a different `commsType`
is used (`nonBlocking` or `scheduled`)


<a id="orga8c743b"></a>

## Failure with `sampledSurfaces` that change size on certain distros

Older Foam-versions had the problem that when the surface changes
the size then certain values (especially the `mag` are not properly
recalculated).

This causes this bug:
<https://sourceforge.net/p/openfoam-extend/ticketsswak4foam/231/>

The bug can not be fixed in `swak4Foam` but has to be fixed in the
Foam-Distro


<a id="org35a3c23"></a>

## `solverPerformanceToGlobalVariables` only works for scalar fields

Currently only the data from scalar fields can be correctly
parsed. If `vector`-fields are specified the function object fails


<a id="orgf8c87bd"></a>

# History


<a id="org5923608"></a>

## 2010-09-13 - version number : 0.1

First Release


<a id="org5576511"></a>

## 2010-12-18 - version number : 0.1.1

New release
Most important changes


<a id="org37597db"></a>

### Parser for `sampledSurfaces`

Now expressions for the field on a sampled surface can be
evaluated. All `sampledSurfaces` offered by OpenFOAM now can be
used


<a id="org568723a"></a>

### Multiline `variables`

The `variables` entry (most notably used in `groovyBC` and
`swakExpression`) now can be a list of strings. This allows some
kind of "formatting" (one expression per line) and should improve
readability


<a id="org2abf776"></a>

### Two maintainance-scripts were added

These can copy the libraries and utilities to the global
installation (for those who think that the swak4Foam-stuff is
stable enough and want to 'bless' all users at their site with
it). Note that any local installation still takes precedence
(because `$FOAM_USER_APPBIN` is before `$FOAM_APPBIN` in the
`$PATH`


<a id="orgfeb9166"></a>

### Parsers using 'external variables' are now run-time selectable

This allows the inclusion of other parsers with the regular
`swak4Foam` parsers and include them seamlessly with the
`variables`-mechanism for 'externals' (in other words: you can add
your own parser in a separate library without having to change
anything about the overall `swak4Foam`, but it behaves as if it
was part of it)


<a id="org51faeaa"></a>

## 2011-01-30 - version number : 0.1.2


<a id="org8c24bea"></a>

### Support for *Finite Area*-stuff

Now there is support for the `finiteArea`-library found in
1.6-dev. The support is found in a separate library
`swakFiniteArea`. It has

-   a parser `faField` for `areaFields`
-   a parser `faPatch` for patches of `areaFields`
-   a variant of `groovyBC` for these patches
-   a computed source `faExpressionSource`
-   Function-object-variants for `areaFields`: `clearExpression`,
    `expressionField` and `manipulateField`. These work the same as
    their `volField`-counterparts


<a id="orgd084e7a"></a>

### Bugfix for compiling in single precision

See <https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=49>


<a id="orgc9a782e"></a>

### New function `nearDist`

See <https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=44>


<a id="orgf7da55b"></a>

## 2011-04-20 - version number : 0.1.3

New features and changes are (this list is not complete):


<a id="orgf0f1550"></a>

### New utility `funkySetAreaField`

Like `funkySetFields` for *finiteArea*. Also writes out a volume
field for easier post-processing


<a id="orga791bd6"></a>

### Refactoring of `groovyBC` and groovified boundary conditions

Makes it easier to use the `groovyBC`-machinery for other boundary
conditions. Two standard boundary conditions were
*groovified*. Others may follow


<a id="org0045761"></a>

### Easier deployment

If no `simpleFunctionObjects` are present they can be downloaded
by a script.
Also scripts to handle global installations of `swak4Foam`


<a id="org836cab2"></a>

### Force equations

A class to force equations to certain values according to
expressions


<a id="org2d22b9c"></a>

### New utility `funkyDoCalc`

Utility does calculations on saved results and outputs single
numbers (min, max, sum, average) to the terminal. Can be used for
reporting or validity checks


<a id="org54b113b"></a>

### Debian packaging

Crude packaging for Debian


<a id="org7c1ad65"></a>

### Lookup-tables

A single-argument function can be specified as a piecewise linear
function. Basically works like timelines but the argument can be
something else (not only the time)


<a id="orgf98d294"></a>

### Stored variables

Variables that store their values between time-steps. Applications
are statistics or switches


<a id="org2f32301"></a>

### Sampled sets

Sampled sets can now also be used as en entity on which
calculation is possible.


<a id="org37b772f"></a>

## 2011-07-26 - version number : 0.1.4


<a id="orgb5ded52"></a>

### Port to OpenFOAM 2.0

This is the first release that officially supports OpenFOAM 2.0

Also it is the first release that incorporates the
`simpleFunctionObjects`-library


<a id="org8033a3a"></a>

### New features:


<a id="org7fdcb0d"></a>

#### Rewrite of `rand` and `randNormal`

-   These two functions now can receive an integer seed that
    determines the pseudo-randooom sequence generated by  these functions
-   Two functions `randFixed` and `randNormalFixed` were
    added. While the usual `rand` functions generate a different
    result at every time-steps for these functions the pseudo-random
    sequence is determined **only** by the seed (not by the timestep)


<a id="org57b5527"></a>

#### Binary `min` and `max`

Take the bigger/smaller of two fields. Helps avoid `?:`-operations


<a id="org33fdd24"></a>

#### Allow writing of only volume-fields in `funkySetAreaFields`

Application: If the results of the calculation are only needed in
ParaView


<a id="org76374d5"></a>

#### Internal changes

-   Use `autoPtr` for sets
-   Update sets that change in memory or on disc


<a id="orge8dd339"></a>

### Bug-fixes


<a id="orgca215ee"></a>

#### `funkySetAreaFields` did not check for the correct fields

Fixed by Petr Vita


<a id="org9c40eb1"></a>

#### `surfaceProxy` uses the wrong geometric data


<a id="orgec496c7"></a>

#### Avoid floating point exceptions with division of fields

Calculated boundaries were \(0\) and caused a division by zero


<a id="org83ec7dc"></a>

### Packaging


<a id="org874103f"></a>

#### Update Debian packaging

-   Packaging information for the currently used OF-version is
    generated (allows a separate `swak`-package for every OF-version
-   Submission to launchpad added


<a id="orge9e48bc"></a>

#### Deployment scripts

Now install to `FOAM_SITE_APPBIN/LIBBIN`


<a id="org669df64"></a>

## 2011-10-03 - version number : 0.1.5


<a id="orgb6be5c1"></a>

### New features


<a id="orgb388a8f"></a>

#### `replayTransientBC` now supports multiple regions

Uses the usual `-region`-option. Looks for a separate dictionary
in the `system`-directory of that region


<a id="orge22af5b"></a>

#### `replayTransientBC` allows execution of functionObjects

This can be switched on using the `allowFunctionObjects`-option


<a id="org199acf5"></a>

#### `Python`-embedding

Allows the execution of Python-Code in a functionObject

This feature is still experimental and the organization of the
libraries is subject to change


<a id="org7f71b95"></a>

#### Global variables

It is now possible to define variables that are 'global': They
can be read in any entity.

Currently these variables can only be uniform.

To access global variables the specification-dictionary has to
have a `wordList` named `globalScopes`. The scopes are searched
in that order for the names of global variables. Having scopes
allows some kind of separation of the variables


<a id="org4b3f5ba"></a>

#### Using OF 2.0 codeStreams

Adds a functionObject `swakCoded` that extends the
`coded`-functionObject to read and write global variables


<a id="orga447b61"></a>

#### Simplified boundary condition `groovyBCFixedValue`

Added a boundary condition than allows to only fix the
values. This should help to avoid problems with cases that don't
like `mixed` (on which the regular `groovyBC` is based)


<a id="org39702f2"></a>

#### Function objects to solve PDEs

Two function objects that solve *Partial Differential Equations*
during a run have been added:

-   one that solves a laplacian (Poisson) equation
-   one that solves the transport equation for a scalar

The relevant coefficients (including explicit and implicit source
terms) can be specified using expressions


<a id="org440ce7f"></a>

### Administrative and packaging


<a id="orgddf2d26"></a>

#### Inject `swak4Foam` into a distro

Added a script that takes the current sources, copies them into
the appropriate places of a `OpenFOAM`-installation and slightly
rewrites them to compile in this place. What happens then
(committing them into the repository or just plain compilation)
is up to the maintainer


<a id="orgd577f65"></a>

#### Absorb `simpleFunctionObjects`

As many parts of `swak4Foam` depend on it the
`simpleFunctionObjects` have now been absorbed into
`swak4Foam`. They can still be compiled on their own


<a id="org507b5dd"></a>

### Bugfixes


<a id="org1823605"></a>

#### Variables not working for parallel computations

If a variable is defined and the patch which it is defined on
doesn't have any faces the variable is reported on that processor
as *not existing* and the whole run fails


<a id="org66304f7"></a>

## 2012-01-04 - version number : 0.1.6


<a id="org7614a05"></a>

### Cases changed


<a id="orge5b108f"></a>

#### `circulatingSplash`

Fixed according to a suggestion by Andreas Otto. Now runs again
(used to crash some time-steps into the beginning)


<a id="orgcf060f0"></a>

### Infrastructure


<a id="orgede8018"></a>

#### Check for correct `bison`-version

The `Allwmake`-script now checks for the correct bison-version
(and the existence of `bison`) and fails if it doesn't seem to be
the right one


<a id="org303124d"></a>

#### Supply a header with preprocessor-symbols about the used OF-version

To allow distinguishing different OF-versions as discussed in the
bug report
<http://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=114>
the `Allwmake`-script now generates a header file
`foamVersion4swak.H` that defines the symbols
`FOAM_VERSION4SWAK_MAJOR`, `FOAM_VERSION4SWAK_MINOR` and
`FOAM_VERSION4SWAK_PATCH`


<a id="org6c0e649"></a>

### Technical


<a id="org766bad7"></a>

#### Refactoring of the FieldDriver

-   now can also produce surfaceFields
-   full support of `tensor`, `symmTensor` and `sphericalTensor`


<a id="org7852c18"></a>

#### Refactoring of the FaFieldDriver

-   now can also produce edgeFields

No support for tensors yet


<a id="org3f0f2a9"></a>

#### Writing of `storedVariables`

If necessary (for instance `swakExpression`-functionObject) the
`storedVariables` are written to disc (into a subdirectory
`swak4Foam` of the timestep) and are reread at the start. This
allows consistent restarts (for instance if a flow was summed
using the variable) **if the expressions stay the same**.


<a id="org2527605"></a>

#### `simpleFunctionObjects` now write vectors and tensors without brackets

Data files can now be written without brackets but each component on
its own. The number of entries in the header is not adjusted


<a id="orgef33c10"></a>

#### A *default mesh* for the drivers exists

For drivers that don't have access to a `fvMesh` a default mesh
exists. This default mesh is defined by the first `fvMesh` that
is used during the construction of **any** driver.

Definition of the default mesh can be forced using the
`initSwakFunctionObject` (see the test case `flowRateAngledDuct`)


<a id="orge0a57a9"></a>

### New features


<a id="orgcfde53f"></a>

#### General `phi` in `solveTransportPDE`

Due to the refactoring of the `FieldDriver` now `phi` can be
specified by a general expression (instead of 'only' a
field-name)


<a id="orgac691e3"></a>

#### `funkySetFields` now also writes surfaceFields

Can write `surfaceVector` and `surfaceScalar`-Fields. Condition
has to be consistent


<a id="orgeed3acf"></a>

#### Function objects now `surfaceField`-aware

`expressionField` and `manipulateField` now can create or modify
`surfaceFields`


<a id="orgd45f28a"></a>

#### `funkySetFields` and function objects support tensors

`funkySetFields` and the function objects `expressionField` and
`manipulateField`  now also work with the three tensor-types


<a id="org834e9ae"></a>

#### Extension of the `expressionToFace` `topoSet`

If the expression evaluates to a `surfaceField` then this is used
as a flag whether or not the face is in the `faceSet`. If the
expression evaluates to a `volScalarField` then the old semantic
applies (faces are in the set if one cell is `true` and the other
is `false`).

This only works for internal faces


<a id="org13df1ad"></a>

#### `addGlobalVariable` allows setting more than one value

If there is an entry `globalVariables` then this dictionary is
used to set the variables


<a id="org863697a"></a>

#### Function object `calculateGlobalVariables`

Calculates variables and then pushes them to a global namespace


<a id="orgc7aac51"></a>

#### Generate a dummy `phi` in `replayTransientBC`

New option added that generates a `phi` field with value \(0\) to
keep boundary conditions like `inletOutlet` happy


<a id="org61e0540"></a>

#### Function object to dump expression results

The functionObject `dumpSwakExpression` dumps the complete
results of a swakExpression to file at each timestep. This
produces huge files and is therefor not endorsed


<a id="orgb0c68c9"></a>

#### Additional options for `funkySetFields`

Add the options `allowFunctionObjects` and `addDummyPhi` to
execute functionObjects and add a `phi`-field (for fields that
require these)


<a id="org11f980d"></a>

#### Boundary condition `groovcBCDirection`

Based on the `directionMixed` boundary condition this allows to
set a boundary condition as a Dirichlet-condition only in certain
directions while in the other directions it is a
gradient-condition


<a id="org9050ac8"></a>

#### Boundary condition `groovyBCJump`

Boundary condition that imposes a jump in the value on a cyclic
boundary condition pair (based on `jumpCyclic`). Only works for
scalar values


<a id="org189e2d9"></a>

#### `simpleFunctionObjects` write CSV-files

Setting the option `outputFileMode` to `csv` writes
CSV-files. The option-value `foam` is the default (old style). The
option-value `raw` writes the values delimited by spaces (no
brackets for vectors and tensors)


<a id="orga9599f4"></a>

#### Submeshes automatically read if `searchOnDisc` specified

If a submesh is not yet in memory and the option `searchOnDisc`
is set, the mesh is automatically read into memory and kept there


<a id="orgb1fb839"></a>

#### Conditional `functionObjects`

The `simpleFunctionObjects`-library now has a number of
functionObjects that allow the conditional execution of a list of
function objects.

These are

-   **executeIfExecutableFits:** if the name of the executable fits a
    regular expression the function objects are executed
-   **executeIfObjectExists:** if a named object exists (or
    alternatively: doesn't exist) in the registry execute the
    function objects. Type checking also implemented
-   **executeIfEnvironmentVariable:** execute if an environment
    variable satisfies a certain condition (exists, doesn't
    exist, fits a regular expression)
-   **executeIfFunctionObjectPresent:** execute if a specific
    functionObject is present. This can help prevent failures if
    a functionObject is missing for technical reasons

In addition the `simpleSwakFunctionObjects`-library has

-   **executeIfSwakObject:** Evaluates a logical swak-expression. The
    results are either accumulated using logical *or* (if **one**
    value is true the result will be true) or logical *and* (all
    values have to be true)

The `pythonIntegration`-library has

-   **executeIfPython:** Evaluates a Python-code-snipplet that
    returns a value. If this value is "true" in Pythons
    standards then the functionObjects are executed


<a id="org966119c"></a>

#### `functionObject` that reads gravitation

`simpleFunctionObjects` has an additional function object that
reads the direction of gravitation. The purpose is to assist
boundary conditions like `buoyantPressure` that rely on it to
work. Best used together with conditional function objects ("If
`g` is missing &#x2026;.")


<a id="org0fb02d6"></a>

#### PDE-functionObjects for `finiteArea`

Solve transport and laplacian equation


<a id="org32070c4"></a>

#### Subclass to `DataEntry` that uses *swak*-expressions

This is defined in the `swak4FoamParsers`-library. The class
needs a default mesh defined to construct the driver. Definition
of the default mesh (if no other driver was constructed in some
function-object or by a `groovyBC`) can be forced using the
`initSwakFunctionObject` (see the test case `flowRateAngledDuct`)


<a id="org26ae726"></a>

#### `funkySetAreaField` now also writes edgeFields

Similar to the `surfaceFields` in `funkySetFields`


<a id="org1caffb3"></a>

### Bug fixes


<a id="org0f16cca"></a>

#### Compilation with Intel-Compiler possible

The `Utilities` failed with the Intel-compiler. Compilation now
falls back to good old `g++`


<a id="orgf5eb7de"></a>

#### Access to tensor-components not working

Because the tokens were not defined in the `flex`-files getting
tensor components with `tensor.xx` did not work. Fixed


<a id="org34e9769"></a>

#### Constants for surfaceFields not working

Because surfaceFields know no `zeroGradient` the template
`makeConstant` did not work


<a id="org034c852"></a>

#### `snGrad` does not work for patches if the file is on disc

Change so that the field gets temporarily loaded to calculate the
gradient on the patch. Same for `internalField` and
`neighbourField`


<a id="org03a0ba0"></a>

#### `potentialFoam` does not correctly use a `groovyBC`

The reason is that `groovyBC` usually doesn't get evaluated
during construction. The reason is that it is hard to tell
whether all required fields are already in memory. The current
fix is a workaround: setting `evaluateDuringConstruction` to
`true` forces the BC to be evaluated during construction


<a id="orgf7c178d"></a>

#### Extra evaluation of boundary conditions causes failure

Extra evaluation of boundary condition that should fix the
problem with `calculated` patches causes `funkySetFields` to fail
with stock boundary conditions if not all fields are present in
memory


<a id="orge94c928"></a>

### Discontinued features


<a id="org3496431"></a>

#### `groovyFlowRateInletVelocity`

This boundary condition will be removed in future releases
because the base class now supports the more general
`DataEntry`-class for which a `swak`-subclass exists


<a id="org49ec949"></a>

## 2012-04-13 - version number : 0.2.0 Friday the 13th


<a id="orgfca7461"></a>

### New features


<a id="org761b730"></a>

#### Region name in `simpleFunctionObject`.outputs

To distinguish the output of various instances of
`functionObjects` from the `simpleFunctionObjects`-library in
multi-region cases the screen-output is prefixed with the region
name. For the default region nothing changes. Directory names
stay the same as they are unambiguous anyway (they contain the
name of the functionObject)


<a id="org4d57f95"></a>

#### Temporal operators `ddt` and `oldTime`

For fields (not expressions!) the value at a previous timestep
can be gotten via `oldTime(field)` if that information exists
(also for `funkySetFields` if the corresponding file `field_0`
exists.

For fields that support it (basically volume-fields) there is
also a `ddt`-operator that calculates the explicit
time-derivative (if information about the last timestep exists)

Currently implemented for

-   **internalFields:** `oldTime` and `ddt`
-   **patch:** only `oldTime`
-   **cellSet,cellZone:** only `oldTime`
-   **sampledSurface,sampledSet:** only `oldTime`
-   **faceSet,faceZone:** `oldTime`
-   **internalFaFields:** `oldTime` and `ddt`
-   **faPatch:** only `oldTime`

If there is no old time value stored and in the parser dictionary
the parameter `prevIterIsOldTime` is set, then the previous
iteration value is used as the old time.


<a id="org677b68b"></a>

#### Boundary condition `groovcBCDirection`

Based on the `directionMixed` boundary condition this allows to
set a boundary condition as a Dirichlet-condition only in certain
directions while in the other directions it is a
gradient-condition

**Note**: this should have been in the last release but was
 forgotten to merge into the default branch


<a id="org361e7ee"></a>

#### Boundary condition `groovyBCJump`

Boundary condition that imposes a jump in the value on a cyclic
boundary condition pair (based on `jumpCyclic`). Only works for
scalar values

**Note**: this should have been in the last release but was
 forgotten to merge into the default branch


<a id="orgff98880"></a>

#### Function to return the position of minimum and maximum

The functions `minPosition` and `maxPosition` return the position
of the minimum or the maximum of a scalar field

This is implemented for all field types


<a id="org27b0bd4"></a>

#### Support for `pointFields` in the field-parsers

Now can read and generate pointFields.

Detailed features (apart from the standard symbols) are:

-   Function `point` generates a constant `pointScalarField`
-   Function `pts()` returns a `pointVectorField` with the point
    positions
-   Functions `pzone` and `pset` generate logical fields according
    to existing pointZones or pointSets
-   Functions `interpolateToCell` and `interpolateToPoint`
    interpolate from pointFields to volFields and from volFields to
    pointFields

Utilities and functionObjects affected by this are

-   `funkySetFields`
-   new topoSource `expressionToPoint`
-   `expressionField` and `manipulateField` now can deal with pointFields


<a id="orge4f5511"></a>

#### Support for tensors in the `finiteArea`-field parser

The `faField`-parser now supports tensors, symmetric tensors and
spherical tensors.

Not all operators are supported because the are not instantiated
in 1.6-ext


<a id="orgc8af90e"></a>

#### New convenience-variables for the Python-Integration

These variables are added in the namespace to ease the writing of
Python-code whose output is consistent with OF

-   **timeName:** Name of the current time as a string. Allows the
    construction of directory names
-   **outputTime:** Boolean that indicates whether this is a timestep
    where OpenFOAM will write output


<a id="org4a481c0"></a>

#### Additional operators from the `fvc`-namespace

The missing operators from the `fvc`-namespace have been added to
the Field-parser. These are

-   **`d2dt2`:** for all volumeFields
-   **`flux`:** for all volumFields. Needs a surfaceField as a first
    argument
-   **`meshPhi`:** for volume-vector-fields. Optional with a
    scalar-field that acts as the density as the first
    argument. Only works in the context of a solver
    with a dynamic mesh and hasn't been tested yet

The only missing operators from the `fvc`-namespace are
`volumeIntegrate=/=domainIntegrate`. These have been omitted as
they are trivial to implement using other functions


<a id="orgdd1974c"></a>

### Infrastructure


<a id="orgb2e50b9"></a>

#### Full parallel compilation

Thanks to patches supplied by Bruno Santos (see
<http://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=105>)
compilation of the libraries is now possible in parallel


<a id="org49b738c"></a>

#### Version numbers and version number reporting

Releases up to now got a version number. Utilities now report the
version number. This should make it easier to find out whether
problems are due to an old version

Still looking for a way to do that for the libraries (so that
they will report it if dynamically loaded)


<a id="orgcf2a249"></a>

### Packaging


<a id="org90f76c7"></a>

#### Update of the Debian-Packaging

`make dpkg` now genrates also a valid package if the current
OpenFOAM-installation is **not** installed using the `dpkg`.


<a id="org2fc9efe"></a>

### Changes in the behavior


<a id="orgb439b75"></a>

#### Directory variables in Python-integration

For parallel runs the content of the `caseDir`-variable changed
and a few variables have been added

-   **caseDir:** in parallel runs now points to the `FOAM_CASE`
    instead of the processor subdirectory
-   **systemDir:** points to the global `system`-directory
-   **constantDir:** points to the global `constant`-directory
-   **procDir:** in parallel runs points to the
    processor-subdirectory of the current CPU
-   **meshDir:** The mesh data (of the current processor in parallel
    runs)
-   **timeDir:** Directory where data would be written to at the
    current time (processor dependent)


<a id="orgaaf64ad"></a>

#### User must acknowledge parallelization in Python-integration

In parallel runs the user must set the `isParallelized` to `true`
if the `parallelMasterOnly` is set to `false`.

With that he indicates that in his opinion the Python-code has no
bad side-effects in parallel runs and that he doesn't blame
swak4Foam if anyting bad happens


<a id="org2ee34c5"></a>

### Bug fixes


<a id="org1391e45"></a>

#### `interFoam`-based example solvers do not compile on 2.1

As reported in
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=119>
due to a change the way the PISO-loop is treated the
`interFoamWithSources` and `interFoamWithFixed` don't compile
with 2.1 anymore.

To avoid `#ifdef` in the solver sources there is now a separate
set of sources (labeled `pre2.1`) for older versions. The regular
sources work with 2.1 (and hopefully the following)


<a id="org5e0d59f"></a>

#### `-allowFunctionObjects`-option not working for `replayTransientBC`

Function-objects only work with the
`while(runTime.loop())`-construct in 2.1. The utility now uses
this.


<a id="org6bab720"></a>

#### Field itself can not be used in `funkySetBoundaryField`

Bug reported:
<http://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=124>

An expression like `2*U` did not work for the field `U`. Reason
was that the registry already held an object called `U` (the
dictionary representation of the field) and therefor refused to
load/register another `U`.

Has been fixed by de-registering the dictionary `U` immediately
after loading.


<a id="org8092702"></a>

#### No gradient for vectors in FieldParser

The gradient for a vector field (result: a tensor field) was not
calculated. It is now part of the grammar


<a id="orge6ff9ac"></a>

#### Some operators for tensors not working in 1.6-ext

`tr`, `inv` and `det` were not working for some tensort types in
1.6-ext. The parser now fails if such a combination is
used. Works OK for other OF-versions

Also introduced a workaround for certain operators not being
properly defined for pointFields (by using the internal fields)


<a id="org967e469"></a>

#### `x`, `y`, `z` and `xy` etc not available as field names

These symbols could not be used as field names because they were
used for the components of vectors and tensors

Now these names are only used if the `.`-operator asks for a
component. This is implemented for these parsers

-   FieldValues
-   PatchValues
-   SubsetValues (all Zones, sets and samples)
-   finiteArea-Parsers: faPatch and faField


<a id="org1562cc7"></a>

#### Missing tensor components for point-Fields in some parsers

All parsers except the field-parser were missing the access to
tensor components in the grammar


<a id="org72af24f"></a>

#### No vector construction possible for point-vectors (and tensors) in PatchField

As mentioned in
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=130>
it was not possible to construct a point-vector field using
`vector(toPoint(1),toPoint(1),toPoint(1))`. Same for tensors


<a id="org6617aa0"></a>

#### Incomprehensible error message in `funkySetFields` if the field is missing

The error message in `funkySetFields` that was issued when a
field is supposed to be created was not very helpful (something
about the field currently being an `IOobject`)


<a id="org0fc7bc6"></a>

#### Missing `magSqr` in parsers

This function was reported missing on the message board


<a id="org57d597c"></a>

#### Wrong size when composing vectors and tensors for point-fields

The composed objects got their size from the current parser, not
the components. This resulted in a segmentation-fault for
pointFields


<a id="org6d3c030"></a>

#### `icc` does not compile `executeIfExecutableFitsFunctionObject` on Linux

Preprocessor symbol `linux` unknown. Replaced with `__linux__`


<a id="org4fb1178"></a>

#### Enhancement to the `trackDictionary`-functionObject

Now handles bad or non-existent filenames for dictionaries to
track

Fix provided by Martin Beaudoin


<a id="org274d61d"></a>

## 2012-10-18 - version number : 0.2.1


<a id="org657c240"></a>

### Requirements


<a id="org7d83ea8"></a>

#### `flex 2.5.35`

This version is needed for the reentrant parsers. `2.5.33` **may**
work but is untested. Version `2.5.4` which is on some old
systems definitely does not work


<a id="org58deed6"></a>

#### `bison 2.4`

Version 2.3 compiles but there is an offset-problem with the
locations that breaks the Plugin-functionality

Mac-users will have to install `bison` from another source (for
instance `MacPorts`)


<a id="org69d9498"></a>

### Bug fixes


<a id="orge769ee9"></a>

#### Make sure that `Allwmake` always uses the `bash`

On Ubuntu `/bin/sh` is something else and the scripts fail.
Hardcode to `/bin/bash`


<a id="org42d4727"></a>

#### `downloadSimpleFunctionObjects.sh` still in Makefile

This script (which was removed long ago) was still referenced in
the `Makefile`.


<a id="org2b69549"></a>

#### `grad` in fields added dimensions

`grad` and other operators from `fvc` added dimensions to values
that were supposed to be dimensionless. This has been fixed


<a id="org30dbdf5"></a>

#### Default `condition` for surface fields wrong size in `funkySetFields`

Due to a typo the constructed condition field was too short for
surface-fields (too long for volume-fields, but that didn't matter)


<a id="org1f2ba16"></a>

#### `mappedFvPatch` not treated like regular patches

The field-driver created patch fields there as `calcuated` when
`zeroGradient` would have been more appropriate


<a id="orgb089f89"></a>

#### `flip()` for `faceSet` not correctly calculated

A `SortableList` was used which meant that the vector with the
flip values was not in the correct order


<a id="orgc4bb4f9"></a>

#### `fset()` crashes when `faceSet` has boundary faces

This problem was due to a non-special treatment of faces on the
boundary. Fixed (for `faceZone` as well).

Also boundary faces are now honored in `expressionToFace` if the
expression is a surface-field (for the volume-field logic
boundary faces will never work)


<a id="org0e21435"></a>

#### `groovyBC` produced incorrect results with `wallHeatFlux` etc

The reason was that during construction `refGradient`, `refValue`
etc were not read correctly (if present).

This is now fixed in `groovyBC` and the other BCs (`groovyBC` for
pointFields and `groovyBCDirection`)


<a id="org0959ecb"></a>

#### Global variables not found in `faField`

The Lexer correctly identified the variable but the `getField`
method did not know how to get it.

Fixed


<a id="org303ac6a"></a>

#### Wrong type of condition field in `funkySetAreaFields`

If no condition was evaluated the utility generated a
pseudo-field of the wrong length


<a id="orgd442da7"></a>

#### `calculated`-patches \(0\) for some operations

For some operations in the `Field`-driver the
`calculated`-patches had the value \(0\) instead of the number of
the next cell. This caused certain calculations to fail (give
\(0\))

The `FaField`-driver did no fixing of the `calculated`-patches at
all.

This is fixed


<a id="org00fb866"></a>

#### `sqr` of a `vector` should produce a `symmTensor`

Reported in
<http://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=150>

Added the `sqr` at the right place to the grammars. Also some
other missing tensor operations (`dev` and `symm`).


<a id="org069c192"></a>

#### `funkySetFields` produced wrong values on processor patches

Patch fields were not copied any no `correctBoundaryField` was
called for technical reasons.

Fix: values copied by hand


<a id="orgdb0bf5d"></a>

#### `sortedToc` does not exist for `1.6-ext`

Introduced a preprocessor symbol that allows using sortedToc on
newer versions


<a id="org31569ed"></a>

#### Wrong `size()` and `pointSize()` reported for `FaField`-driver

This was due to a strange () (still don't know what happened
there)


<a id="org6a88609"></a>

#### Memory leak in the field drivers

The strings of parsed IDs were not properly deleted. Funnily this
was done correctly in the Patch and the Subset-driver. Also for
timelines-

Also fixed a leak with the labels of plugin-functions that was
present with all drivers


<a id="org1146cb3"></a>

#### Maintenance scripts not working with non-=bash= `/bin/sh`

Reported by Oliver Krueger that on systems where `/bin/sh` is not
a `bash` anymore (newer Ubuntu and SuSE) the sourcing of
`theFiles.sh` doesn't work anymore.

Fixed and moved all the files to the `maintainanceScripts`-folder


<a id="orge4d586d"></a>

#### `cof` and `diag` undefined

Added. Diag had to be reprogrammed as it is not implemented for
fields (probably for performance reasons).

Also some tensor operators were missing (probably lost during copy/paste)


<a id="orgf95bc2a"></a>

#### No new file created if number of patches for patchAverage changes

Reported in
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=153>

Fixed by removing all file pointers if the number of patches changes


<a id="org29fb2e6"></a>

#### `variables` intolerant on spaces

Spaces in the list of variables made the reading
fail because words can't contain spaces. For instance

    "var =T*2;"

Now all the spaces are removed before assigning to
variables. This will also remove spaces on the "inside" thus
making

    "v ar =T*2;"

the same as the above expression. But it is unlikely that the
call will be used in this way


<a id="org3bc2088"></a>

#### Missing `div`-operations

These valid `div`-operations were missing from the grammar:

-   Divergence of a volume-tensor (all three kinds) producing a
    vector
-   Divergence of a surface-tensor (all three kinds) producing a
    volume-tensor


<a id="org84f22a3"></a>

#### Fields created by `expressionField` written too late

Fields created by that function object were written with the
value from the timestep before because the regular write occurs
before the execution of the function objects.

Fixed


<a id="orgfb0486a"></a>

#### `storedVariables` did not require a `initialValue`

Now an initial value is required (instead of the default empty
string which caused parser failure)


<a id="org228e001"></a>

#### Dimension checking makes `expressionField` fail

Reason is that during the calculation of the variables dimensions
are checked.

Now the functionObject switches the checking off. But a more
general solution is desirable


<a id="orga335fea"></a>

#### `expressionField` at last timestep not written

The functionObject does not write (and calculate) the field at
the last timestep.

Fixed with an one-liner


<a id="orga5c577c"></a>

#### `groovyBC` makes `interFoam`-runs fail unpredictably

Reason was an uninitialized `valueFraction` which sometimes has
values that cause a floating point exception. Fixed


<a id="org589dc16"></a>

#### Global variables of different sizes break parallel runs

Because `size()` was equal to the expected size on some
processors. Not on all. Now the branch is taken if the size is
equal on **all** processors


<a id="orgff1e5ed"></a>

#### Fields treated with `readAndUpdateFields` were written one timestep too late

Fields were not written after the boundary condition was
updated. Now they are


<a id="org950906c"></a>

### Enhancements


<a id="orgde474fc"></a>

#### Topology-operators now support `variables` etc

The topology operators `expressionToCell`, `expressionToFace` and
`expressionToPoint` now support `variables` and the other
supporting keywords if being constructed with a dictionary (for
instance from the `topoSet`-utility)


<a id="orgb40bb42"></a>

#### Fields touched by `manipulateField` being written

Usually the manipulated version of the fields is not written as
the manipulation happens **after** writing. The option
`writeManipulated` enforces writing.

Writing is not the default behavior to avoid side-effects


<a id="orge7fd994"></a>

#### Indicator functions `onPatch` and `internalFace` added to field-expressions

The function `onPatch(name)` returns a surface-field that is \(1\)
on all faces that belong to patch `name`.

The function `internalFace()` is \(1\) on all internal faces and
\(0\) on all patches


<a id="org348f3be"></a>

#### Non-uniform second argument for `pow`

Now the second argument to the `pow`-function can be a
non-constant


<a id="orga84cf6d"></a>

#### Added transpose to the tensors

The expression `A.T()` transposes the tensor `A` (for symmetrical
and spherical tensors it leaves them untouched)


<a id="org4611ed8"></a>

#### Added unit tensor `I` to parsers

If no field `I` is defined then this is used as the unit-tensor


<a id="org5c2a1f8"></a>

#### Added the *Hodge dual* operator

The unary operator `*` calculates for tensors and symmetrical
tensors the hodge dual


<a id="org36395f1"></a>

#### `replayTransientBC` can now switch on function-objects via dictionary

The optional entry `useFunctionObjects` switches on the execution
of function objects during the calculation


<a id="orgbb00681"></a>

#### `replayTransientBC` can now create a `phi`-field via dictionary

The optional entry `addDummyPhi` creates a `phi`-field


<a id="orgc7231c1"></a>

#### `expressionField` now allows the specification of a dimension

The `dimensions`-entry is now read at the same time the variables
are read (this should work for all programs/functionObjects where
the parser is not constructed using a dictionary but the
dictionary is later searched for the `variables`-entry)


<a id="org26392a3"></a>

### New features


<a id="org3a669bf"></a>

#### Allow dynamically loaded plugins that add new functions to parsers

This allows easy extension of the functionality of `swak4Foam`
without modifying the grammar files.

The way it works is that new functions are added to a
runtime-selection table. If the grammar can not resolve a symbol
as a built-in function or a field (but only then) it looks up the
name in this table and evaluates the function. Parameters are
parsed separately and can be:

-   **primitive data types:** integer, float, string and word
-   **swak-expression:** an expression parsed by one of the
    swak-parsers. The type of this expression does not
    necessarily have to be the same as the one of the 'main'
    expression.

The first time a plugin function is searched `swak4Foam` prints a
list of all the available functions of this type. Information
included is the return type and the types of the parameters
(these include the parser used, the expected type and a parameter
name).

Libraries with plugin-functions are added via the `libs`-entry in
the `system/controlDict`

A number of plugin-libraries are already included covering these
topics:

-   Evaluation of functions of the turbulence, transport or thermo
    model
-   Different random number distributions
-   Functions to "project" `sampledSets` and `sampledSurfaces` onto
    a volume-field
-   Execute explicit discretization functions (like `grad`) but
    select the used scheme in the function instead of using the
    value from `fvSchemes`
-   Calculations of the mesh quality (same way `checkMesh` does)
    and return as fields
-   Do calculations locally on a cell (like the maximum on its
    faces)
-   Get the source fields and other properties from lagrangian
    clouds based on the basic intermediate cloud classes
    (Kinematic, Thermo, Reacting, ReactingMultiphase)

It has been tried to make the names unique instead of
short. Usually function names from one library are prefixed with
the same short string.


<a id="orgd9fdb9a"></a>

#### Dynamically generated lists of `functionObjects`

The new `dynamicFunctionObjectListProxy` in the
`simpleFunctionObjects` can generate a `functionObjectList` from
a string and execute them during the run like regular
function-objects.

The string is provided by a special class (the so called
`dictionaryProvider`). Current implementations for the provider are:

-   **fromFileDictionaryProvider:** reads the text from a dictionary
    file
-   **stdoutFromCommandProvider:** executes a program and takes the
    standard output as the dictionary text
-   **stdoutFromPythonScriptProvider:** executes a python-script and
    takes the stdout as the dictionary text

The string must be in the format o a regular OpenFOAM-dictionary
with an entry `functions` from which the functionObjects are
generated


<a id="org48d86e6"></a>

#### Function object `readAndUpdateFields`

This FO in the `simpleFunctionObjects` reads a number of fields
and updates their boundary conditions at every timestep.

Main purpose is to let `groovyBC` do calculations and use the
results for post-processing purposes

Does not support surface-fields as these don't have a
`correctBoundaryConditions`-method.

Example of the usage in the `angledDuctImplicit`-case (the
results are of limited value because of the temperature boundary
condition)


<a id="org42910e9"></a>

#### Source terms based on `basicSource`

Three source terms were added. These source terms are in the
`swakSourceFields`-library and can be used with solvers that use
the `sourcesProperties`-dictionary. The sources are

-   **SwakSetValue:** sets values according to a mask or the
    mechanism provided by `basicSource`
-   **SwakExplicitSource:** Uses the calculated source term on the
    right hand side of the equation
-   **SwakImplicitSource:** Uses a calculated scalar-field to add an
    implicit source term (source is **without** the actual field)

These fields are only implemented in the 2.x-version of `swak`
because the interface of `basicSource` is very different in 1.7
and a backport was unnecessary


<a id="orgf9c871b"></a>

#### Function objects that stop a run gracefully

`simpleFunctionObjects` now has a function object
`writeAndEndFieldRange` that stops a run (and writes the last
time) if a field is outside a specified range.

A similar function object `writeAndEndSwakExpression` is in the
`simpleSwakFunctionObjects` that stops if a swak-expression
evaluates to true. `writeAndEndPython` does the same in
`pythonIntegration`.

Note: after the run is written one more timestep is calculated
(this seems to be due to the fact that FOs are calculated at the
start of a timestep). Also there are issues if the next timestep
is a scheduled write-time (this only seem to be an issue with
1.7.x. It all works fine on 2.1.x)


<a id="orgfbf46c8"></a>

#### Function-objects to load thermophysical and turbulence models

New function objects in the `simpleFunctionObjects` allow the
loading of such models for solvers/utilities that don't have such
models but where some functionObject (for instance) needs such a
model to be in memory


<a id="org3de2bb9"></a>

#### Function-objects that create and evolve clouds of lagrangian particles

Added as part of the `simpleFunctionObjects` some functionObjects
that create a cloud of particles and evolve them at every
timestep.

The appropriate fields needed by every cloud have to be present
(either supplied by the solver or via a `functionObject`)


<a id="org509bf7d"></a>

#### Function-object `manipulatePatchField` to manipulate the field on patches

This function objects allows the manipulation of patch fields
like `manipulateField` allows the manipulation of the internal
field. Only use if desperate


<a id="org3ac958b"></a>

#### Delayed variables to simulate responses

If a variable is declared in the `delayedVariables`-list then its
behavior changes: when a value is assigned to that variable then
the value is not immediately used but after the time specified in
`delay`. Values are stored at intervals `storeInterval` and
interpolated linearly. If no stored data is available then the
value of the expression `startupValue` is used.

This feature allows the modeling of boundary conditions that
react with a delay to flow conditions


<a id="org348ffda"></a>

#### Allow preloading of fields in `funkySetFields`

To satisfy the requirements of certain boundary conditions
`funkySetFields` now allows the preloading of fields. This is
only available in dictionary mode with the `preloadFields`-entry
(for each entry in the `expressions`-list separately)


<a id="org4cda2d8"></a>

### Infrastructure


<a id="org361f763"></a>

#### Compilation script checks `SWAK4FOAM_SRC`

The environment variable `SWAK4FOAM_SRC` is needed for the
`swakCoded`-functionObject. The `Allwmake`-script now checks
whether this variable exists and prints a message with the
correct value if it doesn't. It also checks whether the value is
correct and warns if it isn't


<a id="org51d1924"></a>

#### `Allwmake` creates symbolic links in `swakFiniteArea`

The links to `mybison` and `myflex` are missing when the sources
are downloaded as a tarball. The `Allwmake`-script now creates
these links if they are missing


<a id="org658a1ff"></a>

#### Reformatting of the parser sources

Sources of the parsers have been completely reformatted to make
them more readable and maintainable


<a id="orgabb9ca1"></a>

#### Move non-parser sources in `swak4FoamParsers` into sub-directories

Make the directory a little bit cleaner


<a id="orga5d994b"></a>

## 2013-02-28 - version number : 0.2.2


<a id="orgb2f7db2"></a>

### Incompatibilities to previous versions


<a id="orgb1f4d1b"></a>

#### Python-integration library renamed

To avoid clashes with other similar efforts (not that I know of
any) the library `libpythonIntegration.so` has been renamed to
`libswakPythonIntegration.so`.

Usually only the `libs`-entry in the controlDict has to be
changed (if the library is used at all). Names of the function
objects stay the same


<a id="orga53dbcb"></a>

#### Change in write behaviour of `expressionField` and `manipulateField`

Now the `outputControl`-entry is honored. If set wrong the field
is **no longer** calculated/manipulated at every time-step


<a id="org56aad7a"></a>

### Bug fixes


<a id="orgb810664"></a>

#### 2.x-branch did not compile on 2.0

Branch only compiled on 2.1, but not on 2.0 due to changes in the
OpenFOAM-API

Fix provided by Bruno Santos


<a id="orge8b2eee"></a>

#### `groovyBC`: `value` reset to \(0\) during construction

If no `refValue` is given during construction then a value of \(0\)
is assumed for this and during a preliminary update the value is
reset to this value.

Fixed by using the `value` as the `refValue` if no `refValue` is
specified


<a id="orgd8dc9b7"></a>

#### Unspecified `value` in `addGlobalVariables` produces obscure error message

The error message occured much later when a `tmp` tried to copy a
`NULL`-pointer and was not obvious at all for the general user. Fixed


<a id="orgfb2420a"></a>

#### Did not compile on `1.6-ext`

1.6-ext does not consider the product of two symmetrical tensors
to be symmetrical. Fixed


<a id="org62a8179"></a>

#### Python integration did not get global variables

Change in the interface of the `ExpressionResult`-class
broke the access of global variables from a
Python-functionObject. Fixed


<a id="orgfcc2526"></a>

#### `maintainanceScripts/makeSwakVersionFile.py` failed when no Mercurial is installed

This didn't influence the compilation (as there is already a
current version file there) but confused people.


<a id="org2a0f67a"></a>

#### Non-uniform variables for `internalField` only worked correctly for volume fields

Face and point fields did not propagate the information correctly
and were treated as non-uniform volume fields of the wrong
size. This should now be fixed


<a id="org00138da"></a>

#### Division of `faceFields` causes division by zero

The reason was that the patches of the divisor had a value of
zero. This has been fixed by only dividing the
`internalFields()`. Same for `pointFields`.


<a id="org51784e2"></a>

#### `valuePatches` did not work for mapped patches

This kind of patch was not identified as something that could
have the value fixed


<a id="org025e8d0"></a>

#### Recent versions of 2.1.x break compilation of `CommonValueExpressionDriver.C`

The definition of the operator `lessOp` clashed with another
definition. Renamed.

Fix provided by Bruno Santos


<a id="org3438968"></a>

#### `expressionField` and `manipulateField` did not honor the `outputControl`-entry

`expressionFields` were calculated at every time-step, even if
the computational cost was high. Now if `outputControl` is
`outputTime` the field is only calculated if it is going to be
written


<a id="orgec6fbb9"></a>

#### Double `namespace Foam` makes compilation of `groovyJump` fail with `icc`

Seems like this one was overlooked because `gcc` is more
tolerant towards stupidity.

Reported by Edo Frederix


<a id="org0714da0"></a>

### New Examples


<a id="orgd33a946"></a>

#### Cases from the *OSCFD12* Conference in London

On the slides the case files were promised


<a id="org6633620"></a>

### New features


<a id="orgf11f1ce"></a>

#### Access fields from different cases

It is now possible for expression on `internalFields` to access
fields from different cases. These fields are always read from
disk when being accessed for the first time and stay cached in
memory until the time is changed. The data is interpolated to the
current mesh with the `meshToMesh`-class (which is the workhorse
of the `mapFields`-utility)

The meshes are stored in a repository and are accessed via a
name. If for instance the mesh is known under the name
`otherMesh` then in an expression the term `otherMesh(T)` is the
field `T` from that other mesh at the specified time interpolated
to the current mesh.

Certain function objects and parser instances allow specifying
foreign meshes in a subdictionary `foreignMeshes`.


<a id="orga59e97e"></a>

#### Patch-expressions now support mapped-patches

This is the long asked for feature to "get non-uniform values
from other patches". It only works if the patches are specified
as `mapped` (or `directMapped` for 1.x). Therefor a patch can
only access one other patch with this.

On a mapped patch `mapped(T)` gets field `T` from whatever this
patch maps from (other patch, cells, faces). `mappedInternal(T)`
gets the values from the internal cells on the other patch (this
only works for patches).

On a mapped patch an external variable expression for patches now
changes its meaning: if `other` is the patch that the current
patch maps from (and only then) then `var{patch'other}=expr`
evaluates `expr` on the other patch and then maps the values to
the current patch (`var` may be non-uniform). In all other
circumstances `var` will get a uniform value which is derived
from whatever `expr` evaluates to.

To allow non-uniform `offsets` in the specification of mapped
patches in `polyMesh/boundary` a utility
`calcNonUniformOffsetsForMapped` was developed.


<a id="org2153042"></a>

#### Function objects that manipulate time

The framework for function objects that manipulate the `runTime`
were added. The concrete implementations are

-   **setDeltaTByTimeline:** set the timestep from a data file
-   **setDeltaTWithPython:** set the timestep by evaluating a
    Python-snipplet that should return a floating point number
-   **setEndTimeWithPython:** set the end time from the evaluation of
    a Python-snipplet


<a id="org7054fa9"></a>

#### Plugin-functions for chemical model

The library `libswakChemistryModelFunctionPlugin` adds the
possibility to calculate properties of the chemistry like
reaction rates, chemical timescale and released energy.

Currently only implemented for `psiChemistryModel`

If there is no chemistry model in memory it will be loaded and
the reaction rates are calculated.

There is a function `psiChem_updateChemistry` that forces the
chemistry to be recalculated with a specified timestep. For
technical reasons this returns a scalar field with the value
\(0\). So an expression like
`psiChem_updateChemistry(0.0001)+psiChem_RR(CH4)` calculates the
reaction rate assuming that the timestep is \(0.0001\).

Two additional functions that sum up all the reaction rates (this
**should** be \(0\)) and sum up only positive reaction rates (giving
an impression on what is going on)


<a id="org47b3c1b"></a>

#### Plugin-functions for radiation model

The library `libswakRadiationModelFunctionPlugin` adds the
possibility to calculate properties of the radiation like
parts of the source terms `Rp` and `Ru` and the current
radiation source

If there is no radiation model in memory it will be loaded and
the reaction rates are calculated. Assumes the presence of a
temperature field called `T`.


<a id="orgfee3070"></a>

### Enhancements


<a id="orgdebb607"></a>

#### Python-Integration now supports numpy-arrays

If the `numpy`-library is found then global variables which are
fields are being transformed to `numpy`-arrays. These arrays can
be accessed with the usual `numpy`-array access like `a[i,j]` or
`a[i,:]`. Global variables are made accessible **by
reference**. This means that writing a value changes the global
variable. Setting the whole variable has to be done by slicing
`a[:]=3` (`a=3` removes it from the workspace). Vectors and
tensors are two-dimensional arrays. They have
convenience-attributes that return the whole vector of a
component (like `a.x` for vectors or `a.xx` for tensors). To
overwrite these they have to be sliced: `a.x[:]=0` (`a.x=0` only
changes the attribute)

If a variable that is going to a global namespace is a
`numpy`-array then it is translated by the following rules:
vectors are transformed to `scalarField`. Arrays with 3 columns
to `vectorField`, 9 columns to `tensorField` and 6 columns to
`symmTensorField`. Different column-numbers produce errors


<a id="org6fc4dc9"></a>

#### Optional parameter `writeCode=/=writeFile` for `pythonIntegrationFunctionObject`

If this is set then this Python-code is executed every time a
time-step was written to disk


<a id="org62b36ef"></a>

#### Python-integration has convenience-functions to create data files

Python-integration now has two convenience-functions that return
a filename with the full path and create the directories if
necessary. The file is **not** created (that is the responsibility
of the Python-code).

The functions are (`name` is the name of the function object)

-   **dataFile(fname):** creates a directory
    `<case>/<name>_data/<time>`. To be used for data that is
    written at times that differ from write-time
-   **timeDataFile(fname):** creates a directory
    `<case>/<time>/<name>_data`. Should only be used for data
    that is written only at write-time


<a id="orgb120a39"></a>

#### Switch off dimension checking in `funkyDoCalc`

A command lione switch `-noDimensionChecking` is added that
allows switching off the checking of dimensions if this makes
expressions fail


<a id="orgdee535d"></a>

#### `funkySetFields` allows accessing fields from another mesh

If another case (with time and region) is specified via command
line options (no dictionary) then in the expressions the other
mesh can be accessed under the name `other`

Main application for this is comparing to other cases (but also
comparing different timesteps of the same case with each other).

Used time is either fixed or set to the currently used (this can
be selected via the command line)


<a id="org3ed3dc7"></a>

#### `funkyDoCalc` allows specifying foreign meshes

Each expression can specify foreign meshes with a
`foreignMeshes`-subdict


<a id="org741c326"></a>

#### Function objects to load and update foreign meshes

There are two new function objects:

-   **addForeignMeshes:** this allows specifying new foreign
    meshes. These can be used in subsequent function-objects or
    other swak-expressions on `internalFields`
-   **foreignMeshesFollowTime:** this allows specifying a list of
    meshes whose time is set to the current time of the running
    case


<a id="org49efd4c"></a>

#### `replaxTransientBC` outputs timestep

This helps debugging timestepping-strategies


<a id="org36bc4a9"></a>

#### New accumulation `weightedAverage`

A new possible entry for the `accumulations` calculates an
average that is weighted by a facetor that depends on the entity:

-   cell volume if applicable
-   face area for surfaces etc
-   \(1\) if there is no appropriate weight (usually values defined
    on points). The result is equivalent to `average`.


<a id="org19c6a4d"></a>

#### `expressionField` reports name and type of the created field

The title says it all. Should give the user additional feedback
about what is happening


<a id="org3903fda"></a>

#### New boundary condition `groovyPartialSlip` in `groovyStandardBCs`

This boundary allows specifying the partial slip fraction of the
regular `partialSlip`-BC with an expression.


<a id="orgf8c7a86"></a>

#### `funkySetFields` allows switching off the correction of BCs

This is sometimes necessary to allow calculations with fields
where the boundary conditions have a lot of dependencies
(turbulence model, other mesh etc)


<a id="org0dea3b3"></a>

#### Allow selection of additional regions in `funkySetFields`

The option `-additionalRegions` allows selecting additional mesh
regions for boundary conditions that require it (usually used
together with `-preloadFields`).

For the other case there is an additional option
`-otherAdditionalRegions`.


<a id="org2694438"></a>

#### Adding a `-preloadFields`-option to `funkySetFields`

This option allows specifying additional field names to be
preloaded in command line mode. If multiple mesh regions are
specified (including another mesh)it will try to preload the
field there too


<a id="org16c6791"></a>

#### `replayTransientBC` now supports all volume types

Support for tensor-types has been added


<a id="org581be25"></a>

#### `replayTransientBC` preloads fields

For boundary conditions that require other fields these can be
loaded into memory


<a id="orgb0ab3e1"></a>

#### `replayTransientBC` allows selection of time-steps

The utility now allows the selection of timesteps. In that case
it acts fundamentally different: instead of doing a timeloop it
jumps to those times, calculates the boundary conditions and
writes. The purpose of this mode is generating boundary fields
for postprocessing.


<a id="orgfc3ea3c"></a>

### Infrastructure


<a id="orgebab8dd"></a>

#### `Allwmake` stops if building of `swak4FoamParsers` fails

As the majority of installation problems were actually problems
with the compilation of the library `swak4FoamParsers` and as
this library is central for all other things in `swak4Foam` the
compilation terminates if this library is not built


<a id="orgd7c36ee"></a>

#### Header `swak.H` with version information and macros

This new header includes information about the
`swak4Foam`-version, the `OpenFOAM`-version and macros for
workarounds that depend on the OpenFOAM-version


<a id="orge46d568"></a>

#### `accumulations`-entries converted to `NamedEnums`

This forces the entries to be checked while being read. Allowing
more consistent treatment


<a id="orgbf87c54"></a>

#### Additional maintenance script for special python-versions

This script allows compiling additional versions of
`swakPythonIntegration` for cases where the version on the
development machine is different from the version on the
simulation machine (see installation chapter)


<a id="orgc20d204"></a>

### Cosmetics

Changes without consequences for the user


<a id="orgdb1f66b"></a>

#### Change type of `name` in parsers to `word`

The valid characters for an identifier were the same as in `word`
(was `string` before)


<a id="org345e3cd"></a>

#### Updated contributor lists in `README` and sources

The list of contributors to each file have been added (mostly by
script with the information from the repository)


<a id="org59d1478"></a>

#### Rewritten methods that return pointers

This abomination from the early days of `funkySetFields` has been
cleaned


<a id="orgd9bd0a5"></a>

### Documentation

Changes to the documentation


<a id="orgc103c67"></a>

#### Start of the reference-manual

A first version of a reference manual is added. Only the first
part about expressions and parameters is written.


<a id="orgfa2e9ed"></a>

## 2013-03-18 - version number : 0.2.3


<a id="orgac0bbbc"></a>

### Supports OpenFOAM 2.2

This is the first version to compile with OpenFOAM 2.2

Due to changes in OpenFOAM it requires several `#ifdef` (something
that is usually avoided in the OpenFOAM-world) and other
prepocessor definitions)


<a id="org8e9b76d"></a>

### Incompatibilities to previous versions


<a id="orgf5ea5ca"></a>

#### `simpleFunctionObjects` and `simpleLagrangianFunctionObjects` no longer independent from rest

Due to incompatibilities between OpenFOAM 2.2 and previous
versions there are compatibility headers included from the rest
of swak4Foam.

Theoretically both libraries can be easily made independent again.


<a id="org5c59687"></a>

### Bug fixes


<a id="orgafe183d"></a>

#### Compiles on `1.6-ext` again

The last release (0.2.2) did not compile on `1.6-ext`. This is
fixed


<a id="orgb9fcf43"></a>

#### Missing field files for the OSCFD2012-cases

Due to a stupid `.hgignore` the `0.orig`-directories were
missing. Nobody complained though


<a id="org203b1ef"></a>

#### Did not compile on `2.0.x`

This has been fixed


<a id="org3e7cd46"></a>

### New features


<a id="orgdb89cb2"></a>

#### Writing of sampled surfaces and sampled sets

With the options `autoWriteSurface` and `autoWriteSets` sampled
surfaces and sets are automatically written at each write
time. With `writeSurfaceOnConstruction` and
`writeSetOnConstruction` both are written when they are
created. A format has to be specified. No values are written.


<a id="org6a9fc17"></a>

### Enhancements


<a id="orgd299ba6"></a>

#### Parsers now support `eigenValues` and `eigenVectors`

These function and some other minor ones (`sph`, `dev2`,
`twoSymm`) are now supported by the parsers


<a id="org0bbfa45"></a>

#### Extract rows from tensors with component operator

The component operators `.x`, `.y` and `.z` now extract the rows
from a tensor


<a id="org97baab6"></a>

#### Variable names that are identical to fields trigger a Warning

As this situation (like a variable named `p` for the position
that shadows the pressure field `p`) leads to weird errors a
warning is given. The warning can be switched of with the option
`variableNameIdenticalToField`.


<a id="org581c7bd"></a>

## 2013-05-24 - version number : 0.2.4


<a id="org6feb20d"></a>

### Incompatibilities to previous versions


<a id="org13577d5"></a>

#### Data directories now generated in folder `postProcessing` instead of case folder

According to the convention introduced in OpenFOAM 2.2 now the
data directories generated by functionObjects based on
`simpleFunctionObjects` (that is almost all) and
`swakPythonIntegration` (if the Python-code uses the
`dataFile`-function) are generated as sub-directories of
`postProcessing` in the case directory.

Scripts that rely on the location of these files will have to be adapted


<a id="org041a825"></a>

#### `ExpressionResult` from old versions are not correctly read

This is due to a fix that now allows reading/writing these in
binary mode. Only occurs if reading old data that either

-   uses a delayed variable
-   has global variables written in timesteps


<a id="orgaf47cdb"></a>

#### Adaption of cases to 2.2

This may break them for previous versions of OpenFOAM


<a id="org571dd67"></a>

### Infrastructure


<a id="orgc588e43"></a>

#### Additional flags for the compilation of the parsers

The C-files generated by `bison` become very big and some
compilers need quite long when aggressive optimization is
used. An additional environment variable
`SWAK_COMPILE_GRAMMAR_OPTION` allows the specification of
additional compiler switches (like `-O1`) that will appear
**after** the regular switches and should alter the behavior of
the compiler. Set in `swakConfiguration` if you want to set this
permanently


<a id="orgc1cd6df"></a>

#### Use `bash` instead of `sh` in maintainance scripts

Some distributions don't use good old `bash` as the default
shell. This breaks some scripts in subtle and not so subtle ways


<a id="orgb8249b1"></a>

#### Build-script prints swak-version in the beginning

To filter bug-reports with outdated versions


<a id="orgfca88e5"></a>

### Cosmetics

Changes without consequences for the user


<a id="orge8a44e6"></a>

#### Methods use `word` for names instead of `string`

Methods that look for fields now use the appropriate data type


<a id="org5675118"></a>

### Bug fixes


<a id="org512a6a3"></a>

#### Compilation on Fujitsu (and probably Intel) compilers

There were template specializations for `pTraits` in
`ExpressionResult.C` that had to be moved to `ExpressionResult.H`
to allow compilation on these non-=gcc=-compilers


<a id="org88607a1"></a>

#### `executeIf`-function objects are executed if `readDuringConstruction` is set to `true`

Even if the condition evaluates to `false` the function objects
in the list are executed. This makes the run fail if the purpose
of the condition was to guard from such a situation. Fixed


<a id="orgf977180"></a>

#### Expression results are not correctly read from binary file

This was fixed by writing the fields properly with
`writeValue`. This may introduce a little incompatibility when
reading files written by old versions


<a id="org0642968"></a>

#### Generated fields like `vol()` were registered

These fields were registered with the mesh which might have
disturbed similar named *real* fields. Also did the fields
generated for variables get registered


<a id="org72175ae"></a>

#### Missing files in `potentialPitzDaily`-case

Missing initial conditions made this case a bit pointless


<a id="orgc176940"></a>

#### `log(vol())` gives floating point exception

This was due to the boundaries being set to 0. Fixed. Also for
the `dist()` function


<a id="orgb6f6750"></a>

### New features


<a id="orgf8bd6dc"></a>

#### Library with additional `searchableSurfaces`

The library `simpleSearchableSurfaces` adds more searchable
surfaces to be used in `snappyHexMesh`. Types of surfaces in
that library are

-   some objects that duplicate existing surfaces and are only
    there for historical reasons (except the cylinder which
    distinguishes between different sides). Others wrap existing
    surfaces and expose the different sides
-   wrappers for other surfaces that do coordinate transformations
    with it: rotation, translation, scaling
-   wrappers that take two surfaces and do boolean operations with
    them: union, intersection, difference, exclusive difference
-   Some wrappers that manipulate the regions of a surface: rename
    them, collect them into one region


<a id="orgfcaaafc"></a>

#### New variable type `StackedExpressionResult`

This type is used to collect multiple values. If it is assigned
a value then the **uniform** value of the right hand side is
appended to the variable. Useful for collecting multiple values
for output.

Variant `StoredStackExpresionResult` keeps the values between
timesteps and allows the collection of timeline data


<a id="org8660b2b"></a>

#### Function object `dumpGlobalVariable`

Dumps the value of a global variable into a line of a file


<a id="orgb21e24b"></a>

#### Function object `removeGlobalVariable`

Removes a global variable (mainly used to preserve memory)


<a id="org4225e9f"></a>

#### Optional entry `aliases` for parser specifications

This dictionary allows the specification of alias names and
their real names. If an alias name is found in an expression
then it is replaced by the real name when looking for
fields. The application for this is that OpenFOAM allows
characters in field names that are not valid in swak-names and
would break the grammar if they were (for instance `-` or
`:`). By setting an alias such fields can still be accessed.


<a id="org2ffd7db"></a>

#### Function object to dump registered objects

The function object `listRegisteredObjects` in the
`simpleFunctionObjects` lists all the objects currently
registered with the mesh. Mainly used for debugging ("Which
fields are currently available?")


<a id="orgfa8eb6f"></a>

#### Function object that only executes its children if the run is serial/parallel

The new functionObject `executeIfParallelSerial` allows
specifying if a list of function objects should only be run if
the simulation is running in serial or parallel.


<a id="org1f8301b"></a>

#### Function objects to calculate distributions

There are now four function objects that calculate distributions
of fields. Distributions are calculated based on the
`Distribution`-class that is part of OpenFOAM starting from
version 2.0 and uses a weighting for added values. There are two
kinds of output

-   a timeline with the key characteristics of the distribution
-   directories with the distributions at specific times. These
    are written "raw" and accumulated

For tensors and vectors these are output separately for every
component.  These outputs can be switched on and off
separately. The user has to specify the bin-width for the
classification. If the bin-width is too small and the
distribution becomes too small it is scaled down.

The two function-objects in the `simpleFunctionObjects` are:

-   **fieldDistribution:** distribution of field values weighted by
    the cell volume
-   **patchFieldDistribution:** distribution of a field on a number
    of patches weighted by the face area

In `swakSimpleFunctionObjects` the two functionObjects are:

-   **swakExpressionDistribution:** distribution of an `expression`
    on some entity. The user also has to specify and expression
    `weight` with the weight of each value and a logical
    expression `mask`. Values are only used if `mask` is `true`
    at the place
-   **patchExpressionDistribution:** distribution of `expression` on
    a number of patches. As the weight the face-area is used


<a id="org1bbeb4a"></a>

### Enhancements


<a id="orgd3d21db"></a>

#### Global variables now can be subclasses of `ExpressionResult`

This allows other variable types like stored variables to be
inserted there. They are also now saved for restarting


<a id="orgaf3dd09"></a>

#### `endTime` now added to Python-wrapper

All classes using the python interpreter now have a variable
`endTime` with the current end-time value


<a id="org2e79c04"></a>

#### Force write if `endTime` set by time-manipulation is reached

If one of the functionObjects for time-manipulation set the
end-time and it is reached and this is no time for output a
complete output of the fields is forced


<a id="org8a0edd8"></a>

#### Function-objects based on `patch` from the `simpleFunctionObjects` now accept regular expression

This includes the `patchExpression`-functionObject. The supplied
list is now interpreted as a list of regular expressions and all
patches that match are included and processed


<a id="org05744d1"></a>

#### More flexible output control for functionObjects based on `simpleFunctionObjects`

An optional parameter `outputControlMode` now allows control on
when the function object will be executed. Possible values are:

-   **timestep:** Every `outputInterval` timesteps the object will
    be executed. This is the default behaviour with an
    interval \(1\)
-   **deltaT:** Approximately every `outputDeltaT` times it will be
    executed. The nearest possible timestep is used
-   **outputTime:** Executed whenever a regular output is scheduled


<a id="org97ec0bb"></a>

#### `swakDataEntry` improved

Two enhancements

-   the name of the independent variable  no can be
    specified. This variable holds the value that is passed to the
    data entry as a uniform value
-   data entry can now be integrated. This allows using it for
    instance for the injection rate in lagrangian models


<a id="org9a2dcd2"></a>

## 2014-01-24 - version number : 0.3.0

The reason for the jump in the minor revision number is that with
the introduction of the parser for lagrangian particles (`cloud`)
the last white spot as far as major data structures in OpenFOAM is
"explored"


<a id="org7ea1410"></a>

### Incompatibilities to previous versions


<a id="org1e8ba3e"></a>

#### Support of *old* `1.6-ext` lost

Due to certain differences this version only compiles with the
`nextRelease`-branch of 1.6-ext (from the `git`).Usually the
failing parts can be fixed b commenting out the appropriate
`#define` in `Libraries/swak4FoamParsers/include/swak.H`.


<a id="orgf279a18"></a>

### New supported versions


<a id="orga6118f6"></a>

#### Added support for Foam 3.0

As this version is quite similar to 1.7 a lot of `#ifdefs` were
introduced by this port leading to a possible unification with
the 1.x-branch


<a id="org79a91d0"></a>

### Infrastructure


<a id="orgf930e02"></a>

#### Make error messages in `Allwmake` more verbose

The error messages where already quite verbose. But people
didn't understand them and asked the same questions over and
over &#x2026;


<a id="org43dbe25"></a>

#### `simpleFunctionObjects` no longer considered an independent project

As there are going to be more cross-dependencies the
`simpleFunctionObjects` now have to be part of swak. Changes to
the compile-scripts reflect this.


<a id="org050f839"></a>

#### `Allwmake` makes sure that swak is compiled for the same installation

The script writes the version it is used with to disk and at
later compiles that this is the same (this makes sure that not a
wrong version is used inadvertently to compile)


<a id="org8ccb0d2"></a>

#### Additional macros for Debugging output

There are two macros defined that inside an object write the name
of the class and the address of the object (if debug is
enabled). This makes the output easier distinguishable from the
output from other classes/objects. The two macros are:

-   **Dbug:** Writes the debug information **only** on the master processor
-   **Pbug:** Writes the output on all processors and for parallel
    runs prefixes the processor number

Both macros are to be used like regular streams and don't have
to be enclosed in `if(debug){}` (this is part of the macro)


<a id="org9d4b7e1"></a>

#### Separate option for compiling the output of `flex`

With some compilers (Intel) and aggressive optimization the
lexers (whose code is generated by `flex`) have uninitialized
memory and segmentation faults. In these cases now an environment
variable `SWAK_COMPILE_LEXER_OPTION` to set lower optimization
for these compilers. For example:

    export SWAK_COMPILE_LEXER_OPTION=-O0

After that recompile


<a id="orga8d3a1b"></a>

#### Fixing race condition with big `WM_NCOMPPROCS`

For some machines race conditions with compiling the main library
has been reported. The reason seems to be that some source files
need headers generated while compiling the grammar. If due to the
large number of simultaneous compilation processes the headers
have not been generated when these files are compiled the
compilation fails.

This effect could not be reproduced on the development machine
(but that doesn't mean that this doesn't happen on some
machines). Nevertheless for the libraries where this might be the
case the number of compilation jobs is limited to the number
grammars in the library.

Better solution to let the `Allwmake`-script generate the headers
before the regular `wmake` starts.


<a id="org7560129"></a>

#### Updates to Debian-packaging

Several minor additions that should make packaging easier

-   Package version now gets the correct distro name (at least on Ubuntu)
-   Packaging picks up the correct python-version (2.7 or 2.6
    &#x2026; does anyone use older?)
-   Packaging process leaves the `swakVersion.H` alone


<a id="org487e26f"></a>

### Documentation

Important enhancements of the documentation in the
`Documentations`-folder


<a id="org5378a0f"></a>

#### Documentation of `accumulations`

The possible values of the common `accumulations`-lists are
documented


<a id="org19fd9a2"></a>

#### General documentation of the Python-embedding

The general options and the behavior of the Python-embedding are
described


<a id="org22dfdf2"></a>

### Incompatibilities to previous versions


<a id="org98af9fb"></a>

#### `outputControlMode` `timestep` renamed to `timeStep`

Because of report
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=177>
to be consistent with the nomenclature in the 'regular'
function-objects.


<a id="org28f83a0"></a>

### Bug fixes


<a id="org3df741a"></a>

#### Missing `timeSet` in function-objects

This method has been added in 2.2.x and breaks the compilation
of several function-objects

Fix developed by Bruno Santos


<a id="org6647ce4"></a>

#### `sourceImplicit` unstable

For some reason using `SuSp` gave unstable results for the
PDE-functionObjects. Changed to `Sp`


<a id="org4a44bd0"></a>

#### Fixed bug were only one `swakCoded` worked at a time

Bug originally reported
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=179>
in. Reason was that the variable describing the type was not
correctly set.


<a id="orgc172b46"></a>

#### Incorrectly read entries in `swakCoded`

The entries `codeEnd` and `codeExecute` were not correctly read
but instead the entry `codeRead` was read. Fixed


<a id="org2a29057"></a>

#### No logical variables found by most parsers

Reported as
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=172>

Only the field parser correctly found logical variables (although
they were stored). Added a method to pick up the variables (the
reason why this part was commented out is that there is no such
thing as a `volBoolField` and that is what the regular mechanism
expected)


<a id="orgfb07946"></a>

#### `sampledSurface` not correctly updated at time of write

Reported as
<https://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=176>

In that case the driver was written before the surface was
updated thus generating fields of size \(0\). Now `update` is
called at various places (to make sure it is called in any instance)


<a id="org7333409"></a>

#### `sumMag`-accumulation now working

This accumulation was available but not implemented. Now implemented.

For non-scalar types it is calculated separately for each component


<a id="org607ece4"></a>

#### Calculation of weight fields failed if size on one processor was \(0\)

This was due to a logical error that was propagated through
mindless copy/paste (only the Field-driver got it right). Fixed


<a id="org78a2d07"></a>

#### `groovyTotalPressure` does not read `value`

Because it is not initialized from the superclass when the
dictionary constructor is used. Fixed


<a id="orgab82de7"></a>

#### For multiple times the option `addDummyPhi` makes `funkySetFields` crash

Because the pointer is already set. Fixed


<a id="org0ee7264"></a>

#### `aliases` not constructed from dictionary

If the dictionary was read after the construction the aliases
are not read. Fixed by moving this reading to the tables reading
which is used in every time a dictionary is involved


<a id="org5bf9de6"></a>

#### Gravity not correctly passed in `evolveXXCloud`

Passed a value where a reference would have been needed. Fixed


<a id="org36b5518"></a>

#### `writeOften` writes all the time

Reason for this was a change of the interface of `outputTime` not
being propagated to this function-object. Fixed


<a id="org68d60f4"></a>

#### Python-integration does not return single scalars as uniform

The Python-integration returned single scalars (and vectors) not
as a single value but as a field of length \(1\). This caused
warnings that messed up the output. Fixed


<a id="org9d74187"></a>

#### `basicSource` working again for OF 2.1

These were not compiled by accident. Fixed


<a id="org8933283"></a>

#### `faceZone` and `faceSet` do not correctly work on parallel runs

As reported in
<http://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=190>
if a face-set or zone has faces on a processor boundary incorrect
values were produced.

The reason was that boundary faces are treated like internal
faces. Also do these faces exist on both processors. This is now
fixed. If the face is on a regular boundary patch the value is
used. If on a processor patch the value is only used if it is on
the owner processor.


<a id="org8b03e06"></a>

#### Allow user to override `notImplemented` in `movePoints` and `moveMesh` of function objects

This addresses
<http://sourceforge.net/apps/mantisbt/openfoam-extend/view.php?id=190>

Subclasses of `simpleFunction`-objects are not guaranteed to be
parallel-aware (for instance `swakExpression` can have problems
with stored variables if the number of cells/faces changes) so
the `notImplemented` can't be removed for good.

The workaround is a rather verbose error message and the
possibility to override `notImplemented` with a dictionary-switch


<a id="orgea1a217"></a>

### New features


<a id="org7df53f8"></a>

#### Function object that executes if the OpenFOAM-version is right

The functionObject `executeIfOpenFOAMVersionBiggerEqual` only
executes if the OpenFOAM-version is bigger or equal to a
specified version. The arguments `majorVersion` and
`minorVersion` are required. If `patchVersion` is not specified
it will match any version. A `git` version (`.x`) will match any
patch-version


<a id="orgdfc1782"></a>

#### Function object that is only executed if the current time is the `startTime`

The function object `executeIfStartTime` executes its children
if the current time is the `startTime` from the `controlDict`
(which isn't necessarily the first time step in a restarted case)


<a id="org98f722d"></a>

#### Function object that calculates the potential flow

To be used on an existing field to set reasonable initial
conditions


<a id="org96d43e2"></a>

#### Function object that forces a recalculation of `phi`

Named `recalcPhi` in the simpleFunctionObjects. Usually needed
when some other functionObject manipulates velocity or density


<a id="org760d8ed"></a>

#### Function object that corrects thermophysical model

Name `correctThermo`. Recalculates the thermophysical
model. To be used after manipulating temperature etc


<a id="org16bd01b"></a>

#### Function objects that recalculate the energy of a thermophysical model

Recalculate enthalpy, sensible enthalpy or internal energy
according to the current temperature. This allows making this
consistent if the temperature has been manipulated.

For OpenFOAM after 2.2 these are replaced by one that
recalculates the energy or enthalpy


<a id="org8d31b02"></a>

#### Function object that calculates the average of one variable as a function of another

The function object `swakExpressionAverageDistribution`
calculates the average of one function (the `expression`) as a
distribution over another (the `abscissa`). An example would be
the average pressure in x-direction with `abscissa` being
`pos().x`, `expression` being just `p` and the `weight`
being `vol()`. The weight has to be a scalar. All other
expressions can be any data-type


<a id="orgffa1627"></a>

#### New utility `fieldReport`

This utility prints some quantitative statistics about a
specified field. Optionally these statistics can also be printed
for patches, sets and zones. The data can be written to a
CSV-file. Also the distributions of the field can be written.


<a id="org39415fe"></a>

#### New utility `funkyPythonPostproc`

This utility needs a dictionary and a specification of
times. For each time it

-   loads a list of fields specified in the dictionary
-   executes a list of function objects specified in the dictionary
-   executes python-scripts

The idea is that the function objects pass data to the
python-scripts via global variables and the python-scripts do
whatever they like


<a id="orga13d9a8"></a>

#### New utility `funkySetLagrangianParticle`

This utility allows setting new fields of a lagrangian
cloud. Like `funkySetFields` it has two modes:

-   Setting one field over the command line. This is triggered by
    the `-field`-option
-   Using a dictionary to specify what is being set. In this mode
    more than one field and more than one cloud can be set. In this
    mode there is also the possibility to specify a **new**
    cloud. This mode expects variables in global namespaces. On of
    these variables is the position of the particles, for the other
    variables fields of the same name will be created. All the
    variables have to be of the same size. Data where corresponding
    particle position is outside the mesh is discarded


<a id="org1a962e8"></a>

### Enhancements


<a id="org2602635"></a>

#### Additional parser for lagrangian particles

There is now an additional parser to calculate expressions on
particles.

This parser is organized in a separate library
`libswakLagrangianParser` that has to be loaded to use this
parser.

Depending on whether the cloud in question is already in memory
or on disk the data is handled differently:

-   if the data is on disc then the basic properties of the cloud
    (particle positions etc) are used to initialize the class. Then
    all files in the folder of the cloud are read and made
    available as field names that are the same as the
    file-names. Characters in the file names that are not
    compatible with the parser are replaced and created as
    aliases. In this mode `swak` has no idea about the data except
    the name and the type
-   if the cloud is in memory then a corresponding proxy object is
    sought. This proxy object knows which data the cloud has, what
    the type is and a short description. It makes the data
    available as fields.

    `swak` has by default proxy objects for most particle classes
    that come with `OpenFOAM`. For unsupported classes and adaptor
    library has to be written.

When a parser for a cloud is used for the first time a table of
all the available fields is printed to the screen with type and
description (if available)


<a id="org55c210e"></a>

#### Function objects that calculate PDEs can use fields from memory

If the field is found in memory this is used instead of a file
read from disc.


<a id="orgeec096e"></a>

#### Function objects that calculate PDEs can write fields before solving

An additional switch `writeBeforeAfter` allows writing the field
before and after solving


<a id="org3fa9915"></a>

#### simpleFunctionObjects have addition `outputControlMode`

Mode `startup` executes the FO only during construction


<a id="orge10c5b8"></a>

#### Conditional functionObjects now have optional `else`

It is now possible to add a sub-dictionary `else` that is used
to initialize a `functionObjectProxy` that is executed if the
condition is **not** fulfilled. The sub-dictionary inherits all
settings that are not set from the parent-dictionary


<a id="orge46256c"></a>

#### `swakCoded` now allows addition of data to functionObject

The entry `codeData` is now read and inserted into the functionObject


<a id="org4e6f930"></a>

#### Parsers in `swakFiniteArea` no also have complete tensor-operations

The two parsers in that library now also support the complete
set of tensor operations (like `eigenValues` etc)


<a id="org04963f6"></a>

#### `swakExpressionDistribution` now allows non-scalar weights

For expressions whose results is not a scalar now the weight
function can either be a scalar or of the same type as the
expression (so every component can have a separate weight)


<a id="orgd9e77b3"></a>

#### More options for `accumulations`

A number of possible accumulations have been added. Most of
these are based on distributions. If the `weighted` variant is
chosen then the meaning is the more physical one (for `weighted`
the 'natural' weight of the quantity is used. For instance for
cells the cell volume. Otherwise the weight \(1\) is used). Some
of these accumulations need a single floating point number as a
parameter. This is simply added to the name. The added
accumulations are:

-   **weightedSum:** sum of the quantity times the weight. There is
    an alias `integrate` for this
-   **median:** The value for which 50% of the distribution are
    smaller than this. More robust alternative to
    `average`
-   **quantile:** `quantile0.25` for instance is the value for which
    25% of the distribution are smaller than it
-   **range:** The difference of the quantile of \(\frac{1+f}{2}\) and
    \(\frac{1-f}{2}\). For instance `range0.9` gives the
    range in which 90% of the values are (from the quantile
    5% to 95%)
-   **smaller:** The fraction of the distribution that is smaller
    than a given value
-   **bigger:** The inverse of `smaller`
-   **size:** The size of the underlying entity (usually number of
    cells, faces, points). For types with more than one
    components all the components have the same value
-   **weightSum:** Sum of the weights of the underlying
    entity. Usually the volume oder the area of it.


<a id="org9f613ef"></a>

#### Python code files are now searched more flexible

If a file specified with an option like `startFile` in a
Python-functionObject (or similar) is not found in the current
directory the path of the dictionary it is specified in is
prepended and the file is searched there


<a id="org290d6cd"></a>

#### Python integration now uses `IPython` if possible

The interactive shell of the python integration now uses
`IPython` if it is installed. This improves tab-completion etc


<a id="orgfeff06e"></a>

#### Preload libraries in the Python integration

As problematic libraries could hand during importing these
libraries can be imported in a safe way using the optional
`importLibs`-entry which is a dictionary. The keys are the names
under which the imports will appear in the Python-namespace. The
value is optional and the name of the actual library


<a id="orgf32e942"></a>

#### Added standard function `weight()`

All parsers now implement a function `weight()` that returns the
"natural" weight that is used for instance in the weighted
average (for internal fields that would be for instance the cell
volume)


<a id="orgca22499"></a>

#### `funkyDoCalc` now writes files

Two kinds of files are optionally written

-   CSV-files with the values of an evaluation (each evaluation
    gets its own file)
-   Distributions of the evaluations (in a separate directory for
    each time)

All the files go into a directory whose name is derived from the
name of the evaluation. The outputs can be switched on with the
options `writeDistributions` and `writeCsv`. Either

-   from the command line: this switches it on for **all** evaluations
-   one "per dictionary"-basis for each evaluation separately


<a id="orga7c7881"></a>

#### PDE-functionObjects now relax their equations

The PDE-functionObjects now honor the `relaxationFactors. If
     =steady` is `false` then relaxation has to be switched on using
`relaxUnsteady`. For the last corrector iteration the equation
is not relaxed unless the parameter `relaxLastIteration` is set.


<a id="orgf566421"></a>

#### Full set of `laplacian`-operations in `internalField`-parser

The support of `laplacian` operations (especially with a
coefficient that is different from a scalar) was incomplete. Now
all possible coefficient types are supported.

Also in the `fvcSchemes`-plugin functions the set of
`laplacian`-operators was completed


<a id="org3f0fa59"></a>

#### Function object `swakExpression` now has optional `mask`

If the logical expression `mask` is set then only the results
from `expression` for which `mask` is `true` are used for
accumulations


<a id="org97b80c4"></a>

### Examples


<a id="org3da7ce0"></a>

#### Moved the OSCFD-examples to a different directory

Started one new directory for all cases from presentations


<a id="orgac16b2f"></a>

#### Added examples from the swak-training at the 8th Workshop

Two new examples

-   **sandPitsOfCarcoon:** Reenacting a scene from "Return of the
    Jedi" with `twoPhaseEulerFoam`
-   **landspeedersInCanyon:** Simulating two landspeeders from "A new
    hope" with `simpleFoam`


<a id="orgd54014e"></a>

## 2014-07-11 - version number : 0.3.1


<a id="org370f7d2"></a>

### Incompatibilities to previous versions


<a id="orgfc54980"></a>

#### Additional required code snipplet for some Python-functionObjects

There is now a new code-snipplet required for a number of these
function objects. It can be left empty but has to be specified


<a id="orga991547"></a>

#### Dimension required for stuff in `swakSourceFields`

The expressions used with `swakExplicitSource`,
`swakImplicitSource` and `swakSetValue` now also need a
dimension. This dimension is used to make sure that the user
"knows" the actual dimensions of his source terms


<a id="orgc1c8d2f"></a>

### New supported versions


<a id="orge0f40ca"></a>

#### Added support for OpenFOAM 2.3

This version adds support for OpenFOAM 2.3. The major changes
were due to changes in the API to

-   `searchableSurface`
-   `meshToMesh`

And several minor adaptions


<a id="org1d84f94"></a>

#### Added support for Foam-Extend 3.1

No major changes required. Runtime-selection tables are now
sorted too


<a id="org13a6622"></a>

### Infrastructure


<a id="orgd44b5ce"></a>

#### Improved macros for Foam versions

This should make `swak.H` more readable


<a id="org41e47d9"></a>

#### Support for private installation of bison

If a directory `privateRequirements/bin` is private in the
sources directory then the `bison` found there is used. A script
`maintainanceScripts/compileRequirements.sh` is provided that
fetches the bison sources, compiles them and installs them there


<a id="orgd6bae9b"></a>

### Documentation


<a id="org6f44a5a"></a>

#### Information about macro-expansion added

A section about thus new feature is added


<a id="orgeb70d50"></a>

### Bug fixes


<a id="orgf74be72"></a>

#### Invalid entries in distributions from `swakExpressionAverageDistribution`

The distribution data was not clipped to the range where actually
data was collected. This is now fixed by adding the notion of an
invalid value to `SimpleDistribution`


<a id="org65c8d28"></a>

#### `swakExpressionAverageDistribution` not correctly working in parallel

This should now be fixed


<a id="org4f92d5e"></a>

#### `fvOptions` in `swakSourceFields` now actually working

Because of the missing dimensions until now `swakExplicitSource`
and `swakImplicitSource` were not actually working


<a id="org53c1d11"></a>

#### `fvOptions` did not honor the `selectionMode`-entry

Always set source etc for whole region. Now the `selectionMode`
is honored (for instance only in `cellZone` the source term will
be applied.)


<a id="org87923f0"></a>

#### `patchFunctionObject` fails for some parallel runs

Problem is that when the processor boundaries are used too that
the indexing might be inconsistent on the different
processors. Fix: coupled boundaries are ignored by default (have
to be switched on)


<a id="orgff243aa"></a>

#### `funkyPythonPostproc` not executing function objects

In newer version the `execute()`-method of function objects
needs a parameter `force`. Fixed


<a id="org703bf60"></a>

#### Temporary fields shadow 'real' fields in `foam-extend-3.1`

Due to a small semantic difference in the copy constructor of
`GeometricField` a temporary object of the same name shadows the
real field and prohibits that it is written. Fixed by giving the
copy a unique name


<a id="orgfedc21b"></a>

### New features


<a id="org60352dc"></a>

#### Boundary condition `groovyFixedNormalSlip` in `groovyStandardBCs`

These boundary conditions allow specifying a value in normal
direction to the patch while in tangential direction the regular
slip condition is applied. This is implemented for `fvPatch` and
`pointPatch`. For the `pointPatch` the normal direction has to be
specified by the user


<a id="org37b0fd1"></a>

#### New utility `funkyWarpMesh`

Utility that calculates new point values for the mesh. In the
simplest form the expression is specified on the command line. If
the option `-expression` is missing the program looks for a
dictionary which allows more control. If `-relative` is specified
points are moved by the result of the expression. The result of
the expression must be a `pointVectorField`


<a id="orga30dded"></a>

#### Function objects that write additional writes depending on the flow conditions

A hierarchy of function objects that trigger additional
writes. Once a condition is fulfilled data is either written for
a specified interval or as long as the condition is
fulfilled. After that a cooldown period is possible. During this
period nothing is written.

The concrete function objects are

-   **writeIfFieldOutside:** writing is triggered if the minimum or
    the maximum of a field is outside a specified range. Part of
    the `simpleFunctionObjects`
-   **writeIfSwakExpression:** writing is triggered if a logical
    expression evaluates to `true`. Stopping and retriggering is
    also possible with logical expressions. Part of
    the `simpleSwakFunctionObjects`
-   **writeIfPython:** writing is triggered by a Python-snipplet that
    either returns `True` or `False`. Stopping and
    retriggering are also possible. Part of
    `swakPythonIntegration`

Allows saving and writing a specifiable number of timesteps
**before** the condition is met (this allows finding out what lead
to this)


<a id="org6981460"></a>

#### Function object `writeOldTimesOnSignal` with new signal handlers

This function object installs a new signal handler for specified
signals.

The function object itself saves the last $N$-timesteps, the
signal handler (when called) writes these steps to disk and then
calls the regular OpenFOAM signal handler


<a id="orge2198d6"></a>

#### New library with `fvOptions`

Starting with OpenFOAM 2.2 (where the concept of `fvOptions` was
introduced) there is an additional library `swakFvOptions` with
special `fvOptions` (in addition to those in `swakSourceFields`):

-   **executeFunctionObjectsFvOption:** this one does not manipulate
    the fields (as expected) but "only" runs a list of function
    objects. Application is for instance to get information
    during the time-step for algorithms that have multiple
    iterations in a time-step
-   **reportAvailableFvOptions:** Does no manipulation of the
    solution/equations. Simply reports that a callback has been
    called. Application: find out which `fvOption`-calls are
    used by a solver in which order without going through the
    sources
-   **reportMatrix:** Does not manipulate the matrix but prints a
    number of metrics


<a id="org306b5ef"></a>

#### Macro expansion

For expressions and variable lists there is now the possibility
to expand values from the dictionary during reading. The two
characters that trigger this are

-   **$:** like the regular variable lookup in OpenFOAM.In its most
    complex form it looks like this `$[(type)spec]` where
    `spec` specifies where to look for the value (including
    scoping if the OpenFOAM-version supports it). The optional
    `type` specifies how the entry should be interpreted
-   **#:** in variable lists: `#otherList;` includes the variable
    list `otherList` instead of this entry

These expansions allow the construction of reusable snipplets
that include information from other parts of the case. For
instance (this is only part of the specification)

    #include "$FOAM_CASE/constant/g"
    vecName U;
    downComponent (
        "grav=$[(dimensionedVector)g];"
        "down=($vecName & grav)/mag(grav);"
    );
    variables (
        "#downComponent;"
        "maxDown=max(mag(down));"
    );

would calculate the component of a vector field that points in
the direction of the gravity (as specified in the `g`-file).

This expansion is done during the expression.


<a id="org1fa66e5"></a>

### Enhancements


<a id="org970a28e"></a>

#### `expressionField` now allows setting of dimensions

An optional entry `dimension` for the function object now allows
setting the dimension of the resulting field


<a id="orgcf24d37"></a>

#### New function `distToPatch` in Field-parser

This function gives the distance in the mesh to a specified face.

Not yet working correctly


<a id="orga5c87ad"></a>

#### `panicDump` now allows storing old values

With the switch `storeAndWritePreviousState` this functionObject
now can cache a number of timesteps and write these results in
addition to the current timestep


<a id="orgfd13b07"></a>

#### `swakExpressionAverageDistribution` records extremes and number of samples

In addition to the average now this Function object also records
the minimum and maximum value for each bin. Also the number of
samples used in the bin


<a id="orgd4365a7"></a>

#### Python-function objects that return a boolean now have a initialization-snipplet

The function objects `executeIfPython`, `setDeltaTWithPython`,
`setEntTimeWithPython` and `writeAndEndWithPython` now expect
code snipplet named `init`. This is executed in the beginning and
can be used to set up global variables if these snipplets need
some kind of state. The variables have to be declared `global` in
the snipplets that do the actual decision (for technical reason)


<a id="org610f657"></a>

#### `fvOptions`-support in PDE-function objects

The function objects `solveTransportPDE` and `solveLaplacianPDE`
now call the regular `fvOptions`-callbacks (this allows modifying
the solution in the same way it can be modified for solvers)


<a id="orga28e1ee"></a>

### Examples


<a id="org4b13ad8"></a>

#### `other/simpleBendedPipe`

Example to demonstrate `funkyWarpMesh` and post-processing on
bended geometries


<a id="orgc94c608"></a>

## 2015-05-31 - version number : 0.3.2

This is the last release to support OpenFOAM 1.7.x and older


<a id="orgfabd54e"></a>

### Future changes

These are things that will happen in the **next** release and will
break backwards-compatibility


<a id="orgdde37e3"></a>

#### Discontinuation of the `1.x`-branch

As version `1.7` is several years old this release will be the
last release that supports it.

Starting with this release the `port_2.x`-branch will become the
`default` branch and the `1.x` will become `legacy`


<a id="org04a4bd3"></a>

#### Fixing examples

Due to the umber of different supported Foam-versions not all the
examples run on all versions and it is not possible to fix them
in such a way that they work on all versions. In the next version
they will by adapted to use the `pyFoamPrepareCase.py` utility as
this supports having different Foam versions in one case. As a
consequence most cases won't run without an installed `PyFoam`


<a id="orga1f4f99"></a>

### Incompatibilities


<a id="org1e8b487"></a>

#### Changed behavior of `groovyBC` during initialization

If `value` is unset then during initialization the value of the
internal field next to the patch is used. Previous behavior was
to set the patch to \(0\).

In most cases the new behavior should be better.


<a id="org9d305b2"></a>

#### Changed semantics for boolean values in `internalField`

As OpenFOAM does not support geometric fields of type boolean
swak uses scalar fields for storing truth values (only in the
`internalField`-parser). The semantics was that a value of `0`
means `false`. Everything else `true`. Logical operators set
`true` to \(1\) and `false` to \(0\). As the test for equality to \(0\)
may sometimes fail this semantics is changed slightly: values
\(>\frac{1}{2}\) are interpreted as `true`. All others as `false`.

If operators were used properly this should not matter, but
expressions that assume for instance that `0.1` is `true` will
now fail. Overall this change improves the stability of logival
expressions


<a id="org64d1072"></a>

#### Better detection of single values

The improved detection of single values might break some
expressions. Especially for the Python-integration as values that
were previously passed as arrays are now being passed as single
values


<a id="org56f9a63"></a>

#### Parser for kinematic parcels replaces `minParticleMass` with `minParcelMass`

This reflects a change in the API of the kinematic lagrangian
parcels. The old function has been discontinued to avoid
confusions with changed semantics


<a id="orgba8cb4b"></a>

#### `SIGTERM` automatically switched on for parallel runs in `writeOldTimesOnSignal`

For parallel runs this signal is now automatically switched in so
that other signals are propagated to other processors


<a id="orgb69b37c"></a>

#### Changed bin-with in `swakExpressionAverageDistribution`

Due to a different calculation automatically calculated
bin-widths in this function object might slightly differ from
previous calculations


<a id="orgfeaf19a"></a>

#### `funkyPythonPostproc` writes function object data to a different directory

For the swak-function objects the data is now written to a
directory whose name is based on the input dictionary instead of
`postProcessing`.

This might break scripts and other post-processing procedures
that rely on the data being in `postProcessing`.

Data generated during the run-time of the solver is unaffected


<a id="org4892385"></a>

### New supported versions


<a id="org1047a79"></a>

#### Added support for Foam-Extend 3.2

Only minor adaptions. Mainly to accommodate the new debug switches


<a id="orga1f3c6b"></a>

#### Added support for OpenFOAM 2.4.0

Compiles with OpenFOAM 2.4.0 (and 2.4.x)


<a id="orgd279063"></a>

### Internals (for developers)


<a id="org269579b"></a>

#### Type of booleans changed for `internalField`

Results that were booleans used to report `bool` as their type
for the `internalField`-parser. Now they report
`volLogicalField`, `surfaceLogicalField` or
`pointLogicalField`. This makes them consistent with the
possibility of requesting these start symbols and specifying
logical fields in the parameters of a plugin function


<a id="org11f6a34"></a>

### Bug fixes


<a id="org171ebc4"></a>

#### `swakExpressionAverageDistribution` fails for small spans

If the span of the `abscissa` is too small (almost \(0\)) there
were numeric problems. In this case the bin-width is now extended
to \(1\)


<a id="org82b1b70"></a>

#### Quantile calculations (including `median`) not correctly working in parallel

Reason was that `SimpleDistribution.calcScalarWeight` did not
`reduce`. This is now fixed (and a special switch is introduced
for one situation where this isn't desirable)


<a id="org996b9b5"></a>

#### `PDE`-function objects broken because of `fvOptions`

On OpenFOAM-versions with `fvOptions` these were broken because
of inconsistent dimensions.

This is fixed: now if a `fvOption` is defined the
function-objects also needs `rho` and this is passed to the call
of `fvOption` when generating the source term


<a id="org94f9f4c"></a>

#### Restart in `binary` not working (with global variables)

As reported in
<https://sourceforge.net/p/openfoam-extend/ticketsswak4foam/225/>

Problem seems to be that the `HashPtrTable` is not correctly read
in `binary`-mode. Workaround is to switch to `ascii` before
writing and reading that table and then switch back to the
original mode


<a id="orgbad5ca8"></a>

#### Single values were passed as arrays

Single values like `min(expr)` were passed as arrays instead of a
single value. This is now fixed. The problem is that now
expressions that rely on the old behavior might break


<a id="org40152df"></a>

#### Distributions not written if there is only a single bin

If all data falls into one bin of the distribution then the
distribution was not written. This is now fixed


<a id="org97c426f"></a>

#### `weightedAverage` for `AccumulationCalculation` fails for zero-size fields

Fixed


<a id="org6b5f8db"></a>

#### `writeOldTimesOnSignal` fails with `writeCurrent`

If the current time was already written (because it is part of
the stored times) a segmentation fault occurred. This has been
fixed by checking whether the current time is already stored


<a id="orgb2e2e5f"></a>

#### Turbulence plugin-functions did not correct the boundary field

This has been fixed


<a id="org7608fb1"></a>

#### Some `maintainanceScripts` do not work under Python 3

The scripts

-   `makeSwakVersionFile.py`
-   `makeCopyrightEntries.py`

have been adapted so that they now work with Python 2.x as well
as Python 3


<a id="orge7aef2d"></a>

#### Function `distToPatch` now working

This function for the field parser gives the distance in the mesh
to a specified patch. *Distance* is defined as minimial sum of
cell-to-face distances needed to reach this cell from the named
patch


<a id="org891ba58"></a>

#### Not all `processorX` written in `writeTimesOnSignal`

If a `SIGSEGV` or `SIGFPE` were encountered only on some
processors then on the others no data was written because these
signals do not propagate to other processors

Now the signal handler raises a `SIGTERM` which is propagated to
the other processors. For parallel runs a signal handler for
`SIGTERM` is automatically set up to make sure that on all
remaining processors data is written


<a id="org9a32c54"></a>

### Infrastructure


<a id="org8631510"></a>

#### Script for generating releases

Provided by Alexey Matveichev

The script `maintainanceScripts/make-releases.sh` rolls a release
and puts it into the directory `releases`


<a id="org49c9dff"></a>

#### Automatic `swakConfiguration`

Provided by Alexey Matveichev

Automatically finds the linking options for Python with
`python-config`


<a id="orgaa48775"></a>

### New features


<a id="org26cd739"></a>

#### Additional distance-functions in field-parser

Similar to `distToPatch` there are now two additional built-in
functions:

-   **distToCells:** A logical field is provided. The distance to the
    cells for which this field is `true` is
    calculated
-   **distToFaces:** Same as `distToCells` but with a logical
    function for the faces

Both functions return cell-values


<a id="org3ef0b76"></a>

#### New function-plugin `swakMeshWaveFunctionPlugin` for mesh related distances etc

This library collects functions that are similar to
`distFromPath`: they use the `MeshWave`-algorithm to calculate
distances and connectivity of the mesh.

Functions in this plugin are:

-   **meshLayersFromPatch:** Calculates for each cell how many mesh
    layers it is away from a patch
-   **meshLayersFromCells:** Calculates the number of layers from a
    set of cells selected by a logical expression
-   **meshLayersFromFaces:** Calculates the number of layers from a
    set of faces selected by a logical expression
-   **floodFillFromCells:** Number connected regions. Cells selected
    by a logical expression separate these regions
-   **floodFillFromFaces:** Number connected regions. Faces selected
    by a logical expression separate these regions
-   **cellColouring:** "Colors" the cells in such a way that no two
    neighboring cells have the same number. Mainly
    for visualizing the mesh
    structure. "Neighboring" means "cells sharing
    a face" not an edge. Therefor it may look at
    the surface like there are cells with the same
    color


<a id="orgbc1d535"></a>

#### Additional function in `swakMeshQualityFunctionPlugin`

Additional functions:

-   **mqCellFaceNr:** Number of faces for each cell
-   **mqCellShape:** Field with numbers describing the cell
    shape. Values are:
    -   **1:** Hex
    -   **2:** Prism
    -   **3:** Wedge
    -   **4:** Pyramid
    -   **5:** Tetraeder wedge
    -   **6:** Tetraeder
    -   **0:** no classification. Polygon


<a id="org82ca1e1"></a>

#### Function object for developers that raises a signal at the defined time

The function object `provokeSignal` can be used to debug signal
handling. No other possible use is known.

The function object allows defining the signal, the time and - in
case of parallel runs - the processors on which the signal should
be raised


<a id="orgf9b174e"></a>

#### New function-object `executeIfSetOrZone` that only executes if sets or zones are present

This function object executes a lost of function objects if
face/cell/point sets or zones are present. The required zones and
sets are specified in a dictionary `setsAndZones`: keys are the
names of the entities the values are the types (like
`faceZone`). Only if **all** objects specified there are present
the function objects are executed.

As a side effect if `loadAndCacheMissingSets` is `true` than sets
that are not yet found in memory are loaded from
disk. **Attention**: if no set of that name is found on disk then
it is searched at every time-step. This is a potential
performance problem (it is not a problem if the set is there)


<a id="orgf1f8279"></a>

#### New function object `executeIfPatch` that only executes if patches are present

This function object executes a lost of function objects if
a list of patches is present.


<a id="orgd868441"></a>

#### Function object `listMeshData` displays data stored in mesh

This function object shows data that is stored in the
mesh. Mostly `solverPerformance` with the residuals of the linear
solvers


<a id="orgfb70df2"></a>

#### Function object `solverPerformanceToGlobalVariables`

This function object gets a list of `fieldNames` and gets the
information about their solver performances. The three quantities
that it gets are

-   **`nIterations`:** the number of iterations
-   **`initialResidual`:** residual before iterating
-   **`finalResidual`:** residual after iterating

For each value three variables are created (assuming the field is
named `foo`):

-   **`foo_nIterations`:** array with all the values. This is usually
    only usable in the Python-integration
-   **`foo_nIterations_first`:** value of the first solver
    performance
-   **`foo_nIterations_last`:** value of the first solver performance


<a id="org89f6023"></a>

#### Function objects for manipulating `fvSchemes` and `fvSolution`

`simpleFunctionObjects` now has a base class that allows
manipulating `fvSolution` and `fvSchemes` in-memory but the
solver behaves as if the file changed on disk. Application for
this is changing parameters like relaxation or discretization
schemes during the simulation. This can be used for instance to
start the simulation with 'safe' settings and switch to faster
convergence later.

There is currently only one function object
`timeDependentFvSolutionFvSchemes` that implements this (more are
planned). It allows switching to different subdictionaries at
specified time. An example can be found at
`Examples/manipulateFvSolutionFvSchemes/pitzDailyTimeSwitched`.
This function object gets a list of times and
sub-dictionaries. At the specified time the values from the
sub-dictionary overrides the values in the original dictionary
(Values not present in the sub-dictionary are left untouched). If
`reset` is specified as the name for the sub-dictionary then the
dictionary is set back to the original state.


<a id="org4e0a528"></a>

### Enhancements


<a id="org1fe62ea"></a>

#### `groovyBC` now has a better initialization if `value` is unset

Until no if `value` was not set `groovyBC` automatically
initialized the boundary to \(0\) until the actual expressions were
evaluated for the first time. This raised problems when people
for instance didn't initialize `T` to \(0\) and the density
calculation produced a *division by zero*.

Now if `value` is unset then the value of the patch is
initialized from the value of the internal field next to the
patch. This doesn't protect from the internal field being


<a id="org6f596e1"></a>

#### Function objects `writeFieldsOften` and `writeAditionalFields` now write Lagrangian clouds

With an additional optional argument `cloudNames` a list of
clouds to be written can be specified like the fields.

This feature was implemented by E. David Huckaby


<a id="orgada7f40"></a>

#### Added option `-functionPlugins` to `funkySetFields` and other utilities

For utilities for which this is appropriate this allows loading
function plugins from the command line (without adding them to
the `libs`-entry in the `controlDict`). It is assumed that the
name of the library starts with `libswak` and ends with
`FunctionPlugin.so`.


<a id="org54da6d9"></a>

#### Optional parameter `functionPlugins` for parsers created with a dictionary

If a list of words named `functionPlugins` is found then the
string `libswak` is added in front and `FunctionPlugin.so` is
added at the end and a library of that name is loaded to add the
functions provided there


<a id="org0d42d6c"></a>

#### Additional signals added to `writeTimesOnSignal`

Now it is possible to handle `SIGUSR1`, `SIGUSR2` and
`SIGTERM`. Only needed for testing


<a id="org255d75b"></a>

#### `pythonIntegration` does nothing if no code is present

If a code is a string of the length \(0\) nothing is done. This is
especially important as no global namespaces are read (which
**may** not be created at the time. Especially during initialization)


<a id="orgcb7b6e3"></a>

#### `funkyDoCalc` uses `weight` and `mask`

If a dictionary specifies the entries `mask` and `weight` then
these are evaluated and used to mask and weight the data
specified in `expression`


<a id="orgd9e3bba"></a>

#### `funkyDoCalc` allows setting bin width and number

If specified in the sub-dictionary the entries
`distributionMaxBinNr` and `distributionBinWidth` allow setting
the number of bins. These values are not used exactly but give
the distribution class a hint. `distributionMaxBinNr` takes
precedence


<a id="org45b5cc7"></a>

#### Timeout in `writeOldTimesOnSignal` to allow other processes to finish writing

For parallel runs the process that initiates the writing of data
waits for the other processes to write their data. This time can
be specified with a parameter `sleepSecondsBeforeReraising` that
has a default value 60


<a id="org5414522"></a>

#### `writeAndEnd`-function objects now allow storing and writing previous time-steps

The function objects based on `writeAndEnd` now have an optional
switch `storeAndWritePreviousState`. If this is set then a number
of old time-steps can be stored and will be written when the run
is terminated.


<a id="orgba61c9f"></a>

#### `fvOption`-subclasses now support additional forms of `addSup`

In 2.3.1 two new forms of `addSup` where added to `fvOption` (one
for compressible equations. The other one for multi-phase
solvers). Both new forms are supported by all
`fvOption`-subclasses in `swakSourceFields` and `swakFvOptions`


<a id="org21b3176"></a>

#### `swakExpressionAverageDistribution` allows specifying the limits

When the switch `dynamicExtremesAbscissa` is `false` then the
limits of the distribution can be set with `minAbscissa` and
`maxAbscissa`. This mainly influences the bin-width. If values
fall outside this range then the distribution is extended to
accommodate these values


<a id="org5ac395a"></a>

#### Function objects derived from `simpleDataFunctionObject` now can write to a different directory than `postProcessing`

This involves almost all function objects in swak that write data
to `postProcessing`. The library now allows setting a different
default. This value can also be set with an optional entry
`postProcDir` on a per-function-object basis.

This change is used in the `funkyPythonPostProc`-utility to set a
directory name that is based on the name of the input dictionary
(or set with an option). Now if there are function objects used
they will write their data to this directory instead of
`postProcessing` (leaving data generated during the running of
the solver alone)

**Note:** This only works for function objects from swak. "Regular"
 function objects will still write to `postProcessing`


<a id="orgbd7274d"></a>

#### `funkySetFields` allows correcting the boundary conditions afterwards

An additional option `-correctResultBoundaryFields` corrects the
boundary conditions before writing to disk. In dictionary mode
there is also an option `correctResultBoundaryFields`.

This is only needed in rare cases.


<a id="orgdbbbcb8"></a>

### Examples


<a id="orgbefc428"></a>

#### `icoFoamCavityWithParcel` as a minimal example for adding lagrangian particles

This case demonstrates how to add lagrangian particles to the
simplest tutorial-case


<a id="org695e513"></a>

## 2016-07-17 - version number : 0.4.0

This is the first release that does not support OpenFOAM 1.7.x,
OpenFOAM 1.6-ext and older versions anymore


<a id="org37dc9fd"></a>

### New supported versions


<a id="org867e2df"></a>

#### Rolling support for `OpenFOAM-dev`

This version adds support for `OpenFOAM-dev` published at
`git://github.com/OpenFOAM/OpenFOAM-dev.git`

As this version is constantly changing it might or might not work
with the most up-to-date version of the repository.

The port is maintained in a branch `feature/port_of-dev` that is
never closed and is periodically merged to the `develop`-branch.

Internally the `dev`-version is maintained as version `9.9.99`


<a id="orgb9663be"></a>

#### Support for OpenFOAM 3.0

Support for this version has been added (basically all the fixes
from the `dev`-branch were guarded with the correct version


<a id="org3acf1dd"></a>

#### Support for `foam-extend` 4.0

This version is supported by `swak4Foam` (compiles and runs)


<a id="orgb514f3d"></a>

#### Support for the OpenFOAM v3.0+ version

This version is supported. For the time being it can be assumed
that this version is similar to the regular OpenFOAM 3.0


<a id="orgb9314f5"></a>

### Bug fixes


<a id="org406a995"></a>

#### `fieldReport` doesn't work with all field names

Fields that have names that are not considered proper variable
names by swak (because for instance the have a dot in the name
like `alpha.water`) were not handled by `fieldReport`. This has
been fixed


<a id="org85849c1"></a>

#### Construction of `SimpleDistribution` may fail for zero-size fields

The reason is the initialization with `pTraits::max` and that
during the calculation of `mag` this causes an overlflow. Fixed
by scaling down to the square root of the maximum


<a id="org4281393"></a>

#### Wrong type for cloud in `writeFieldsGeneral`

Because of this compilation in 2.2 failed. Fix provided by Bruno Santos


<a id="org2fb9b7e"></a>

#### `solverPerformanceToGlobalVariables.C` did not compile with OF 2.2

The reason was that the `solverPerformance`-class is hidden in
`lduMatrix`. Fix provided by Bruno Santos


<a id="org7ae540d"></a>

#### Solid thermophysics not available in the `ThermoTurb` function plugin

For OF-versions where `fluidThermo` and `solidThermo` have the
same base functions like `thermo_Cp` can be used for solids too


<a id="orgfa8cf34"></a>

#### `lookup`-tables no working in `faField`-parser

Because of a bug in the lexer lookup tables did not work. Fixed


<a id="org3b3ab06"></a>

#### `swakDataEntry` not correctly written for some versions of OpenFOAM

The macro that guarded the code needed for some OpenFOAM-versions
did not include OpenFOAM 3.0. Fixed


<a id="orgaa4853f"></a>

#### `executeFunctionObjectsFvOption` always executed for `makeRelative` and `makeAbsolute`

The wrong flags were checked and the function objects were always
executed when even if `doMakeAbsolute` and `doMakeRelative` were
set to `false`. Fixed


<a id="orge40b6a7"></a>

#### Does not compile with `WM_LABEL_SIZE=64`

A reference to a `label` that was passed to a `flex`-function
broke compilation because that expects a 32-bit integer. Fixed


<a id="org01e9afe"></a>

#### Tensor-fields not correctly handled by `replayTransientBC`

Due to a copy/past-problem all tensor-fields (including
symmtrical and spherical) would have caused the utility to
fail. Fixed


<a id="orgb06d883"></a>

#### Surfaces created by `createSampledSurface` not updated during mesh movement

The function object ignored the callbacks for moving meshes. It
now implements them and forces a regeneration of the surface if
the mesh moves


<a id="orgc1141af"></a>

#### `funkySetFields` does not set dimensions

The `dimension`-entries were read but not set. This is now fixed


<a id="org1085d4e"></a>

#### `funkySetBoundaryField` does not compress files

The utility now reads the compression state of the original and
sets the resulting file accordingly


<a id="orge7b7da6"></a>

#### `swakExpression` not working for point fields

Point fields were not correctly returned. This is fixed


<a id="org560b6f6"></a>

### Infrastructure


<a id="org3c8846a"></a>

### Documentation


<a id="org8daf295"></a>

#### Adaption of the reference guide for new `org-mode`

New version of `org-mode` makes changes in the UML-code necessary


<a id="org3d59daa"></a>

### New features


<a id="orgc92cfab"></a>

#### 2D-lookup tables supported in grammars

Like the optional list `lookuptables` it is now possible to have
a list `lookuptables2D` with 2-dimensional lookup tables. A table
with the name `tbl` can be used like this in expressions:
`tbl(expr1,expr2)`. `expr1` and `expr2` must evaluate to scalar
values of the same entity (cells, faces, points &#x2026;) and the
expression will evaluate to a scalar.

This feature is based on the `interpolation2DTable` that is part
of OpenFOAM since 2.2 but there is a modified version of this
class included in `swak4Foam` as there is a problem with the
output in the original version. Currently `foam-extend` is not
supported as this is missing some base classes as well
(`tableReader`)


<a id="org6ade180"></a>

#### Added a function plugin for dynamic meshes

The Plugin `DynamicMesh` adds functions to visualize the mesh
movement. The functions are

-   **dyM<sub>meshPhi</sub>:** the mesh `phi` as stored with the mesh. Some
    distributions write this field anyway
-   **dyM<sub>meshCourant</sub>:** Mesh courant number. Replicates the number
    some solvers print automatically
-   **dyM<sub>meshVelocity</sub>:** Velocity with which the cells are
    moved. Reconstructed from the mesh `phi`

These functions might failed if the mesh has not been moved yet
so their calls might have to be encapsulated in a
`executeIfStartTime` function Object


<a id="orgb0d81c2"></a>

#### Function object to load `cell`, `face` and `pointSet`

The function object `loadTopoSets` loads all the available sets
in the mesh into memory for expressions that need them. Also
allows automatic writing of these sets (switched by `writeSets`)


<a id="org775709d"></a>

#### Function object to create and manipulate `cell`, `face` and `pointSets`

The function objects `manipulateCellSet`, `manipulateFaceSet` and
`manipulatePointSet` allow the manipulation of these
`topoSet`. They do so by evaluating an expression `mask` and all
cells (faces, points) for which the expression is `true` will be
part of the topoSet. If the topoSet is not present in memory the
function object fails unless the parameter `createMissing` is set
to `true`. The entry `writeManipulated` (default: `true`) says
whether the topoSet should be written at write times.

An example of this functionality is found in `Examples/other/topoSetDamBreak`


<a id="org84e5d40"></a>

#### Function object that executes other function objects only at write time

The function object `executeIfWriteTime` in the
`simpleFunctionObjects` executes a list of other function objects
only if the current time is a scheduled write time. The purpose
of this function object is to only execute function objects at
write times that don't honor the
`outputControlMode`-setting. Also does the `else`-branch allow
executing only when **nothing** is written


<a id="orgec41a33"></a>

#### Added a function plugin for MRF cases

This function plugin makes a number of function from the
`MRF`-model available:

-   functions to make fields absolute or relative in the `MRF` region
-   a function to calculate the Coriolis force

All these functions call the MRF-model


<a id="orgf3cfb18"></a>

#### Added library `simpleCloudFunctionObjects` with function objects for particle clouds

These function objects can be added to particle clouds. In this
first version these objects can be added:

-   **cloudMoveStatistics:** Records simple statistics about the
    solution of the cloud:

    -   How often were faces hit by particles (total, per particle:
        minimum, mean and average)
    -   How often were particles moved (same data as face hits)
    -   How often was each patch hit

    Only minimum effort has been spent to consolidate this data
    across processors (particles may be counted on multiple
    processors).

    The main purpose of this function object is to spot problematic
    behavior (particles that hit patches repeatedly and don't
    move)

    The optional parameter `reportHitNr` and `reportMoveNr` print
    out the ids of particles that exceed these thresholds

-   **eliminateCaughtParticles:** Sometimes particles get caught in
    "endless loops" (hitting the same patch over and over again
    without significant movement). This may slow down
    simulations significantly as basically the same impact is
    calculated over and over again without any progress. Two
    parameters allow eliminating such parcels:

    -   **maximumNumberOfHits:** if the same boundary face is hit more often
        than this by the particle (without hitting any other
        faces) then the particle is eliminated. Recommended value: 1000
    -   **minDistanceMove:** Minimum distance a particle has to move
        when hitting a boundary face. If it moved less the
        particle is removed. Recommended: \(10^{-9}\)

    If one of the parameters is set to a negative value the
    criterion is "switched off"
-   **eliminateOutsideParticles:** Removes particles that are outside
    the mesh (are not inside any cell). The purpose of this is
    to eliminate particles that are for some reason not
    correctly tracked
-   **correctParticleCell:** Correct the cell of the particle before
    the evolution begins.

    This should fix problems with moving meshes but is currently
    not working correctly.

    An optional parameter `logCorrected` logs the data of the
    corrected particles to a file. Only use for debugging or if you don't
    expect many incidents
-   **traceParticles:** This function object gets a list of particle
    ids. For these particles all data is written whenever a
    function object is called.

    This function object should **only** be used for debugging if the
    behavior of a special particle should be tracked


<a id="org358f60e"></a>

#### Add library `swakCloudFunctionObjects` with function objects that use expressions for clouds

These function objects can be added to particle clouds and use
expressions. The function objects are

-   **eliminateBySwakExpression:** Evaluates an expression for each
    particle. If the expression is `true` then the particle is
    eliminated. Expression can be evaluated before or after the
    moving of the particles


<a id="orgbdbc4d4"></a>

#### `streamFunction` added to `VelocityField` function-plugin

A function that calculates the stream function in a 2D simulation has been added


<a id="org3a20477"></a>

### Enhancements


<a id="orgf968a63"></a>

#### Added function for `smooth`, `sweep`, `spread` to `FvcSchemes`-function plugin

These functions from `fvc` were implemented as
plugin-functions. Mainly to be able to test their behavior. To
check what they do see `fvcSmooth.H` in `finiteVolume`


<a id="org29b7174"></a>

#### Additional functions in plugin `ThermoTurb`

Functions from the public interface of `basicThermo` and
`turbulenceModel` have been added (like `kappa`, `kappaEff` etc)


<a id="orgaacd6ff"></a>

#### Conditional function objects now allow construction of their `functions` at start

With the parameter

    constructUnconditionally yes;

in function objects that start with `executeIf` it is possible to
construct the lists unconditionally at start instead of waiting
for the condition to be true. If unset then the function objects
default to the old behaviour


<a id="org9625fdf"></a>

#### `manipulateField`-function object can switch **off** manipulating at start

The regular behavior for this function object is that it does
the first manipulation during construction. This can be switched
off with the setting `manipulateAtStartup` in cases where not all
the requirements for correctly evaluating the expressions are
fulfilled during construction


<a id="org5618d02"></a>

#### `replayTransientBC` now handles surface and point fields

The utility can now read surface and point fields. Surface-fields
are not corrected because this is not supported by Foam


<a id="orgf32ef62"></a>

#### `replayTransientBC` reads `fvOptions`

The utility now reads `fvOptions` for FOAM-versions that support
it. They have to be switched on with 'useFvOptions' as most of
the tine they are not needed (only with function objects that
solve equations)


<a id="orgcaa4b49"></a>

#### PDE-function objects now have additional `solveAt`-option `never`

When this option is set then the function-objects are read
(including the field) but never solved


<a id="org627f043"></a>

#### `replayTransientBC` reports execution time

The utility now reports the time. This is useful when using the
utility to test function objects


<a id="orgd902b7e"></a>

#### Added parameter `sourceImplicitUseSuSp` to `PDE`-function objects

The function objects `solveLaplacianPDE` and `solveTransportPDE`
now have a new parameter `sourceImplicitUseSuSp` that allows
switching from using `Sp()` (the default) to `SuSp()` for the
addition of `sourceImplicitExpression`


<a id="org6706354"></a>

#### `replayTransientBC` can read and update dynamic meshes

The command line option `-useDynamicMesh` tells the utility to
read the mesh as a dynamic mesh and update it at every time-step


<a id="org2a7fe3d"></a>

#### `solveTransportPDE` function object now aware of mesh movement

If the function object detects that it is created with a moving
mesh then it asks for a parameter `makePhiRelative` to specify
whether `phi` should be made relative to the mesh movement (this
is usually necessary). Then either a `velocityExpression` or a
`velocityName` has to be specified as well and `phi` is corrected
according to the mesh movement

If `steady` is `true` then `phi` is **not** made relative


<a id="orgd2c0c9e"></a>

#### `funkySetLagrangianFields` allows creating fields of arbitrary types

If a cloud is created and in en entry in `expressions` the entry
`class` is found then it is assumed that a field of that type
should be created. The `expression` is not evaluated but added to
the cloud for each particle.

**Note:** this does not do **any** semantic checking and is only to
be used to set constant values for required fields for which
`swak` can not evaluate the type


<a id="org045a2eb"></a>

#### Unconverged steady solution of PDE-function objects are reset

For some reason the linear solver does not converge on the
`solveTransportPDE` and `solveLaplacianPDE` function
objects. This messes up the solution field. In these cases the
solution field is reset to the last known good solution. If this
behavior is undesired it can be switched off with
`restoreNonConvergedSteady`


<a id="orga70dc78"></a>

#### Additional output options for function obkjects based on `simpleFunctionObjects`

There are now three more options for `outputControlMode`:
`outputTimeAndStartup`, `timeStepAndStartup` and
`deltaTAndStartup`. These work like the other options but write
data at the startup-time as well


<a id="org9a6302e"></a>

#### `dumpSwakExpression` now works in parallel as well

This function object used to only dump values from the master
processor if used in parallel. Now the values from all processors
are dumped in the order of the processors


<a id="org5aa774f"></a>

#### Missing properties `age` and `dTarget` added to KinematicCloud parser

Two properties that were missing for that cloud type are now
available in the parser


<a id="org5546a01"></a>

### Examples


<a id="org14c70c2"></a>

#### `solverPDE/pitzDailyWithPDE` extended

This case has been modified to a version that was presented at
the PFAU (Austrian User Group Meeting) in 2015. Now it compares
with the `scalarTransport` function object that was added to
OpenFOAM.

The case now also calculates the time the fluid needs from the
inlet to the outlet (`residenceTime`). Steady as well as
transient


<a id="orgb8d297b"></a>

## Next release - version number : 0.4.1


<a id="orgb3bc5bc"></a>

### New supported versions


<a id="org1d0298f"></a>

#### Support for OpenFOAM v1606+

This version is supported in the this version of
`swak4Foam`. There is only one problem: there were changes to the
`tmp`-template. These changes have been taken care of in the
`swak4Foam`-sources. **But** there are two source files in the
distro that need to be modified (basically adding `.ref()`
instead of `()` in three places:

    src/finiteVolume/finiteVolume/fvc/fvcD2dt2.C
    src/finiteVolume/fvMatrices/fvMatrix/fvMatrixSolve.C

Therefor the officially released version will **never** compile
with `swak4Foam` but this is nothing that can be fixed in
`swak4Foam` (the patch is found in the directory
`distroPatches/OpenFOAM-v1606+`)


<a id="org2815f99"></a>

#### Support for OpenFOAM 4.0

This version is supported in this version of `swak4Foam`. There is
one problem: the released version has two problems that mean that
`swak4foam` will **never** compile on the released version.

Patches fixing these issues are found in the directory
`distroPatches/OpenFOAM-4.0`


<a id="orgd3d8ff4"></a>

#### Support for OpenFOAM 4.1

This version is supported in this version of `swak4Foam`. No
modifications are required


<a id="org088e4de"></a>

#### Support for OpenFOAM v1612+

This version supports OpenFOAM v1612+. The modifications were
done by Mark Olesen


<a id="orgf2c6815"></a>

### Incompatibilities


<a id="org40d245e"></a>

#### Changed location of files by `simpleFunctionObject` and subclasses for multi-region-cases

The location of files written by these function objects (which
are almost all function objects writing data in the
`postProcessing`-directory) has changed: now if the function
object belongs to a region that is not the default mesh the
output is written to a sub-directory with the name of that mesh.

This might break scripts or other tools that people use to
process that data


<a id="org6eb48b0"></a>

### Bug fixes


<a id="orgf08bae2"></a>

#### Destruction of `dummyPhi` causes error message

On some distros the destruction of a field stored in an `autoPtr`
**after** the destruction of the mesh causes an error message. This
has no effect but is annoying. Fixed


<a id="org4f48173"></a>

#### `functionObjectListProxy` does not honor `outputTime`

The function object was executed every time not matter what
`outputControlMode` was set. Fixed


<a id="org3c12117"></a>

#### Plugin functions with `bool` results not supported by all drivers

Until now only the `internalField` and the `faInternalField`
supported boolean results. Now all drivers support them


<a id="org7149c28"></a>

#### No plugin function for `cloud` possible

Because the static variable/method `driverName` was not specified
no plugin functions for clouds could get specified


<a id="orgfaf2b19"></a>

#### Wrong syntax in primitive types of plugin-function causes C++-error

If a primitive function for instance expects a label and finds an
unscanable string like `x23` then this used to generate a failure
by the C++-library. This gave no indication on the real
problem. Now there is a OpenFOAM-error message with a somewhat
better explanation


<a id="orgb05d3bb"></a>

#### Initialization function objects in `simpleFunctionObjects` fail in parallel

Because of the wrong order of initialization of these function
objects they failed in parallel. Fixed


<a id="org24c43e3"></a>

#### Writing `storedVariables` fails for single values in parallel

This war reported by Philippose Rajan (who also provided a patch) at
<https://sourceforge.net/p/openfoam-extend/ticketsswak4foam/237/>

In parallel if the values was marked as a single value but no
part of the underlying entity was on the processor it was tried
to access the first element of an empty field. The fix was to
write the value \(0\) instead. This fix has been adapted so that
the actual uniform value is written to the file (and read as well)


<a id="orgd95a945"></a>

#### `executeIfOpenFOAMVersionBiggerEqual` not correctly working with alphabetic patch versions

If the patch version of the current OpenFOAM-version is not a
number and not `x` then this function object failed


<a id="org35b32b9"></a>

#### `mqFaceMaximum` and `mqFaceMinimum` in the `LocalCalculations`-plugin fail for patch types without values

As patch types like `empty` have no values stored this plugin
failed. Now it checks if there is data


<a id="org63baea6"></a>

#### `simpleFunctionObject` did not pass parent directory correctly

When storing the data for the function object no reference to the
parent directory was stored and therefor scoped macro-expansion
did not work anymore


<a id="org94b711b"></a>

#### `ThermoTurb` functionPlugin not working with new `thermoType`-format

The thermophysical functions in this plugin did not work if
`thermoType` was a dictionary. Fixed

Also: construction of turbulence now gets the rho-field directly
from the thermophysics


<a id="org6b47d3c"></a>

#### `solidThermo` instances could not use `basicThermo`-methods in `ThermoTurb`-plugin

Reason was that only two specific thermo-subtypes of
`fluidThermo` were searched if the method was not part of
`solidThermo`. Now also the basic type is searched


<a id="orgc87c1be"></a>

#### Global variables recognized but not correctly used by some drivers

The drivers for sampled entities, sets and zones found global
variables but were not able to use them correctly. Fixed


<a id="org1d7ce4a"></a>

### Internals (for developers)


<a id="org355caf0"></a>

#### `ExpressionResult` now stores single values separately

To fix a problem with writing of single values in parallel (see
above) a `union` was added to store the single values. The reason
for this is to avoid a second parallel communication when writing
the value. This adds memory to `ExpressionResult` (in the order
of a `tenor` object). The memory is not the problem but that the
single value is saved twice (the other time is in the regular
value field)

For compilers that do not support the C++0x-standard instead of a
`union` a `struct` will be used because non-primitive members for
`unions` are only supported for that standard. This will lead to
a slightly higher memory usage (but still small compared to full
fields)


<a id="org9d4bae3"></a>

#### Rewrite of `functionObject` removes the `start()`-method

OpenFOAM-versions based on the foundation release 4.0 and later
don't have a `start()`-method in the function objects
anymore. Lot of functionality of swak relied on this method. To
make swak compatible across versions `start()` is now called in
the constructors of the function-objects (if the OpenFOAM-version
requires it)


<a id="org87884fe"></a>

### Infrastructure


<a id="org692aebc"></a>

#### Add the development branch to the version string in utilities

If the compiled version is not a released one then the info of
`hg branch` is added to the version output that utilities like
`funkySetFields` print


<a id="org79adae2"></a>

### Documentation


<a id="orgf790cab"></a>

### New features


<a id="org22fbacc"></a>

#### Function plugin `ShiftField` that allows shifting volume fields

When adding the library `libswakShiftFieldFunctionPlugin.so` to
`libs` in the `controlDict` functions are added that allow
shifting volume fields by a specified distance. One example
would be an expression

    "shiftConstantScalarField(T,(1 1 0))"

which generates a new `volScalarField` where the value at `(0 0
     0)` is the value of `T` at the location `(1 0 0)`.

The scheme for naming the functions is
`scalar<ShiftType><ValueType>Field` with

-   **ValueType:** one of the base types `Scalar`, `Vector`,
    `Tensor`, `SymmTensor`, `SphericalTensor`
-   **ShiftType:** how the shift is specified. Possible values are either
    -   **Constant:** A constant vector (like the example here)
    -   **Expression:** An expression that gives a `pointVectorField`
        (for instance `interpolateToPoint(time()*vector(0,0,-1))`)

These functions work by generating a new mesh that is shifted as
specified (in the inverse direction) and interpolating between
this and the original mesh. This is computationally **very**
expensive and therefor not recommended in evaluations that occur
very often.

Cells that have no shifted equivalent value are set to
zero. Boundary patches are not interpolated. Both of these
behaviors can cause weird results.

There are also variants with `Default` in the end. These allow
setting different default values than \(0\)

The functions with the names `map<ShiftType><ValueType>Field` map
the value of the nearest cell. This is more stable but might
coarsen the field

The additional `findShifted<ValueType>Field`-functions do the
mapping by avoiding the `meshToMesh`-functions of OpenFOAM: the
shifted value is found by "looking" into the original cell that
contains the point that is the cell center plus the displacement
value. If that point is not in the mesh a default value is used


<a id="org6625f01"></a>

#### Library `swakStateMachine` to easily implement switching in cases

This library implements *State machines*. This is a convenient
way to store a state in a simulation and switch between them by
predefined rules. An example for states in a *State machine*
would be: `closed`, `valveOpening`, `open`, `valveClosing`

The library has the function objects and plugin functions to use
*State machines*.

The chapter *State machines* in the *Incomplete swak4Foam
reference* describes it in more detail


<a id="orga50b8bc"></a>

#### Function object `stateMachineFvSolutionFvSchemes` to switch numerics accorrding to a state machine

This function object allows modifying `fvSchemes` and
`fvSolution` according to the states of two state machines.


<a id="orgbcd372a"></a>

#### Function plugin `Quantile` for calculations with the distribution of a function

All the functions in this plugin first calculate a
distribution. This distribution is calculated from the first parameters:

1.  the field for which the distribution is calculated
2.  the weight with which the cell values enter the
    distribution. Usually `vol()` (volume weighted) or `1` (equal
    weight for all cells)
3.  a logical expression that specifies which cells are used
    (`true` for all cells)
4.  the number of bins to use for the distribution. This specifies
    how fine the distribution is calculated. Should be small
    compared to the number of cells. Usually the values `100` or
    `1000` should be sufficient

The implemented functions are

-   **fracSmallerThan:** Writes a fraction in the range from \(0\) to
    \(1\) with for instance \(0.5\) meaning "50 % of the
    distribution is smaller than the value in this cell". The
    cells which are masked out get the value \(-1\).
-   **fracSmallerThanFromOther:** Like `fracSmallerThan` but there is
    an additional parameter: the field that is used for
    calculating the fraction. Here the mask is not used for
    calculating the fraction (but still used for calculating the
    distribution)
-   **quantileFromOther:** Basically the inverse of
    `fracSmallerThanFromOther`. The last parameter is a fraction
    (from \(0\) to \(1\)) and the result is the corresponding
    quantile: if a fraction \(0.5\) is specified then the value
    from the distribution for which 50% are smaller is written
    to the cell

Note: values may slightly vary according to the number of
bins. But the bin number also increases the calculation time.


<a id="orgc958402"></a>

#### Function `outputTime()` to indicate output time

A function `outputTime()` has been added to the parsers. This
function is `true` if Foam is writing at the current time and
`false` else


<a id="org261a825"></a>

#### Utility `writeBoundarySubfields` to write subfields of boundary conditions

Sometimes to debug problems with boundary conditions it is good
to **look** at fields like `refValue` in Paraview (for instance
because `groovyBC` might not have set that value the way we
expected it). For a field `foo` the utility would write a field
`foo_bar` if the user specified `bar` to be written. The interior
of the field will be \(0\), patches where `bar` is defined will be
`fixedValue` with the value of `bar`. All others are
`zeroGradient`

A string with the specificion of the subfields to create fields
for is set with the option `-subfields`. The specifications are
separated by `,`. Each specification is of the form
`<name>:<type>` (with type being `scalar`, `vector`, `symmTensor`
or `sphericalTensor`. A type `native` assumes that the same type
as the field should be used). If unset the default value is used:
the specification to write all subfields usually associated with
the `mixed` boundary condition

It is assumed that the length of the sub-field is equal to the
number of faces in the patch


<a id="org83bb4c9"></a>

#### Library `swakDynamicMesh` with "swakified" dynamic mesh subclasses

This libraries collects specializations of dynamic mesh classes
that work together with OpenFOAM. Currently these classes are in
the library:

-   **swakMotion:** this is a solid body motion solver for the
    `solidBodyMotionFvMesh` where the translation and the
    rotation of the solid body can be specified by `swak`-expressions
-   **groovyCyclicACMI:** this patch type is a subclass of
    `cyclicACMI` where the faces that cyclic can be switched on
    and off with an additional field that is specified with the
    parameter `openField` in the specification in the
    `boundary`-file. This field has to be present in memory at
    the first time-step (usually a
    `readAndUpdateFields`-functionObject is a good way to
    achieve this). The values on the corresponding
    `nonOverlapPatch` of the first boundary in the coupled pair
    is used to switch faces on and off: if the value of the face
    is \(1\) then it is 'open' if it is \(0\) it is 'closed'
-   **nonMovingFvMesh:** A non-moving mesh that pretends to
    move. This triggers the recalculation of AMI-interfaces
-   **groovyBCJumpAMI:** allows implementing a jump condition on an
    AMI-interface that depends on an expression evaluated on the
    master patch of the interface

The folder `Examples/DynamicMesh` has examples for this library


<a id="orgbee5655"></a>

#### Record current residual of the equations with `fvOptions`

The two `fvOptions` `matrixChangeBefore` and `matrixChangeAfter`
can be used to record the residual or the change of it.

The residual \(r\) for a field \(\phi\) which is supposed to be the
solution of a linear equation \(A \phi = b\) is \(r=A \phi-b\)

`matrixChangeBefore` calculates this for a \(\phi\) specified in
`fieldName` and uses for \(A\) and \(b\) the current `fvMatrix` of
that field. The result is stored in a field whose name is
composed of the value of `namePrefix` and `fieldName`. This field
can be useful to see where the current solution does not fit the
linearized system

`matrixChangeAfter` does the same calculation but assumes that
the field already exists and subtracts the result from the
previous value. So if another `fvOption` was applied to the
`fvMatrix` between these calls then the field has the change of
this matrix. If "only" a source term was added then this field
corresponds to the source term.

In principle `fvOptions` are executed in the order in which they
are specified. If the setting `doAtAddSup` is set to `true` then
it is executed in an early phase (when source terms are set). If
set to `false` then the `fvOption` is executed during the
`setValues=/=constrain` phase.


<a id="orge318d91"></a>

#### Setting time-step with an expression: `setDeltaTBySwakExpression`

This new function object in `simpleSwakFunctionObjects` evaluates
a `scalar` expression and sets `deltaT` accordingly. Only works
on OpenFOAM-versions that support `DataEntry` or its successor
`Function1Types`.


<a id="org50d15a9"></a>

### Enhancements


<a id="org134732e"></a>

#### Primitive parser for Plugin-functions now supports tensor types

The parser for `primitve` types now supports `tensor`,
`symmTensor` and `sphericalTensor` as well.


<a id="org8a4a152"></a>

#### Plugin-functions now can use `variables` (under certain circumstances)

For an expression `fooFunmction(var+2)` where `fooFunction` is a
Plugin-function the symbol `var` can now be a variable: if in the
parent dictionary there is a sub-dictionary `fooFunctionData`
then this dictionary is searched for a `variables`-entry and
these variables are then evaluated (it is also possible to have
`lookuptables` and similar in `fooFunctionData`)


<a id="org01d9b10"></a>

#### Timeline function objects now optionally write value at start time

Function objects that inherit from `timelineFunctionObject` (like
`swakExpression`) now have an optional parameter
`writeStartTime`. If set to `yes` then the value at start-time
will be written. The default setting is `no`. This is similar to
the old behavior and avoids crashes at startup. Some classes
change this default to make it `yes`


<a id="org10f9d82"></a>

#### Additional functions in the radiation function plugin

Additional functions for the `absorptionEmissionModel` and the
`sootModel` are added to to library with the radiation-functions


<a id="org27e4803"></a>

#### Improvement of `readAndUpdateFields`: surface fields, output, switching

The function object `readAndUpdateFields` got three improvements:

-   an optional switch `correctBoundary` allows switching the
    correction of boundary conditions off
-   surface-fields are now read as well. But no boundary correction
    is performed as the these fields do not support this
-   better output. Instead of silently reading fields or using
    those in memory the name of the field and the type are written
    out


<a id="org46af9ec"></a>

#### `executeIfStartTime` now also allows execution if it is "only" a restart

Normally the function object only executes only if this is the
real start time (not a restart). If the option `executeOnRestart`
is set then the function object also executes if this is a restart


<a id="org56bc05b"></a>

#### `reportAvailableFvOptions` now reports `constrain`-methods

On OpenFOAM-versions that support it this now reports if
`constrain` is called for an equation


<a id="orgc6d7dbf"></a>

#### `constrain` method added to `fvOptions`

In earlier OpenFOAM-versions the name of this method was
`setValue`. To keep source compatibility this method is kept and
the method `constrain` patches through to it. If the `fvOption`
has `SetValue` in the name then this name is kept


<a id="orgb98969a"></a>

#### `simpleFunctionObjects` in multi-region cases now write to sub-directories of `postProcessing`

To conform with the way that regular OpenFOAM function objects do
it now function objects that belong to the non-default mesh in
multi-region cases write their data to a sub-directory of
`postProcessing` named after the mesh


<a id="orga96ce5e"></a>

#### `funkyWarpMesh` allows reading function objects

Function objects can now be loaded with an option
`-allowFunctionObjects`


<a id="org0095fc2"></a>

#### `executeIfStartTime` now also allows execution if it is "only" a restart

Normally the function object only executes only if this is the
real start time (not a restart). If the option `executeOnRestart`
is set then the function object also executes if this is a restart


<a id="orgcbb8ce2"></a>

#### Scoped macro expansion now works for `storedVariables` and `swakDataEntry`

When reading these data structures the parent directory is
correctly passed and therefor scoped macro expansions
(`$[:deltaT]` for instance) works


<a id="orge43682f"></a>

### Examples


<a id="orgce67209"></a>

#### `FvOptions/heatExchangerSources`

Demonstrates getting changes to the solution (residuals) with
`matrixChangeBefore` and `matrixChangeAfter`
