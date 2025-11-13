// 函数: sub_1406b2f20
// 地址: 0x1406b2f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
sub_1406b2df0(arg1, arg2)
*arg1 = &data_142d8e0c0
arg1[0x22] = 0
arg1[0x23] = 0
int64_t var_78
int64_t* arg_18 = &var_78
int64_t* rax = sub_1406b06e0()
void* rcx = rax[1]

if (rcx != 0)
    *(rcx + 8) += 1
    rcx = rax[1]

int64_t rax_1 = *rax
int64_t var_98 = rax_1
var_78 = rax_1
void* var_70 = rcx
int64_t var_68 = rax_1
int64_t var_60 = 0
class Concurrency::task_continuation_context var_58
Concurrency::task_continuation_context::task_continuation_context(&var_58)
int64_t var_40
__builtin_memset(&var_40, 0, 0x22)
char var_48 = 0
void var_88
int64_t* rax_2 = sub_1406b4e00(&var_88, arg1, &var_78)

if (&arg1[0x22] != rax_2)
    int64_t rcx_3 = *rax_2
    int64_t rdx_1 = rax_2[1]
    *rax_2 = 0
    rax_2[1] = 0
    arg1[0x22] = rcx_3
    int64_t* rbx_1 = arg1[0x23]
    arg1[0x23] = rdx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*rbx_1 + 8))(rbx_1)

int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t rdi_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_80 + 8))(var_80)

*(arg1 + 0xc2) = 1
return arg1
