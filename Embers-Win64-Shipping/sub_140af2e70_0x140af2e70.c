// 函数: sub_140af2e70
// 地址: 0x140af2e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4[1].d
int64_t* rbx = *arg4

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg4[1].d = 0

if (*(arg4 + 0xc) != 0)
    sub_14061cd70(arg4, 0)

int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t rcx_2 = 0
int32_t var_2c = 0
int64_t rdi = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx_2 = var_2c
        rdx = var_30
        rdi = var_38
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> rcx_2)
        sub_140594770(&var_38)
        rdi = var_38
    
    UnDecorator::getReferenceType(rdi, arg2, (rbx_1.d + 1) * 2)

int32_t arg_8
sub_140a452d0(arg1, &arg_8, &var_38)
int64_t rax_2 = sx.q(arg_8)
void* const rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_2 * 0xb8 + *arg1

int64_t* rbx_3 = rax_4 + 0x10

if (rax_4 == 0)
    rbx_3 = nullptr

if (rdi != 0)
    sub_140a74f90(rdi)

if (rbx_3 != 0)
    sub_140ae6000(rbx_3, *sub_140b58260(&arg_8, arg3, 1), arg4, 1)

return zx.q(arg4[1].d)
