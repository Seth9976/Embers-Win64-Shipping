// 函数: sub_14171a6c0
// 地址: 0x14171a6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_38 = zmm6
int64_t r8 = sx.q(arg1[6]) * 0xb0
int64_t rdx = **(arg1 + 0x10)
void* rdi = *(r8 + rdx + 0x20)
void* r14_2 = (sx.q(*(r8 + rdx + 0x28)) << 6) + rdi

while (rdi != r14_2)
    int32_t rbx_1 = *(*(arg1 + 0x20) + 8)
    uint64_t* rax_3 = sub_14172ea90(*(arg1 + 8), rdi)
    rdi += 0x40
    *rax_3 = -1
    rax_3[1].d = rbx_1

uint64_t r14_3 = 0
int64_t rdx_2 = sx.q(*arg1) * 0x3c
uint128_t var_90 = data_142e1c900
int64_t* rax_5 = *(arg1 + 0x28)
int32_t var_7c = 0xff7fffff
uint64_t var_78 = 0
*(rdx_2 + *rax_5 + 0x38) = 1
int64_t rdx_3 = sx.q(arg1[6]) * 0xb0
int64_t rcx_2 = **(arg1 + 0x10)
int32_t i_2 = *(rdx_3 + rcx_2 + 0x28)
int64_t rbx_2 = *(rdx_3 + rcx_2 + 0x20)
int32_t i_3 = i_2
int32_t arg_8
uint128_t zmm0

if (i_2 != 0)
    sub_1407c35c0(&var_78, i_2, 0)
    r14_3 = var_78
    void* rbx_3 = rbx_2 - r14_3
    void* rcx_4 = r14_3 + 0x28
    int32_t i
    
    do
        zmm0 = *(rbx_3 + rcx_4 - 0x28)
        rcx_4 += 0x40
        *(rcx_4 - 0x68) = zmm0
        *(rcx_4 - 0x58) = *(rbx_3 + rcx_4 - 0x58)
        *(rcx_4 - 0x48) = *(rbx_3 + rcx_4 - 0x48)
        *(rcx_4 - 0x40) = *(rbx_3 + rcx_4 - 0x40)
        *(rcx_4 - 0x38) = *(rbx_3 + rcx_4 - 0x38)
        *(rcx_4 - 0x34) = *(rbx_3 + rcx_4 - 0x34)
        *(rcx_4 - 0x2c) = *(rbx_3 + rcx_4 - 0x2c)
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3
    int32_t var_6c
    arg_8 = var_6c
else
    arg_8 = 0

int96_t var_68 = data_142e1c900.12
zmm0 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
void* i_1 = (sx.q(i_2) << 6) + r14_3
var_90.q = zmm0.q
zmm6 = zmm0
int32_t var_94 = 0xff7fffff
int32_t r13 = -0x800001
zmm0 = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
int32_t var_a0 = 0x7f7fffff
uint128_t zmm7 = zmm0
int32_t r12 = 0x7f7fffff
var_90:0xc.q = zmm0.q
int32_t var_58 = 0xff7fffff
int32_t var_54 = 0xff7fffff
var_90:8.d = 0x7f7fffff
int32_t var_7c_1 = 0xff7fffff

if (r14_3 != i_1)
    void* rcx_5 = r14_3 + 0x30
    
    do
        uint128_t zmm1 = *(rcx_5 - 8)
        int64_t zmm2 = *(rcx_5 - 4)
        rcx_5 += 0x40
        zmm1 = __minss_xmmss_memss(zmm1.d, var_90.d)
        zmm2 = __minss_xmmss_memss(zmm2.d, var_90:4.d).q
        zmm0 = __minss_xmmss_memss(var_90:8.d.d, *(rcx_5 - 0x40))
        zmm1 = _mm_unpacklo_ps(zmm1, zmm2)
        zmm2 = *(rcx_5 - 0x38)
        zmm6 = zmm1
        var_90.q = zmm1.q
        int32_t var_94_1 = zmm0.d
        zmm0 = *(rcx_5 - 0x34)
        r12 = var_94_1
        var_90:8.d = r12
        zmm1 = __maxss_xmmss_memss((*(rcx_5 - 0x3c)).d, var_90:0xc.d)
        zmm2 = __maxss_xmmss_memss(zmm2.d, 0xff7fffff).q
        zmm0 = __maxss_xmmss_memss(zmm0.d, var_7c_1)
        zmm1 = _mm_unpacklo_ps(zmm1, zmm2)
        zmm7 = zmm1
        r13 = zmm0.d
        var_90:0xc.q = zmm1.q
        var_7c_1 = r13
    while (rcx_5 - 0x30 != i_1)

int64_t* rbx_4 = *(arg1 + 0x20)
int64_t r15 = sx.q(rbx_4[1].d)
int32_t rax_12 = (r15 + 1).d
rbx_4[1].d = rax_12

if (rax_12 s> *(rbx_4 + 0xc))
    sub_1405c4fe0(rbx_4)

uint64_t* rcx_9 = (r15 << 6) + *rbx_4
*rcx_9 = zmm6.q
*(rcx_9 + 0xc) = zmm7.q
rcx_9[1].d = r12
*(rcx_9 + 0x14) = r13
rcx_9[3] = r14_3
*(rcx_9 + 0x24) = arg_8
rcx_9[4].d = i_2
rcx_9[5] = var_68.q
rcx_9[6].d = var_68:8.d
int64_t var_5c
*(rcx_9 + 0x34) = var_5c
*(rcx_9 + 0x3c) = var_54
int64_t* result = *(arg1 + 0x28)
*(sx.q(*arg1) * 0x3c + *result + 0x30) = r15.d
return result
