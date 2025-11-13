// 函数: sub_141890920
// 地址: 0x141890920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
EnterCriticalSection(arg1 + 0xb0)
int32_t rax_2 = 0

if (0 == *(arg1 + 0x160))
    *(arg1 + 0x160) = 0
else
    rax_2 = *(arg1 + 0x160)

if (rax_2 s> *(arg1 + 0x30))
    int32_t i
    
    do
        bool z_1
        
        if (0 == *(arg1 + 0x140))
            *(arg1 + 0x140) = 0
            z_1 = true
        else
            *(arg1 + 0x140)
            z_1 = false
        
        if (z_1)
            break
        
        int64_t* rcx_1 = *(arg1 + 0x168)
        (*(*rcx_1 + 0x20))(rcx_1, 0x3e8, 0)
        int64_t* rcx_2 = *(arg1 + 0x168)
        (*(*rcx_2 + 0x18))(rcx_2)
        i = 0
        
        if (0 == *(arg1 + 0x160))
            *(arg1 + 0x160) = 0
        else
            i = *(arg1 + 0x160)
    while (i s> *(arg1 + 0x30))

*(arg1 + 0x160) += 1
int64_t rax_6 = *arg3
*arg3 = 0
char var_40 = 1
uint128_t var_58 = *arg2
uint64_t var_48 = rax_6
int64_t* rax_7 = j_sub_140a82f30(0x28)

if (rax_7 != 0)
    *rax_7 = 0
    rax_7[4].b = 0xff
    sub_14185edf0(&rax_7[1], &var_58)
    int64_t** temp0_1 = *(arg1 + 0x150)
    *(arg1 + 0x150) = rax_7
    *temp0_1
    *temp0_1 = rax_7

int64_t* rcx_6 = *(arg1 + 0x180)
(*(*rcx_6 + 0x10))(rcx_6)
void var_78
sub_140acafe0(arg1 + 0xf0, &var_78, arg2, nullptr)
int64_t* rcx_8 = *(arg1 + 0x18)
int64_t result = (*(*rcx_8 + 0x20))(rcx_8, zx.q(*(arg1 + 0xf8) - *(arg1 + 0x124)))

if (arg1 != -0xb0)
    result = LeaveCriticalSection(arg1 + 0xb0)

int64_t* rcx_10 = *arg3

if (rcx_10 != 0)
    result = (**rcx_10)(rcx_10, 1)

__security_check_cookie(rax_1 ^ &var_98)
return result
