// 函数: sub_140a3e050
// 地址: 0x140a3e050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140a46220()
AcquireSRWLockExclusive(rax + 0x20)
void* rax_1 = sub_140a46220()
int32_t rbp = arg1[1].d
int64_t rbx_1 = *arg1
int64_t var_18 = 0

if (rbp != 0)
    sub_1405a4c70(&var_18, rbp, 0)
    memcpy(var_18, rbx_1, rbp * 2)
else
    int32_t var_c_1 = 0

sub_140b20bf0(&var_18)
int64_t rbx_2 = sx.q(*(rax_1 + 0x18))
int32_t rax_2 = (rbx_2 + 1).d
*(rax_1 + 0x18) = rax_2

if (rax_2 s> *(rax_1 + 0x1c))
    sub_1405a4f90(rax_1 + 0x10)

int64_t* rbx_4 = (rbx_2 << 4) + *(rax_1 + 0x10)
*rbx_4 = 0
int64_t rbp_1 = var_18
rbx_4[1].d = rbp

if (rbp != 0)
    sub_1405a4c70(rbx_4, rbp, 0)
    memcpy(*rbx_4, rbp_1, rbp * 2)
else
    *(rbx_4 + 0xc) = 0

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return ReleaseSRWLockExclusive(rax + 0x20)
