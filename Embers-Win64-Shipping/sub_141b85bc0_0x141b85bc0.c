// 函数: sub_141b85bc0
// 地址: 0x141b85bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int64_t* rsi_2 = *arg1 + 0x10
        int32_t i
        
        do
            int64_t* rbx_1 = *rsi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_2 = &rsi_2[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rsi_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808f70(arg1, i_2, r8_1)
        int64_t* rdx_1 = *arg1
        
        if (i_2 != 0)
            void* rcx_3 = rsi_3 + 8
            int32_t i_1
            
            do
                *rdx_1 = *(rcx_3 - 8)
                rdx_1[1] = *rcx_3
                void* rax_5 = *(rcx_3 + 8)
                rdx_1[2] = rax_5
                
                if (rax_5 != 0)
                    *(rax_5 + 8) += 1
                
                rdx_1 = &rdx_1[3]
                rcx_3 += 0x18
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1
