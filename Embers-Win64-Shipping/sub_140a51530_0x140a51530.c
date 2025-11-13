// 函数: sub_140a51530
// 地址: 0x140a51530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t var_1c8 = arg1[0xb].d
void var_138
sub_1405a6010(&var_138, 0x80, u"%s_%04i", &data_143db24b0)
sub_140a3e9a0(&arg1[9])
sub_140a20ba0(&arg1[9], &data_142e5cee0, 1)
sub_140a20ba0(&arg1[9], u"RuntimeProperties", 0x11)
sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
int16_t* var_1b0
sub_140a2e390(&var_1b0, u"%d", 3)
int16_t* const r8 = &data_142d40450
int32_t var_1a8

if (var_1a8 != 0)
    r8 = var_1b0

sub_140a3e8b0(&arg1[9], u"CrashVersion", r8)
int16_t* rcx_8 = var_1b0

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140b291e0(&data_143db18d8, &var_1b0, 0)
int16_t* const r8_1 = &data_142d40450

if (var_1a8 != 0)
    r8_1 = var_1b0

sub_140a3e8b0(&arg1[9], u"ExecutionGuid", r8_1)
int16_t* rcx_10 = var_1b0

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140a3e8b0(&arg1[9], u"CrashGUID", &var_138)
bool var_1b8 = arg1[2].d == 2
sub_140a3a270(&arg1[9], u"IsEnsure", &var_1b8)
var_1b8 = arg1[2].d == 1
sub_140a3a270(&arg1[9], u"IsAssert", &var_1b8)
int32_t rcx_14 = arg1[2].d
wchar16 const* const r8_5

if (rcx_14 == 1)
    r8_5 = u"Assert"
else if (rcx_14 == 2)
    r8_5 = u"Ensure"
else if (rcx_14 == 3)
    r8_5 = u"GPUCrash"
else if (rcx_14 == 4)
    r8_5 = u"Hang"
else if (rcx_14 == 6)
    r8_5 = u"AbnormalShutdown"
else
    r8_5 = u"Crash"

sub_140a3e8b0(&arg1[9], u"CrashType", r8_5)
sub_140a3e8b0(&arg1[9], u"ErrorMessage", arg1[3])
sub_140a3e8b0(&arg1[9], u"CrashReporterMessage", &data_143db2e30)
sub_140a51fb0(&arg1[9])
sub_140a2e390(&var_1b0, u"%d", zx.q(arg1[4].d))
int16_t* const r8_8 = &data_142d40450

if (var_1a8 != 0)
    r8_8 = var_1b0

sub_140a3e8b0(&arg1[9], u"NumMinidumpFramesToIgnore", r8_8)
int16_t* rcx_25 = var_1b0

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

sub_140a20ba0(&arg1[9], u"<CallStack>", 0xb)
int64_t rax_4 = (*(*arg1 + 0x38))(arg1)
int64_t r8_9 = -1

do
    r8_9 += 1
while (*(rax_4 + (r8_9 << 1)) != 0)

sub_140a20ba0(&arg1[9], rax_4, r8_9.d)
sub_140a20ba0(&arg1[9], u"</CallStack>", 0xc)
sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
sub_140a3ea20(arg1)
sub_140a3ec10(arg1)
int64_t rax_5 = *arg1
int32_t rdi = 0
var_1b0 = nullptr
var_1a8.q = 0

if ((*(rax_5 + 0x30))(arg1, &var_1b0) != 0)
    sub_140a20ba0(&arg1[9], u"<Threads>", 9)
    int32_t r8_10 = var_1a8 - 1
    
    if (var_1a8 == 0)
        r8_10 = 0
    
    sub_140a20ba0(&arg1[9], var_1b0, r8_10)
    sub_140a20ba0(&arg1[9], u"</Threads>", 0xa)
    sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)

int16_t* rcx_38 = var_1b0

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

