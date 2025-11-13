// 函数: sub_14242ab50
// 地址: 0x14242ab50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t* rdx = *arg1
int32_t var_58 = *rdx
int64_t rdi = *(rdx + 8)

if (rdi != 0)
    int64_t* rax_3 = sub_142006940()
    int64_t r8_1 = *rax_3
    (*(r8_1 + 0x138))(rax_3, rdi, r8_1)

int64_t* rax_4 = sub_142006940()
void var_54
**arg1 = *(*(*rax_4 + 0x140))(rax_4, &var_54, &arg1[1], arg1[8])
uint64_t rax_7 = 0
char r9_1 = *(arg1 + 0x2e)
char r8_3 = *(arg1 + 0x49)
char rdx_3 = arg1[9].b
int32_t* r10_1 = *arg1

if (r9_1 != 0)
    int64_t var_44
    __builtin_memset(&var_44, 0, 0x28)
    char var_48_1 = *(arg1 + 0x2c)
    int32_t var_50 = *(arg1 + 0x14)
    char var_1c_1 = ((rdx_3 & 1) * 2) | (r8_3 & 1)
    int32_t rdx_4 = *r10_1
    int32_t var_4c_1 = arg1[3].d
    
    do
        uint64_t rcx_6 = zx.q(rax_7.d)
        *(&var_44 + (rcx_6 << 2)) = rdx_4
        int64_t var_24
        *(&var_24 + rcx_6) = rax_7.b
        rax_7 = zx.q(rax_7.d + 1)
    while (rax_7.d u< zx.d(r9_1))
    
    int64_t* rax_8 = sub_142006940()
    int64_t r8_4 = *rax_8
    rax_7 = (*(r8_4 + 0x130))(rax_8, &var_50, r8_4)

*(*arg1 + 8) = rax_7
int64_t* rax_9 = sub_142006940()
int64_t r8_5 = *rax_9
int64_t result = (*(r8_5 + 0x148))(rax_9, &var_58, r8_5)
__security_check_cookie(rax_1 ^ &var_78)
return result
