// 函数: sub_140e998a0
// 地址: 0x140e998a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_2 = arg1[1].d
    
    if (i_2 != 0)
        int64_t* rbx_2 = *arg1 + 8
        int32_t i
        
        do
            int64_t* rcx = *rbx_2
            
            if (rcx != 0)
                int32_t temp1_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rbx_2 = &rbx_2[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    int64_t* rbx_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_1405a4be0(arg1, i_3, r8_1)
        int64_t* rcx_2 = *arg1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rcx_2 = *rbx_3
                void* rax_3 = rbx_3[1]
                rcx_2[1] = rax_3
                
                if (rax_3 != 0)
                    *(rax_3 + 0xc) += 1
                
                rcx_2 = &rcx_2[2]
                rbx_3 = &rbx_3[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_3

return arg1
