// 函数: sub_1421489d0
// 地址: 0x1421489d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int32_t var_70 = 1
void** var_78 = nullptr
sub_140d11050()
sub_1405a4d70(&var_78)
void** r14 = var_78
int64_t arg_8 = arg2
*r14 = &data_143e1b9d0
int64_t var_68
sub_140b63b70(&arg_8, &var_68)
void arg_10
int64_t* rax = sub_14214abe0(&arg_10, *(arg1 + 0x10), arg_8)
void* rbx_1 = *(arg1 + 0x10)
arg_8 = *rax
int128_t var_48
__builtin_memset(&var_48, 0, 0x18)
void var_58
sub_14214e390(&var_48, arg1, arg1, rbx_1, sub_140b63b70(&arg_8, &var_58))
void* r15 = var_48:8.q
int64_t rax_2

if (r15 != 0)
    rax_2 = sx.q(var_70)

if (r15 == 0 || rax_2.d s<= 0)
label_142148ad5:
    int64_t rcx_7 = var_68
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    int64_t rbx_2 = 0
    
    while (true)
        void* rdi_1 = r14[rbx_2]
        sub_140d12020()
        int64_t rdx_5 = *(*(r15 + 8) + 0x10)
        
        if ((data_143e1c4a8 & rdx_5) == 0 && (*(rdi_1 + 8) & rdx_5) == 0)
            rbx_2 += 1
            
            if (rbx_2 s>= rax_2)
                goto label_142148ad5
            
            continue
        
        int64_t rcx_9 = var_68
        void* result_1 = var_48:8.q
        int64_t rsi_2 = var_48.q
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t var_38
        
        if (var_38 != 0)
            if (result_1 != 0 && ((zx.q(*(*(result_1 + 8) + 0x10)) u>> 0x11).b & 1) != 0)
                result = result_1
            
            *arg3 = result
            result = sx.q(*(result_1 + 0x4c)) + rsi_2
        
        break

if (r14 != 0)
    sub_140a74f90(r14)

return result
