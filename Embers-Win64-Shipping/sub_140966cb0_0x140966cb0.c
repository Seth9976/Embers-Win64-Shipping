// 函数: sub_140966cb0
// 地址: 0x140966cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s> 0)
    void var_20
    int64_t* rax_2 = (*(*arg1 + 0x710))(arg1, &var_20)
    int64_t* rdi_2
    
    if (*rax_2 == 0)
        rdi_2 = nullptr
    else
        void* rax_3 = sub_1409855f0()
        
        if (rax_3 == 0)
            rdi_2 = nullptr
        else
            rdi_2 = *rax_2
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> rdi_2[7].d || *(rdi_2[6] + (rax_4 << 3)) != rax_3 + 0x30)
                rdi_2 = nullptr
    
    void* rax_6 = sub_140cde0b0()
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(rax_6, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int64_t var_50_1 = 0
    int32_t var_58_1 = 0
    void* rax_8 = sub_140d2dfc0(rdi_2, rax_6, 0, 0, 0, 0, 0, 0, 0)
    var_50_1.d = arg6
    arg1[0x49] = rax_8
    var_58_1.q = arg5
    
    if ((*(*rax_8 + 0x260))(rax_8, zx.q(arg2), zx.q(arg3), zx.q(arg4), 0, 0, arg7) != 0)
        return 1

return 0
