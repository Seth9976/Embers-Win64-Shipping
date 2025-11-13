// 函数: sub_142bbef80
// 地址: 0x142bbef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg3[6]
uint64_t r14 = zx.q(arg2)
int32_t result_1 = 0

if (arg7 u<= 2)
    arg1[1] = arg7
    int64_t rax_14
    void* const rdx_6
    
    if (arg7 != 0)
        if (arg7 == 1)
            if (r14.d u> 0xa6)
                goto label_142bbf0d6
            
            rax_14 = sub_142b99a90(r12, 2, 0, r14.d, 0, &result_1)
            *(arg1 + 8) = rax_14
            
            if (result_1 != 0)
                goto label_142bbf23d
            
            rdx_6 = &data_143686070
            goto label_142bbf208
        
        if (arg7 != 2 || r14.d u> 0x57)
            goto label_142bbf0d6
        
        rax_14 = sub_142b99a90(r12, 2, 0, r14.d, 0, &result_1)
        *(arg1 + 8) = rax_14
        
        if (result_1 != 0)
            goto label_142bbf23d
        
        rdx_6 = &data_1436861c0
        goto label_142bbf208
    
    int32_t result
    
    if (r14.d u> 0xe5)
    label_142bbf0d6:
        result_1 = 3
    label_142bbf23d:
        sub_142b99980(r12, *(arg1 + 8))
        int64_t rdx_9 = *(arg1 + 0x10)
        *(arg1 + 8) = 0
        sub_142b99980(r12, rdx_9)
        result = result_1
        __builtin_memset(arg1, 0, 0x18)
    else
        rax_14 = sub_142b99a90(r12, 2, 0, r14.d, 0, &result_1)
        *(arg1 + 8) = rax_14
        
        if (result_1 != 0)
            goto label_142bbf23d
        
        rdx_6 = &data_143685ea0
    label_142bbf208:
        memcpy(rax_14, rdx_6, r14.d * 2)
    label_142bbf21a:
        
        if (arg8 == 0)
            result = result_1
        else
            result = sub_142bbee10(arg1, r14.d, r12)
            result_1 = result
        
        if (result != 0)
            goto label_142bbf23d
    
    return result

int32_t rdx = arg4 + arg7
arg1[1] = rdx
int32_t result_2 = sub_142b97060(arg3, rdx, arg6)
result_1 = result_2

if (result_2 != 0)
    goto label_142bbf23d

*arg1 = zx.d(sub_142b96a20(arg3, &result_1, arg5))

if (result_1 != 0)
    goto label_142bbf23d

int64_t rbx_1 = 2
int16_t* rax_3
int512_t zmm0
rax_3, zmm0 = sub_142b99a90(r12, 2, 0, r14.d, 0, &result_1)
*(arg1 + 8) = rax_3

if (result_1 != 0)
    goto label_142bbf23d

*rax_3 = 0
uint32_t rax_4 = *arg1

if (rax_4 == 0)
    if (r14.d == 0)
        goto label_142bbf21a
    
    int32_t result_3 = sub_142b96500(arg3, ((r14 << 1) + -fffffffffffffffe).d)
    result_1 = result_3
    
    if (result_3 != 0)
        goto label_142bbf23d
    
    if (r14.d u> 1)
        uint64_t i_2 = zx.q((r14 - 1).d)
        uint64_t i
        
        do
            rbx_1 += 2
            *(rbx_1 + *(arg1 + 8) - 2) = sub_142b967c0(arg3)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    sub_142b96620(arg3)
    goto label_142bbf21a

if (rax_4 - 1 u> 1)
    goto label_142bbf0d6

int32_t i_1 = 1

if (r14.d u<= 1)
    goto label_142bbf21a

label_142bbf05c:
int16_t rbx_2 = sub_142b96f00(arg3, &result_1)

if (result_1 != 0)
    goto label_142bbf23d

int32_t* rdx_3 = &result_1
uint32_t r8

if (*arg1 != 2)
    r8 = zx.d(sub_142b96a20(arg3, rdx_3, zmm0))
else
    r8 = zx.d(sub_142b96f00(arg3, rdx_3))

if (result_1 != 0)
    goto label_142bbf23d

uint32_t rcx_5 = zx.d(rbx_2)

if (rcx_5 u> 0xffff - r8)
    r8 = 0xffff - rcx_5

int32_t rcx_6 = 0
uint64_t rdx_4 = zx.q(i_1) * 2

do
    if (rcx_6 u> r8)
        goto label_142bbf05c
    
    rcx_6 += 1
    i_1 += 1
    *(rdx_4 + *(arg1 + 8)) = rbx_2
    rdx_4 += 2
    rbx_2 += 1
while (i_1 u< r14.d)

goto label_142bbf21a
