// 函数: sub_1413515e0
// 地址: 0x1413515e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int32_t r15 = arg3[1].d
int32_t rdi = 0
int128_t zmm6
int128_t var_58 = zmm6
int32_t arg_20 = r15
int32_t r13 = 0
int32_t r12 = 0

if (r15 == 0)
    return arg2

int32_t r14_1 = 1
void** var_d8

do
    void* r15_2 = sx.q(r12) * 0x5240 + *arg3
    int32_t rax_2 = sub_1422e5a30(r15_2)
    char rax_3 = sub_1410a09e0(rax_2)
    char rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_1419a4830(rax_2)
    
    int32_t rbx_1
    
    if (rax_3 != 0 || rax_4 != 0)
        rbx_1.b = 1
    else
        rbx_1.b = 0
    
    int64_t rax_5 = data_143ebafe8
    char rax_6 = data_143de5480
    int64_t rcx_4
    
    if (rax_6 == 0)
        rcx_4 = 0
    else
        bool cond:0_1 = GetCurrentThreadId() != data_143de5470
        rax_6 = data_143de5480
        rcx_4.b = cond:0_1
    
    int32_t rcx_5 = *(rax_5 + (rcx_4 << 2))
    void** rdx_3 = data_143ebb0f8
    var_d8 = rdx_3
    int64_t var_b8_1
    var_b8_1.d = rcx_5
    int64_t rcx_6
    
    if (rax_6 == 0)
        rcx_6 = 0
    else
        uint32_t rax_8 = GetCurrentThreadId()
        rdx_3 = var_d8
        rcx_6.b = rax_8 != data_143de5470
    
    if (var_b8_1.d != 0 && not(0f f>= *(rdx_3 + (rcx_6 << 2))) && (*(r15_2 + 0x4980) & 0x220) != 0
            && rbx_1.b == 0)
        r13 |= r14_1
    
    arg3 = arg_18
    r12 += 1
    r14_1 = rol.d(r14_1, 1)
while (r12 u< r15)

int32_t rsi_2 = 1

if (r13 == 0)
    return arg2

void*** r14_2 = arg2
uint128_t var_98_1 = *(r14_2 + 0x40)
uint128_t zmm1 = *(r14_2 + 0x60)
int128_t var_a8 = *(r14_2 + 0x30)
uint128_t var_78_1 = zmm1
int128_t var_88_1 = *(r14_2 + 0x50)
var_78_1:4.d = _mm_bsrli_si128(zmm1, 4).d | 1
int128_t var_68_1 = *(r14_2 + 0x70)
void*** rax_11 = sub_141188e50(arg1, &var_a8, u"SceneColorSubsurface", 0)
char rcx_8 = 0
int16_t var_d0
int32_t r15_4

if (r13 == (1 << r15.b) - 1)
    r15_4 = arg_20
else
    void** rax_12
    int512_t zmm6_1
    rax_12, zmm6_1 = sub_14081d830(0xa0, arg1[1], 1, 0)
    void** rbx_3 = rax_12
    
    if (rax_12 == 0)
        rbx_3 = nullptr
    else
        rax_12[1] = 0
        sub_14117af20(&rax_12[2])
    
    rbx_3[1] = 0
    memset(&rbx_3[4], 0, 0x80)
    *rbx_3 = r14_2
    var_d8 = rax_11
    var_d0 = 0
    char var_ce_1 = 0
    int32_t var_cc_1 = 0xffffffff
    *(rbx_3 + 0x10) = var_d8.o
    rbx_3[1] = data_14395fa10
    sub_1419a2ec0(*(*arg_18 + 0x5150), &var_d8, &data_143ebcf70, 0)
    zmm6_1.o = var_d8.o
    var_a8.q = arg_18
    r15_4 = arg_20
    var_a8:8.d = r13
    var_a8:0xc.d = r15_4
    var_88_1.q = r14_2
    var_88_1:8.q = rbx_3
    void*** rax_14
    char rcx_13
    rax_14, rcx_13 = sub_14081d830(0x68, arg1[1], 1, 0)
    void*** r14_3 = rax_14
    
    if (rax_14 == 0)
        r14_3 = nullptr
    else
        var_d8 = rbx_3
        int128_t zmm6_2 = sub_14135a8a0(rcx_13)
        var_d0.q = &data_143ec18d0
        var_d8.o = var_d8.o
        sub_141992bd0(r14_3, &arg_20, &var_d8, 1)
        int128_t zmm0_4 = var_a8
        *r14_3 = &data_142f64c30
        *(r14_3 + 0x38) = zmm0_4
        *(r14_3 + 0x48) = zmm6_2
        *(r14_3 + 0x58) = var_88_1
    
    sub_1419968d0(arg1, r14_3)
    r14_2 = arg2
    rcx_8 = 1

if (r15_4 != 0)
    do
        if ((r13 & rsi_2) != 0)
            void* rdx_12 = sx.q(rdi) * 0x5240 + *arg_18
            uint128_t zmm1_1 = *(rdx_12 + 0x1598)
            var_d8 = data_143dbb180
            var_d0.o = zx.o(0)
            var_d8.d = *(r14_2 + 0x44)
            var_d8:4.d = r14_2[9].d
            int64_t rax_19 = zmm1_1.q
            var_d0.d = rax_19.d
            uint32_t var_cc_2 = (rax_19 u>> 0x20).d
            int64_t rax_21 = _mm_bsrli_si128(zmm1_1, 8).q
            int32_t var_c8_1 = rax_21.d
            uint32_t var_c4_1 = (rax_21 u>> 0x20).d
            sub_141351980(arg1, rdx_12, &var_d8, r14_2, rax_11, rcx_8)
            rcx_8 = 1
        
        rdi += 1
        rsi_2 = rol.d(rsi_2, 1)
    while (rdi u< r15_4)

return rax_11
