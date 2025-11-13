// 函数: sub_1429d6640
// 地址: 0x1429d6640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = *(arg1 + 8)
int32_t arg_8 = 0
int64_t rdi_1 = *(rdx + 0x80) - *(rdx + 0x78)
int64_t rbx = sx.q(*rdx)
int64_t rsi = sx.q(rdx[1])
int64_t r14 = sx.q(rdx[2])
int32_t var_20 = ((*(rdx + 0x20) - *(rdx + 0x18)) s>> 2).d
int32_t r8_2 = ((*(rdx + 0x38) - *(rdx + 0x30)) s>> 2).d
int32_t rbp_2 = ((*(rdx + 0x50) - *(rdx + 0x48)) s>> 2).d
*(arg1 + 0x58) = (*(rdx + 0x18)).o
int32_t var_20_1 = ((*(rdx + 0x20) - *(rdx + 0x18)) s>> 2).d
*(arg1 + 0x68) = (*(rdx + 0x18)).o
sub_1429d8580(arg1 + 0x78, sx.q(r8_2), &arg_8)
sub_1429d8580(arg1 + 0x90, sx.q(rbp_2), &arg_8)
sub_1429d8580(arg1 + 0xc0, sx.q((rdi_1 s>> 2).d), &arg_8)
sub_1429d8580(arg1 + 0xa8, rbx, &arg_8)
sub_1429d8580(arg1 + 0xd8, rsi, &arg_8)
return sub_1429d8580(arg1 + 0xf0, r14, &arg_8)
