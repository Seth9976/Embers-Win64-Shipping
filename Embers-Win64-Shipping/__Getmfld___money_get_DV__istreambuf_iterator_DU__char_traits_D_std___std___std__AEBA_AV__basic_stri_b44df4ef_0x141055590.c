// 函数: ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@AEAY0M@D@Z
// 地址: 0x141055590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rax_2 = *(arg3 + 0x20)
void* i = arg3
int32_t var_f4 = 0
int32_t r9 = *(i + 0x18)
int32_t var_114 = 1
int32_t var_118 = 0
uint8_t r8_1 = (rax_2 u>> 5).b & 1

if (r8_1 != 0)
    var_118 = 0x27
    r9 = 4
else if (test_bit(rax_2, 8))
    var_118 = 0x2a
    r9 = 4

uint64_t rcx = zx.q(r9)
int64_t var_100 = 0
uint64_t var_110 = divu.dp.q(0:(*(i + 0xc0)), rcx)
void*** r15 = nullptr
void*** rsi = nullptr
uint32_t var_108 = (divu.dp.q(0:(*(i + 0xc8)), rcx)).d
int32_t rax_7 = 0

if (r8_1 == 0)
    rax_7 = r9

int32_t var_104 = rax_7
int32_t rax_8 = 0

if (r8_1 != 0)
    rax_8 = 1

int32_t var_f8 = rax_8

do
    void* r14_1 = *(i + 0x30)
    void* rbx_1 = nullptr
    void* var_120 = nullptr
    
    if ((arg4 | arg5) != 0)
        int32_t r8_2 = *(r14_1 + 0x10)
        char var_138_1 = 1
        int32_t rax_9 = r8_2
        
        if (data_143f0f1d8 != 0)
            rax_9 = 1
        
        wchar16 const* const var_140_1 = u"Counter"
        void* rcx_1 = *(r14_1 + 0x20)
        int32_t var_a4_1 = rax_9
        int32_t var_88_1 = rax_9
        void** var_148_1 = &var_120
        int32_t var_a8_1 = 0
        int64_t var_e8_1 = 0
        int64_t var_d4_1 = 0x10001
        int128_t* var_150_1 = nullptr
        int32_t var_f0_1 = 1
        int64_t var_e0_1 = 4
        int128_t var_98 = 1.o
        int32_t var_d8_1 = 1
        int64_t var_cc_1 = 1
        int32_t var_c4_1 = 1
        int128_t var_80 = var_f0_1.o
        int32_t var_c0_1 = 4
        int32_t var_128 = 0xac3
        uint128_t var_70_1 = var_e0_1.o
        int128_t var_60_1 = var_d4_1:4.o
        uint64_t var_50_1 = var_c0_1.q
        sub_141048420(rcx_1, &var_80, r8_2, &var_98, &var_128, var_150_1, var_148_1, var_140_1, 
            var_138_1)
        rbx_1 = var_120
    
    void*** rax_10 = j_sub_140a82f30(0xa8)
    void*** rbx_2
    
    if (rax_10 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_14103ff30(rax_10, r14_1, &var_118, i + 0x70, rbx_1)
    
    if (rsi != 0)
        sub_14081d930(&rsi[0x11], rbx_2)
        
        if (rbx_2 != 0)
            rbx_2[0x12].b = 0
    else
        r15 = rbx_2
    
    i = *(i + 0xe0)
    rsi = rbx_2
while (i != 0)

*arg2 = r15

if (r15 != 0)
    r15[1].d += 1

__security_check_cookie(rax_1 ^ &var_178)
return arg2
