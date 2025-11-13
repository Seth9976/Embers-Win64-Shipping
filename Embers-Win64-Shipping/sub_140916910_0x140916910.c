// 函数: sub_140916910
// 地址: 0x140916910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void** r14 = arg3
int64_t* rbp = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rsi_1 = rbp
        rbp = &rbp[2]
        
        if (rsi_1 != r14)
            int32_t j_1 = rsi_1[1].d
            
            if (j_1 != 0)
                int64_t* rbx_2 = *rsi_1 + 0x18
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[5]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_140916520(rsi_1, *r14, r14[1].d, *(rsi_1 + 0xc), 0)
        
        r14 = &r14[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
