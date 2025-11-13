// 函数: sub_142b3d0f0
// 地址: 0x142b3d0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3
int32_t var_18 = 0

if (*arg5 s> 0)
    sub_142a9db60(arg1)
else
    char rax_2
    
    if (data_144016b58 != 2)
        rax_2, arg3 = sub_142a85f00(&data_144016b58)
    
    if (data_144016b58 == 2 || rax_2 == 0)
        int32_t rax_4 = data_144016b5c
        
        if (rax_4 s> 0)
            *arg5 = rax_4
    else
        sub_142b3d270(arg5)
        data_144016b5c = *arg5
        sub_142a85e80(&data_144016b58)
    
    if (*arg5 s> 0)
        sub_142a9db60(arg1)
    else
        arg3.b = arg4 == 1
        int32_t rdx
        rdx.b = rbp != 0
        void* rax_5 = sub_142aac4f0(arg2, rdx, arg3.b, arg5)
        int16_t rax_6 = *(rax_5 + 8)
        int32_t r8_1
        
        if (rax_6 s< 0)
            r8_1 = *(rax_5 + 0xc)
        else
            r8_1 = sx.d(rax_6) s>> 5
        
        if (sub_142a48fb0(rax_5, 0, r8_1, u"[:digit:]", 0, 0xffffffff) != 0)
            int16_t rax_8 = *(rax_5 + 8)
            int32_t r8_3
            
            if (rax_8 s< 0)
                r8_3 = *(rax_5 + 0xc)
            else
                r8_3 = sx.d(rax_8) s>> 5
            
            if (sub_142a48fb0(rax_5, 0, r8_3, u"[:^S:]", 0, 0xffffffff) != 0)
                sub_142b661f0(arg1, rax_5, arg5)
            else
                sub_142a9d8c0(arg1, data_144016b50)
        else
            sub_142a9d8c0(arg1, data_144016b48)

return arg1
