// 函数: sub_142ae12a0
// 地址: 0x142ae12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg3 + 8)
int16_t arg_10 = 0x27
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg3 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

sub_142a49390(arg3, 0, r8_1, &arg_10, 0, 1)
void* rdx_1 = arg1 + 0x508 + sx.q(arg2) * 0xc0
int16_t rax_1 = *(rdx_1 + 8)
int32_t r9_2

if (rax_1 s< 0)
    r9_2 = *(rdx_1 + 0xc)
else
    r9_2 = sx.d(rax_1) s>> 5

sub_142a48d00(arg3, rdx_1, 0, r9_2)
arg_10 = 0x27
return sub_142a48d70(arg3, &arg_10, 0, 1)
