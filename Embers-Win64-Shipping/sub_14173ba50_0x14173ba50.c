// 函数: sub_14173ba50
// 地址: 0x14173ba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rbp = sx.q(arg2)
int32_t* rbx_1 = rbp * 0xb0 + *(arg1 + 0xb0)
void var_e8
int32_t* rax_2 = sub_1417052d0(&var_e8)
*rbx_1 = *rax_2
*(rbx_1 + 4) = *(rax_2 + 4)
rbx_1[3] = rax_2[3]
*(rbx_1 + 0x10) = *(rax_2 + 0x10)
rbx_1[6] = rax_2[6]

if (&rbx_1[8] != &rax_2[8])
    int64_t rcx_2 = *(rbx_1 + 0x20)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(rbx_1 + 0x20) = *(rax_2 + 0x20)
    *(rax_2 + 0x20) = 0
    rbx_1[0xa] = rax_2[0xa]
    rbx_1[0xb] = rax_2[0xb]
    *(rax_2 + 0x28) = 0

rbx_1[0xc] = rax_2[0xc]
rbx_1[0xd] = rax_2[0xd]
rbx_1[0xe] = rax_2[0xe]
*(rbx_1 + 0x3c) = *(rax_2 + 0x3c)
rbx_1[0x11] = rax_2[0x11]
*(rbx_1 + 0x48) = *(rax_2 + 0x48)
rbx_1[0x14] = rax_2[0x14]
*(rbx_1 + 0x54) = *(rax_2 + 0x54)
rbx_1[0x17] = rax_2[0x17]
*(rbx_1 + 0x60) = *(rax_2 + 0x60)
rbx_1[0x1a] = rax_2[0x1a]
rbx_1[0x1b] = rax_2[0x1b]
rbx_1[0x1c] = rax_2[0x1c]
*(rbx_1 + 0x74) = *(rax_2 + 0x74)
rbx_1[0x1f] = rax_2[0x1f]
*(rbx_1 + 0x80) = *(rax_2 + 0x80)
rbx_1[0x22] = rax_2[0x22]
*(rbx_1 + 0x8c) = *(rax_2 + 0x8c)
rbx_1[0x25] = rax_2[0x25]
*(rbx_1 + 0x98) = *(rax_2 + 0x98)
rbx_1[0x28] = rax_2[0x28]
rbx_1[0x29] = rax_2[0x29]
rbx_1[0x2a] = rax_2[0x2a]
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rdi_1 = sx.q(*(arg1 + 0xa8))
int32_t rax_22 = (rdi_1 + 1).d
*(arg1 + 0xa8) = rax_22

if (rax_22 s> *(arg1 + 0xac))
    sub_1405a4cf0(arg1 + 0xa0)

int64_t result = *(arg1 + 0xa0)
*(result + (rdi_1 << 2)) = rbp.d
__security_check_cookie(rax_1 ^ &var_108)
return result
