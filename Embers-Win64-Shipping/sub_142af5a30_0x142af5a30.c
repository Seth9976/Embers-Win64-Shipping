// 函数: sub_142af5a30
// 地址: 0x142af5a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 

if (arg1 == 0)
    *arg2 = 3
    return sub_142a95ec0(arg1) __tailcall

int16_t* r8_1 = arg1[1]

if (r8_1 == 0 || r8_1[1].b != 0xda || *(r8_1 + 3) != 0x27 || r8_1[4].b != 0 || *(r8_1 + 9) != 0)
    *arg2 = 3
    return sub_142a95ec0(arg1) __tailcall

char rax_1 = r8_1[6].b
void** const rax_2

if (rax_1 != 0x43 || *(r8_1 + 0xd) != 0x6d || r8_1[7].b != 0x6e || *(r8_1 + 0xf) != 0x44
        || r8_1[8].b != 1)
    if (rax_1 != 0x54 || *(r8_1 + 0xd) != 0x6f || r8_1[7].b != 0x43 || *(r8_1 + 0xf) != 0x50
            || r8_1[8].b != 1)
        *arg2 = 3
        return sub_142a95ec0(arg1) __tailcall
    
    rax_2 = &data_14365d600
else
    rax_2 = &data_14365d5f0

*arg1 = rax_2
int16_t rax_3 = *r8_1

if (r8_1[4].b != 0)
    rax_3 = rol.w(rax_3, 8)

arg1[2] = zx.q(rax_3) + r8_1

if (*arg2 s> 0)
    return sub_142a95ec0(arg1) __tailcall
