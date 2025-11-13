// 函数: sub_1403ca010
// 地址: 0x1403ca010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *arg1
uint64_t result
result.b = *(arg1 + 0x11)

if (arg3 != 0 && result.b u< 9)
label_1403ca03f:
    int32_t rdi_10
    
    switch (zx.q(arg1[4].b))
        case 0
            if (result.b == 2 && i != 0)
                int32_t r14_1 = 0
                char* r15_1 = arg2
                
                do
                    uint64_t rax = zx.q(*r15_1)
                    uint64_t rbx_2 = zx.q(rax.d) & 0xffffffc0
                    uint64_t rdi_2 = zx.q(rax.d) & 0x30
                    uint64_t rbp_2 = zx.q(rax.d) & 0xc
                    uint64_t r13_2 = zx.q(rax.d) & 3
                    uint64_t rax_1 = rax u>> 6
                    uint8_t r12_2 = (*(arg3 + (rdi_2 u>> 4 | rdi_2 u>> 2 | (rdi_2 * 5))) u>> 2
                        & 0x30) | (*(arg3 + (rbx_2 u>> 2 | (rax_1 + rbx_2)) + (rax_1 << 2)) & 0xc0)
                    result.b = *(arg3 + ((rbp_2 * 5) | rbp_2 << 4 | rbp_2 u>> 2)) u>> 4
                    result.b &= 0xc
                    *r15_1 = *(arg3 + (r13_2 << 4 | r13_2 | r13_2 << 6) + (r13_2 << 2)) u>> 6
                        | result.b | r12_2
                    r15_1 = &r15_1[1]
                    r14_1 += 4
                while (r14_1 u< i)
                
                result.b = *(arg1 + 0x11)
            
            if (result.b == 4)
                if (i != 0)
                    result = 0
                    
                    do
                        uint64_t rcx_8 = zx.q(*arg2)
                        uint64_t rdi_16 = zx.q(rcx_8.d) & 0xf
                        *arg2 = *(arg3 + (rdi_16 << 4 | rdi_16)) u>> 4
                            | (*(arg3 + (rcx_8 u>> 4 | (zx.q(rcx_8.d) & 0xfffffff0))) & 0xf0)
                        arg2 = &arg2[1]
                        result = zx.q(result.d + 2)
                    while (result.d u< i)
            else if (result.b == 8)
                if (i != 0)
                    result = zx.q(i) & 3
                    
                    if (i - 1 u>= 3)
                        int32_t i_11 = result.d - i
                        int32_t i_1
                        
                        do
                            *arg2 = *(arg3 + zx.q(*arg2))
                            arg2[1] = *(arg3 + zx.q(arg2[1]))
                            arg2[2] = *(arg3 + zx.q(arg2[2]))
                            arg2[3] = *(arg3 + zx.q(arg2[3]))
                            arg2 = &arg2[4]
                            i_1 = i_11
                            i_11 += 4
                        while (i_1 != 0xfffffffc)
                    
                    if (result.d != 0)
                        result = 0
                        
                        do
                            arg2[result] = *(arg3 + zx.q(arg2[result]))
                            result += 1
                        while ((i & 3) != result.d)
            else if (result.b == 0x10 && i != 0)
                rdi_10 = i & 1
                
                if (i != 1)
                    result = zx.q(rdi_10 - i)
                    int32_t i_2
                    
                    do
                        int16_t rbx_8 =
                            *(*(arg4 + (sx.q(zx.d(arg2[1]) u>> arg5) << 3)) + (zx.q(*arg2) << 1))
                        *arg2 = rbx_8:1.b
                        arg2[1] = rbx_8.b
                        int16_t rbx_10 =
                            *(*(arg4 + (sx.q(zx.d(arg2[3]) u>> arg5) << 3)) + (zx.q(arg2[2]) << 1))
                        arg2[2] = rbx_10:1.b
                        arg2[3] = rbx_10.b
                        arg2 = &arg2[4]
                        i_2 = result.d
                        result = zx.q(result.d + 2)
                    while (i_2 != 0xfffffffe)
                
            label_1403ca44d:
                
                if (rdi_10 != 0)
                    result =
                        zx.q(*(*(arg4 + (sx.q(zx.d(arg2[1]) u>> arg5) << 3)) + (zx.q(*arg2) << 1)))
                    *arg2 = result:1.b
                    arg2[1] = result.b
        case 2
            if (result.b != 8)
                if (i != 0)
                    void* rdx = &arg2[5]
                    int32_t i_3
                    
                    do
                        int16_t rax_16 = *(*(arg4 + (sx.q(zx.d(*(rdx - 4)) u>> arg5) << 3))
                            + (zx.q(*(rdx - 5)) << 1))
                        *(rdx - 5) = rax_16:1.b
                        *(rdx - 4) = rax_16.b
                        int16_t rax_21 = *(*(arg4 + (sx.q(zx.d(*(rdx - 2)) u>> arg5) << 3))
                            + (zx.q(*(rdx - 3)) << 1))
                        *(rdx - 3) = rax_21:1.b
                        *(rdx - 2) = rax_21.b
                        result = zx.q(
                            *(*(arg4 + (sx.q(zx.d(*rdx) u>> arg5) << 3)) + (zx.q(*(rdx - 1)) << 1)))
                        *(rdx - 1) = result:1.b
                        *rdx = result.b
                        rdx += 6
                        i_3 = i
                        i -= 1
                    while (i_3 != 1)
            else if (i != 0)
                result = zx.q(i) & 1
                
                if (i != 1)
                    int32_t i_8 = result.d - i
                    int32_t i_4
                    
                    do
                        *arg2 = *(arg3 + zx.q(*arg2))
                        arg2[1] = *(arg3 + zx.q(arg2[1]))
                        arg2[2] = *(arg3 + zx.q(arg2[2]))
                        arg2[3] = *(arg3 + zx.q(arg2[3]))
                        arg2[4] = *(arg3 + zx.q(arg2[4]))
                        arg2[5] = *(arg3 + zx.q(arg2[5]))
                        arg2 = &arg2[6]
                        i_4 = i_8
                        i_8 += 2
                    while (i_4 != 0xfffffffe)
                
            label_1403ca34f:
                
                if (result.d != 0)
                    uint64_t rax_10
                    rax_10.b = *(arg3 + zx.q(*arg2))
                    *arg2 = rax_10.b
                    uint64_t rax_11
                    rax_11.b = *(arg3 + zx.q(arg2[1]))
                    arg2[1] = rax_11.b
                    result.b = *(arg3 + zx.q(arg2[2]))
                    arg2[2] = result.b
        case 4
            if (result.b != 8)
                if (i != 0)
                    rdi_10 = i & 1
                    
                    if (i != 1)
                        result = zx.q(rdi_10 - i)
                        int32_t i_5
                        
                        do
                            int16_t rbx_50 = *(*(arg4 + (sx.q(zx.d(arg2[1]) u>> arg5) << 3))
                                + (zx.q(*arg2) << 1))
                            *arg2 = rbx_50:1.b
                            arg2[1] = rbx_50.b
                            int16_t rbx_55 = *(*(arg4 + (sx.q(zx.d(arg2[5]) u>> arg5) << 3))
                                + (zx.q(arg2[4]) << 1))
                            arg2[4] = rbx_55:1.b
                            arg2[5] = rbx_55.b
                            arg2 = &arg2[8]
                            i_5 = result.d
                            result = zx.q(result.d + 2)
                        while (i_5 != 0xfffffffe)
                    
                    goto label_1403ca44d
            else if (i != 0)
                result = zx.q(i) & 3
                
                if (i - 1 u>= 3)
                    int32_t i_9 = result.d - i
                    int32_t i_6
                    
                    do
                        *arg2 = *(arg3 + zx.q(*arg2))
                        arg2[2] = *(arg3 + zx.q(arg2[2]))
                        arg2[4] = *(arg3 + zx.q(arg2[4]))
                        arg2[6] = *(arg3 + zx.q(arg2[6]))
                        arg2 = &arg2[8]
                        i_6 = i_9
                        i_9 += 4
                    while (i_6 != 0xfffffffc)
                
                if (result.d != 0)
                    result = 0
                    
                    do
                        arg2[result << 1] = *(arg3 + zx.q(arg2[result << 1]))
                        result += 1
                    while ((i & 3) != result.d)
        case 6
            if (result.b != 8)
                if (i != 0)
                    result = 0
                    
                    do
                        int16_t rbx_60 = *(
                            *(arg4 + (sx.q(zx.d(arg2[(result << 3) + 1]) u>> arg5) << 3))
                            + (zx.q(arg2[result << 3]) << 1))
                        arg2[result << 3] = rbx_60:1.b
                        arg2[(result << 3) + 1] = rbx_60.b
                        int16_t rbx_65 = *(
                            *(arg4 + (sx.q(zx.d(arg2[(result << 3) + 3]) u>> arg5) << 3))
                            + (zx.q(arg2[(result << 3) + 2]) << 1))
                        arg2[(result << 3) + 2] = rbx_65:1.b
                        arg2[(result << 3) + 3] = rbx_65.b
                        int16_t rbx_70 = *(
                            *(arg4 + (sx.q(zx.d(arg2[(result << 3) + 5]) u>> arg5) << 3))
                            + (zx.q(arg2[(result << 3) + 4]) << 1))
                        arg2[(result << 3) + 4] = rbx_70:1.b
                        arg2[(result << 3) + 5] = rbx_70.b
                        result += 1
                    while (i != result.d)
            else if (i != 0)
                result = zx.q(i) & 1
                
                if (i != 1)
                    int32_t i_10 = result.d - i
                    int32_t i_7
                    
                    do
                        *arg2 = *(arg3 + zx.q(*arg2))
                        arg2[1] = *(arg3 + zx.q(arg2[1]))
                        arg2[2] = *(arg3 + zx.q(arg2[2]))
                        arg2[4] = *(arg3 + zx.q(arg2[4]))
                        arg2[5] = *(arg3 + zx.q(arg2[5]))
                        arg2[6] = *(arg3 + zx.q(arg2[6]))
                        arg2 = &arg2[8]
                        i_7 = i_10
                        i_10 += 2
                    while (i_7 != 0xfffffffe)
                
                goto label_1403ca34f
else if (arg4 != 0 && result.b == 0x10)
    goto label_1403ca03f

return result
