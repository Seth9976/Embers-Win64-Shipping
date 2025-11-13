// 函数: sub_142648820
// 地址: 0x142648820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg4
int64_t zmm5 = *(arg4 + 4)
int128_t zmm6 = *(arg4 + 8)
float zmm7[0x4] = *(arg4 + 0xc)
zmm7[0] = zmm7[0] - zmm4[0]
float zmm8[0x4] = arg4[1].d
zmm8[0] = zmm8[0] f- zmm5.d
int128_t zmm9
zmm9.d = (*(arg4 + 0x14)).d f- zmm6.d
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * 0.5f
zmm8[0] = zmm8[0] * 0.5f
float zmm3 = zmm9.d * 0.5f
zmm8[0] = zmm8[0] * zmm8[0]
zmm4[0] = zmm4[0] + zmm7[0]
float temp0[0x4] = _mm_unpacklo_ps(zmm7, zmm8[0].q)
zmm5.d = zmm5.d f+ zmm8[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm6.d = zmm6.d f+ zmm3
zmm9.d = zmm9.d f* zmm9.d
float var_58 = zmm3
float temp0_1[0x4] = _mm_unpacklo_ps(zmm4, zmm5)
zmm8[0] = zmm8[0] f+ zmm9.d
int32_t var_64 = zmm6.d
zmm8[0] = zmm8[0] * 0.25f
float var_6c[0x4]
var_6c[0].q = temp0_1.q
*arg5 = var_6c
float var_54 = _mm_sqrt_ss(0, zmm8[0])[0]
arg5[1].q = temp0.q
*(arg5 + 0x18) = var_54

if (arg3 != 0)
    char rax_4 = (*(*arg3 + 0x30))(arg3)
    bool cond:1_1
    
    if (rax_4 != 0)
        cond:1_1 = rax_4 == 1
    else
        cond:1_1 = *(arg1 + 0x4a0) == 1
    
    int64_t rdi
    
    if (cond:1_1)
        rdi.b = 1
    else
        rdi.b = 0
    
    if ((*(arg1 + 0x4a4) & 1) == 0 || arg2 == 0)
        goto label_1426489aa
    
    void* rax_5 = sub_142459c10()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
        goto label_1426489aa
    
    void* rax_8 = arg5[2].q
    void* rax_15
    
    if (rdi.b == 0)
        *(rax_8 + 0xc8) |= 1
        char rax_11
        int32_t rdx_3
        rax_11, rdx_3 = (*(*arg3 + 0x20))(arg3)
        void* rcx_5 = arg5[2].q
        *(rcx_5 + 0xc8) = (*(rcx_5 + 0xc8) & 0xfffffffb) | (sbb.d(rdx_3, rdx_3, rax_11 != 0) & 4)
        rax_15 = arg5[2].q
        *(rax_15 + 0xc8) |= 2
    else
        sub_140756d20(arg1 + 0x440, arg2, rax_8)
    label_1426489aa:
        
        if (rdi.b == 0)
            rax_15 = arg5[2].q
            *(rax_15 + 0xc8) |= 2
        else
            (*(*arg3 + 0x10))(arg3, arg5[2].q)

void* rbx_1 = arg5[2].q

if (sub_141ded450(rbx_1) == 0)
    bool cond:0_1 = *(rbx_1 + 0x1c) == 0
    *(rbx_1 + 0x18) = 0
    
    if (not(cond:0_1))
        sub_1405c5510(rbx_1 + 0x10, 0)
else
    sub_141df0090(rbx_1)

void* rcx_9 = arg5[2].q
int32_t rax_19 = sub_141dc56a0(rcx_9 + 0x70) + *(rcx_9 + 0x1c) + *(rcx_9 + 0x2c)
*(arg1 + 0x4a8) += rax_19
return sub_142647a10(arg1 + 0x10, arg5, arg1 + 0x10, arg1 + 0x3f0) __tailcall
