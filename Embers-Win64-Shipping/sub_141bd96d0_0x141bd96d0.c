// 函数: sub_141bd96d0
// 地址: 0x141bd96d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4a0) != 0)
    sub_141bdbcc0(arg1)
    *(arg1 + 0x4a0) = 0

if (*(arg1 + 0x4a8) != 0)
    sub_141bdbcc0(arg1)
    void var_18
    
    if (arg1 + 0x4a8 != &var_18)
        *(arg1 + 0x4a8) = 0
        int64_t* rdi_1 = *(arg1 + 0x4b0)
        
        if (rdi_1 != 0)
            *(arg1 + 0x4b0) = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

int64_t rcx_3 = *(arg1 + 0x540)

if (rcx_3 != 0)
    sub_141997870(rcx_3)
    *(arg1 + 0x540) = 0

return sub_141bf4060(arg1) __tailcall
