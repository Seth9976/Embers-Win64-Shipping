// 函数: sub_1420c0bf0
// 地址: 0x1420c0bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rax = *(arg2 + 0x78)
int32_t r8_1 = arg1[1].d
int32_t rsi_1 = *(rax + 0x3c)
int32_t rdi_1 = *(arg2 + 0x80)
int32_t var_18_1 = rsi_1
int64_t var_28 = rax
int32_t var_14_1 = rdi_1
int64_t* var_20_1 = arg1

if (r8_1 == 0)
    return 

sub_140cd9680(&var_28, 0, r8_1)
rdi_1.b = not.b(rdi_1.b)
arg1[1].d = 0
rdi_1.b &= 1

if (*(arg1 + 0xc) == 0)
    return 

if (rdi_1.b == 0)
    return sub_140ce4f50(arg1, 0, rsi_1) __tailcall

sub_140ce4fc0(arg1, 0, rsi_1)
