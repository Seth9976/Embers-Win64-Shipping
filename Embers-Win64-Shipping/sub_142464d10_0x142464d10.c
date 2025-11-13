// 函数: sub_142464d10
// 地址: 0x142464d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t* rbx_1 = *arg1
    int32_t i_2 = arg1[1].d
    
    if (i_2 != 0)
        int32_t i
        
        do
            sub_140745b20(rbx_1)
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[1].d
    int64_t* rdi_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_1405a4be0(arg1, i_3, r8_1)
        int64_t* rbx_2 = *arg1
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rbx_2 = 0
                rbx_2[1].d = 0
                
                if (rdi_1 != rbx_2 && rdi_1[1].d != 0)
                    int64_t* rcx_2 = *rdi_1
                    
                    if (rcx_2 != 0)
                        (*(*rcx_2 + 0x40))(rcx_2, rbx_2)
                
                rbx_2 = &rbx_2[2]
                rdi_1 = &rdi_1[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = 0

return arg1
