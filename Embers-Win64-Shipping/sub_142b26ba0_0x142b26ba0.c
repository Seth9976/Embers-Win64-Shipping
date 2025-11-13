// 函数: sub_142b26ba0
// 地址: 0x142b26ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int16_t* rbx = *(*arg1 + 0x18) + (zx.q(arg4) u>> 0xd << 1)
void* result = sub_142b26520(arg1, arg2, arg3, zx.d(*rbx) << 0x10 | zx.d(rbx[1]))

if (arg1[4].b != 0)
    void var_b8
    sub_142b74060(&var_b8, &rbx[2], 0, &arg1[0x5f])
    
    if (sub_142b743d0(&var_b8, &arg1[0x5f]) != 0)
        char i
        
        do
            void var_90
            sub_142a48100(&arg1[0x37], &var_90)
            int16_t rax_5 = arg1[0x38].w
            int32_t r8_3
            
            if (rax_5 s< 0)
                r8_3 = *(arg1 + 0x1c4)
            else
                r8_3 = sx.d(rax_5) s>> 5
            
            sub_142a49810(&arg1[0x37], 0, r8_3)
            sub_142b25ae0(arg1, arg2, arg3, arg1[1])
            sub_142b25ae0(arg1, arg2, arg3, arg1[2])
            int32_t var_4c
            sub_142b26520(arg1, arg2, arg3, var_4c)
            i = sub_142b743d0(&var_b8, &arg1[0x5f])
        while (i != 0)
    
    if ((arg1[0x38].b & 1) == 0)
        arg1[0x38].w &= 0x1f
    else
        arg1[0x38].w = 2
    
    result = sub_142b74110(&var_b8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
