// 函数: sub_142148b60
// 地址: 0x142148b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
void** var_98 = nullptr
int32_t var_90 = 1
sub_140d12020()
sub_1405a4d70(&var_98)
int64_t* var_88 = nullptr
int32_t var_80 = 1
*var_98 = &data_143e1c4a0
int32_t arg_8 = *sub_140b5e500(&arg_8, 0x3e)
int32_t arg_c = 0
sub_1405a4d70(&var_88)
int64_t* rdi = var_88
arg_8.q = arg2
*rdi = arg_8.q
int64_t var_78
sub_140b63b70(&arg_8, &var_78)
int64_t arg_10
int64_t* rax_3 = sub_14214abe0(&arg_10, *(arg1 + 0x10), arg_8.q)
void* rbx_1 = *(arg1 + 0x10)
arg_8.q = *rax_3
int128_t var_58
__builtin_memset(&var_58, 0, 0x18)
void var_68
sub_14214e390(&var_58, arg1, arg1, rbx_1, sub_140b63b70(&arg_8, &var_68))
void* r13 = var_58:8.q

if (r13 == 0)
label_142148d01:
    int64_t rcx_12 = var_78
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
else
    int64_t rax_5 = sx.q(var_90)
    int64_t r12
    r12.b = 0
    
    if (rax_5.d s<= 0)
        goto label_142148d01
    
    int64_t r15_1 = sx.q(var_80)
    int64_t rbx_2 = 0
    arg_10 = rax_5
    
    do
        void* rsi_1 = var_98[rbx_2]
        sub_140d12020()
        int64_t rdx_6 = *(*(r13 + 8) + 0x10)
        
        if ((data_143e1c4a8 & rdx_6) != 0)
            int64_t rcx_10 = 0
            
            if (r15_1.d s> 0)
                do
                    if (*(*(r13 + 0x78) + 0x18) == rdi[rcx_10])
                        r12.b = 1
                        break
                    
                    rcx_10 += 1
                while (rcx_10 s< r15_1)
        else if ((*(rsi_1 + 8) & rdx_6) != 0)
            goto label_142148cd9
        
        rbx_2 += 1
    while (rbx_2 s< arg_10)
    
    if (r12.b == 0)
        goto label_142148d01
    
label_142148cd9:
    int64_t rcx_11 = var_78
    void* rsi_2 = var_58:8.q
    int64_t r15_2 = var_58.q
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t var_48
    
    if (var_48 != 0)
        result = sx.q(*(rsi_2 + 0x4c)) + r15_2

if (rdi != 0)
    sub_140a74f90(rdi)

void** rax_9 = var_98

if (rax_9 != 0)
    sub_140a74f90(rax_9)

return result
