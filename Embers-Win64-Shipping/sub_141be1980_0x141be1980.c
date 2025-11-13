// 函数: sub_141be1980
// 地址: 0x141be1980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x430 != arg2)
    void* rcx = *(arg1 + 0x430)
    int32_t i_1 = *(arg1 + 0x438)
    
    if (i_1 != 0)
        int64_t* rdi_1 = rcx + 0x10
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_1 = &rdi_1[3]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = *(arg1 + 0x430)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x430) = *arg2
    *arg2 = 0
    *(arg1 + 0x438) = arg2[1].d
    *(arg1 + 0x43c) = *(arg2 + 0xc)
    arg2[1] = 0

return sub_14094b310(arg2) __tailcall
