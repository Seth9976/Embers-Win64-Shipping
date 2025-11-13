// 函数: sub_14058b5e0
// 地址: 0x14058b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int64_t rax_1 = arg1[1] - r9
int64_t rbx = 0x7fffffffffffffff

if (rax_1 == 0x7fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rcx_1 = arg1[2] - r9
uint64_t rdx_1 = rcx_1 u>> 1
void* rdi_1
int64_t rcx_2

if (rcx_1 u<= 0x7fffffffffffffff - rdx_1)
    int64_t rax_4 = rdx_1 + rcx_1
    rbx = rax_1 + 1
    
    if (rax_4 u>= rax_1 + 1)
        rbx = rax_4
    
    if (rbx u>= 0x1000)
        rcx_2 = rbx + 0x27
        
        if (rcx_2 u> rbx)
            goto label_14058b64f
        
        stdext::threads::_Throw_lock_error()
        noreturn
    
    if (rbx == 0)
        rdi_1 = nullptr
    else
        rdi_1 = j_sub_140a82f30(rbx)
else
    rcx_2 = -0x7fffffffffffffda
label_14058b64f:
    int64_t rax_3 = j_sub_140a82f30(rcx_2)
    
    if (rax_3 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rdi_1 = (rax_3 + 0x27) & 0xffffffffffffffe0
    *(rdi_1 - 8) = rax_3
void* result = arg2 - r9 + rdi_1
void* rcx_4 = rdi_1
*result = *arg3
int64_t r8 = arg1[1]
int64_t rdx_2 = *arg1
uint32_t count

if (arg2 != r8)
    memmove(rcx_4, rdx_2, arg2.d - rdx_2.d)
    rcx_4 = result + 1
    count = (arg1[1]).d - arg2.d
    rdx_2 = arg2
else
    count = r8.d - rdx_2.d

memmove(rcx_4, rdx_2, count)
sub_14058b070(arg1, rdi_1, rax_1 + 1, rbx)
return result
