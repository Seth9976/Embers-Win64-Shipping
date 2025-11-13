// 函数: sub_141ec98d0
// 地址: 0x141ec98d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_38 = arg3
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
*(arg1 + 0x150) = *arg2
int128_t var_d8
__builtin_memcpy(&var_d8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\xb8\x1e\x85\xeb\x51\xb8\x8e\x3f\x7b\x14\xae\x47\xe1\x7a\x94\x3f\x"
"b8\x1e\x85\xeb\x51\xb8\x9e\x3f\xec\x51\xb8\x1e\x85\xeb\xa1\x3f\xb8\x1e\x85\xeb\x51\xb8\xae\x3f\x9a"
"99\x99\x99\x99\x99\xb9\x3f\x00\x00\x00\x00\x00\x00\xf0\x3f", 
    0x40)
int128_t* var_f8 = &var_d8
int32_t var_f0 = 8
int128_t zmm0 = var_f8.o
__builtin_memset(arg1 + 0xa8, 0, 0x5c)
__builtin_memset(arg1 + 0x108, 0, 0x20)
*(arg1 + 0x128) = 0x7fffffff
*(arg1 + 0x130) = 0
*(arg1 + 0x134) = 0x7fffffff
*(arg1 + 0x13c) = 0
*(arg1 + 0x140) = 0x7fffffff
*(arg1 + 0x148) = 0
__builtin_memset(arg1 + 0x158, 0, 0x14)
var_f8.o = zmm0
sub_140b3fa70(arg1 + 0x18, &var_f8)
uint128_t zmm7 = zx.o(0)
__builtin_memcpy(&var_d8, 
    "\x00\x00\x00\x00\x00\x00\x3e\x40\x00\x00\x00\x00\x00\x00\x4e\x40\x00\x00\x00\x00\x00\x00\x59\x40\x"
"00\x00\x00\x00\x00\xc0\x62\x40\x00\x00\x00\x00\x00\x00\x69\x40\x00\x00\x00\x00\x00\xc0\x72\x40\x00"
"00\x00\x00\x00\x40\x7f\x40\x00\x00\x00\x00\x00\x70\x87\x40\x00\x00\x00\x00\x00\x40\x8f\x40\x00\x00"
"00\x00\x00\x70\x97\x40\x00\x00\x00\x00\x00\x40\x9f\x40\x00\x00\x00\x00\x00\x88\xa3\x40", 
    0x60)
*(arg1 + 0x68) = 0x7fefffffffffffff
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x70) = -0x10000000000001
uint64_t var_78 = 0x40b3880000000000
*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_1405a51b0(arg1 + 0x48, 0)

int64_t r12 = 0xd
int128_t* r14 = &var_d8
int64_t r15 = 0
void var_70

if (&var_d8 u> &var_70)
    r12 = 0

do
    int64_t rdi_1 = sx.q(*(arg1 + 0x50))
    arg3.q = *r14 f* 0x3f50624dd2f1a9fc
    int32_t rax_3 = (rdi_1 + 1).d
    *(arg1 + 0x50) = rax_3
    
    if (rax_3 s> *(arg1 + 0x54))
        sub_1405c4e40(arg1 + 0x48)
    
    r14 += 8
    r15 += 1
    uint64_t* rax_6 = (rdi_1 << 5) + *(arg1 + 0x48)
    *rax_6 = zmm7.q
    zmm7 = arg3
    rax_6[1] = arg3.q
    rax_6[2] = 0
    rax_6[3].d = 0
while (r15 != r12)

int64_t rdi_2 = sx.q(*(arg1 + 0x50))
int32_t rax_7 = (rdi_2 + 1).d
*(arg1 + 0x50) = rax_7

if (rax_7 s> *(arg1 + 0x54))
    sub_1405c4e40(arg1 + 0x48)

zmm7 = 0x404e000000000000
uint64_t* rax_10 = (rdi_2 << 5) + *(arg1 + 0x48)
*rax_10 = arg3.q
rax_10[1] = 0x47efffffe0000000
rax_10[2] = 0
rax_10[3].d = 0
*(arg1 + 0x98) = 0x7fefffffffffffff
*(arg1 + 0xa0) = -0x10000000000001
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
int32_t rax_11 = *(arg1 + 0x84)
*(arg1 + 0x80) = 0

if (rax_11 s< 0 && rax_11 != 0)
    sub_1405a51b0(arg1 + 0x78, 0)

int64_t* r14_1 = &var_f8
int64_t r12_1 = 4
int64_t r15_1 = 0

if (&var_f8 u> &var_d8)
    r12_1 = 0

__builtin_memcpy(&var_f8, 
    "\x00\x00\x00\x00\x00\x80\x51\x40\x00\x00\x00\x00\x00\x00\x54\x40\x00\x00\x00\x00\x00\x80\x56\x40\x"
"00\x00\x00\x00\x00\x00\x59\x40", 
    0x20)

do
    int64_t rdi_3 = sx.q(*(arg1 + 0x80))
    arg3 = zx.o(*r14_1)
    int32_t rax_12 = (rdi_3 + 1).d
    *(arg1 + 0x80) = rax_12
    
    if (rax_12 s> *(arg1 + 0x84))
        sub_1405c4e40(arg1 + 0x78)
    
    r14_1 = &r14_1[1]
    r15_1 += 1
    int64_t* rax_15 = (rdi_3 << 5) + *(arg1 + 0x78)
    *rax_15 = zmm7.q
    zmm7 = arg3
    rax_15[1] = arg3.q
    rax_15[2] = 0
    rax_15[3].d = 0
while (r15_1 != r12_1)

int64_t rdi_4 = sx.q(*(arg1 + 0x80))
int32_t rax_16 = (rdi_4 + 1).d
*(arg1 + 0x80) = rax_16

if (rax_16 s> *(arg1 + 0x84))
    sub_1405c4e40(arg1 + 0x78)

uint64_t* rax_19 = (rdi_4 << 5) + *(arg1 + 0x78)
rax_19[1] = 0x47efffffe0000000
*rax_19 = arg3.q
rax_19[2] = 0
rax_19[3].d = 0
*(arg1 + 0x16c) = 0xbf800000
*(arg1 + 0x170) = -0x40800000
*(arg1 + 0x178) = 0xffffffff
int64_t* rax_21
int512_t zmm6
rax_21, zmm6 = sub_141fe0f10(sub_141fe0c50(0), &var_f8)
int64_t* result = sub_140597df0(arg1 + 0x180, rax_21)
int128_t* rcx_9 = var_f8

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

*(arg1 + 0x198) = 0
__security_check_cookie(rax_1 ^ &var_118)
zmm6.o = var_38
return result
