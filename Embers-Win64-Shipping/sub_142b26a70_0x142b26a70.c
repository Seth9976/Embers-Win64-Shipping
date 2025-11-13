// 函数: sub_142b26a70
// 地址: 0x142b26a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int16_t* rbp = *(*arg1 + 0x18) + (zx.q(arg4) u>> 0xd << 1)

if (not(test_bit(arg4, 8)))
    sub_142b26520(arg1, arg2, arg3, zx.d(*rbp) << 0x10 | zx.d(rbp[1]))

void var_b8
sub_142b74060(&var_b8, &rbp[2], 0, &arg1[0x5f])

if (sub_142b743d0(&var_b8, &arg1[0x5f]) != 0)
    char i
    
    do
        void var_90
        arg1[0x3f] = &var_90
        sub_142b25ae0(arg1, arg2, arg3, arg1[1])
        
        if ((arg1[0x38].w & 0xffe0) != 0)
            sub_142b25ae0(arg1, arg2, arg3, arg1[2])
        
        int32_t var_4c
        sub_142b26520(arg1, arg2, arg3, var_4c)
        i = sub_142b743d0(&var_b8, &arg1[0x5f])
    while (i != 0)

arg1[0x3f] = 0
sub_142b74110(&var_b8)
__security_check_cookie(rax_1 ^ &var_e8)
return &icu_64::UObject::`vftable'
