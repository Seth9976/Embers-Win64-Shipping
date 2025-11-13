// 函数: sub_1427c6dc0
// 地址: 0x1427c6dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
int64_t r9 = *arg1
int64_t rsi_2 = (arg2 - r9) s>> 3
int64_t rax_2 = (arg1[1] - r9) s>> 3

if (rax_2 == 0x1fffffffffffffff)
    sub_1427c7670()
    noreturn

int64_t rcx_2 = (arg1[2] - r9) s>> 3
uint64_t rdx_1 = rcx_2 u>> 1
int64_t rax_4

if (rcx_2 u<= 0x1fffffffffffffff - rdx_1)
    rax_4 = rdx_1 + rcx_2
    
    if (rax_4 u< rax_2 + 1)
        rax_4 = rax_2 + 1
else
    rax_4 = rax_2 + 1

int64_t arg_20 = rax_4
int64_t r12 = rax_4 << 3
int64_t rdx_2 = r12
void* rbx_1

if (rax_4 u<= 0x1fffffffffffffff)
    if (rdx_2 u>= 0x1000)
        goto label_1427c6e75
    
    if (rdx_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = j_sub_140a82f30(rdx_2)
else
    rdx_2 = -1
label_1427c6e75:
    int64_t rcx_3 = rdx_2 + 0x27
    
    if (rcx_3 u<= rdx_2)
        rcx_3 = -1
    
    int64_t rax_5 = j_sub_140a82f30(rcx_3)
    
    if (rax_5 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx_1 = (rax_5 + 0x27) & 0xffffffffffffffe0
    *(rbx_1 - 8) = rax_5

void* arg_10 = rbx_1
*(rbx_1 + (rsi_2 << 3)) = *arg3
int64_t r8 = arg1[1]
int64_t rdx_3 = *arg1
void* rcx_5 = rbx_1
uint32_t count

if (arg2 != r8)
    memmove(rcx_5, rdx_3, arg2.d - rdx_3.d)
    rcx_5 = rbx_1 + ((rsi_2 + 1) << 3)
    count = (arg1[1]).d - arg2.d
    rdx_3 = arg2
else
    count = r8.d - rdx_3.d

memmove(rcx_5, rdx_3, count)
void* rcx_7 = *arg1

if (rcx_7 != 0)
    if (((arg1[2] - rcx_7) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_4 = *(rcx_7 - 8)
        
        if (rcx_7 - r8_4 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = r8_4
    
    j_sub_140a74f90(rcx_7)

*arg1 = rbx_1
arg1[1] = rbx_1 + ((rax_2 + 1) << 3)
arg1[2] = r12 + rbx_1
return *arg1 + (rsi_2 << 3)
