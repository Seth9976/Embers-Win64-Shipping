// 函数: sub_141b615c0
// 地址: 0x141b615c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r10 = sub_140b5b8a0(*(arg2 + 0x50), 0) == 0
void* rax_1

if ((*(arg2 + 0x54) != 0 | r10) == 0)
    rax_1 = *(arg2 + 0x48)

int64_t rcx_1

if ((*(arg2 + 0x54) != 0 | r10) != 0 || rax_1 == 0)
    rcx_1 = *(arg2 + 0x50)
else
    rcx_1 = *(rax_1 + 0x18)

int64_t arg_8 = rcx_1
int64_t var_18
sub_140b63b70(&arg_8, &var_18)
int32_t rcx_3
rcx_3.b = sub_140b5b8a0(*(arg2 + 0x50), 0) == 0
void* rax_3

if ((*(arg2 + 0x54) != 0 | rcx_3.b) == 0)
    rax_3 = *(arg2 + 0x48)

int64_t rcx_4

if ((*(arg2 + 0x54) != 0 | rcx_3.b) != 0 || rax_3 == 0)
    rcx_4 = *(arg2 + 0x50)
else
    rcx_4 = *(rax_3 + 0x18)

int64_t r10_1 = *arg1
arg_8 = rcx_4
char rax_5 = (*(r10_1 + 0x28))(arg1, &arg_8, &var_18, arg3, arg4, arg5)
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rax_5)
