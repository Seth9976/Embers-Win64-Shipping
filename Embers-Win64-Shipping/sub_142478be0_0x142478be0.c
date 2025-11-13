// 函数: sub_142478be0
// 地址: 0x142478be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c = 0x40000000
char var_28 = 1
int128_t var_20 = zx.o(0)
*(arg2 + 0x38) = 0
int32_t var_10 = 0x3f000000

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

char* rax_2 = *(arg2 + 0x38)
char* rdx_2 = &var_28

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
return sub_141eaddf0(arg1, rdx_2)
