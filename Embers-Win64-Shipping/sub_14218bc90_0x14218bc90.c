// 函数: sub_14218bc90
// 地址: 0x14218bc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t r14 = 0
int32_t rcx = *(*(arg1 + 0x1d0) + 0x3c)
int32_t rdx = *(arg1 + 0x118)
int32_t rax_1 = 1
*(arg1 + 0x308) = 0

if (rcx != 0)
    rax_1 = rcx

int32_t rsi = 0

if (*(arg1 + 0x30c) != rdx)
    sub_1405dadb0(arg1 + 0x300, rdx)
    rsi = *(arg1 + 0x308)

int64_t r15 = sx.q(*(arg1 + 0x118))
int32_t rax_2 = rsi + r15.d
*(arg1 + 0x308) = rax_2

if (rax_2 s> *(arg1 + 0x30c))
    sub_1405a4cf0(arg1 + 0x300)

uint64_t result = memset(*(arg1 + 0x300) + (sx.q(rsi) << 2), 0, r15 << 2)
int32_t i = 0

if (*(arg1 + 0x118) s<= 0)
    *(arg1 + 0x2f8) = 0
else
    int32_t* r15_1 = nullptr
    int64_t r12_1 = 0
    
    do
        int32_t arg_18 = r14
        int32_t rcx_6 = zx.d(*(*(arg1 + 0xf8) + r12_1)) * *(arg1 + 0x114)
        int32_t rax_5 = *(arg1 + 0x30)
        uint64_t result_1
        __builtin_memset(&result_1, 0, 0x50)
        int64_t* rcx_7 = *(arg1 + 0x1d0)
        int64_t r8_3 = sx.q(rcx_6) + *(arg1 + 0xf0)
        int32_t arg_8 = rax_5
        int64_t var_90
        int64_t var_88
        int64_t var_80
        int64_t var_78
        int64_t var_70
        int64_t var_68
        int64_t var_60
        int64_t var_58
        int64_t var_50
        (*(*rcx_7 + 0x388))(rcx_7, arg1, r8_3, &arg_8, &result_1, &var_50, &var_58, &var_60, 
            &var_68, &var_70, &var_78, &var_80, &var_88, &var_90, result_1, var_90, var_88, var_80, 
            var_78, var_70, var_68, var_60, var_58, var_50)
        *(r15_1 + *(arg1 + 0x300)) = *(result_1 + 0x58)
        result = result_1
        int32_t rdx_4 = *(result + 0x58)
        
        if (rdx_4 s> 0)
            r14 += (rdx_4 + 2) * rax_1
            int32_t rdi_1 = 0
            
            if (arg_18 s<= 0)
                rdi_1 = -4
            
            result = zx.q((rdx_4 + 4) * rax_1 + rdi)
            rdi = rdi_1 + result.d
        
        i += 1
        r12_1 += 2
        r15_1 = &r15_1[1]
    while (i s< *(arg1 + 0x118))
    
    *(arg1 + 0x2f8) = r14
    *(arg1 + 0x2fc) = rdi

return result
