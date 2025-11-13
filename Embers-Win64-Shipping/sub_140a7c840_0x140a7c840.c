// 函数: sub_140a7c840
// 地址: 0x140a7c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140ab3dc0(arg1 + 0xa0) != 0)
    char rax_2
    
    if (*(arg1 + 0x30) s> 1 && *(arg1 + 0x40) s> 1)
        void* rax_1
        int32_t r8_1
        rax_1, r8_1 = sub_140aae970()
        r8_1.b = 1
        sub_140abdae0(rax_1, arg1, r8_1)
        void var_28
        sub_140a97b20(&var_28, arg1 + 0x28)
        void var_18
        sub_140a97b20(&var_18, arg1 + 0x18)
        rax_2 = sub_140aac5d0(&var_18, &var_28, arg1 + 0xa0, arg1 + 0x38)
    
    if (*(arg1 + 0x30) s<= 1 || *(arg1 + 0x40) s<= 1 || rax_2 == 0)
        sub_1405d9400()
        sub_14065da90(arg1 + 0xa0, &data_143cd6fd8)

*arg2 = *(arg1 + 0xa0)
void* rax_4 = *(arg1 + 0xa8)
arg2[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg2[2].d = *(arg1 + 0xb0)
return arg2
