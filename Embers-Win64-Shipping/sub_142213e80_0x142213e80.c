// 函数: sub_142213e80
// 地址: 0x142213e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2

if (arg2 == 0 || (*(arg3 + 0x11d) & 0x20) != 0)
    return nullptr

if (data_143a2f088 == 0)
    sub_140754590(arg1, 0)
else if (sub_142188720(arg2) != 0)
    uint32_t rdi_1 = (arg2 u>> 4).d
    int32_t rcx_2 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
    int32_t rdx_2 = neg.d(rcx_2 + rdi_1) ^ rcx_2 u>> 0xd
    int32_t rdi_4 = (rdi_1 - rcx_2 - rdx_2) ^ rdx_2 u>> 0xc
    int32_t rcx_5 = (rcx_2 - rdi_4 - rdx_2) ^ rdi_4 << 0x10
    int32_t rdx_5 = (rdx_2 - rcx_5 - rdi_4) ^ rcx_5 u>> 5
    int32_t rdi_7 = (rdi_4 - rcx_5 - rdx_5) ^ rdx_5 u>> 3
    int32_t rcx_8 = (rcx_5 - rdi_7 - rdx_5) ^ rdi_7 << 0xa
    void* rax_16 = sub_14220a140(arg1, (rdx_5 - rcx_8 - rdi_7) ^ rcx_8 u>> 0xf, &arg_10)
    int64_t* rdi_8 = rax_16
    int64_t rax_17 = sx.q(*(rax_16 + 8))
    int64_t* rbx_1
    
    if (rax_17.d == 0)
        void* rax_20
        float zmm0_2
        rax_20, zmm0_2 = sub_141e11830(arg3)
        void* rdx_11 = arg_10
        rbx_1 = rax_20
        *(rax_20 + 0x432) &= 0x7f
        *(rax_20 + 0x89) &= 0x7f
        *(rax_20 + 0x4b8) = 0
        sub_14219e4a0(rax_20, rdx_11, zmm0_2)
        *(rbx_1 + 0x432) &= 0xfb
        *(rbx_1 + 0x431) |= 0x10
    else
        float zmm0_1[0x4] = *(*rdi_8 + rax_17 * 0x10 - 0x10)
        rdi_8[1].d = (rax_17 - 1).d
        float var_18_1 = zmm0_1[0]
        float var_14_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0]
        rbx_1 = var_18_1.q
        void* rax_18 = rbx_1[0x15]
        
        if (rax_18 == 0)
            rax_18 = sub_141ee69e0(rbx_1)
        
        if (rax_18 != arg3)
            (*(*rbx_1 + 0x138))(rbx_1, 0, arg3, 1, var_18_1)
    
    *(rbx_1 + 0x43c) = arg4
    int32_t rcx_18 = rdi_8[5].d + rdi_8[3].d
    
    if (rdi_8[6].d s>= rcx_18)
        rcx_18 = rdi_8[6].d
    
    rdi_8[6].d = rcx_18
    return rbx_1

int64_t* rax_22
float zmm0_3
rax_22, zmm0_3 = sub_141e11830(arg3)
*(rax_22 + 0x432) |= 0x80
*(rax_22 + 0x89) &= 0x7f
rax_22[0x97].d = 0
sub_14219e4a0(rax_22, arg2, zmm0_3)
*(rax_22 + 0x432) &= 0xfb
return rax_22
