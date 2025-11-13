// 函数: sub_1419e9b00
// 地址: 0x1419e9b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int128_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_48, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_4 = *(arg2 + 0x20)
void* rdx_6 = arg_10
int64_t* rcx_3 = arg_18
int64_t rdi
rdi.b = rax_4 != 0
int128_t var_28 = var_48
*(arg2 + 0x20) = rdi + rax_4
int32_t var_30
int32_t var_10 = var_30
int64_t var_38
int64_t var_18 = var_38
int32_t result = TM::fMapRti(rcx_3, rdx_6, &var_28)
*arg3 = result
return result
