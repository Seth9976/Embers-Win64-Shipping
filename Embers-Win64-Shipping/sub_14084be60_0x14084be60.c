// 函数: sub_14084be60
// 地址: 0x14084be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi_4 = (((zx.q(*(arg2 + 0x660)) & 1) + 0x21) << 4) + arg2
sub_1408499d0(arg1, arg1, rdi_4, arg3, arg5)
sub_1408499d0(arg1, &arg1[0xe], rdi_4, arg4, arg5)
uint64_t rdi_7 = (zx.q(*(arg2 + 0x660)) & 1) << 5
sub_1408499d0(arg1, &arg1[4], arg2 + 0x230 + rdi_7, arg3, arg5)
sub_1408499d0(arg1, &arg1[0x12], arg2 + 0x230 + rdi_7, arg4, arg5)
int64_t rdi_8 = (zx.q(*(arg2 + 0x660)) & 1) * 0x1f0
sub_1408499d0(arg1, &arg1[8], arg2 + 0x270 + rdi_8, arg3, arg5)
sub_1408499d0(arg1, &arg1[0x16], arg2 + 0x270 + rdi_8, arg4, arg5)
int32_t result = *(arg2 + 0xa8)

if (result s> 0)
    int32_t rbp_1 = 0
    int64_t rsi_1 = 0
    uint64_t r14_1 = zx.q(result)
    uint64_t i
    
    do
        int64_t rdi_11 = (sx.q((*(arg2 + 0x660) & 1) + rbp_1) << 5) + *(arg2 + 0x650)
        sub_1408499d0(arg1, arg1[0xc] + rsi_1, rdi_11, arg3, arg5)
        result = sub_1408499d0(arg1, arg1[0x1a] + rsi_1, rdi_11, arg4, arg5)
        rbp_1 += 2
        rsi_1 += 0x20
        i = r14_1
        r14_1 -= 1
    while (i != 1)

return result
