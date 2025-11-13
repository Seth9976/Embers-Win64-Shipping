// 函数: sub_141491970
// 地址: 0x141491970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void* rbp_1 = sx.q(*(arg3 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
int64_t result

if (*(rbp_1 + 0x48) s> 0)
    void** rsi_1 = nullptr
    
    do
        void* rbx_2 = *(rsi_1 + *(rbp_1 + 0x40))
        
        if ((*(rbx_2 + 0x570) & 1) != 0)
            result = *(rbx_2 + 0x48)
            
            if (result != 0)
                void* rcx = *(result + 8)
                
                if (rcx != 0)
                    result = sub_1412278d0(rcx, *(arg1 + 0x3b0), 0)
                    
                    if (result != 0 && (*(rbx_2 + 0x570) & 0x40) != 0)
                        int64_t* r9_1 = *(rbx_2 + 0x28)
                        int64_t var_20_1 = *(arg3 + 0x20) + 0x30
                        sub_14122b1c0(result, arg2, *(rbx_2 + 0x48), *r9_1 + 0x10, r9_1[1] + 0x10, 
                            *(rbx_2 + 0x38) + 0x10, rbx_2)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(rbp_1 + 0x48))

result.b = 1
return result
