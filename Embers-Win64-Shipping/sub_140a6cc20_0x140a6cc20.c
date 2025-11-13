// 函数: sub_140a6cc20
// 地址: 0x140a6cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int32_t arg_10 = 0
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

void* rdx

if ((rax.b & 0x11) != 0)
    rdx = nullptr
else if ((rax.b & 2) == 0)
    rdx = *(arg2 + 0x18)
else
    rdx = arg2 + 0xa

sub_142a82c20(arg1, rdx, r8_1, 0, nullptr, &arg_10)
int32_t rax_1

if (arg_10 s<= 0)
    rax_1 = sub_142a82ac0(arg1)
    
    if (rax_1 != 0)
        if (rax_1 == 1)
            int32_t rax_2
            rax_2.b = 1
            return rax_2
        
        if (rax_1 == 2)
            rax_1.b = 2
            return rax_1

rax_1.b = 0
return rax_1
