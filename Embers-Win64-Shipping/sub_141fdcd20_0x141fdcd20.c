// 函数: sub_141fdcd20
// 地址: 0x141fdcd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t* r9 = arg3
int32_t r8 = arg1[2]
uint32_t rcx = r9[1].d
int32_t result = *(arg4 + 0x34) * r8

if (result == rcx)
    return memcpy(*(arg4 + 0x38), *r9, rcx) __tailcall

int32_t i = 0
uint32_t count = *arg1 * arg2
int32_t i_1 = 0

if (r8 s> 0)
    int32_t rcx_3 = arg1[1]
    
    do
        int32_t rdi_1 = 0
        result = *arg5 * arg2
        int32_t r14_2 = rcx_3 * i
        int32_t rbx_4 = (arg5[2] + i) * *(arg4 + 0x34) + result
        
        if (rcx_3 s> 0)
            do
                result = memcpy(sx.q((arg5[1] + rdi_1) * *(arg4 + 0x30) + rbx_4) + *(arg4 + 0x38), 
                    sx.q((r14_2 + rdi_1) * count) + *r9, count)
                rcx_3 = arg1[1]
                rdi_1 += 1
                r9 = arg3
            while (rdi_1 s< rcx_3)
            
            i = i_1
            arg2 = arg_10
        
        i += 1
        i_1 = i
    while (i s< arg1[2])

return result
