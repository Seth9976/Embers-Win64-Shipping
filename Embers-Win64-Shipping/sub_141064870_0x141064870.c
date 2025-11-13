// 函数: sub_141064870
// 地址: 0x141064870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void var_348
void* rax_2 = &var_348
int64_t i_1 = 6
int128_t* rcx = arg3
int64_t i

do
    rax_2 += 0x80
    int128_t zmm0 = *rcx
    int128_t zmm1 = rcx[1]
    rcx = &rcx[8]
    *(rax_2 - 0x80) = zmm0
    zmm0 = rcx[-6]
    *(rax_2 - 0x70) = zmm1
    zmm1 = rcx[-5]
    *(rax_2 - 0x60) = zmm0
    zmm0 = rcx[-4]
    *(rax_2 - 0x50) = zmm1
    zmm1 = rcx[-3]
    *(rax_2 - 0x40) = zmm0
    zmm0 = rcx[-2]
    *(rax_2 - 0x30) = zmm1
    zmm1 = rcx[-1]
    *(rax_2 - 0x20) = zmm0
    *(rax_2 - 0x10) = zmm1
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_1 = arg2[2]
void* rbp = *arg2
int64_t var_48 = *(arg1 + 0x1e8)
arg2[2] = i_1

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t result = sub_14105f040(&arg2[2], rbp, &var_348)
arg2[5].b = 1

if (*(arg1 + 0x109) == 0)
    AcquireSRWLockExclusive(arg1 + 0xc0)
    sub_14105e1e0(arg1, arg3, arg2)
    result = ReleaseSRWLockExclusive(arg1 + 0xc0)

__security_check_cookie(rax_1 ^ &var_368)
return result
