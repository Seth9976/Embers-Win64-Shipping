// 函数: sub_1417f5350
// 地址: 0x1417f5350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1417f42b0(arg1 + 0x40 + sx.q(*(arg1 + 0x130)) * 0x90)
int64_t r10_3 = sx.q(*(arg1 + 0x130)) * 0x12
*(arg1 + (r10_3 << 3) + 0x10) = *arg2
*(arg1 + (r10_3 << 3) + 0x20) = arg2[1]
*(arg1 + (r10_3 << 3) + 0x30) = arg2[2]
sub_1417edb90(arg1, arg3)
int64_t rsi = 0
uint64_t var_58 = 0
int32_t var_50 = 0
sub_141f3bc80(arg3, 1, &var_58)
uint64_t rbx_1 = var_58
int64_t rcx_4 = rbx_1 + (sx.q(var_50) << 3)
uint64_t rdi_4 = (rcx_4 - rbx_1 + 7) u>> 3

if (rbx_1 u> rcx_4)
    rdi_4 = 0

if (rdi_4 != 0)
    do
        void* rdx_2 = *rbx_1
        
        if (rdx_2 != 0)
            sub_1417edb90(arg1, rdx_2)
        
        rbx_1 += 8
        rsi += 1
    while (rsi != rdi_4)
    
    rbx_1 = var_58

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

void* var_40 = arg1
*(arg1 + (sx.q(*(arg1 + 0x130)) + 1) * 0x90) = arg4
int64_t rcx_8 = sx.q(*(arg1 + 0x130)) * 0x12
*(arg1 + (rcx_8 << 3) + 0x98) += 1
int32_t rbx_2 = *(arg1 + 0x130)
*(arg1 + 0x130) = 1 - rbx_2
char rax_9 = sub_140a80f40()
int32_t result

if (rax_9 != 0)
    result = sub_1419a2d00()
    *(arg1 + 0x134) = rbx_2
else if (data_143f138f4 != rax_9)
label_1417f54bf:
    void var_38
    int64_t* rax_11 = sub_1417ee610(&var_38, nullptr, 0xff)
    *(*rax_11 + 0x10) = rbx_2.o
    void* rcx_11 = *rax_11
    int32_t r8_1 = rax_11[2].d
    int64_t* rdx_3 = rax_11[1]
    int64_t* rbx_3 = *(rcx_11 + 0x28)
    int64_t* arg_8 = rbx_3
    int32_t* rdi_5 = &rbx_3[9]
    
    if (rbx_3 != 0)
        *rdi_5 += 1
        rbx_3 = arg_8
    
    result = sub_1405e48c0(rcx_11, rdx_3, r8_1, 1)
    
    if (rbx_3 != 0)
        result = *rdi_5
        *rdi_5 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_8)
else if (data_143de5480 == rax_9)
    result = sub_1419a2d00()
    *(arg1 + 0x134) = rbx_2
else
    uint32_t rax_10
    rax_10.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_10.b == 0)
        goto label_1417f54bf
    
    result = sub_1419a2d00()
    *(arg1 + 0x134) = rbx_2

return result
