// 函数: sub_140d9c980
// 地址: 0x140d9c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rbx = *arg2
int128_t zmm6 = arg5
sub_140d9a4a0(rbx, zx.q(arg4), zmm6.d)
int128_t var_74
__builtin_memset(&var_74, 0, 0x24)
int32_t* rax_2 = sub_142bf6c20(rbx, 0)
sub_142bf6d30(rax_2, arg3)
int32_t var_84 = 0
int32_t var_88 = 0
sub_142bf4a50(rax_2, &var_84, &var_88)
void* rax_3 = *arg2
char rcx_4 = (*(rax_3 + 8)).b
int32_t rdi_1

if ((rcx_4 & 1) != 0)
    int32_t rcx_5
    
    if (arg2[0x20].b != 0)
        rcx_5 = *(rax_3 + 0x64)
    else
        rcx_5 = sx.d(*(rax_3 + 0x6a))
    
    rdi_1 = sub_142b93e80(rcx_5, *(*(rax_3 + 0x80) + 0x20))
else if ((rcx_4 & 2) == 0)
    rdi_1 = 0
else
    void* rax_6 = *(rax_3 + 0x80)
    rdi_1 = sub_142b93e80(*(rax_6 + 0x24), *(rax_6 + 0x20))

void* rax_8 = *arg2
int32_t var_80 = rdi_1
char rcx_7 = (*(rax_8 + 8)).b
int32_t rbx_1

if ((rcx_7 & 1) != 0)
    int32_t rcx_8
    
    if (arg2[0x20].b != 0)
        rcx_8 = *(rax_8 + 0x5c)
    else
        rcx_8 = sx.d(*(rax_8 + 0x6c))
    
    rbx_1 = sub_142b93e80(rcx_8, *(*(rax_8 + 0x80) + 0x20))
else if ((rcx_7 & 2) == 0)
    rbx_1 = 0
else
    void* rax_11 = *(rax_8 + 0x80)
    rbx_1 = sub_142b93e80(*(rax_11 + 0x28), *(rax_11 + 0x20))

void* rax_13 = *arg2
int32_t var_7c = rbx_1
char rcx_10 = (*(rax_13 + 8)).b
int32_t rax_15

if ((rcx_10 & 1) == 0)
    if ((rcx_10 & 2) == 0)
        rax_15 = 0
    else
        void* rax_17 = *(rax_13 + 0x80)
        rax_15 = sub_142b93e80(*(rax_17 + 0x2c), *(rax_17 + 0x20))
else if (arg2[0x20].b != 0)
    rax_15 = sub_142b93e80(*(rax_13 + 0x64) - *(rax_13 + 0x5c), *(*(rax_13 + 0x80) + 0x20))
else
    rax_15 = sub_142b93e80(sx.d(*(rax_13 + 0x6e)), *(*(rax_13 + 0x80) + 0x20))

int32_t rcx_15 = rax_15 - rdi_1 + rbx_1
int32_t var_78 = rcx_15

if (var_88 s< 0)
    var_80 = neg.d(rdi_1)
    int32_t var_78_1 = neg.d(rcx_15)
    int32_t var_7c_1 = neg.d(rbx_1)

int32_t* result = sub_142bf3cb0(rax_2)
sub_142bf3de0(rax_2)
sub_142bf4ab0(result, arg1[3], 0, 0)
int64_t rdi_3 = arg1[2]
int64_t rsi_1 = arg1[1]
int64_t rbp_1 = *arg1
int32_t* rax_19 = j_sub_140a82f30(0x50)

if (rax_19 != 0)
    *rax_19 = arg4
    int128_t zmm1_1 = var_74
    *(rax_19 + 8) = rbp_1
    *(rax_19 + 0x20) = var_80.o
    *(rax_19 + 0x10) = rsi_1
    *(rax_19 + 0x18) = rdi_3
    *(rax_19 + 0x30) = zmm1_1
    int128_t var_64
    *(rax_19 + 0x40) = var_64
    rax_19[1] = zmm6.d

sub_142bf4b60(result, &data_143e20d00, rax_19, sub_140d9d060, 1)
__security_check_cookie(rax_1 ^ &var_b8)
return result
