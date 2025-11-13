// 函数: sub_140a51fb0
// 地址: 0x140a51fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_68
sub_140a2e390(&var_68, u"%u", zx.q(data_143db1908))
int16_t* const rdi = &data_142d40450
int16_t* const r8_1 = &data_142d40450
int32_t var_60

if (var_60 != 0)
    r8_1 = var_68

sub_140a3e8b0(arg1, u"ProcessId", r8_1)
int16_t* rcx_2 = var_68

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140a2e390(&var_68, u"%d", zx.q(data_143db1918))
int16_t* const r8_3 = &data_142d40450

if (var_60 != 0)
    r8_3 = var_68

sub_140a3e8b0(arg1, u"SecondsSinceStart", r8_3)
int16_t* rcx_5 = var_68

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140a3a270(arg1, u"IsInternalBuild", &data_143db1900)
sub_140a3a270(arg1, u"IsPerforceBuild", &data_143db1901)
sub_140a3a270(arg1, u"IsSourceDistribution", &data_143db1902)
int64_t rsi = -1
int64_t rax = -1

do
    rax += 1
while ((&data_143db1930)[rax] != 0)

if (rax.d s> 0)
    sub_140a3e8b0(arg1, u"GameName", &data_143db1930)
else if ((*u"Embers")[0] == 0)
    sub_140a3e8b0(arg1, u"GameName", &data_142d40450)
else
    sub_140a2e390(&var_68, u"UE4-%s", u"Embers")
    int16_t* const r8_5 = &data_142d40450
    
    if (var_60 != 0)
        r8_5 = var_68
    
    sub_140a3e8b0(arg1, u"GameName", r8_5)
    int16_t* rcx_11 = var_68
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

sub_140a3e8b0(arg1, u"ExecutableName", &data_143db1ab0)
sub_140a3e8b0(arg1, u"BuildConfiguration", &data_143db1b30)
sub_140a3e8b0(arg1, u"GameSessionID", &data_143db25b0)
j_sub_140a1b080()
int16_t* var_58
sub_140a2e390(&var_58, u"%s", u"++UE4+Release-4.25-CL-14469661")
int16_t* const r8_6 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    r8_6 = var_58

sub_140a2e390(&var_68, u"%s-%s-%s", r8_6)
int64_t var_38
int64_t* rax_1 = sub_140a300d0(&var_68, &var_38, &data_142e5c1c0, &data_142d6bbe8, 1)
int32_t r15 = 0

if (&var_58 != rax_1)
    int16_t* rcx_19 = var_58
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    var_58 = *rax_1
    *rax_1 = 0
    var_50 = rax_1[1].d
    int32_t var_4c_1 = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t rcx_21 = var_38

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int16_t* rcx_22 = var_68

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int32_t r14_1 = var_50
int16_t* r12 = var_58
var_68 = nullptr
int32_t var_60_1 = r14_1
int16_t* r12_1

if (r14_1 != 0)
    sub_1405a4c70(&var_68, r14_1, 0)
    r12_1 = var_68
    memcpy(r12_1, r12, r14_1 * 2)
    r14_1 = var_60_1
else
    r12_1 = nullptr

int16_t* const r8_9 = &data_142d40450

if (r14_1 != 0)
    r8_9 = r12_1

sub_140a3e8b0(arg1, u"Symbols", r8_9)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

char const* const arg_10 = "WindowsNoEditor"
sub_140a3a170(arg1, u"PlatformName", &arg_10)
arg_10 = "Windows"
sub_140a3a170(arg1, u"PlatformNameIni", &arg_10)
sub_140a3e8b0(arg1, u"EngineMode", &data_143db19b0)
sub_140a3e8b0(arg1, u"EngineModeEx", &data_143db1a30)
sub_140a3e8b0(arg1, u"DeploymentName", &data_143db1bb0)
int64_t* rax_5 = sub_140b29040(j_sub_140b17d00(), &var_38, 4)
int16_t* r8_12

if (rax_5[1].d == 0)
    r8_12 = &data_142d40450
else
    r8_12 = *rax_5

sub_140a3e8b0(arg1, u"EngineVersion", r8_12)
int64_t rcx_34 = var_38

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_140a3e8b0(arg1, u"CommandLine", &data_143db2630)
sub_140a2e390(&var_68, u"%d", zx.q(data_143db190c))
int16_t* const r8_14 = &data_142d40450

if (var_60_1 != 0)
    r8_14 = var_68

sub_140a3e8b0(arg1, u"LanguageLCID", r8_14)
int16_t* rcx_38 = var_68

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

sub_140a3e8b0(arg1, u"AppDefaultLocale", &data_143db2430)
j_sub_140a1b080()
sub_140a3e8b0(arg1, u"BuildVersion", u"++UE4+Release-4.25-CL-14469661")
sub_140a3a270(arg1, u"IsUE4Release", &data_143db1903)
sub_140a3a270(arg1, u"IsRequestingExit", &data_143db1905)
bool cond:6 = data_143db23b0 == 0
int32_t rdx_4 = 0
char r12_2 = data_143db1900
int32_t rcx_43 = 0
int32_t var_60_2 = 0
int32_t var_5c = 0
var_68 = nullptr

