// 函数: sub_1419efb50
// 地址: 0x1419efb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* arg_10 = arg2

if ((*(arg2 + 0x88) & 1) == 0)
    return 

int32_t r8_1 = *(arg2 + 0x40c)
int32_t rax_1 = *(arg2 + 0x408)
int32_t arg_20 = rax_1
int32_t r8_2 = *(arg2 + 0x410)
arg_20.q = arg_20.q
arg_20 = divs.dp.d(sx.q(rax_1), r8_2)
int32_t arg_24 = divs.dp.d(sx.q(r8_1), r8_2)
int64_t r8_3 = arg_20.q
int64_t var_18 = r8_3
sub_1419eda60(arg1 + 0x70, &arg_20, r8_3)
int64_t rax_7 = sx.q(arg_20)
void* rax_9

if (rax_7.d != 0xffffffff)
    rax_9 = *(arg1 + 0x70) + rax_7 * 0x18

int64_t rax

if (rax_7.d == 0xffffffff || rax_9 == 0)
    rax = 0
else
    rax = *(rax_9 + 8)

if (rax != arg2 && rax == 0)
    sub_1419ea0b0(arg1 + 0x70, &var_18, &arg_10)
