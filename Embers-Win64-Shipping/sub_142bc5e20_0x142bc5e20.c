// 函数: sub_142bc5e20
// 地址: 0x142bc5e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)
int32_t result_2 = 0
int32_t result_1 = 0
int64_t rdx = *arg4

if (rdx != 0)
    sub_142b99980(arg3, rdx, arg3, 0)
    result_2 = result_1
    *arg4 = 0

if (rbx.d != 0)
    uint64_t rcx_1 = zx.q((rbx - 1).d)
    
    if (arg1[rcx_1] == 0)
        rbx = zx.q(rcx_1.d)

int32_t r8
r8.b = rbx.d != 0
int32_t i = 0

if (rbx.d != 0)
    char* rcx_2 = arg1
    
    do
        if (*rcx_2 - 0x20 u> 0x5f)
            goto label_142bc5ed5
        
        i += 1
        rcx_2 = &rcx_2[1]
    while (i u< rbx.d)

int32_t result

if (r8 == 0)
label_142bc5ed5:
    result = result_2
    *arg4 = 0
else
    int64_t rax_2 = sub_142b99860(arg3, (rbx + 1).d, &result_1)
    result = result_1
    
    if (result != 0)
        *arg4 = rax_2
    else
        memcpy(rax_2, arg1, rbx.d)
        *(rbx + rax_2) = 0
        result = result_1
        *arg4 = rax_2

return result
