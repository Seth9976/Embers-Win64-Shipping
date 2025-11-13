// 函数: sub_140e33270
// 地址: 0x140e33270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1[2]
int64_t r9 = arg1[1]
int64_t rcx_1 = r8 - r9

if (rcx_1 u< 0x4000 && r9 * 3 s>= r8 * 2)
    r9 = r8
else if (rcx_1 s> 0x40)
    if (r9 s> 0)
        int64_t rax = sub_140a846a0(r9, 0)
        r8 = arg1[2]
        r9 = rax
else if (r9 != 0)
    r9 = r8

if (r9 == r8)
    return 

arg1[2] = r9
int64_t rcx_3 = *arg1

if (rcx_3 != 0 || r9 != 0)
    *arg1 = sub_140a84c80(rcx_3, r9, 0)
