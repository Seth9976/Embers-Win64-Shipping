// 函数: sub_140680540
// 地址: 0x140680540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t arg_18 = 0

if (arg3 == 0)
    int32_t rdi_1 = arg2[1].d
    int64_t rsi_1 = *arg2
    int64_t var_38 = 0
    int32_t var_30 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_38, rdi_1, 0)
        rbx = var_38
        memcpy(rbx, rsi_1, rdi_1 * 2)
    else
        int32_t var_2c_1 = 0
    
    char result = sub_14067fcb0(arg1, &var_38)
    
    if (rbx == 0)
        return result
    
    sub_140a74f90(rbx)
    return result

int64_t var_28
int64_t* rax = sub_140b251a0(&var_28)
int32_t r8 = arg2[1].d
int32_t rdi = r8 - 1

if (r8 == 0)
    rdi = 0

int32_t rcx_2

if (rax[1].d == 0)
    rcx_2 = 2

if (rax[1].d != 0 || rdi == 0xffffffff)
    rcx_2 = 1

int64_t var_48 = *rax
*rax = 0
int32_t rax_2 = rax[1].d
int32_t rax_3 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_3 = rax_2 + rcx_2 + rdi

if (rdx_3 s> rax_3)
    sub_1405947f0(&var_48, rdx_3)

sub_140a2cf70(&var_48, *arg2, rdi)
char rax_4 = sub_14067fcb0(arg1, &var_48)
int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return zx.q(rax_4)
