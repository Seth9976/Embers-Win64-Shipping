// 函数: sub_140e553b0
// 地址: 0x140e553b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rcx = *arg1
    int32_t i_1 = arg1[1].d
    
    if (i_1 != 0)
        int64_t* rdi_1 = rcx + 8
        int32_t i
        
        do
            int64_t* rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                int32_t temp2_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_1 = &rdi_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

if (&arg1[2] != &arg2[2])
    arg1[2] = arg2[2]
    arg2[2] = 0
    int64_t* rcx_2 = arg1[3]
    arg1[3] = arg2[3]
    arg2[3] = 0
    
    if (rcx_2 != 0)
        int32_t temp0_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)

return arg1
