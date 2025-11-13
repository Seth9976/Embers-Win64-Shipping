// 函数: sub_142c8e770
// 地址: 0x142c8e770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rbx = -1

do
    rbx += 1
while (arg2[rbx] != 0)

int64_t rbp = rbx * 2
char* rax_2 = data_143ccb898(rbp)
uint64_t result

if (rax_2 != 0)
    char* rcx_1 = nullptr
    
    if (rbx != 0)
        do
            rax_2[rcx_1 << 1] = *(rcx_1 + arg2)
            rax_2[(rcx_1 << 1) + 1] = 0
            rcx_1 = &rcx_1[1]
        while (rcx_1 u< rbx)
    
    void var_88
    sub_1428cb930(&var_88)
    sub_14295d8b0(&var_88, rax_2, rbp)
    sub_14295d740(arg3, &var_88)
    *(arg3 + 0x10) = 0
    arg3[0x14] = 0
    data_143ccb8a0(rax_2)
    result = 0
else
    result = zx.q((&rax_2[0x1b]).d)

__security_check_cookie(rax_1 ^ &var_a8)
return result
