// 函数: sub_140d755b0
// 地址: 0x140d755b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

int64_t* rcx_2 = *(*arg1 + 0x10)
int64_t* rax_4 = (*(*rcx_2 + 0xa8))(rcx_2)
int32_t rdx_1 = 0
int16_t* rdi_1 = *arg1[2]
int32_t rcx_4 = 0
int64_t var_18 = 0
int64_t var_10_1 = 0

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rcx_4 = var_10_1:4.d
        rdx_1 = var_10_1.d
    
    int32_t rax_5 = rbx_1.d + 1 + rdx_1
    var_10_1.d = rax_5
    
    if (rax_5 s> rcx_4)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, rdi_1, (rbx_1.d + 1) * 2)

(*(*rax_4 + 0x38))(rax_4, &var_18)
int64_t rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*arg1[1] = 0
