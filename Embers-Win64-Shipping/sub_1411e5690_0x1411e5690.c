// 函数: sub_1411e5690
// 地址: 0x1411e5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg2
void* rdi = *arg3
int32_t rbx = *(rdi + 0x24)
uint32_t r10_4 = arg1 u/ 0x1f
int32_t r9_1 = ((*(rsi + (sx.q(arg1 + rbx - r10_4 * 0x1f) << 2)) * 0x1f
    + *(rsi + (sx.q(rbx + r10_4 u% 0x1f) << 2))) * 0x1f
    + *(rsi + (sx.q(rbx + arg1 u/ 0x3c1 u% 0x1f) << 2))) * 0x1f
    + *(rsi + (sx.q(rbx + arg1 u/ 0x745f u% 0x1f) << 2))
int32_t r10_7 = (r9_1 * 0x1f + *(rsi + (sx.q(arg1 u/ 0xe1781 u% 0x1f + rbx) << 2))) * 0x1f
    + *(rsi + (sx.q(rbx + arg1 u/ 0x1b4d89f u% 0x1f) << 2))
int128_t zmm6
zmm6.d = float.s(zx.q(r10_7))
zmm6.d = zmm6.d f* 1.1267558e-09f

if (rsi != 0)
    sub_140a74f90(rsi)
    rdi = *arg3

if (rdi != 0)
    sub_140a74f90(rdi)

int512_t result
result.o = zmm6
return result
