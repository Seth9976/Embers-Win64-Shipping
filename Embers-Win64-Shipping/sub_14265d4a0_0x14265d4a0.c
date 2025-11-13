// 函数: sub_14265d4a0
// 地址: 0x14265d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && sub_14244e690(arg2) != 0 && (*(*arg1 + 0x2d8))(arg1) != 0)
    int32_t i = 0
    int64_t r15
    r15.b = 1
    
    if (arg1[0x13].d s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rbx_1 = *(rsi_1 + arg1[0x12])
            
            if (rbx_1 != 0)
                void* rax_3
                int64_t rdx
                rax_3, rdx = sub_141dcc7c0(rbx_1)
                
                if (rax_3 == arg2 && *(rbx_1 + 0x2ac) != 0)
                    int64_t* rcx_3 = rbx_1[0x5c]
                    char rax_5
                    
                    if (rcx_3 != 0)
                        rdx.b = 1
                        rax_5 = (*(*rcx_3 + 0x38))(rcx_3, rdx)
                    
                    if (rcx_3 == 0 || rax_5 == 1)
                        r15.b = 0
                        break
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< arg1[0x13].d)
    
    return zx.q(r15.b)

return 1
