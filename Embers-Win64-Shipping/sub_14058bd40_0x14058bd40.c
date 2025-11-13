// 函数: sub_14058bd40
// 地址: 0x14058bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0x7fffffffffffffff

if (arg2 u> 0x7fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rbp_1 = arg1[1] - *arg1
int64_t rcx_1 = arg1[2] - *arg1
uint64_t rdx_1 = rcx_1 u>> 1
void* const rdi_1
int64_t rcx_2

if (rcx_1 u<= 0x7fffffffffffffff - rdx_1)
    rbx = rdx_1 + rcx_1
    
    if (rbx u< arg2)
        rbx = arg2
    
    if (rbx u>= 0x1000)
        rcx_2 = rbx + 0x27
        
        if (rcx_2 u> rbx)
            goto label_14058bd9c
        
        stdext::threads::_Throw_lock_error()
        noreturn
    
    if (rbx == 0)
        rdi_1 = nullptr
    else
        rdi_1 = j_sub_140a82f30(rbx)
else
    rcx_2 = -0x7fffffffffffffda
label_14058bd9c:
    int64_t rax_1 = j_sub_140a82f30(rcx_2)
    
    if (rax_1 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rdi_1 = (rax_1 + 0x27) & 0xffffffffffffffe0
    *(rdi_1 - 8) = rax_1
memset(rdi_1 + rbp_1, 0, arg2 - rbp_1)
int64_t rdx_2 = *arg1
memmove(rdi_1, rdx_2, (arg1[1]).d - rdx_2.d)
return sub_14058b070(arg1, rdi_1, arg2, rbx) __tailcall
