// 函数: sub_141bbed80
// 地址: 0x141bbed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = arg2
int32_t arg_8
sub_1405ba560(&arg1[1], &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t* rbx = nullptr
int64_t rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = 0
else
    rdx_3 = (rax << 5) + arg1[1]

int64_t rax_1 = rdx_3 + 8

if (rdx_3 == 0)
    rax_1 = 0

if (rax_1 == 0)
    int64_t* var_38 = &result_1
    int64_t* var_30_1 = arg3
    sub_141b70d20(&arg1[1], &arg_8, &var_38, nullptr)
    int64_t arg_18 = *arg3
    var_38 = &arg_18
    int64_t* var_30_2 = &result_1
    sub_1417fdda0(&arg1[0xb], &arg_8, &var_38, nullptr)
    int64_t* rcx_3 = *arg3
    (**rcx_3)(rcx_3)
    void* rdi_1 = *arg1
    int64_t result_2 = result_1
    
    if (*(rdi_1 + 0x5d8) != 0)
        int64_t* rcx_4 = *(rdi_1 + 0x5d0)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            if (*(rdi_1 + 0x5d8) != 0)
                rbx = *(rdi_1 + 0x5d0)
            
            (*(*rbx + 0x50))(rbx, result_2, arg3)

sub_1409d7d20(&arg1[0x18], &result_1)
int64_t rdi_2 = sx.q(arg1[0x16].d)
int32_t rax_7 = (rdi_2 + 1).d
arg1[0x16].d = rax_7

if (rax_7 s> *(arg1 + 0xb4))
    sub_1405a4d70(&arg1[0x15])

int64_t result = result_1
*(arg1[0x15] + (rdi_2 << 3)) = result
int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
