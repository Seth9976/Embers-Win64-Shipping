// 函数: sub_1405c2d80
// 地址: 0x1405c2d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 == 0)
    result.b = 0
    return result

int32_t rsi = 0

if (arg1[1].d s<= 0)
label_1405c2de3:
    result.b = 0
else
    int64_t r14_1 = 0
    
    while (true)
        result = *arg1
        int64_t* rdi_1 = r14_1 + result
        
        if (*(r14_1 + result + 8) != 0)
            int64_t* rcx = *rdi_1
            void arg_10
            
            if (rcx != 0 && *(*(*rcx + 0x30))(rcx, &arg_10) == arg2)
                if (rdi_1[1].d != 0)
                    int64_t* rcx_1 = *rdi_1
                    
                    if (rcx_1 != 0)
                        (*(*rcx_1 + 0x38))(rcx_1, 0)
                        int64_t rcx_2 = *rdi_1
                        
                        if (rcx_2 != 0)
                            *rdi_1 = sub_140a84c80(rcx_2, 0, 0)
                        
                        rdi_1[1].d = 0
                
                sub_140599630(arg1, 0)
                result.b = 1
                break
        
        rsi += 1
        r14_1 += 0x10
        
        if (rsi s>= arg1[1].d)
            goto label_1405c2de3

return result
