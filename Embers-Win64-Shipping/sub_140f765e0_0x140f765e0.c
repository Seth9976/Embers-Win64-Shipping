// 函数: sub_140f765e0
// 地址: 0x140f765e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)
int32_t rdi = 0

if (r10 == 0)
    *arg2 = 0
    *arg3 = 0
    *arg4 = 0
    return 

bool cond:0 = *(r10 + 0x798) == 1
int32_t arg_8 = *(r10 + 0x790)
int32_t rcx
rcx.b = cond:0
int32_t rax_1 = 0
void* rbx = r10 + 0x780

if (rcx + *(r10 + 0x794) s>= 0)
    rax_1 = rcx + *(r10 + 0x794)

if (*(r10 + 0x788) == 0)
    rbx = &arg_8

uint64_t rbx_1 = *rbx
uint64_t var_40 = 0
int64_t var_38 = 0
uint64_t var_58 = rbx_1
sub_140f048e0(*(r10 + 0x48), &var_40, arg3.d)
int32_t rdx_1 = arg_8
int32_t rcx_3 = rbx_1.d

if (rbx_1.d != rdx_1 || (rbx_1 u>> 0x20).d != rax_1)
    int64_t rax_5 = arg_8.q
    int64_t var_48 = rax_5
    uint64_t var_50 = rbx_1
    int32_t* rdx_3
    
    if (rcx_3 != rdx_1)
        rbx_1 = zx.q(rcx_3)
        rdx_3 = &var_50
        
        if (rcx_3 s>= rdx_1)
            rdx_3 = &var_48
    else if ((rbx_1 u>> 0x20).d s>= (rax_5 u>> 0x20).d)
        rdx_3 = &var_48
    else
        rdx_3 = &var_50
    
    int32_t rax_7 = sub_140f196b0(&var_40, rdx_3)
    int32_t rcx_8 = var_50.d
    int32_t rdx_4 = var_48.d
    bool cond:3_1 = rcx_8 s> rdx_4
    
    if (rcx_8 == rdx_4)
        cond:3_1 = var_50:4.d s> var_48:4.d
    
    int32_t* rdx_5 = &var_50
    
    if (not(cond:3_1))
        rdx_5 = &var_48
    
    int32_t rax_4 = sub_140f196b0(&var_40, rdx_5) - rax_7
    *arg2 = rax_7
    *arg3 = rax_4
    int32_t temp2_1 = arg_8
    
    if (temp2_1 s>= rbx_1.d && (temp2_1 != rbx_1.d || rax_1 s>= var_58:4.d))
        rdi = 1
else
    *arg2 = sub_140f196b0(&var_40, &arg_8)
    *arg3 = 0

*arg4 = rdi
uint64_t rcx_11 = var_40

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)