if (not(cond:6))
    int64_t r14_2 = -1
    
    do
        r14_2 += 1
    while ((&data_143db23b0)[r14_2] != 0)
    
    if (r14_2.d + 1 s> 0)
        sub_1405947f0(&var_68, r14_2.d + 1)
        rcx_43 = var_5c
        rdx_4 = var_60_2
    
    int32_t rax_6 = r14_2.d + 1 + rdx_4
    int32_t var_60_3 = rax_6
    
    if (rax_6 s> rcx_43)
        sub_140594770(&var_68)
    
    memcpy(var_68, &data_143db23b0, (r14_2.d + 1) * 2)

int16_t* var_48
sub_140a300d0(&var_68, &var_48, &data_142d404c4, &data_142d40450, 1)
int16_t* rcx_48 = var_68

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

int16_t* const r8_17 = &data_142d40450
int32_t var_40

if (r12_2 != 0 && var_40 != 0)
    r8_17 = var_48

sub_140a3e8b0(arg1, u"UserName", r8_17)
sub_140a3e8b0(arg1, u"BaseDir", &data_143db1c30)
sub_140a3e8b0(arg1, u"RootDir", &data_143db1e30)
bool cond:8 = data_143db20b0 == 0
int32_t rcx_52 = 0
var_68 = nullptr
int32_t var_5c_1 = 0
int32_t var_60_4 = 0

if (not(cond:8))
    do
        rsi += 1
    while ((&data_143db20b0)[rsi] != 0)
    
    if (rsi.d + 1 s> 0)
        sub_1405947f0(&var_68, rsi.d + 1)
        rcx_52 = var_5c_1
        r15 = var_60_4
    
    int32_t rax_7 = rsi.d + 1 + r15
    var_60_4 = rax_7
    
    if (rax_7 s> rcx_52)
        sub_140594770(&var_68)
    
    memcpy(var_68, &data_143db20b0, (rsi.d + 1) * 2)

int64_t* rax_8 = sub_140a35990(&var_68, &var_38)
int16_t* r8_20

if (rax_8[1].d == 0)
    r8_20 = &data_142d40450
else
    r8_20 = *rax_8

sub_140a3e8b0(arg1, u"MachineId", r8_20)
int64_t rcx_58 = var_38

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

int16_t* rcx_59 = var_68

if (rcx_59 != 0)
    sub_140a74f90(rcx_59)

sub_140a3e8b0(arg1, u"LoginId", &data_143db20b0)
sub_140a3e8b0(arg1, u"EpicAccountId", &data_143db2030)
sub_140a3e8b0(arg1, u"SourceContext", &data_142d40450)
sub_140a3e8b0(arg1, u"UserDescription", &data_142d40450)
sub_140a3e8b0(arg1, u"UserActivityHint", &data_143db2530)
sub_140a2e390(&var_68, u"%d", zx.q(data_143db191c))
int16_t* const r8_22 = &data_142d40450

if (var_60_4 != 0)
    r8_22 = var_68

sub_140a3e8b0(arg1, u"CrashDumpMode", r8_22)
int16_t* rcx_67 = var_68

if (rcx_67 != 0)
    sub_140a74f90(rcx_67)

sub_140a3e8b0(arg1, u"GameStateName", &data_143db3230)
sub_140a2e390(&var_68, u"%d", zx.q(data_143db1910))
int16_t* const r8_24 = &data_142d40450

if (var_60_4 != 0)
    r8_24 = var_68

sub_140a3e8b0(arg1, u"Misc.NumberOfCores", r8_24)
int16_t* rcx_71 = var_68

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

sub_140a2e390(&var_68, u"%d", zx.q(data_143db1914))
int16_t* r8_26 = &data_142d40450

if (var_60_4 != 0)
    r8_26 = var_68

sub_140a3e8b0(arg1, u"Misc.NumberOfCoresIncludingHyperthreads", r8_26)
int16_t* rcx_74 = var_68

if (rcx_74 != 0)
    sub_140a74f90(rcx_74)

sub_140a2e390(&var_68, u"%d", zx.q(sub_1405948d0()))
int16_t* r8_28 = &data_142d40450

if (var_60_4 != 0)
    r8_28 = var_68

sub_140a3e8b0(arg1, u"Misc.Is64bitOperatingSystem", r8_28)
int16_t* rcx_77 = var_68

if (rcx_77 != 0)
    sub_140a74f90(rcx_77)

