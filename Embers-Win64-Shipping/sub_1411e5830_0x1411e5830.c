// 函数: sub_1411e5830
// 地址: 0x1411e5830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg2
void* rdi = *arg3
int32_t rbx = *(rdi + 0x28)
uint32_t r10_4 = arg1 u/ 0x25
int32_t r9_1 = ((*(rsi + (sx.q(arg1 + rbx - r10_4 * 0x25) << 2)) * 0x25
    + *(rsi + (sx.q(rbx + r10_4 u% 0x25) << 2))) * 0x25
    + *(rsi + (sx.q(rbx + arg1 u/ 0x559 u% 0x25) << 2))) * 0x25
    + *(rsi + (sx.q(rbx + arg1 u/ 0xc5dd u% 0x25) << 2))
int32_t r9_3 = (r9_1 * 0x25 + *(rsi + (sx.q(arg1 u/ 0x1c98f1 u% 0x25 + rbx) << 2))) * 0x25
    + *(rsi + (sx.q(rbx + arg1 u/ 0x4221ad5 u% 0x25) << 2))
int128_t zmm6
zmm6.d = float.s(zx.q(r9_3))
zmm6.d = zmm6.d f* 3.89753119e-10f

if (rsi != 0)
    sub_140a74f90(rsi)
    rdi = *arg3

if (rdi != 0)
    sub_140a74f90(rdi)

int512_t result
result.o = zmm6
return result
