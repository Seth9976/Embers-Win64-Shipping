// 函数: sub_1417fa420
// 地址: 0x1417fa420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int128_t zmm1 = arg_10
int128_t zmm0 = arg_20
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
return sub_1417f4b70(zmm0, zmm1)
