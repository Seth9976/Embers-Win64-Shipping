// 函数: sub_1417926c0
// 地址: 0x1417926c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x10)
int32_t rbx = arg3[1]
int32_t rdi = arg3[2]
int32_t r11 = *(arg2 + 8)
int32_t rsi = *arg3
int32_t r8 = *(arg2 + 4)
int128_t zmm14 = *arg4
int64_t r15 = sx.q(((rsi + 1) * r8 + rbx) * r11 + rdi)
int64_t rcx = r15 * 3
int64_t r14 = sx.q((r8 * rsi + rbx) * r11 + rdi)
int64_t rax_10 = r14 * 3
int128_t zmm13
zmm13.d = (*(rbp + (rcx << 2))).d f- *(rbp + (rax_10 << 2))
int128_t zmm12
zmm12.d = (*(rbp + (rcx << 2) + 4)).d f- *(rbp + (rax_10 << 2) + 4)
zmm13.d = zmm13.d f* zmm14.d
zmm12.d = zmm12.d f* zmm14.d
zmm13.d = zmm13.d f+ *(rbp + (rax_10 << 2))
zmm12.d = zmm12.d f+ *(rbp + (rax_10 << 2) + 4)
float arg_10 =
    (*(rbp + (rcx << 2) + 8) f- *(rbp + (rax_10 << 2) + 8)) f* zmm14.d f+ *(rbp + (rax_10 << 2) + 8)
int64_t r9 = sx.q((rbx + 1 + (rsi + 1) * r8) * r11 + rdi)
int64_t rcx_1 = r9 * 3
int64_t rcx_2 = r15 * 3
int64_t rdx = sx.q((rbx + 1 + rsi * r8) * r11 + rdi)
int64_t rax_19 = rdx * 3
int128_t zmm15
zmm15.d = (*(rbp + (rcx_1 << 2) + 4)).d f- *(rbp + (rax_19 << 2) + 4)
int128_t zmm10
zmm10.d = (*(rbp + (rcx_1 << 2) + 8)).d f- *(rbp + (rax_19 << 2) + 8)
zmm15.d = zmm15.d f* zmm14.d
zmm10.d = zmm10.d f* zmm14.d
zmm15.d = zmm15.d f+ *(rbp + (rax_19 << 2) + 4)
zmm10.d = zmm10.d f+ *(rbp + (rax_19 << 2) + 8)
int64_t rax_20 = r14 * 3
int128_t zmm11
zmm11.d = (*(rbp + (rcx_2 << 2) + 0x14)).d f- *(rbp + (rax_20 << 2) + 0x14)
zmm15.d = zmm15.d f- zmm12.d
zmm11.d = zmm11.d f* zmm14.d
int64_t rcx_3 = r9 * 3
zmm10.d = zmm10.d f- arg_10
zmm11.d = zmm11.d f+ *(rbp + (rax_20 << 2) + 0x14)
int128_t zmm8
zmm8.d = zmm14.d f* (*(rbp + (rcx_2 << 2) + 0x10) f- *(rbp + (rax_20 << 2) + 0x10))
int128_t zmm7
zmm7.d = zmm14.d f* (*(rbp + (rcx_2 << 2) + 0xc) f- *(rbp + (rax_20 << 2) + 0xc))
zmm8.d = zmm8.d f+ *(rbp + (rax_20 << 2) + 0x10)
zmm7.d = zmm7.d f+ *(rbp + (rax_20 << 2) + 0xc)
int64_t rax_21 = rdx * 3
int128_t zmm9
zmm9.d = (*(rbp + (rcx_3 << 2) + 0x14)).d f- *(rbp + (rax_21 << 2) + 0x14)
zmm9.d = zmm9.d f* zmm14.d
zmm9.d = zmm9.d f+ *(rbp + (rax_21 << 2) + 0x14)
float zmm0 = *(arg4 + 4)
int128_t zmm6
zmm6.d = zmm14.d f* (*(rbp + (rcx_3 << 2) + 0xc) f- *(rbp + (rax_21 << 2) + 0xc))
float zmm1 = *(arg4 + 8)
zmm9.d = zmm9.d f- zmm11.d
zmm15.d = zmm15.d f* zmm0
zmm6.d = zmm6.d f+ *(rbp + (rax_21 << 2) + 0xc)
zmm9.d = zmm9.d f* zmm0
zmm15.d = zmm15.d f+ zmm12.d
zmm6.d = zmm6.d f- zmm7.d
float zmm5 = (zmm14.d * (*(rbp + (rcx_3 << 2) + 0x10) f- *(rbp + (rax_21 << 2) + 0x10)) f+
    *(rbp + (rax_21 << 2) + 0x10) f- zmm8.d) * zmm0
float zmm2 = ((*(rbp + (rcx_1 << 2)) f- *(rbp + (rax_19 << 2))) f* zmm14.d f+
    *(rbp + (rax_19 << 2)) f- zmm13.d) * zmm0 f+ zmm13.d
zmm9.d = zmm9.d f+ zmm11.d
zmm6.d = zmm6.d f* zmm0
zmm10.d = zmm10.d f* zmm0
zmm6.d = zmm6.d f+ zmm7.d
float zmm3 = arg_10 f+ zmm10.d
zmm6.d = zmm6.d f- zmm2
zmm9.d = zmm9.d f- zmm3
zmm6.d = zmm6.d f* zmm1
zmm15.d = zmm15.d f+ zmm1 * (zmm5 f+ zmm8.d f- zmm15.d)
zmm9.d = zmm9.d f* zmm1
arg1[1] = zmm15.d
*arg1 = zmm2 f+ zmm6.d
arg1[2] = zmm3 f+ zmm9.d
return arg1
