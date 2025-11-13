// 函数: sub_141bfd640
// 地址: 0x141bfd640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int64_t* result = sub_141baa510(arg1)

if (arg3 == result)
    return result

int32_t r8 = *(arg3 + 0xc)
int64_t rsi_1 = *result
int64_t rdi_1 = sx.q(result[1].d)
arg3[1].d = rdi_1.d

if (rdi_1.d == 0 && r8 == 0)
    *(arg3 + 0xc) = rdi_1.d
    return result

sub_1405c4a00(arg3, rdi_1.d, r8)
return memcpy(*arg3, rsi_1, (rdi_1 << 3).d)
