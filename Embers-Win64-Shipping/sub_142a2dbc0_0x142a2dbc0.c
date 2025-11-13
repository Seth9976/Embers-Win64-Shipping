// 函数: sub_142a2dbc0
// 地址: 0x142a2dbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[9] != 0)
    arg2[3] = 1
    int32_t rax = arg2[3]
    arg2[2] = 1
    int32_t rax_1 = rax + arg2[2]
    arg2[1] = 1
    int32_t rax_2 = rax_1 + arg2[1]
    *arg2 = 1
    return zx.q(rax_2 + *arg2)

char rax_4 = *arg1

if (rax_4 != 9)
    int32_t r8
    
    if (rax_4 u<= 4)
        r8 = 0
    else
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(*(arg1 + 4))
        
        if ((temp1_1 ^ temp0_1) - temp0_1 s> 2)
            r8 = 0
        else
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(*(arg1 + 6))
            
            if ((temp3_1 ^ temp2_1) - temp2_1 s> 2)
                r8 = 0
            else
                r8 = 1
    
    arg2[3] = r8
    arg2[2] = r8
    arg2[1] = r8
    *arg2 = r8
    return zx.q(r8 * 4)

void* rbx = &data_143cc7170 - arg2
int32_t* rdi = arg2
int64_t i_1 = 4
int64_t i

do
    int32_t r10_1 = 1
    *rdi = 1
    int32_t rdx = 0
    int32_t* rax_5 = arg2
    
    while (*rax_5 != 0)
        int64_t rcx = sx.q(*(rbx + rax_5))
        int32_t rcx_1
        
        if (*(arg1 + (rcx << 2) + 0xc) s> 2 || *(arg1 + (rcx << 2) + 0xe) s> 2)
            rcx_1 = 0
        else
            rcx_1 = 1
        
        r10_1 &= rcx_1
        rdx += 1
        rax_5 = &rax_5[1]
        *rdi = r10_1
        
        if (rdx s>= 4)
            break
    
    rdi = &rdi[1]
    rbx += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return zx.q(arg2[3] + arg2[2] + arg2[1] + *arg2)
