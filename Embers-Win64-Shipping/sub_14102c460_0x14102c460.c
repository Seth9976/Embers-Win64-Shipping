// 函数: sub_14102c460
// 地址: 0x14102c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2

if (arg2 != 0 && data_1439c7a34 u> 1)
    while (*(rbx + 0x18) != *(arg1 + 0x138))
        rbx = *(rbx + 0x20)
        
        if (rbx == 0)
            break

int32_t rdx = *(rbx + 0x48)
int64_t* rcx = nullptr

if (rdx == 1)
    rcx = *(arg1 + 0x138) + 0x520
else if (rdx == 2)
    rcx = *(arg1 + 0x138) + 0x5e8

sub_14101efc0(rcx, arg1, rbx)
int32_t result = data_14399fa54
*(rbx + 0x40) = result
return result
