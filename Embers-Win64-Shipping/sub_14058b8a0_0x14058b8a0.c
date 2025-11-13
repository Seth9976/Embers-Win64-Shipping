// 函数: sub_14058b8a0
// 地址: 0x14058b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0x7fffffffffffffff

if (arg2 u> 0x7fffffffffffffff)
    sub_1405871e0()
    noreturn

int64_t r14 = arg1[3]
int64_t rcx_1 = arg2 | 0xf
uint64_t rdx_1

if (rcx_1 u<= 0x7fffffffffffffff)
    rdx_1 = r14 u>> 1

int64_t rcx_2
char* rdi_2

if (rcx_1 u<= 0x7fffffffffffffff && r14 u<= 0x7fffffffffffffff - rdx_1)
    int64_t rax_2 = rdx_1 + r14
    rbx = rcx_1
    
    if (rcx_1 u< rax_2)
        rbx = rax_2
    
    if (rbx + 1 u< 0x1000)
        if (rbx == -1)
            rdi_2 = nullptr
        else
            rdi_2 = j_sub_140a82f30(rbx + 1)
        
        goto label_14058b95a
    
    rcx_2 = rbx + 0x28
    
    if (rcx_2 u> rbx + 1)
        goto label_14058b927
    
    stdext::threads::_Throw_lock_error()
    noreturn

rcx_2 = -0x7fffffffffffffd9
label_14058b927:
int64_t rax_4 = j_sub_140a82f30(rcx_2)

if (rax_4 != 0)
    rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
    *(rdi_2 - 8) = rax_4
label_14058b95a:
    arg1[2] = arg2
    arg1[3] = rbx
    memcpy(rdi_2, arg4, arg2.d)
    rdi_2[arg2] = 0
    
    if (r14 u< 0x10)
        *arg1 = rdi_2
        return arg1
    
    void* rcx_5 = *arg1
    
    if (r14 + 1 u< 0x1000)
        goto label_14058b99f
    
    void* r8_1 = *(rcx_5 - 8)
    
    if (rcx_5 - r8_1 - 8 u<= 0x1f)
        rcx_5 = r8_1
    label_14058b99f:
        j_sub_140a74f90(rcx_5)
        *arg1 = rdi_2
        return arg1

_invalid_parameter_noinfo_noreturn()
noreturn
