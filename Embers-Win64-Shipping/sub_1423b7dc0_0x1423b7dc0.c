// 函数: sub_1423b7dc0
// 地址: 0x1423b7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x8c)
int32_t rbx = arg1[0x11].d
int32_t r10 = r11

if (rbx s>= r11)
    r10 = rbx

int32_t rdx = 0
*(arg1 + 0x94) = r10
arg1[0x12].d = 0

if (*arg1 == 0)
    return 0

int32_t rdi = *(arg1 + (sx.q(r10) << 2) + 0x18)
int64_t rax

if (rdi s>= 0x800000)
    rax = zx.q(*(arg1 + 0xc))

if (rdi s< 0x800000 || rax.d == 0x11 || rax.d == 0x16)
    rax.b = 0
else
    rax.b = 1

int32_t r9 = *(arg1 + 0xb4)
char r8

if ((r9.b & 0x82) != 0 || (test_bit(r9, 9) && rax.b == 0))
    r8 = 1
else
    r8 = 0

if (arg2 != 0 && arg1[0x16].b != 0)
    rdx = 0x1000
    arg1[0x12].d = 0x1000

if (r8 != 0)
    rdx += 0x800
    arg1[0x12].d = rdx

if (rbx s>= r11)
    rdx += 0x400
    arg1[0x12].d = rdx

if (rax.b == 0)
    rdx += 0x200
    arg1[0x12].d = rdx

if ((r9.b & 1) != 0 || rdi s<= 0x32000)
    rdx += 0x100
    arg1[0x12].d = rdx

if (rbx s< r11)
    int32_t r8_1 = 0xff
    int32_t r9_1 = 0xff - int.d(fconvert.t(arg1[0xe].d))
    
    if (r9_1 s< 1)
        r8_1 = 1
    else if (r9_1 s< 0xff)
        r8_1 = r9_1
    
    arg1[0x12].d = r8_1 + rdx

return sx.q(*(arg1 + (sx.q(r10) << 2) + 0x18))
