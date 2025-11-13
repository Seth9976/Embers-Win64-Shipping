// 函数: sub_141d537c0
// 地址: 0x141d537c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "Media", 1)
    j_sub_140b3db50()
    int64_t* rax_3 = sub_140b407e0(&data_143de7d78, rbx_1)
    
    if (rax_3 != 0)
        int64_t* rbx_2 = *(arg1 + 0x118)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t var_28 = *(arg1 + 0x110)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t* rax_5 = (*(*rax_3 + 0x78))(rax_3)
        int64_t r8_1 = *rax_5
        (*(r8_1 + 0x18))(rax_5, &var_28, r8_1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_8 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_12 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_12 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* rbx_3 = *(arg1 + 0x118)
        int64_t rax_14 = *(arg1 + 0x110)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t var_38
        
        if (rax_14 == 0)
            var_38 = 0
        else
            var_38 = rax_14 + 8
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t* rax_17 = (*(*rax_3 + 0x80))(rax_3)
        int64_t r8_2 = *rax_17
        (*(r8_2 + 8))(rax_17, &var_38, r8_2)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_20 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rsi_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))
    
    sub_141d4c510(*(arg1 + 0x110))

return sub_140cd7d40(arg1) __tailcall
