// 函数: sub_1421a1fe0
// 地址: 0x1421a1fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3

if (((*(arg1 + 0x88) & 1) != 0 && (*(arg1 + 0xd8) & 1) != 0 && (*(arg1 + 0x110) & 1) != 0)
        || arg2 == 0 || (*(arg2 + 0xe0) & 0x100) == 0)
    return 

int64_t* r10_1 = *(arg2 + 0x1d0)
int32_t rbx_1 = *(arg2 + 0x118)
int32_t rbx_2 = rbx_1 - 1
int64_t r12_1 = *(arg2 + 0xf0)
int32_t r13_1 = *(arg2 + 0x114)
int64_t* var_48_1 = r10_1

if (rbx_1 - 1 s< 0)
    return 

int16_t* rsi_1 = *(arg2 + 0xf8) + (sx.q(rbx_2) << 1)
int32_t temp1_1

do
    void* rdi_3 = zx.q(zx.d(*rsi_1) * r13_1) + r12_1
    
    if ((*(rdi_3 + 0x5c) & 0x4000000) == 0)
        int32_t rax_1 = *(arg2 + 0x30)
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x50)
        int32_t arg_8 = rax_1
        uint64_t* var_90
        int64_t var_88
        int64_t var_80
        int64_t var_78
        int64_t var_70
        int64_t var_68
        int64_t var_60
        int64_t var_58
        int64_t var_50
        (*(*r10_1 + 0x388))(r10_1, arg2, rdi_3, &arg_8, &var_90, &var_50, &var_58, &var_60, 
            &var_68, &var_70, &var_78, &var_80, &var_98, &var_88, var_98, var_90, var_88, var_80, 
            var_78, var_70, var_68, var_60, var_58, var_50, var_48_1)
        int64_t var_d0_2 = var_98
        int64_t* var_d8_1
        var_d8_1.b = 0
        int64_t* var_e0_1
        var_e0_1.d = rbx_2
        int32_t* rax
        rax, arg4 = sub_142199c00(arg1, arg2, var_90, rdi_3, arg4, &arg_18, var_e0_1.d, var_d8_1.b)
        r10_1 = var_48_1
    
    rsi_1 -= 2
    temp1_1 = rbx_2
    rbx_2 -= 1
while (temp1_1 - 1 s>= 0)
