// 函数: sub_140b00af0
// 地址: 0x140b00af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x11])
char arg_8
void* rbp_1
int64_t* r12_1
void* r13_1
int64_t* r14_1
void* r15_1

if (sub_140ab25c0(&arg1[2], &arg2[8], arg3) == 0)
label_140b00b84:
    arg_8 = 1
    rbp_1 = &arg2[0x20]
    r14_1 = &arg1[5]
    r15_1 = &arg2[0x38]
    r12_1 = &arg1[8]
    r13_1 = &arg2[0x50]
else
    rbp_1 = &arg2[0x20]
    r14_1 = &arg1[5]
    
    if (sub_140ab25c0(r14_1, rbp_1, arg3) == 0)
        goto label_140b00b84
    
    r15_1 = &arg2[0x38]
    r12_1 = &arg1[8]
    
    if (sub_140ab25c0(r12_1, r15_1, arg3) == 0)
        goto label_140b00b84
    
    r13_1 = &arg2[0x50]
    
    if (sub_140ab25c0(&arg1[0xd], r13_1, arg3) == 0 || arg1[1].b != *arg2)
        goto label_140b00b84
    
    arg_8 = 0

sub_14065da90(&arg1[2], &arg2[8])
sub_14065da90(r14_1, rbp_1)
sub_14065da90(r12_1, r15_1)
sub_14065da90(&arg1[0xd], r13_1)
sub_140692f90(&arg1[0xb], &arg2[0x68])
char result = *arg2
arg1[1].b = result

if (arg_8 != 0)
    result = (*(*arg1 + 0x68))(arg1)

if (arg1 == -0x88)
    return result

return LeaveCriticalSection(&arg1[0x11])
