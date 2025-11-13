// 函数: sub_1429d6a40
// 地址: 0x1429d6a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
void* rcx = *(arg1 + 0x10)
int32_t rbx_3 =
    ((*(rdx + 0x38) - *(rdx + 0x30)) s>> 2).d + ((*(rdx + 0xb0) - *(rdx + 0xa8)) s>> 2).d
sub_14058d4e0(rcx + 0x90, sx.q(*(rcx + 4) * 2))
int64_t rbx_5 = sx.q(rbx_3 * 2)
sub_14058d4e0(*(arg1 + 0x10) + 0xa8, rbx_5)
sub_1429cd2b0(*(arg1 + 0x10) + 0xc0, rbx_5)
*(*(arg1 + 0x10) + 0x10) = *(*(arg1 + 8) + 0x10)
sub_1429d6e30(arg1)
sub_1429d6b30(arg1)
void* r9 = *(arg1 + 0x10)
int64_t r8 = *(r9 + 0x90)
int32_t rcx_9 = *(r9 + 4) * 2
int64_t rbx_6 = sx.q(*(r8 + (sx.q(rcx_9 - 2) << 2)) + *(r8 + (sx.q(rcx_9 - 1) << 2)))
sub_14058d4e0(r9 + 0xa8, rbx_6)
return sub_1429cd2b0(*(arg1 + 0x10) + 0xc0, rbx_6) __tailcall
