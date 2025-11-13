// 函数: sub_140e22890
// 地址: 0x140e22890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int32_t r14 = *(arg1 + 0x28)
int32_t rbx = rax - 1

if (rax == 0)
    rbx = 0

int32_t r15 = 1
int32_t rax_2

if (r14 == 0)
    rax_2 = 2

if (r14 != 0 || rbx == 0xffffffff)
    rax_2 = 1

int64_t r12_1 = *(arg1 + 0x20)
int32_t rcx = rbx + rax_2
int64_t var_48 = 0
int32_t var_3c

if (r14 != 0 || rcx != 0)
    sub_1405a4c70(&var_48, r14 + rcx, 0)
    memcpy(var_48, r12_1, r14 * 2)
else
    var_3c = 0

sub_140a2cf70(&var_48, *arg3, rbx)

if (arg4 == 0 || *arg4 == 0)
    *arg2 = var_48
    arg2[1].d = r14
    *(arg2 + 0xc) = var_3c
else
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg4[rbx_1] != 0)
    
    if (r14 != 0 || rbx_1.d == 0)
        r15 = 0
    
    int64_t rax_3 = var_48
    var_48 = 0
    int32_t rdx_4 = r15 + r14 + rbx_1.d
    int64_t var_38 = rax_3
    int32_t var_40
    var_40.q = 0
    
    if (rdx_4 s> var_3c)
        sub_1405947f0(&var_38, rdx_4)
    
    sub_140a20ba0(&var_38, arg4, rbx_1.d)
    int64_t rcx_7 = var_48
    *arg2 = var_38
    arg2[1].d = r14
    *(arg2 + 0xc) = var_3c
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

return arg2
