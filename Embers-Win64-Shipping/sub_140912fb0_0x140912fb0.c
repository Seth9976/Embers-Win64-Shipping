// 函数: sub_140912fb0
// 地址: 0x140912fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xc8)

if (*(arg1 + 0x28) != 1 || *(arg1 + 0x80) == 0)
    if (arg1 != -0xc8)
        LeaveCriticalSection(arg1 + 0xc8)
    
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))
    
    uint64_t rax
    rax.b = 0
    return rax

void* r14 = *arg2
int64_t arg_18 = 0
void** const var_e8
memset(&var_e8, 0, 0x90)
sub_140b4c2a0(&var_e8)
int64_t var_58 = 0
var_e8 = &data_142d6ad48
int64_t var_40
int64_t* var_50 = &var_40
int64_t var_48 = 0
sub_140b552b0(&var_e8, 1)
int64_t rdx_1
rdx_1.b = 1
var_e8[0x1b](&var_e8, rdx_1)
var_e8 = &data_142d6b000
var_40 = 0
int64_t var_38 = 0
int32_t arg_8 = *(r14 + 0xb0)
int64_t* var_e0
int32_t* rdx_2 = *var_e0

if (&rdx_2[1] u> var_e0[1])
    int32_t* rdx_3 = &arg_8
    void** const* rcx_6 = &var_e8
    char var_bf
    
    if ((var_bf & 0x20) != 0)
        sub_140b54070(rcx_6, rdx_3, arg3)
    else
        sub_14063a3c0(rcx_6, rdx_3, 4)
else
    arg_8 = *rdx_2
    *var_e0 += 4

char rax_5 = sub_14090e900(arg1, var_40, 4)
char rax_6

if (rax_5 != 0)
    *(arg1 + 0xa0) += 4
    rax_6 = sub_14090e900(arg1, *(r14 + 0xa8), *(r14 + 0xb0))

int64_t rax_7

if (rax_5 != 0 && rax_6 != 0)
    *(arg1 + 0xa0) += sx.q(*(r14 + 0xb0))
    int64_t rcx_13 = var_40
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    sub_140b4cb40(&var_e8)
    
    if (arg1 != -0xc8)
        LeaveCriticalSection(arg1 + 0xc8)
    
    sub_1405970a0(arg2)
    rax_7.b = 1
else
    int64_t rcx_9 = var_40
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    sub_140b4cb40(&var_e8)
    
    if (arg1 != -0xc8)
        LeaveCriticalSection(arg1 + 0xc8)
    
    sub_1405970a0(arg2)
    rax_7.b = 0

return rax_7
