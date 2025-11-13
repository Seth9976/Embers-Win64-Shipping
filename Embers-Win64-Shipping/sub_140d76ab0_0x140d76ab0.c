// 函数: sub_140d76ab0
// 地址: 0x140d76ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1[1]
int32_t* r8 = rdx + 8
void* rdx_1 = *arg1

if (rdx == 0)
    r8 = 0x30

if (*(rdx_1 + 0x30) == *r8 && *(rdx_1 + 0x34) == r8[1])
    int64_t* rax_2 = arg1[2]
    **rax_2 = 1
    return rax_2

int64_t* rax_3 = arg1[2]
**rax_3 = 0
return rax_3
