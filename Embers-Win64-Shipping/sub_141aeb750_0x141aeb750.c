// 函数: sub_141aeb750
// 地址: 0x141aeb750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = arg2[1]
int64_t rbx = *arg2

if (r11 != 0)
    *(r11 + 0xc) += 1

int32_t rcx = arg2[3].d
int64_t rax = arg2[2]
arg1[8].b |= 3
arg1[2].b = 0
*arg1 = &data_14305da78
arg1[3] = rbx
arg1[4] = r11
arg1[6].d = rcx
void*** rcx_1 = arg1
arg1[5] = rax
arg1[7] = arg3

if ((arg1[8].b & 2) == 0)
    rcx_1 = &data_14305da78

if (arg4 == &rcx_1[1])
    goto label_141aeb7c8

if (rcx_1[2].b != 0)
    rcx_1[2].b = 0

if (arg4[1].b != 0)
    rcx_1[1] = *arg4
    rcx_1[2].b = 1
label_141aeb7c8:
    
    if (arg4[1].b != 0)
        arg4[1].b = 0

return arg1
