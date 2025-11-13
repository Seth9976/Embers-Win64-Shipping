// 函数: sub_141f60f40
// 地址: 0x141f60f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
void* rsi = nullptr
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0

if ((*(arg1 + 0x524) & 1) == 0)
    void** var_48
    void*** rax_11 = sub_141f61160(arg1, &var_48)
    
    if (arg2 != rax_11)
        void** rdx_8 = *arg2
        rdx_8[9](arg2, rdx_8)
        arg2[1] = rax_11[1]
        arg2[2] = rax_11[2]
        arg2[4].b = rax_11[4].b
        rax_11[4].b = 0
        (*rax_11)[9](rax_11)
    
    var_48 = &data_1430507f0
    char var_28
    
    if (var_28 != 0)
        int64_t var_40
        int64_t* rax_13 = sub_140d3c6e0(&var_40)
        int64_t var_38
        
        if (rax_13 != 0)
            if (var_38 != 0)
                int64_t r9_1 = *rax_13
                (*(r9_1 + 0x2a8))(rax_13, var_38, 1, r9_1)
            
            int64_t arg_8
            sub_140d3a3a0(&arg_8, nullptr)
            var_40 = arg_8
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
else
    sub_141b105d0(arg2)
    void* rax = sub_1425ac4b0()
    
    if (rax != 0)
        sub_140d3a3a0(&arg2[1], rax)
        int32_t rcx_2 = *(rax + 0x5c)
        int32_t r8_1 = 1
        int32_t rdx_4 = (*(rax + 0x58) - 1 + rcx_2) & not.d(rcx_2 - 1)
        
        if (rdx_4 != 0)
            r8_1 = rdx_4
        
        void*** rax_3 = sub_140a82f30(sx.q(r8_1), 0, r8_1)
        arg2[2] = rax_3
        sub_141f2d8c0(rax_3, arg1)
        *rax_3 = &data_14327fb40
        arg2[4].b = 1
    
    void* rax_4 = sub_1425ac4b0()
    void* rax_5 = sub_140d3c6e0(&arg2[1])
    
    if (rax_4 != 0)
        int64_t rcx_6 = sx.q(*(rax_4 + 0x38))
        
        if (rcx_6.d s<= *(rax_5 + 0x38) && *(*(rax_5 + 0x30) + (rcx_6 << 3)) == rax_4 + 0x30)
            rsi = arg2[2]
    
    *(rsi + 0xa8) = arg1[0x94]
    *(rsi + 0xb0) = arg1[0x95].d
    *(rsi + 0xb4) = *(arg1 + 0x4cc)
    *(rsi + 0xbc) = *(arg1 + 0x4d4)
    *(rsi + 0xc0) = *(arg1 + 0x4ac)
    *(rsi + 0xc8) = *(arg1 + 0x4b4)
    *(rsi + 0xcc) = arg1[0x9c]
    *(rsi + 0xd4) = arg1[0x9d].d

return arg2
