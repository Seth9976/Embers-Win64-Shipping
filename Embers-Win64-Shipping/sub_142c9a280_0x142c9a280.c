// 函数: sub_142c9a280
// 地址: 0x142c9a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg1[2]
int64_t rbx = 0x7fffffffffffffff

if (0x7fffffffffffffff - r14 u< arg2)
    sub_140909bd0()
    noreturn

int64_t rbp = arg1[3]
int64_t r12 = r14 + arg2
int64_t rcx_1 = r12 | 0xf

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
    
    goto label_142c9a34e

int64_t rcx_2 = rbx + 0x28

if (rcx_2 u<= rbx + 1)
    rcx_2 = -1

int64_t rax_4 = j_sub_140a82f30(rcx_2)

if (rax_4 != 0)
    rdi_2 = (rax_4 + 0x27) & 0xffffffffffffffe0
    *(rdi_2 - 8) = rax_4
label_142c9a34e:
    arg1[3] = rbx
    arg1[2] = r12
    int64_t r12_1 = rdi_2 + arg4
    uint32_t count = arg4.d
    
    if (rbp u< 0x10)
        memcpy(rdi_2, arg1, count)
        memcpy(r12_1, arg6, arg7.d)
        memcpy(r12_1 + arg7, arg4 + arg5 + arg1, r14.d - arg4.d - arg5.d + 1)
        *arg1 = rdi_2
        return arg1
    
    void* rbx_2 = *arg1
    memcpy(rdi_2, rbx_2, count)
    memcpy(r12_1, arg6, arg7.d)
    memcpy(r12_1 + arg7, rbx_2 + arg4 + arg5, r14.d - arg4.d - arg5.d + 1)
    
    if (rbp + 1 u< 0x1000)
        goto label_142c9a3cf
    
    void* rcx_7 = *(rbx_2 - 8)
    
    if (rbx_2 - rcx_7 - 8 u<= 0x1f)
        rbx_2 = rcx_7
    label_142c9a3cf:
        j_sub_140a74f90(rbx_2)
        *arg1 = rdi_2
        return arg1

_invalid_parameter_noinfo_noreturn()
noreturn
