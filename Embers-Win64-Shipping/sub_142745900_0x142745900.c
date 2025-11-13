// 函数: sub_142745900
// 地址: 0x142745900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4
int64_t* rcx = *(arg1 + 0x680)
int64_t* rsi = arg3

if (rcx == 0)
    int64_t rax
    rax.b = 0
    return rax

float zmm3 = *arg3
int32_t zmm2 = arg3[1]
float zmm1 = *arg4 - zmm3
int32_t arg_8 = 0
int64_t zmm0
zmm0.d = arg4[1].d f- zmm2
float var_48 = zmm3
int32_t var_44 = zmm2
float var_58 = zmm1
zmm1 = arg3[2]
float var_40 = zmm1
int32_t var_54 = zmm0.d
zmm0.d = arg4[2].d f- zmm1
int32_t var_50 = zmm0.d
void var_38
int64_t rax_2 = (*(*rcx + 0x1a0))(rcx, &arg_8, &var_38, &var_48, &var_58, 3, 0xffffffff)
int32_t r14 = rax_2.d

if (rax_2.d == 0xffffffff || arg_8.d f> 1f)
    rax_2.b = 0
else
    int64_t* rcx_1 = *(arg1 + 0x680)
    rax_2 = (*(*rcx_1 + 0xd0))(rcx_1, zx.q(r14))
    
    if (rax_2 != 0)
        int32_t r12_1 = *(arg1 + 0x2a8)
        int64_t r15_1 = *(arg1 + 0x398)
        
        if (*(arg1 + 0xa8) == 0)
            sub_141ee69e0(arg1)
        
        int32_t var_40_1 = rdi[1].d
        int32_t var_50_1 = rsi[1].d
        var_48.q = *rdi
        zmm0 = *rsi
        *(arg1 + 0x398) = rax_2
        *(arg1 + 0x2a8) = r14
        var_58.q = zmm0
        rax_2 = sub_141f1e580(arg1, arg2, &var_58, &var_48, arg5)
        *(arg1 + 0x398) = r15_1
        *(arg1 + 0x2a8) = r12_1

return rax_2
