// 函数: sub_141ae4400
// 地址: 0x141ae4400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int64_t* rbx_2 = *arg1 + 0x10
        int32_t i
        
        do
            sub_140745b20(rbx_2)
            rbx_2 = &rbx_2[4]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rbx_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_14083a1f0(arg1, i_2, r8_1)
        int64_t* r14_1 = *arg1
        
        if (i_2 != 0)
            int64_t* rbx_4 = rbx_3 + 0x10
            int64_t* rdi_1 = &r14_1[2]
            int32_t i_1
            
            do
                *r14_1 = rbx_4[-2]
                rdi_1[-1] = rbx_4[-1]
                *rdi_1 = 0
                rdi_1[1].d = 0
                
                if (rbx_4 != rdi_1 && rbx_4[1].d != 0)
                    int64_t* rcx_2 = *rbx_4
                    
                    if (rcx_2 != 0)
                        (*(*rcx_2 + 0x40))(rcx_2, rdi_1)
                
                r14_1 = &r14_1[4]
                rdi_1 = &rdi_1[4]
                rbx_4 = &rbx_4[4]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = 0

return arg1
