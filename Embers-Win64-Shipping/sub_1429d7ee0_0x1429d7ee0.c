// 函数: sub_1429d7ee0
// 地址: 0x1429d7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 8)
void* rcx = *(arg1 + 0x10)
int32_t rbx_1 = ((*(r8 + 0x38) - *(r8 + 0x30)) s>> 2).d
    + ((*(r8 + 0xb0) - *(r8 + 0xa8)) s>> 2 << 1).d + ((*(r8 + 0x128) - *(r8 + 0x120)) s>> 2).d
sub_14058d4e0(rcx + 0x108, sx.q(*(rcx + 8) * 2))
int64_t rbx_2 = sx.q(rbx_1)
sub_14058d4e0(*(arg1 + 0x10) + 0x120, rbx_2)
sub_1429cd2b0(*(arg1 + 0x10) + 0x138, rbx_2)

if (*(arg1 + 0x54) != 0)
    sub_1429d8230(arg1)
    sub_1429d8000(arg1)
    sub_1429d83a0(arg1)
else
    sub_1429d83a0(arg1)
    sub_1429d8230(arg1)
    sub_1429d8000(arg1)

void* r9 = *(arg1 + 0x10)
int64_t r8_1 = *(r9 + 0x108)
int32_t rcx_11 = *(r9 + 8) * 2
int64_t rbx_3 = sx.q(*(r8_1 + (sx.q(rcx_11 - 2) << 2)) + *(r8_1 + (sx.q(rcx_11 - 1) << 2)))
sub_14058d4e0(r9 + 0x120, rbx_3)
return sub_1429cd2b0(*(arg1 + 0x10) + 0x138, rbx_3) __tailcall
