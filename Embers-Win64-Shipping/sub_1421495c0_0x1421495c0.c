// 函数: sub_1421495c0
// 地址: 0x1421495c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r15 = arg5
char* result = arg6
*arg3 = 1
*arg4 = 0
*r15 = 1
*result = 1

if (*(arg1 + 0x370) s<= 0)
    *arg4 = 1
    *r15 = 0
else
    int32_t i = 0
    int64_t rdi_1 = 0
    
    do
        int64_t* rcx_1 = *(arg1 + 0x368) + rdi_1
        result = (*(*rcx_1 + 8))(rcx_1, &arg5, arg2)
        int32_t rcx_2 = *result
        
        if (rcx_2 != 0)
            *arg4 = 1
            
            if (rcx_2 != 1)
                *r15 = 0
            
            if (rcx_2 != 2)
                *arg3 = 0
        
        i += 1
        rdi_1 += 0x70
    while (i s< *(arg1 + 0x370))

return result
