// 函数: sub_142b800d0
// 地址: 0x142b800d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int64_t var_58 = -2

if (*arg3 s<= 0)
    result = sub_142a9fb80(arg2)
    
    if (result == 0)
        void var_48
        sub_142b18760(&var_48, arg2)
        int32_t i
        
        if (sub_142b18960(&var_48) != 0)
            while (i != 0xffffffff)
                int32_t rax_1 = sub_142a959a0(*(arg1 + 0x20), i)
                
                if (rax_1 == 0xc0)
                    int32_t rax_2 = sub_142aa3ce0(*(arg1 + 0x10), i)
                    int32_t rax_3 = sub_142aa60d0(*(arg1 + 0x10), rax_2)
                    
                    if (rax_3.b u>= 0xc0 && (rax_3 & 0xf) - 8 u<= 1)
                        int32_t rax_4 = sub_142b7eac0(arg1, i, rax_3, 0, arg3)
                        sub_142b8d880(*(arg1 + 0x20), i, rax_4, arg3)
                else if (rax_1.b u>= 0xc0 && (rax_1.b & 0xf) == 7)
                    int32_t r8_2 = *(sub_142ae72d0(arg1 + 0x68, rax_1 u>> 0xd) + 0x40)
                    sub_142b8d880(*(arg1 + 0x20), i, r8_2, arg3)
                    sub_142aa0030(arg1 + 0x90, i)
                
                if (sub_142b18960(&var_48) == 0)
                    break
        *(arg1 + 0x260) = 1
        return sub_142b187a0(&var_48)

return result
