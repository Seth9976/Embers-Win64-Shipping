// 函数: sub_140f44180
// 地址: 0x140f44180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4cc) &= 0xb7
sub_140e19ef0(arg1, 5)
int64_t rax = arg1[0x96]

if (rax != 0)
    int64_t var_18 = rax
    int64_t* rax_1 = arg1[0x97]
    
    if (rax_1 != 0)
        rax_1[1].d += 1
    
    sub_140e27040(arg1, &var_18)
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t temp1_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rax_1 + 8))(rax_1, 1)
    
    if (&arg1[0x96] != &var_18)
        arg1[0x96] = 0
        int64_t* rbx_2 = arg1[0x97]
        
        if (rbx_2 != 0)
            arg1[0x97] = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

return Dbg1::Reset(&arg1[0x7a]) __tailcall
