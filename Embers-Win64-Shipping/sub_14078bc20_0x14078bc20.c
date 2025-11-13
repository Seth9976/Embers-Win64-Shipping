// 函数: sub_14078bc20
// 地址: 0x14078bc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_14074d7c0(arg1, arg2)

if (rax == 0)
    return rax

int16_t* const rcx = &data_142d40450
int16_t* rdx

if (*(arg1 + 0x38) == 0)
    rdx = &data_142d40450
else
    rdx = *(arg1 + 0x30)

if (*(arg2 + 0x38) != 0)
    rcx = *(arg2 + 0x30)

int32_t rax_1
rax_1.b = sub_140a54510(rcx, rdx) == 0
return rax_1
