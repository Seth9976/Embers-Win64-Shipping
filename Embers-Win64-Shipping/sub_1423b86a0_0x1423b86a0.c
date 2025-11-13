// 函数: sub_1423b86a0
// 地址: 0x1423b86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int32_t r9 = 0
int64_t r10 = *arg1
int32_t i = i_2

if (i_2 s<= 0)
    int32_t* rcx_5
    
    if (r9 s>= i_2)
    label_1423b873b:
        sub_142075310(arg1, r9, 1)
        rcx_5 = *arg1 + sx.q(r9) * 0xc
    else
    label_1423b871e:
        int64_t rbx_2 = sx.q(r9)
        rcx_5 = r10 + rbx_2 * 0xc
        int32_t rax_10 = *arg2
        int32_t rax_11 = rax_10 - *rcx_5
        
        if (rax_10 == *rcx_5)
            rax_11 = arg2[1] - rcx_5[1]
        
        if (rax_11 s< 0)
            sub_142075310(arg1, r9, 1)
            rcx_5 = *arg1 + rbx_2 * 0xc
    
    *rcx_5 = *arg2
    rcx_5[2] = 0
    return &rcx_5[2]

int32_t rbx_1 = *arg2

do
    int32_t rcx_1 = i & 0x80000001
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(i)
    int32_t i_1 = (temp3_1 - temp2_1) s>> 1
    i = i_1
    int32_t rax_4 = i_1 + r9
    int64_t rcx_4 = sx.q(rax_4) * 3
    int32_t rax_6 = *(r10 + (rcx_4 << 2))
    int32_t rax_7 = rax_6 - rbx_1
    
    if (rax_6 == rbx_1)
        rax_7 = *(r10 + (rcx_4 << 2) + 4) - arg2[1]
    
    if (rax_7 s< 0)
        r9 = rax_4 + rcx_1
while (i s> 0)

if (r9 s< 0 || r9 s>= i_2)
    goto label_1423b873b

goto label_1423b871e
