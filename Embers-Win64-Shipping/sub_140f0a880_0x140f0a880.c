// 函数: sub_140f0a880
// 地址: 0x140f0a880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4b8) != 0)
    int64_t* r10_1 = *(arg1 + 0x4c0)
    
    if (r10_1 != 0)
        int32_t rax_1 = r10_1[1].d
        
        if (rax_1 s> 0)
            int64_t rcx = 0
            
            if (r10_1 != 0)
                if (rax_1 != 0)
                    r10_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    r10_1 = nullptr
                
                if (r10_1 != 0)
                    rcx = *(arg1 + 0x4b8)
            
            int64_t var_18 = rcx
            sub_140e27040(arg1, &var_18)
            
            if (r10_1 != 0)
                r10_1[1].d -= 1
                
                if (r10_1[1].d == 1)
                    (**r10_1)(r10_1)
                    int32_t temp1_1 = *(r10_1 + 0xc)
                    *(r10_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*r10_1 + 8))(r10_1, 1)

sub_140a0e2a0(arg1, arg2)
return arg2
