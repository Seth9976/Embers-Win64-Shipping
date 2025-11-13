// 函数: sub_141701fc0
// 地址: 0x141701fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t rsi_2 = (arg1[1] - rax) s>> 4

if (rsi_2 == 0xfffffffffffffff)
    sub_14175ce00()
    noreturn

int64_t rcx_2 = (arg1[2] - rax) s>> 4
uint64_t rdx_1 = rcx_2 u>> 1
int64_t rax_2

if (rcx_2 u<= 0xfffffffffffffff - rdx_1)
    rax_2 = rdx_1 + rcx_2
    
    if (rax_2 u< rsi_2 + 1)
        rax_2 = rsi_2 + 1
else
    rax_2 = rsi_2 + 1

int64_t r15_1 = rax_2 << 4
int64_t rdx_2 = r15_1
void* rbx_2

if (rax_2 u<= 0xfffffffffffffff)
    if (rdx_2 u>= 0x1000)
        goto label_14170205f
    
    if (rdx_2 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = j_sub_140a82f30(rdx_2)
    
    goto label_1417020a3

rdx_2 = -1
label_14170205f:
int64_t rcx_3 = rdx_2 + 0x27

if (rcx_3 u<= rdx_2)
    rcx_3 = -1

int64_t rax_3 = j_sub_140a82f30(rcx_3)

if (rax_3 != 0)
    rbx_2 = (rax_3 + 0x27) & 0xffffffffffffffe0
    *(rbx_2 - 8) = rax_3
label_1417020a3:
    void* rcx_5 = rbx_2
    void* result = ((arg2 - rax) & 0xfffffffffffffff0) + rbx_2
    *result = *arg3
    int64_t r8 = arg1[1]
    int64_t rdx_3 = *arg1
    uint32_t count
    
    if (arg2 != r8)
        memmove(rcx_5, rdx_3, arg2.d - rdx_3.d)
        rcx_5 = result + 0x10
        count = (arg1[1]).d - arg2.d
        rdx_3 = arg2
    else
        count = r8.d - rdx_3.d
    
    memmove(rcx_5, rdx_3, count)
    void* rcx_6 = *arg1
    
    if (rcx_6 == 0)
        goto label_141702126
    
    if (((arg1[2] - rcx_6) & 0xfffffffffffffff0) u< 0x1000)
        goto label_141702111
    
    void* r8_4 = *(rcx_6 - 8)
    
    if (rcx_6 - r8_4 - 8 u<= 0x1f)
        rcx_6 = r8_4
    label_141702111:
        j_sub_140a74f90(rcx_6)
    label_141702126:
        *arg1 = rbx_2
        arg1[1] = ((rsi_2 + 1) << 4) + rbx_2
        arg1[2] = r15_1 + rbx_2
        return result

_invalid_parameter_noinfo_noreturn()
noreturn
