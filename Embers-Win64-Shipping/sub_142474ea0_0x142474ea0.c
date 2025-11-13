// 函数: sub_142474ea0
// 地址: 0x142474ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0
char r8_1

if (cond:0)
    int64_t* r8_2 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_2[4]
    r8_1 = sub_140d30490(arg2, &arg_10, r8_2)
else
    r8_1 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int128_t zmm1 = arg_10
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
return sub_141ef78b0(arg1, zmm1, r8_1)
