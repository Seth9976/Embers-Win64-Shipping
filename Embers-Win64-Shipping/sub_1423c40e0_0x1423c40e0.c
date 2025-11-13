// 函数: sub_1423c40e0
// 地址: 0x1423c40e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* r15 = *(arg1 + 0x58)
void*** rdi = nullptr
int32_t rbx = 0
char rax_2 = *(r15 + 0xc2)

if (rax_2 != 0)
    rbx.b = rax_2 != 1
    rbx += 1

char rax_3 = *(r15 + 0xc1)
int32_t r14 = 0

if (rax_3 != 0)
    r14.b = rax_3 != 1
    r14 += 1

void* rax_6 = sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0)))
uint32_t rdx = zx.d(*(r15 + 0x5d))
uint64_t rcx_1

if (rdx == 0)
    rcx_1.b = 0
else if (rdx == 1)
    rcx_1.b = 1
else if (rdx == 2)
    rcx_1.b = 2
else
    rcx_1 = zx.q(*(zx.q(*(r15 + 0x5f)) * 0x54 + *(rax_6 + 0x28) + 0x18))

char var_80 = rcx_1.b
int64_t* rcx_3 = data_143f0f180
int32_t var_74 = 0x7f7fffff
char var_7f = r14.b
char var_7e = rbx.b
char var_7d = 0
int64_t var_7c = 0
int64_t var_70 = 0
char var_68 = 0
void var_88
(*(*rcx_3 + 0x28))(rcx_3, &var_88, &var_80)
sub_1405d1600(arg1 + 0x18, &var_88)
sub_1405d1550(&var_88)
int64_t* rcx_6 = *(arg1 + 0x58)
char rbx_3 = (*(*(arg1 + 0x50) + 4)).b - (*(arg1 + 0x64)).b - 1
char rax_11 = (*(*rcx_6 + 0x368))(rcx_6)
int32_t* r10 = *(arg1 + 0x50)
void* rcx_7 = *(arg1 + 0x58)
int32_t var_38 = 0
int16_t var_34 = 0
char var_32 = 0
int64_t var_30 = 0
int16_t var_58 = 1
char var_39 = 0
char rcx_8 = (*(arg1 + 0x64)).b
int64_t var_60 = *(rcx_7 + 0x18)
char var_3c = 2
int32_t var_54 = r10[6]
int32_t var_50 = r10[7]
int32_t r8_1 = r10[4]
uint32_t rdx_6 = 1
uint32_t rax_18 = divu.dp.d(0:(r10[2] - 1 + r10[6]), r10[6]) u>> rcx_8

if (rax_18 u>= 1)
    rdx_6 = rax_18

uint32_t var_4c = divu.dp.d(0:(r8_1 - 1 + rdx_6), r8_1)
int32_t r8_2 = r10[5]
uint32_t rax_26 = divu.dp.d(0:(r10[3] - 1 + r10[6]), r10[6]) u>> rcx_8
uint32_t rcx_9 = 1

if (rax_26 u>= 1)
    rcx_9 = rax_26

uint32_t var_48 = divu.dp.d(0:(r8_2 - 1 + rcx_9), r8_2)
int16_t var_40 = r10[4].w
int16_t var_3e = r10[5].w
int32_t var_44 = 1
char var_3b = rbx_3
char var_3a = *r10

if (rax_11 == 0)
    char var_31_1 = *r10
else
    char var_31 = 1

int32_t i = 0

if (*r10 u> 0)
    do
        uint64_t i_1 = zx.q(i)
        (&var_39)[i_1] = *(i_1 + r10 + 0x20)
        char rax_35 = i.b
        
        if (rax_11 != 0)
            rax_35 = 0
        
        i += 1
        *(&var_30 + i_1) = rax_35
    while (i u< *r10)

void*** rax_36 = j_sub_140a82f30(0x60)

if (rax_36 != 0)
    rdi = sub_1424284b0(rax_36, *(arg1 + 0x50), *(arg1 + 0x64))

int64_t* rax_38 = sub_142006940()
int32_t* result = (*(*rax_38 + 0x140))(rax_38, &var_88, &var_60, rdi)
*(arg1 + 0x60) = *result
__security_check_cookie(rax_1 ^ &var_a8)
return result
