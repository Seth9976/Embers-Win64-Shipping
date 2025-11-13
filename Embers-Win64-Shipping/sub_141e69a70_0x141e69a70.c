// 函数: sub_141e69a70
// 地址: 0x141e69a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3[1].d
int64_t rsi = *arg3
uint64_t var_28 = 0

if (rdi != 0)
    sub_1405a4c70(&var_28, rdi, 0)
    memcpy(var_28, rsi, rdi * 2)
else
    int32_t var_1c_1 = 0

uint64_t var_38 = 0
int32_t i_2 = 1
sub_1405a4be0(&var_38, 1, 0)
uint64_t rdi_1 = var_38
*rdi_1 = 0
uint64_t rbp = var_28
*(rdi_1 + 8) = rdi

if (rdi != 0)
    sub_1405a4c70(rdi_1, rdi, 0)
    memcpy(*rdi_1, rbp, rdi * 2)
else
    *(rdi_1 + 0xc) = 0

int32_t rax_3 = (*(*arg1 + 0x260))(arg1, arg2, &var_38, arg4, arg5, arg6, arg7)
int32_t i_1 = i_2
uint64_t rbx_1 = var_38

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_38

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

uint64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(rax_3)
