// 函数: sub_140e182c0
// 地址: 0x140e182c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    sub_140e18030(arg1, arg2)
else
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 == 0)
        sub_140e18030(arg1, arg2)
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            sub_140e18030(arg1, arg2)
        else
            void* rdx = nullptr
            
            if (rbx_1 == 0)
                goto label_140e1830f
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1 += 1
                rbx_1[1].d = rax_1
            label_140e1830f:
                
                if (rbx_1 != 0)
                    rdx = *(arg1 + 0x18)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = rax_1 + 1
            
            int64_t* rax_3 = sub_140d44910(rdx + 0x738)
            int64_t var_28 = *rax_3
            int64_t* rcx_2 = rax_3[1]
            
            if (rcx_2 != 0)
                rcx_2[1].d += 1
            
            int32_t var_18_1 = rax_3[2].d
            sub_140596d10(arg2, sub_140ac6680(&var_28))
            
            if (rcx_2 != 0)
                rcx_2[1].d -= 1
                
                if (rcx_2[1].d == 1)
                    (**rcx_2)(rcx_2)
                    int32_t rsi_1 = *(rcx_2 + 0xc)
                    *(rcx_2 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*rcx_2 + 8))(rcx_2, zx.q(rsi_1))
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
