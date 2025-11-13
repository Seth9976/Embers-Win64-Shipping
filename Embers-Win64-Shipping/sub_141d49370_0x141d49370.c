// 函数: sub_141d49370
// 地址: 0x141d49370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
void* result

if (rcx == 0)
label_141d49486:
    result.b = 0
else
    int64_t rdx_1 = *(arg2[1] + 0x10) & 0x800000200000
    
    if (rcx[1].d == 5)
        if (rdx_1 != 0 && arg2[7].d == 1)
            return sub_141d472c0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
        
        result = sub_140b74a70(rcx)
        void* result_1 = result
        int32_t rcx_2 = *(result + 8)
        
        if (rcx_2 s>= 0)
            int32_t rdi_1 = arg2[7].d
            
            if (rcx_2 s< rdi_1)
                rdi_1 = rcx_2
            
            int32_t rbx_1 = 0
            
            if (rdi_1 != 0)
                do
                    result, arg5 = sub_141d472c0((sx.q(rbx_1) << 4) + *result_1, arg2, 
                        sx.q(rbx_1 * *(arg2 + 0x3c)) + arg3, arg4, arg5, arg6, arg7, arg8)
                    
                    if (result.b == 0)
                        goto label_141d49486_1
                    
                    rbx_1 += 1
                while (rbx_1 != rdi_1)
        
        result.b = 1
    else
        if (rdx_1 == 0)
            return sub_141d472c0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
        
    label_141d49486_1:
        result.b = 0

return result
