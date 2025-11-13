// 函数: sub_140e225a0
// 地址: 0x140e225a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1
int64_t rdi = -1

do
    rdi += 1
while (arg3[rdi] != 0)

int32_t r12 = *(arg1 + 0x18)
int32_t r13 = 1
int32_t rax_2

if (r12 == 0)
    rax_2 = 2

if (r12 != 0 || (rdi + 1).d == 0)
    rax_2 = 1

int64_t var_48 = 0
int32_t rcx = rax_2 + rdi.d
int64_t rax_3 = *(arg1 + 0x10)
int32_t var_3c

if (r12 != 0 || rcx != 0)
    sub_1405a4c70(&var_48, r12 + rcx, 0)
    memcpy(var_48, rax_3, r12 * 2)
else
    var_3c = 0

sub_140a2cf70(&var_48, arg3, rdi.d)

if (arg4 == 0 || *arg4 == 0)
    *arg2 = var_48
    arg2[1].d = r12
    *(arg2 + 0xc) = var_3c
else
    do
        rbx += 1
    while (arg4[rbx] != 0)
    
    if (r12 != 0 || rbx.d == 0)
        r13 = 0
    
    int64_t var_38 = var_48
    int32_t rdx_5 = r12 + r13 + rbx.d
    var_48 = 0
    int32_t var_40
    var_40.q = 0
    
    if (rdx_5 s> var_3c)
        sub_1405947f0(&var_38, rdx_5)
    
    sub_140a20ba0(&var_38, arg4, rbx.d)
    int64_t rcx_7 = var_48
    *arg2 = var_38
    arg2[1].d = r12
    *(arg2 + 0xc) = var_3c
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

return arg2
