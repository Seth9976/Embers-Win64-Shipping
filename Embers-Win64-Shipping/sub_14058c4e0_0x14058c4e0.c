// 函数: sub_14058c4e0
// 地址: 0x14058c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1[2]
int64_t rbx = 0x7fffffffffffffff

if (0x7fffffffffffffff - r14 u< arg2)
    sub_1405871e0()
    noreturn

int64_t rbp = arg1[3]
int64_t r15 = r14 + arg2
int64_t rdx_1 = r15 | 0xf
uint64_t rcx_1

if (rdx_1 u<= 0x7fffffffffffffff)
    rcx_1 = rbp u>> 1

int64_t rcx_2
void* const rdi_2

if (rdx_1 u<= 0x7fffffffffffffff && rbp u<= 0x7fffffffffffffff - rcx_1)
    int64_t rax_2 = rcx_1 + rbp
    rbx = rdx_1
    
    if (rdx_1 u< rax_2)
        rbx = rax_2
    
    if (rbx + 1 u< 0x1000)
        if (rbx == -1)
            rdi_2 = nullptr
        else
            rdi_2 = j_sub_140a82f30(rbx + 1)
        
        goto label_14058c5aa
    
    rcx_2 = rbx + 0x28
    
    if (rcx_2 u> rbx + 1)
        goto label_14058c57a
    
    stdext::threads::_Throw_lock_error()
    noreturn

rcx_2 = -0x7fffffffffffffd9
label_14058c57a:
int64_t rax_4 = j_sub_140a82f30(rcx_2)

if (rax_4 != 0)
    rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
    *(rdi_2 - 8) = rax_4
label_14058c5aa:
    int32_t c = sx.d(arg5)
    uint32_t count = r14.d
    arg1[2] = r15
    void* r15_1 = rdi_2 + r14
    arg1[3] = rbx
    
    if (rbp u< 0x10)
        memcpy(rdi_2, arg1, count)
        memset(r15_1, c, arg4)
        *(r15_1 + arg4) = 0
        *arg1 = rdi_2
        return arg1
    
    void* rbx_1 = *arg1
    memcpy(rdi_2, rbx_1, count)
    memset(r15_1, c, arg4)
    *(r15_1 + arg4) = 0
    
    if (rbp + 1 u< 0x1000)
        goto label_14058c60e
    
    void* rcx_6 = *(rbx_1 - 8)
    
    if (rbx_1 - rcx_6 - 8 u<= 0x1f)
        rbx_1 = rcx_6
    label_14058c60e:
        j_sub_140a74f90(rbx_1)
        *arg1 = rdi_2
        return arg1

_invalid_parameter_noinfo_noreturn()
noreturn