sub_140a20ba0(&arg1[9], &data_142e5cee8, 2)
sub_140a20ba0(&arg1[9], u"RuntimeProperties", 0x11)
sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
sub_140a20ba0(&arg1[9], &data_142e5cee0, 1)
sub_140a20ba0(&arg1[9], u"PlatformProperties", 0x12)
sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
(*(*arg1 + 0x40))(arg1)
sub_140a2e390(&var_1b0, u"%d", zx.q(data_143db1920))
int16_t* r8_12 = &data_142d40450

if (var_1a8 != 0)
    r8_12 = var_1b0

sub_140a3e8b0(&arg1[9], u"PlatformCallbackResult", r8_12)
int16_t* rcx_50 = var_1b0

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

sub_140a20ba0(&arg1[9], &data_142e5cee8, 2)
sub_140a20ba0(&arg1[9], u"PlatformProperties", 0x12)
sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
sub_140a20ba0(&arg1[9], &data_142e5cee0, 1)
sub_140a20ba0(&arg1[9], u"EngineData", 0xa)
sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
int32_t r10 = (data_14399e8f8).d
var_1b0:4.d = 1
int32_t rcx_59 = 0
var_1b0.d = 0
var_1a8.q = &data_14399e8e0
int32_t r8_13 = 0
int32_t var_1a0 = 0xffffffff
int64_t var_19c = 0

