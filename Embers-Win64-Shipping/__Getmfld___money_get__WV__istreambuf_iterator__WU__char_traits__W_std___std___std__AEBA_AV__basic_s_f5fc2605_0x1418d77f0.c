// 函数: ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@AEAY0M@_W@Z
// 地址: 0x1418d77f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char rcx = arg5.b
int32_t r15_3 = ((*(arg4 + 0x24) u>> rcx) * (*(arg4 + 0x20) u>> rcx)) << 3
void*** rax_5 = sub_1418ba820(arg2 + 0x3f0, r15_3, 2, 8)
int32_t rbx = 0
void*** var_100 = rax_5
int64_t* rsi_3

if (data_143efb330 != 0)
    rsi_3 = arg3 + 0x40
    data_143efba20(*rsi_3, rax_5[3], 0, zx.q(r15_3), 0x3c003c00)
else
    char rcx_2 = arg5.b
    void* rsi_1 = *(arg2 + 0x1a50)
    uint32_t r8_1 = *(arg4 + 0x20) u>> rcx_2
    uint32_t rdx_2 = *(arg4 + 0x24) u>> rcx_2
    int32_t var_6c_1 = arg5
    int64_t r12_1 = *(arg4 + 0x10)
    uint32_t var_78_1 = r8_1
    uint32_t var_74_1 = rdx_2
    uint32_t var_54_1 = r8_1
    uint32_t var_50_1 = rdx_2
    int32_t var_70_1 = *(arg4 + 0x70)
    int64_t var_80 = 0
    int64_t var_60_1 = 0
    int32_t var_58_1 = 0
    int32_t var_68_1 = arg6
    int32_t var_64_1 = 1
    int32_t var_4c_1 = 1
    int32_t var_108 = 0
    int64_t var_d0 = r12_1
    int32_t var_e0
    sub_140865c40(rsi_1 + 0x2e8, &var_e0, r12_1)
    int64_t rax_8 = sx.q(var_e0)
    void* const rcx_4
    
    if (rax_8.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = *(rsi_1 + 0x2e8) + rax_8 * 0x18
    
    int32_t* r15_4 = rcx_4 + 8
    
    if (rcx_4 == 0)
        r15_4 = nullptr
    
    if (r15_4 == 0)
        int32_t* rax_10 = sub_1418ca3c0(rsi_1 + 0x2e8, &var_d0, &var_108)
        r12_1 = *(arg4 + 0x10)
        r15_4 = rax_10
    
    int32_t rax_11 = *r15_4
    rsi_3 = arg3 + 0x40
    var_108 = rax_11
    int64_t var_f8
    
    if (rax_11 != 6)
        __builtin_memcpy(&var_f8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        int32_t var_138
        var_138.q = &var_f8
        sub_1418f0770(*rsi_3, r12_1, rax_11, 6, var_138)
        r12_1 = *(arg4 + 0x10)
    
    data_143efba10(*rsi_3, r12_1, 6, var_100[3], 1, &var_80)
    int32_t r9_2
    
    if (var_108 != 0)
        r9_2 = *r15_4
    
    if (var_108 == 0 || r9_2 == 6)
        *r15_4 = 6
    else
        int64_t rdx_8 = *(arg4 + 0x10)
        int64_t rcx_8 = *rsi_3
        int32_t var_138_1
        var_138_1.q = &var_f8
        __builtin_memcpy(&var_f8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00", 
            0x14)
        sub_1418f0770(rcx_8, rdx_8, 6, r9_2, var_138_1)

void*** rax_12 = var_100
int64_t var_110 = 0
int32_t var_118 = 0
int32_t var_b8
int32_t* var_120 = &var_b8
int32_t var_128 = 1
int64_t var_98 = rax_12[3]
int64_t rcx_11 = *rsi_3
uint64_t var_88 = zx.q(*(rax_12 + 0x24))
int64_t var_130_2 = 0
int32_t var_138_3 = 0
int64_t var_b4 = 0
int32_t var_ac = 0
int64_t var_a0 = 0
var_b8 = 0x2c
int32_t var_a8 = 0x1000
int32_t var_a4 = 0x2000
int64_t var_90 = 0
data_143efba60(rcx_11, 0x1000, 0x4000, 0, var_138_3, var_130_2, var_128, var_120, var_118, var_110)
sub_1418c86c0(*(*(arg2 + 0x1a50) + 0x240), 0, 0)
sub_1418c2e90(arg2)
void* rcx_15 = var_100[2]
sub_1418c2300(*(rcx_15 + 0x28), zx.q(*(rcx_15 + 0x1c)), zx.q(*(rcx_15 + 0x18)))
sub_1418edbe0(arg8, (arg7[3] - arg7[1]) * (arg7[2] - *arg7), 1)
int32_t i = arg7[1]

if (i s< arg7[3])
    int32_t j = arg7[2]
    
    do
        int64_t r10_1 = sx.q(*arg7)
        void* r8_7 = var_100[2]
        int16_t* r9_5 = *(*(r8_7 + 0x28) + 0x18)
            + ((zx.q((*(arg4 + 0x20) u>> arg5.b) * i) + r10_1) << 3) + zx.q(*(r8_7 + 0x24))
        
        for (; r10_1.d s< j; j = arg7[2])
            int16_t rax_19 = *r9_5
            r9_5 = &r9_5[4]
            int64_t rcx_20 = *arg8
            r10_1 = zx.q(r10_1.d + 1)
            int64_t rdx_19 = sx.q(rbx)
            rbx += 1
            *(rcx_20 + (rdx_19 << 3)) = rax_19
            *(rcx_20 + (rdx_19 << 3) + 2) = r9_5[-3]
            *(rcx_20 + (rdx_19 << 3) + 4) = r9_5[-2]
            *(rcx_20 + (rdx_19 << 3) + 6) = r9_5[-1]
        
        i += 1
    while (i s< arg7[3])

int64_t result = sub_1418c5270(arg2 + 0x3f0, arg3, &var_100)
__security_check_cookie(rax_1 ^ &var_158)
return result
