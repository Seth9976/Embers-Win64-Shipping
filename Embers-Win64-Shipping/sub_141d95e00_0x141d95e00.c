// 函数: sub_141d95e00
// 地址: 0x141d95e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*arg1 + 0x170) = 0
int64_t* rcx_1 = *arg1 + 0x248
(*(*rcx_1 + 0xa0))(rcx_1, 0)
int64_t* rcx_3 = *arg1 + 0x248
(*(*rcx_3 + 0xa8))(rcx_3, 0)
int64_t* rcx_5 = *arg1 + 0x2d8
rcx_5[1].d = 0

if (*(rcx_5 + 0xc) != 0)
    sub_1405c5510(rcx_5, 0)

*(*arg1 + 0x2e8) = 0
*(*arg1 + 0x150) = 0
*(*arg1 + 0x158) = 0
uint64_t* rcx_7 = *arg1 + 0x3a0
rcx_7[1].d = 0

if (*(rcx_7 + 0xc) != 0)
    sub_1405947f0(rcx_7, 0)

void* result = *arg1
*(result + 0x398) = 0
return result
