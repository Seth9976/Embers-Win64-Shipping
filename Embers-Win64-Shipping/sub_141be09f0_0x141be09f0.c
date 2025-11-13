// 函数: sub_141be09f0
// 地址: 0x141be09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

void var_18

if (arg1 + 0x808 == &var_18)
label_141be0a5b:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *(arg1 + 0x808) = *arg2
    int64_t* rdi_1 = *(arg1 + 0x810)
    
    if (rbx == rdi_1)
        goto label_141be0a5b
    
    *(arg1 + 0x810) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

return sub_140de1b90(arg1 + 0x2b8, arg2) __tailcall
