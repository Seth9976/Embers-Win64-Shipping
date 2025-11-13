// 函数: sub_140966e10
// 地址: 0x140966e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> 0)
    void var_28
    int64_t* rax_2 = (*(*arg1 + 0x6b8))(arg1, &var_28)
    int64_t* rsi_2
    
    if (*rax_2 == 0)
        rsi_2 = nullptr
    else
        void* rax_3 = sub_1409853b0()
        
        if (rax_3 == 0)
            rsi_2 = nullptr
        else
            rsi_2 = *rax_2
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> rsi_2[7].d || *(rsi_2[6] + (rax_4 << 3)) != rax_3 + 0x30)
                rsi_2 = nullptr
    
    void* rax_6 = sub_140cde0b0()
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(rax_6, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_8 = sub_140d2dfc0(rsi_2, rax_6, 0, 0, 0, 0, 0, 0, 0)
    arg1[0x49] = rax_8
    int64_t r9_1 = *rax_8
    
    if ((*(r9_1 + 0x260))(rax_8, zx.q(arg2), arg3, r9_1) != 0)
        return 1

return 0
