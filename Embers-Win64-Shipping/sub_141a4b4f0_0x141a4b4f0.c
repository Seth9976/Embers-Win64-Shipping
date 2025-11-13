// 函数: sub_141a4b4f0
// 地址: 0x141a4b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x18)
void* r10_3

if (arg3.d == 0xffffffff)
    r10_3 = r11
else
    r10_3 = ((sx.q(*(*(r11 + 0x20) + sx.q(arg3.d) * 0xc)) + sx.q((arg3 u>> 0x20).d)) << 5)
        + *(r11 + 0x30)

int64_t r14 = sx.q(*(r10_3 + 0x18))
int32_t r8_1 = 0
int64_t var_28

if (r14.d == 0xffffffff)
    var_28 = 0
    int32_t var_20_1 = 0
else
    int64_t rax_4 = *(r11 + 0x20)
    int64_t rcx_1 = r14 * 3
    var_28 = (sx.q(*(rax_4 + (rcx_1 << 2))) << 5) + *(r11 + 0x30)
    int32_t var_20 = *(rax_4 + (rcx_1 << 2) + 4)

uint128_t zmm0 = var_28.o
var_28.o = zmm0
int32_t i_3 = _mm_bsrli_si128(zmm0, 8).d

if (i_3 != 0)
    int32_t i = i_3
    uint64_t arg_8
    uint64_t arg_18
    
    if (arg5 == 0)
        if (i_3 s> 0)
            arg_8 = arg4
            
            do
                int32_t rcx_14 = i & 0x80000001
                
                if (rcx_14 s< 0)
                    rcx_14 = ((rcx_14 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_2 = (temp1_1 - temp0_1) s>> 1
                i = i_2
                int32_t rax_19 = i_2 + r8_1
                uint64_t rax_22 = *((sx.q(rax_19) << 5) + var_28 + 8)
                arg_18 = rax_22
                uint32_t rcx_17
                void* r10_5
                
                if (arg4.b == 2)
                label_141a4b70b:
                    rcx_17 = zx.d(rax_22.b)
                    r10_5 = &arg_18:4
                label_141a4b713:
                    
                    if (rcx_17.b != arg4.b || (rcx_17.b != 2 && *r10_5 != (arg4 u>> 0x20).d) || (
                            arg4.b == rax_22.b
                            && (arg4.b == 2 || (arg4 u>> 0x20).d == (rax_22 u>> 0x20).d)))
                        rax_22.b = 0
                    else
                        rax_22.b = 1
                else
                    char rdx_7
                    
                    if (rax_22.b != 2)
                        rcx_17 = (arg4 u>> 0x20).d
                        uint32_t rdx_9 = (rax_22 u>> 0x20).d
                        
                        if (rcx_17 s>= rdx_9)
                            if (rcx_17 s> rdx_9 || arg4.b != 0)
                                goto label_141a4b70b
                            
                            rcx_17.b = 0
                            r10_5 = &arg_8:4
                            goto label_141a4b713
                        
                        rcx_17 = zx.d(arg4.b)
                        r10_5 = &arg_8:4
                        rdx_7 = rax_22.b
                    else
                        rcx_17 = zx.d(arg4.b)
                        r10_5 = &arg_8:4
                        rdx_7 = rax_22.b
                    
                    if ((rcx_17.b == 2 || *r10_5 == (arg4 u>> 0x20).d) && (arg4.b != rdx_7
                            || (arg4.b != 2 && (arg4 u>> 0x20).d != (rax_22 u>> 0x20).d)))
                        rax_22.b = 1
                    else
                        rax_22.b = 0
                
                if (rax_22.b == 0)
                    r8_1 = rax_19 + rcx_14
            while (i s> 0)
        
        r8_1 -= 1
    else if (i_3 s> 0)
        arg_18 = arg4
        
        do
            int32_t rcx_3 = i & 0x80000001
            
            if (rcx_3 s< 0)
                rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i)
            int32_t i_1 = (temp3_1 - temp2_1) s>> 1
            i = i_1
            int32_t rax_12 = i_1 + r8_1
            uint64_t rax_15 = *((sx.q(rax_12) << 5) + var_28)
            arg_8 = rax_15
            char rdx_2
            
            if (rax_15.b == 2)
                rdx_2 = rax_15.b
            label_141a4b647:
                
                if (rdx_2 != arg4.b || (rdx_2 != 2 && (rax_15 u>> 0x20).d != (arg4 u>> 0x20).d))
                    rax_15.b = 1
                else
                    rax_15.b = 0
            else
                char rcx_6
                int32_t* r10_4
                
                if (arg4.b != 2)
                    uint32_t rcx_8 = (arg4 u>> 0x20).d
                    uint32_t rdx_4 = (rax_15 u>> 0x20).d
                    
                    if (rdx_4 s< rcx_8)
                        r10_4 = &arg_8:4
                        rcx_6 = rax_15.b
                    label_141a4b630:
                        rdx_2 = rax_15.b
                        
                        if (rcx_6 == 2)
                            goto label_141a4b647
                        
                        goto label_141a4b63b
                    
                    if (rdx_4 s> rcx_8 || rax_15.b != 1)
                        rcx_6 = arg4.b
                        goto label_141a4b624
                    
                    r10_4 = &arg_8:4
                label_141a4b63b:
                    rdx_2 = rax_15.b
                    
                    if (*r10_4 != (rax_15 u>> 0x20).d || (rdx_2 == arg4.b
                            && (rdx_2 == 2 || (rax_15 u>> 0x20).d == (arg4 u>> 0x20).d)))
                        rax_15.b = 0
                    else
                        rax_15.b = 1
                else
                    rcx_6 = arg4.b
                label_141a4b624:
                    r10_4 = &arg_18:4
                    
                    if (rcx_6 == rax_15.b)
                        goto label_141a4b630
                    
                    rax_15.b = 0
            
            if (rax_15.b != 0)
                r8_1 = rax_12 + rcx_3
        while (i s> 0)
    
    if (r8_1 s>= 0 && r8_1 s< i_3)
        *arg2 = r14.d
        arg2[1] = r8_1
        return arg2

*arg2 = -1
return arg2
