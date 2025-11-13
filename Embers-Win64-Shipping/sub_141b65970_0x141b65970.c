// 函数: sub_141b65970
// 地址: 0x141b65970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm2 = zx.o(*arg4)
uint64_t rbp = zx.q(*(arg1 + 0x11c))
int32_t var_44 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
int32_t var_3c = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
int32_t var_40 = zmm2.d
zmm2 = zx.o(*arg6)
int32_t var_48 = zmm1.d
int32_t var_30 = zmm2.d
zmm1 = zx.o(*arg5)
void** const result = 0x20
int32_t var_38 = zmm1.d
uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)

if (rbp.d u>= 0x20)
    rbp = 0x20

int32_t var_34 = zmm0.d
int32_t var_2c = _mm_shuffle_ps(zmm2, zmm2, 0x55).d

if (rbp.d != 0)
    int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    uint32_t r12_1 = zx.d(*(arg1 + 0x118))
    int64_t r13_1 = *(arg2 + 0x188)
    int64_t rax_2 = rbx_3 + rbp
    uint32_t r15_1 = zx.d(*(arg1 + 0x11a))
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = rbx_3 + rbp
    
    *(arg2 + 0x30) = rax_2
    memcpy(rbx_3, &var_48, rbp.d)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_4[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    result = &data_142d549d8
    rcx_4[2] = r13_1
    rcx_4[3] = rbx_3
    rcx_4[4].d = r12_1
    *(rcx_4 + 0x24) = r15_1
    *rcx_4 = &data_142d549d8
    rcx_4[5].d = rbp.d

return result
