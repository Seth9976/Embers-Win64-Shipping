// 函数: sub_140f0a690
// 地址: 0x140f0a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4b8) != 0)
    int64_t* r8_1 = *(arg1 + 0x4c0)
    
    if (r8_1 != 0)
        int32_t rax_1 = r8_1[1].d
        
        if (rax_1 s> 0)
            int64_t rcx = 0
            
            if (r8_1 != 0)
                if (rax_1 != 0)
                    r8_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    r8_1 = nullptr
                
                if (r8_1 != 0)
                    rcx = *(arg1 + 0x4b8)
            
            int64_t var_18 = rcx
            sub_140e27040(arg1, &var_18)
            
            if (r8_1 != 0)
                r8_1[1].d -= 1
                
                if (r8_1[1].d == 1)
                    (**r8_1)(r8_1)
                    int32_t temp1_1 = *(r8_1 + 0xc)
                    *(r8_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*r8_1 + 8))(r8_1, 1)

return sub_140594850() __tailcall
