// 函数: sub_141a101b0
// 地址: 0x141a101b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
int32_t rcx

if (rax != 0)
    rcx = 4

if (rax == 0 || (*(*arg3 + 0x2c) & 0x100) == 0)
    rcx = 0

int32_t rax_4 = (arg2[1].d & 0xfffffffb) | rcx
arg2[1].d = rax_4
int32_t rcx_3 = (zx.d(*(arg1 + 0x37)) & 0xffffff80) | (rax_4 & 0xffffff7f)
arg2[1].d = rcx_3
int32_t rax_10 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rcx_3) & 0x20) ^ rcx_3
int32_t rcx_4 = 0
arg2[1].d = rax_10

if (*(arg1 + 0x3f) != 1)
    rcx_4 = 0x1000

int32_t rcx_5 = rcx_4 | (rax_10 & 0xffffefff)
arg2[1].d = rcx_5
arg2[1].d = ((zx.d(*(arg1 + 0x39)) & 0x20) | 0x40) << 8 | (rcx_5 & 0xffffdfff)
int64_t* i = *(arg1 + 0x618)

for (void* r14 = &i[sx.q(*(arg1 + 0x620))]; i != r14; i = &i[1])
    sub_142131b60(i, arg2)

if (sub_1422a6980(*arg3) != 0 || data_143f28349 != 0 || *(arg1 + 0x35) s< 0
        || (*(arg1 + 0x36) & 1) != 0 || (*(arg1 + 0x38) & 0x10) != 0)
    arg2[1].d |= 2
else
    arg2[1].d |= 1

if (data_1439cbf68 s> 0 && sub_1422a69b0(arg1, arg3) != 0)
    rbp = 8

arg2[1].d &= 0xfffffff7
arg2[1].d |= rbp
return arg2
