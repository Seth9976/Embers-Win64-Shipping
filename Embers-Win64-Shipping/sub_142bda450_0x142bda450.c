// 函数: sub_142bda450
// 地址: 0x142bda450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0x20c49ba)
    int32_t rax_2
    rax_2.b = arg2 * 0x7d s< *(arg1 + 0x810) << 3
    *(arg1 + 0x820) = rax_2.b
else
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x10624dd3, *(arg1 + 0x810) << 3)
    int32_t rdx_1 = temp0_1 s>> 3
    uint32_t rax_1
    rax_1.b = arg2 s< rdx_1 + (rdx_1 u>> 0x1f)
    *(arg1 + 0x820) = rax_1.b

int32_t i

for (i = *(arg1 + 0x814); i s> 0; i -= 1)
    if (sub_142b93e80(i, arg2) s<= 0x20)
        break

int32_t i_2 = 0
*(arg1 + 0x818) = i
int32_t i_3 = 0

for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
    void* rax_6
    
    if (i_1 == 0)
        rax_6 = arg1
    else if (i_1 == 1)
        rax_6 = arg1 + 0x204
    else if (i_1 == 2)
        rax_6 = arg1 + 0x408
    else
        rax_6 = arg1 + 0x60c
    
    int32_t j_3 = *rax_6
    void* rbx = rax_6 + 4
    
    if (j_3 != 0)
        int32_t j
        
        do
            int32_t rax_7 = sub_142b93e80(*(rbx + 8), arg2)
            int32_t rcx_4 = *(rbx + 0xc)
            *(rbx + 0x1c) = rax_7 + arg3
            int32_t rax_9 = sub_142b93e80(rcx_4, arg2)
            int32_t rcx_5 = *rbx
            *(rbx + 0x18) = rax_9 + arg3
            int32_t rax_11 = sub_142b93e80(rcx_5, arg2)
            int32_t rcx_6 = *(rbx + 4)
            *(rbx + 0x10) = rax_11 + arg3
            *(rbx + 0x14) = sub_142b93e80(rcx_6, arg2)
            int32_t rax_14 = *(rbx + 0x10)
            rbx += 0x20
            *(rbx - 0x10) = (rax_14 + 0x20) & 0xffffffc0
            j = j_3
            j_3 -= 1
        while (j != 1)

uint64_t result

do
    void* const rcx_7
    
    if (i_2 == 0)
        result = arg1
        rcx_7 = 0x408
    else
        result = arg1 + 0x204
        rcx_7 = 0x60c
    
    int32_t j_2 = *result
    void* r12 = rcx_7 + arg1
    int32_t* rsi = result + 4
    
    if (j_2 != 0)
        int32_t j_1
        
        do
            int32_t k_1 = *r12
            void* rbx_1 = r12 + 4
            
            if (k_1 != 0)
                int32_t k
                
                do
                    int32_t rax_18 = *rsi - *rbx_1
                    int32_t rcx_9 = neg.d(rax_18)
                    
                    if (rax_18 s>= 0)
                        rcx_9 = rax_18
                    
                    result = sub_142b93e80(rcx_9, arg2)
                    
                    if (result.d s< 0x40)
                        rsi[7] = *(rbx_1 + 0x1c)
                        rsi[6] = *(rbx_1 + 0x18)
                        rsi[4] = *(rbx_1 + 0x10)
                        result = zx.q(*(rbx_1 + 0x14))
                        rsi[5] = result.d
                        break
                    
                    rbx_1 += 0x20
                    k = k_1
                    k_1 -= 1
                while (k != 1)
            
            rsi = &rsi[8]
            j_1 = j_2
            j_2 -= 1
        while (j_1 != 1)
    
    i_2 = i_3 + 1
    i_3 = i_2
while (i_2 u< 2)

return result
