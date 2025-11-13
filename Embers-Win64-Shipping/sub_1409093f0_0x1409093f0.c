// 函数: sub_1409093f0
// 地址: 0x1409093f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1[2]
int64_t rbx = 0x7fffffffffffffff

if (0x7fffffffffffffff - r14 u< arg2)
    sub_140909bd0()
    noreturn

int64_t rbp = arg1[3]
int64_t r15 = r14 + arg2
int64_t rcx_1 = r15 | 0xf

if (rcx_1 u<= 0x7fffffffffffffff)
    uint64_t rdx_1 = rbp u>> 1
    
    if (rbp u<= 0x7fffffffffffffff - rdx_1)
        int64_t rax_2 = rdx_1 + rbp
        rbx = rcx_1
        
        if (rcx_1 u< rax_2)
            rbx = rax_2

void* const rdi_2

if (rbx + 1 u< 0x1000)
    if (rbx == -1)
        rdi_2 = nullptr
    else
        rdi_2 = j_sub_140a82f30(rbx + 1)
    
    goto label_1409094b8

int64_t rcx_2 = rbx + 0x28

if (rcx_2 u<= rbx + 1)
    rcx_2 = -1

int64_t rax_4 = j_sub_140a82f30(rcx_2)

if (rax_4 != 0)
    rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
    *(rdi_2 - 8) = rax_4
label_1409094b8:
    uint32_t count = r14.d
    arg1[2] = r15
    void* r15_1 = rdi_2 + r14
    arg1[3] = rbx
    
    if (rbp u< 0x10)
        memcpy(rdi_2, arg1, count)
        memcpy(r15_1, arg4, arg5.d)
        *(r15_1 + arg5) = 0
        *arg1 = rdi_2
        return arg1
    
    void* rbx_1 = *arg1
    memcpy(rdi_2, rbx_1, count)
    memcpy(r15_1, arg4, arg5.d)
    *(r15_1 + arg5) = 0
    
    if (rbp + 1 u< 0x1000)
        goto label_140909516
    
    void* rcx_6 = *(rbx_1 - 8)
    
    if (rbx_1 - rcx_6 - 8 u<= 0x1f)
        rbx_1 = rcx_6
    label_140909516:
        j_sub_140a74f90(rbx_1)
        *arg1 = rdi_2
        return arg1

_invalid_parameter_noinfo_noreturn()
noreturn
