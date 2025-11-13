// 函数: sub_142253f80
// 地址: 0x142253f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[4]
int64_t rdi = sx.q(arg2)
int64_t rsi = sx.q(arg3)
int128_t* rcx = r9 + rsi * 0x18
int128_t* rdx = r9 + rdi * 0x18
uint128_t zmm2
int128_t zmm3

if (rdx != rcx)
    zmm3 = *rdx
    zmm2 = zx.o(rdx[1].q)
    *rdx = *rcx
    rdx[1].q = rcx[1].q
    *rcx = zmm3
    rcx[1].q = zmm2.q

int64_t rax_2 = *arg1
int64_t r9_1 = rsi << 3
int64_t r14 = rdi << 3
int128_t zmm6
int128_t var_28 = zmm6
int64_t rdx_1 = *(r14 + rax_2)
int128_t zmm7
int128_t var_38 = zmm7
*(r14 + rax_2) = *(r9_1 + rax_2)
*(r9_1 + rax_2) = rdx_1
uint128_t* rdx_4 = rdi * 0x60 + arg1[0xa]
int128_t* rcx_4 = rsi * 0x60 + arg1[0xa]
int128_t zmm4
int128_t zmm5

if (rdx_4 != rcx_4)
    zmm2 = *rdx_4
    zmm3 = rdx_4[1]
    zmm4 = rdx_4[2]
    zmm5 = rdx_4[3]
    zmm6 = rdx_4[4]
    zmm7 = rdx_4[5]
    *rdx_4 = *rcx_4
    rdx_4[1] = rcx_4[1]
    rdx_4[2] = rcx_4[2]
    rdx_4[3] = rcx_4[3]
    rdx_4[4] = rcx_4[4]
    rdx_4[5] = rcx_4[5]
    *rcx_4 = zmm2
    rcx_4[1] = zmm3
    rcx_4[2] = zmm4
    rcx_4[3] = zmm5
    rcx_4[4] = zmm6
    rcx_4[5] = zmm7

uint128_t* rcx_6 = rsi * 0x70 + arg1[0xc]
uint128_t* rdx_6 = rdi * 0x70 + arg1[0xc]

if (rdx_6 != rcx_6)
    zmm2 = *rdx_6
    zmm3 = rdx_6[1]
    zmm4 = rdx_6[2]
    zmm5 = rdx_6[3]
    zmm6 = rdx_6[4]
    zmm7 = rdx_6[5]
    int128_t zmm8 = rdx_6[6]
    *rdx_6 = *rcx_6
    rdx_6[1] = rcx_6[1]
    rdx_6[2] = rcx_6[2]
    rdx_6[3] = rcx_6[3]
    rdx_6[4] = rcx_6[4]
    rdx_6[5] = rcx_6[5]
    rdx_6[6] = rcx_6[6]
    *rcx_6 = zmm2
    rcx_6[1] = zmm3
    rcx_6[2] = zmm4
    rcx_6[3] = zmm5
    rcx_6[4] = zmm6
    rcx_6[5] = zmm7
    rcx_6[6] = zmm8

int64_t rcx_7 = arg1[0x10]
int64_t* rdx_7 = rcx_7 + rsi * 0xc
uint64_t* r8_1 = rcx_7 + rdi * 0xc

if (r8_1 != rdx_7)
    uint128_t zmm1 = zx.o(*r8_1)
    int32_t rcx_8 = r8_1[1].d
    *r8_1 = *rdx_7
    r8_1[1].d = rdx_7[1].d
    *rdx_7 = zmm1.q
    rdx_7[1].d = rcx_8

uint128_t* r10_2 = (rsi << 5) + arg1[0xe]
int128_t* r11_2 = (rdi << 5) + arg1[0xe]

if (r11_2 != r10_2)
    zmm2 = *r11_2
    zmm3 = r11_2[1]
    *r11_2 = *r10_2
    r11_2[1] = r10_2[1]
    *r10_2 = zmm2
    r10_2[1] = zmm3

*((*arg1)[rdi] + 0x38) = rdi.d
void** result = *arg1
*(result[rsi] + 0x38) = rsi.d
arg1[0x29].b = 1
arg1[0x45].b = 1
return result
