// 函数: sub_140d749f0
// 地址: 0x140d749f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void* rax_2 = *arg1
int64_t* rbx_1 = *(rax_2 + 0x18)
int64_t* rcx_2 = *(rax_2 + 0x10)
int64_t* var_38 = rcx_2
int64_t* var_30_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* rax_4 = (*(*rcx_2 + 0x98))()
int64_t rdx_1 = *rax_4
int32_t rax_5 = (*(rdx_1 + 0x28))(rax_4, rdx_1)
int32_t var_28
int64_t var_20

if (rax_5 == 0)
    arg2 = sub_140d6ed90(&var_28, 0, arg2)
    sub_140597060(&var_38)
else if (rax_5 == 1)
    arg2 = sub_140d6ed90(&var_28, 2, arg2)
    sub_140597060(&var_38)
else if (rax_5 == 2)
    arg2 = sub_140d6ed90(&var_28, 1, arg2)
    sub_140597060(&var_38)
else
    var_28 = 0
    var_20 = 0
    int64_t var_18_1 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

**arg1[2] = sub_140d6fdb0(&var_28, arg2)

if (var_20 != 0)
    sub_140a74f90(var_20)

*arg1[1] = 0
