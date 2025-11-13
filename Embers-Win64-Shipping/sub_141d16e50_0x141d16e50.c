// 函数: sub_141d16e50
// 地址: 0x141d16e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t var_58

if (sub_141d1d910(arg1, arg2, arg3) == 0)
    if (*(arg1 + 0x60) == *(arg1 + 0x8c))
    label_141d16f04:
        sub_141d1a650(arg1, arg3)
    else
        int32_t rax_3 = sub_140b5ead0(arg3.d) + arg_18:4.d
        void* r8 = arg1 + 0x90
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_141d16f04_1:
            sub_141d1a650(arg1, arg3)
        else
            int64_t r8_1 = *(arg1 + 0x58)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_5) * 5
                
                if (*(r8_1 + (rdx_3 << 2)) == arg3)
                    break
                
                rax_5 = *(r8_1 + (rdx_3 << 2) + 0xc)
                
                if (rax_5 == 0xffffffff)
                    goto label_141d16f04_2
            
            if (rax_5 == 0xffffffff)
            label_141d16f04_2:
                sub_141d1a650(arg1, arg3)
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    void*** rsi_1 = rax_6
    
    if (rax_6 == 0)
        rsi_1 = nullptr
    else
        rax_6[1] = 0
        rax_6[2] = 0
        *rsi_1 = &data_14321e6d8
    
    char var_48 = 5
    int64_t var_44
    sub_140b58170(&var_44, &data_1437020ab, 1)
    int16_t var_3c_1 = 0
    (**rsi_1)(rsi_1, zx.q(sub_141d1f690(arg1, arg3)))
    var_3c_1.b = arg4[1].b
    int64_t rax_10
    
    if (sub_141d1e020(arg1, arg3, *arg4) != 0)
        sub_140b58170(&arg_18, &data_1437020ab, 1)
        rax_10 = arg_18
    else
        rax_10 = *arg4
    
    var_44 = rax_10
    var_58 = arg2
    int64_t var_50_1 = arg3
    sub_141d17830(arg1 + 8, &var_58, &var_48)
    
    if (rsi_1 != 0 && var_3c_1:1.b == 0)
        (*rsi_1)[5](rsi_1, 1)

var_58 = arg2
int64_t var_50_2 = arg3
sub_141d1ca50(arg1 + 8, &arg_18, &var_58)
int64_t rax_12 = sx.q(arg_18.d)

if (rax_12.d == 0xffffffff)
    return *0x20

return *(rax_12 * 0x30 + *(arg1 + 8) + 0x20)
