// 函数: sub_14291cd80
// 地址: 0x14291cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbx = arg3
int64_t* rdi = arg1

if (arg4 s<= 0)
    return 0

int64_t result = 0

if ((arg4 & 0xfffffffc) != 0)
    do
        int64_t rcx_1 = *arg2 + result
        int64_t r8_1 = *rbx + rcx_1
        *rdi = r8_1
        int64_t r9
        r9.b = rcx_1 u< result
        int64_t r9_1 = adc.q(r9, 0, r8_1 u< rcx_1)
        int64_t rcx_3 = arg2[1] + r9_1
        int64_t r8_3 = rbx[1] + rcx_3
        rdi[1] = r8_3
        int64_t r10
        r10.b = rcx_3 u< r9_1
        int64_t r10_1 = adc.q(r10, 0, r8_3 u< rcx_3)
        int64_t rcx_5 = arg2[2] + r10_1
        int64_t r8_5 = rbx[2] + rcx_5
        rdi[2] = r8_5
        int64_t r9_2
        r9_2.b = rcx_5 u< r10_1
        int64_t r9_3 = adc.q(r9_2, 0, r8_5 u< rcx_5)
        int64_t rcx_7 = arg2[3] + r9_3
        int64_t r8_7 = rbx[3] + rcx_7
        rdi[3] = r8_7
        int64_t r10_2
        r10_2.b = rcx_7 u< r9_3
        result = adc.q(r10_2, 0, r8_7 u< rcx_7)
        arg2 = &arg2[4]
        rbx = &rbx[4]
        rdi = &rdi[4]
        i_1 -= 4
    while ((i_1 & 0xfffffffc) != 0)

if (i_1 != 0)
    int64_t* rbx_1 = rbx - arg2
    int64_t rdi_1 = rdi - arg2
    int32_t i
    
    do
        int64_t rcx_8 = *arg2
        int64_t r8_8 = *(rbx_1 + arg2)
        arg2 = &arg2[1]
        int64_t rcx_9 = rcx_8 + result
        int64_t r8_9 = r8_8 + rcx_9
        *(rdi_1 + arg2 - 8) = r8_9
        int64_t rax_2
        rax_2.b = rcx_9 u< result
        result = adc.q(rax_2, 0, r8_9 u< rcx_9)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
