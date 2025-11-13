// 函数: sub_142172560
// 地址: 0x142172560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x29) & 1) == 0)
    int64_t r8_1 = arg2[0x15]
    
    if (r8_1 s< arg2[0x14])
        char rdx_2 = *(sx.q((r8_1 s>> 3).d) + arg2[0x12])
        arg2[0x15] = r8_1 + 1
        
        if ((rdx_2 & 1 << (r8_1.b & 7)) != 0)
            return sub_142172040(arg1, arg2, arg3, arg4)
    else
        sub_140b55370(arg2)

void* r14 = arg1[0x62]
char rbp = *(r14 + 0x152)
*(r14 + 0x152) = 1
int64_t* rcx_1 = arg2[1]
int32_t result_1 = 0
int32_t* rdx_1 = *rcx_1

if (&rdx_1[1] u> rcx_1[1])
    int32_t* rdx_4 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_4, arg4)
    else
        (*(*arg2 + 0x150))(arg2, rdx_4, 4)
else
    result_1 = *rdx_1
    *rcx_1 += 4

int32_t result = result_1

if (result s<= 0x800)
    int32_t rdi_1 = 0
    
    if (result s> 0)
        do
            int64_t arg_20 = 0
            int32_t var_38_1 = 0
            void arg_18
            result, arg4 = sub_14216a980(arg1, &arg_18, arg2, &arg_20, arg4)
            
            if ((*(arg2 + 0x29) & 1) != 0)
                break
            
            rdi_1 += 1
        while (rdi_1 s< result_1)
else
    *(arg2 + 0x29) |= 1

*(r14 + 0x152) = rbp
return result
