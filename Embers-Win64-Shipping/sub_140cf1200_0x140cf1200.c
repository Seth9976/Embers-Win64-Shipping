// 函数: sub_140cf1200
// 地址: 0x140cf1200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
bool cond:1_1

if (*(arg2 + 0x40) s>= 0x1b9)
    if ((*(arg3 + 0x5c) | *(arg3 + 0x58) | *(arg3 + 0x54) | *(arg3 + 0x50)) != 0 && arg4 != 0)
        int64_t* rcx_2 = *(arg4 + 0x78)
        
        if (rcx_2 != 0)
            void var_18
            int32_t* rax_4 = (*(*rcx_2 + 0x318))(rcx_2, &var_18)
            int32_t rdx_7 = (*(arg3 + 0x5c) ^ rax_4[3]) | (*(arg3 + 0x58) ^ rax_4[2])
                | (*(arg3 + 0x54) ^ rax_4[1]) | (*rax_4 ^ *(arg3 + 0x50))
            cond:1_1 = rdx_7 != 0
            goto label_140cf128a
else if (arg4 != 0 && sub_140ca8fe0(*(arg4 + 0x78), arg2).b == 0)
    cond:1_1 = (*(*(arg4 + 0x78) + 0xb0) & 0x800) != 0
label_140cf128a:
    
    if (not(cond:1_1))
        result.b = 1
        return result
result.b = 0
return result
