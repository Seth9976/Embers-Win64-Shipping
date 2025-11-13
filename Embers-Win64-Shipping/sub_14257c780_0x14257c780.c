// 函数: sub_14257c780
// 地址: 0x14257c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_18
int32_t arg_8 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_4 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_4[4]
    sub_140d30490(arg2, &arg_8, r8_4)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
bool cond:2 = arg_8 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t r8_3
r8_3.b = cond:2
int64_t rax_5 = *arg1
float zmm1 = *(rsi + 8) * 0.0174532924f
float var_28 = *rsi * 0.0174532924f
float var_20 = zmm1
float var_24 = *(rsi + 4) * 0.0174532924f
return (*(rax_5 + 0x748))(arg1, &var_28, r8_3)