if (r10 != 0)
    void* rax_9 = data_14399e8f0
    void* r9_1 = &data_14399e8e0
    
    if (rax_9 != 0)
        r9_1 = rax_9
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_140a51ac7:
        int32_t rax_16 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_16)
        var_1b0:4.d = rax_16
        int32_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0x20
        else
            rax_17 = 0x1f - temp0_1
        
        int32_t rax_18 = r8_13 - rax_17 + 0x1f
        
        if (rax_18 s> r10)
            rax_18 = r10
        
        var_19c.d = rax_18
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_59)
            r8_13 += 0x20
            rcx_59 += 1
            var_19c:4.d = r8_13
            var_1b0.d = rcx_59
            
            if (rdx_7.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                var_19c.d = r10
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            var_1a0 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_140a51ac7

double zmm2[0x2] = var_1a0.o
double var_150[0x2] = zmm2
var_19c.d = r10
int128_t var_160 = var_1b0.o
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_190 = (&data_14399e8d0).o
int128_t var_180 = var_160
int64_t var_170 = zmm2.q

while (true)
    int64_t rax_19 = sx.q(var_180:0xc.d)
    int64_t* rdx_9 = var_190.q
    
    if (rax_19.d == ((0xffffffff << (r10.b & 0x1f)).q u>> 0x20).d && var_180.q == &data_14399e8e0
            && rdx_9 == &data_14399e8d0)
        sub_140a20ba0(&arg1[9], &data_142e5cee8, 2)
        sub_140a20ba0(&arg1[9], u"EngineData", 0xa)
        sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
        sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
        sub_140a20ba0(&arg1[9], &data_142e5cee0, 1)
        sub_140a20ba0(&arg1[9], u"GameData", 8)
        sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
        sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
        int32_t r9_2 = (data_14399e948).d
        var_1b0.d = 0
        int32_t rcx_74 = 0
        var_1b0:4.d = 1
        var_1a8.q = &data_14399e930
        int32_t var_1a0_2 = 0xffffffff
        var_19c.d = 0
        var_19c:4.d = 0
        
        if (r9_2 != 0)
            void* rax_23 = data_14399e940
            void* r8_16 = &data_14399e930
            
            if (rax_23 != 0)
                r8_16 = rax_23
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r9_2 - 1)
            int32_t rdx_13 = *r8_16
            
            if (rdx_13 != 0)
            label_140a51ce5:
                int32_t rax_30 = neg.d(rdx_13) & rdx_13
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rax_30)
                var_1b0:4.d = rax_30
                int32_t r15_1
                
                if (rax_30 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_3
                
                int32_t rax_31 = rcx_74 - r15_1 + 0x1f
                
                if (rax_31 s> r9_2)
                    rax_31 = r9_2
                
                var_19c.d = rax_31
            else
                while (true)
                    int64_t rdx_14 = sx.q(rdi)
                    rcx_74 += 0x20
                    rdi += 1
                    var_19c:4.d = rcx_74
                    var_1b0.d = rdi
                    
                    if (rdx_14.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        var_19c.d = r9_2
                        break
                    
                    rdx_13 = *(r8_16 + (rdx_14 << 2) + 4)
                    var_1a0_2 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_140a51ce5
        
        zmm2 = var_1a0_2.o
        double var_150_1[0x2] = zmm2
        int128_t var_160_1 = var_1b0.o
        var_19c.d = r9_2
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_190 = (&data_14399e920).o
        int128_t var_180_1 = var_160_1
        int64_t var_170_1 = zmm2.q
        
        while (true)
            int64_t rax_32 = sx.q(var_180_1:0xc.d)
            int64_t* rdx_16 = var_190.q
            
            if (rax_32.d == ((0xffffffff << (r9_2.b & 0x1f)).q u>> 0x20).d
                    && var_180_1.q == &data_14399e930 && rdx_16 == &data_14399e920)
                sub_140a20ba0(&arg1[9], &data_142e5cee8, 2)
                sub_140a20ba0(&arg1[9], u"GameData", 8)
                sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
                sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
                
                if (data_143db3750 s> 0)
                    sub_140a20ba0(&arg1[9], &data_142e5cee0, 1)
                    sub_140a20ba0(&arg1[9], u"EnabledPlugins", 0xe)
                    sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
                    sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
                    int16_t** i = data_143db3748
                    
                    for (void* rsi_4 = &i[sx.q(data_143db3750) * 2]; i != rsi_4; i = &i[2])
                        int16_t* r8_18
                        
                        if (i[1].d == 0)
                            r8_18 = &data_142d40450
                        else
                            r8_18 = *i
                        
                        sub_140a3e8b0(&arg1[9], u"Plugin", r8_18)
                    
                    sub_140a20ba0(&arg1[9], &data_142e5cee8, 2)
                    sub_140a20ba0(&arg1[9], u"EnabledPlugins", 0xe)
                    sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
                    sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
                
                sub_140a20ba0(&arg1[9], &data_142e5cee8, 2)
                sub_140a20ba0(&arg1[9], u"FGenericCrashContext", 0x14)
                sub_140a20ba0(&arg1[9], &data_142e5cee4, 1)
                int64_t result = sub_140a20ba0(&arg1[9], &data_142d6acb4, 2)
                __security_check_cookie(rax_1 ^ &var_1e8)
                return result
            
            int64_t rcx_78 = rax_32 * 5
            int64_t rax_33 = *rdx_16
            int16_t* r8_17
            
            if (*(rax_33 + (rcx_78 << 3) + 0x18) == 0)
                r8_17 = &data_142d40450
            else
                r8_17 = *(rax_33 + (rcx_78 << 3) + 0x10)
            
            int16_t* const rdx_17
            
            if (*(rax_33 + (rcx_78 << 3) + 8) == 0)
                rdx_17 = &data_142d40450
            else
                rdx_17 = *(rax_33 + (rcx_78 << 3))
            
            sub_140a3e8b0(&arg1[9], rdx_17, r8_17)
            var_180_1:8.d &= not.d(var_190:0xc.d)
            sub_14059bdd0(&var_190:8)
    
    int64_t rcx_63 = rax_19 * 5
    int64_t rax_20 = *rdx_9
    int16_t* r8_15
    
    if (*(rax_20 + (rcx_63 << 3) + 0x18) == 0)
        r8_15 = &data_142d40450
    else
        r8_15 = *(rax_20 + (rcx_63 << 3) + 0x10)
    
    int16_t* const rdx_10
    
    if (*(rax_20 + (rcx_63 << 3) + 8) == 0)
        rdx_10 = &data_142d40450
    else
        rdx_10 = *(rax_20 + (rcx_63 << 3))
    
    sub_140a3e8b0(&arg1[9], rdx_10, r8_15)
    var_180:8.d &= not.d(var_190:0xc.d)
    sub_14059bdd0(&var_190:8)
