// 函数: sub_141f1e2b0
// 地址: 0x141f1e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t result

if (*(arg1 + 0x440) s<= 0)
label_141f1e37b:
    result.b = 0
else
    int64_t* rsi_1 = nullptr
    
    while (true)
        void* r14_1 = *(rsi_1 + *(arg1 + 0x438))
        void* rbx_1 = *(*(*(r14_1 + 8) + 0x410) + 0x20)
        
        if (rbx_1 != 0)
            void* rax_1 = sub_142527690()
            void* rdx_1 = *(rbx_1 + 0x10)
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax_1 + 0x30)
                void* rcx_2 = *(rbx_1 + 0xb8)
                
                if (rcx_2 != 0)
                    result = sub_1420f98f0(rcx_2)
                    void* rcx_3
                    
                    if (result != 0)
                        rcx_3 = *(result + 0x1e0)
                    
                    if (result != 0 && rcx_3 != 0)
                    label_141f1e35a:
                        int128_t var_18 = *(r14_1 + 0x30)
                        
                        if (sub_1420fa4c0(rcx_3, &var_18) != 0)
                            result.b = 1
                            break
                    else
                        rcx_3 = *(rbx_1 + 0x1e0)
                        
                        if (rcx_3 != 0)
                            goto label_141f1e35a
        
        rdi += 1
        rsi_1 = &rsi_1[1]
        
        if (rdi s>= *(arg1 + 0x440))
            goto label_141f1e37b

return result