sub_140a3e8b0(arg1, u"Misc.CPUVendor", &data_143db2230)
sub_140a3e8b0(arg1, u"Misc.CPUBrand", &data_143db22b0)
sub_140a3e8b0(arg1, u"Misc.PrimaryGPUBrand", &data_143db2330)
sub_140a3e8b0(arg1, u"Misc.OSVersionMajor", &data_143db2130)
sub_140a3e8b0(arg1, u"Misc.OSVersionMinor", &data_143db21b0)
sub_140b673e0()
sub_140a2e390(&var_68, u"%llu", data_1439a9570)
int16_t* r8_30 = &data_142d40450

if (var_60_4 != 0)
    r8_30 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.TotalPhysical", r8_30)
int16_t* rcx_85 = var_68

if (rcx_85 != 0)
    sub_140a74f90(rcx_85)

sub_140a2e390(&var_68, u"%llu", data_1439a9578)
int16_t* r8_32 = &data_142d40450

if (var_60_4 != 0)
    r8_32 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.TotalVirtual", r8_32)
int16_t* rcx_88 = var_68

if (rcx_88 != 0)
    sub_140a74f90(rcx_88)

sub_140a2e390(&var_68, u"%llu", data_1439a9580)
int16_t* r8_34 = &data_142d40450

if (var_60_4 != 0)
    r8_34 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.PageSize", r8_34)
int16_t* rcx_91 = var_68

if (rcx_91 != 0)
    sub_140a74f90(rcx_91)

sub_140a2e390(&var_68, u"%u", zx.q(data_1439a95a8))
int16_t* r8_36 = &data_142d40450

if (var_60_4 != 0)
    r8_36 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.TotalPhysicalGB", r8_36)
int16_t* rcx_94 = var_68

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

sub_140a2e390(&var_68, u"%llu", data_143db34f0.q)
int16_t* r8_38 = &data_142d40450

if (var_60_4 != 0)
    r8_38 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.AvailablePhysical", r8_38)
int16_t* rcx_97 = var_68

if (rcx_97 != 0)
    sub_140a74f90(rcx_97)

sub_140a2e390(&var_68, u"%llu", data_143db34f0:8)
int16_t* r8_40 = &data_142d40450

if (var_60_4 != 0)
    r8_40 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.AvailableVirtual", r8_40)
int16_t* rcx_100 = var_68

if (rcx_100 != 0)
    sub_140a74f90(rcx_100)

sub_140a2e390(&var_68, u"%llu", data_143db3500.q)
int16_t* r8_42 = &data_142d40450

if (var_60_4 != 0)
    r8_42 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.UsedPhysical", r8_42)
int16_t* rcx_103 = var_68

if (rcx_103 != 0)
    sub_140a74f90(rcx_103)

sub_140a2e390(&var_68, u"%llu", data_143db3500:8)
int16_t* r8_44 = &data_142d40450

if (var_60_4 != 0)
    r8_44 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.PeakUsedPhysical", r8_44)
int16_t* rcx_106 = var_68

if (rcx_106 != 0)
    sub_140a74f90(rcx_106)

sub_140a2e390(&var_68, u"%llu", data_143db3510.q)
int16_t* r8_46 = &data_142d40450

if (var_60_4 != 0)
    r8_46 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.UsedVirtual", r8_46)
int16_t* rcx_109 = var_68

if (rcx_109 != 0)
    sub_140a74f90(rcx_109)

sub_140a2e390(&var_68, u"%llu", data_143db3510:8)
int16_t* r8_48 = &data_142d40450

if (var_60_4 != 0)
    r8_48 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.PeakUsedVirtual", r8_48)
int16_t* rcx_112 = var_68

if (rcx_112 != 0)
    sub_140a74f90(rcx_112)

sub_140a2e390(&var_68, u"%d", zx.q(data_143db1904))
int16_t* r8_50 = &data_142d40450

if (var_60_4 != 0)
    r8_50 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.bIsOOM", r8_50)
int16_t* rcx_115 = var_68

if (rcx_115 != 0)
    sub_140a74f90(rcx_115)

sub_140a2e390(&var_68, u"%llu", data_143db1928)
int16_t* r8_52 = &data_142d40450

if (var_60_4 != 0)
    r8_52 = var_68

sub_140a3e8b0(arg1, u"MemoryStats.OOMAllocationSize", r8_52)
int16_t* rcx_118 = var_68

if (rcx_118 != 0)
    sub_140a74f90(rcx_118)

sub_140a2e390(&var_68, u"%d", zx.q(data_143db1924))

if (var_60_4 != 0)
    rdi = var_68

int64_t result = sub_140a3e8b0(arg1, u"MemoryStats.OOMAllocationAlignment", rdi)
int16_t* rcx_121 = var_68

if (rcx_121 != 0)
    result = sub_140a74f90(rcx_121)

int16_t* rcx_122 = var_48

if (rcx_122 != 0)
    result = sub_140a74f90(rcx_122)

int16_t* rcx_123 = var_58

if (rcx_123 == 0)
    return result

return sub_140a74f90(rcx_123)
