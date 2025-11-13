// 函数: sub_141a52730
// 地址: 0x141a52730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (sub_141a57db0(arg3) != 0)
    return arg2

char i

do
    int128_t var_68 = *arg3
    int32_t arg_10
    sub_141a4ade0(arg1, &arg_10, &var_68)
    int32_t rbx_1 = arg_10
    int64_t rax_2
    
    if (rbx_1 != 0xffffffff)
    label_141a52809:
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_5 = (rsi_1 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_1405a4cf0(arg2)
        
        *(*arg2 + (rsi_1 << 2)) = rbx_1
        rax_2 = *(sx.q(*(*(arg1 + 0x18) + (sx.q(rbx_1) << 2))) * 0x58 + *(arg1 + 0x28) + 8)
        
        if (rax_2.b == 2)
            break
        
        if (rax_2.b == 0)
            uint32_t var_6c_1 = (rax_2 u>> 0x20).d
            rax_2 = 1.q
        else
            char var_70
            
            if (rax_2.b != 1)
                var_70.q = rax_2
            else
                uint32_t var_6c_2 = (rax_2 u>> 0x20).d
                rax_2 = 0.q
    else
        sub_141a2ff30(&var_68, arg1 + 0x40, *arg3)
        int128_t var_48 = var_68
        int128_t var_58
        int128_t var_38_1 = var_58
        void arg_20
        int32_t* rax_1
        rax_1, arg4 = sub_141a3f350(arg1, &arg_20, &var_48, arg4)
        rbx_1 = *rax_1
        arg_10 = rbx_1
        
        if (rbx_1 != 0xffffffff)
            goto label_141a52809
        
        rax_2 = var_68:8.q
        
        if (rax_2.b == 2)
            break
        
        if (rax_2.b == 0)
            uint32_t var_74_1 = (rax_2 u>> 0x20).d
            rax_2 = 1.q
        else
            char var_78
            
            if (rax_2.b != 1)
                var_78.q = rax_2
            else
                uint32_t var_74_2 = (rax_2 u>> 0x20).d
                rax_2 = 0.q
    
    *arg3 = rax_2
    i = sub_141a57db0(arg3)
while (i == 0)
return arg2
