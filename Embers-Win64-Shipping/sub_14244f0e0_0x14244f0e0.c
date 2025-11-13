// 函数: sub_14244f0e0
// 地址: 0x14244f0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141dd15d0(arg1)

if ((*(arg1 + 0x22d) & 8) != 0 && arg1[0x46] == 0)
    result = sub_141dc9840(arg1)
    
    if (result != 0)
        void* result_1
        result = sub_141deba20(&result_1)
        
        if (result_1 != 0)
            result = sub_142549c30()
            
            if (result != 0)
                int64_t rcx_2 = sx.q(*(result + 0x38))
                void* r8_1 = result + 0x30
                result = result_1
                
                if (rcx_2.d s<= *(result + 0x38) && *(*(result + 0x30) + (rcx_2 << 3)) == r8_1
                        && result != 0)
                    uint64_t arg_10 = 0
                    void* rax = sub_142549c30()
                    int64_t rax_1
                    int64_t* result_2
                    
                    if (rax != 0)
                        result_2 = result_1
                        rax_1 = sx.q(*(rax + 0x38))
                    
                    if (rax == 0 || rax_1.d s> result_2[7].d
                            || *(result_2[6] + (rax_1 << 3)) != rax + 0x30)
                        result_2 = nullptr
                    
                    result = sub_140596910(arg1, result_2, arg_10, 0, 0, 0, 0)
                    arg1[0x46] = result
        
        *(arg1 + 0x22d) &= 0xf7

return result
