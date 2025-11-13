// 函数: sub_141aca8a0
// 地址: 0x141aca8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg3
int128_t zmm6

if (sub_141ac5e40(arg1, arg3) != 0 && rbp != 0)
    zmm6 = sub_141de73e0(arg1 + 0x60, arg1 + 0x30, rbp)
    *(arg1 + 0x70) = *(rbp + 0x160)
    *(arg1 + 0x80) = *(rbp + 0x170)

int64_t rbx = sx.q(*(arg2 + 8))
int64_t rsi = sx.q(*(arg1 + 0x98))

if (rbx.d s> rsi.d)
    *(arg1 + 0x98) = rbx.d
    
    if (rbx.d s> *(arg1 + 0x9c))
        sub_1405a4d70(arg1 + 0x90)
    
    memset(*(arg1 + 0x90) + (rsi << 3), 0, sx.q(rbx.d - rsi.d) << 3)
    rbp = arg3
else if (rbx.d s< rsi.d && rbx.d != rsi.d)
    *(arg1 + 0x98) = rbx.d
    sub_1405c53d0(arg1 + 0x90)

int32_t i_2 = 0

if (rbx.d s> 0)
    int64_t r8_3 = 0
    
    do
        int64_t rcx_4 = sx.q(*(*(arg2 + 0x70) + (r8_3 << 2)))
        
        if (rcx_4.d != 0xffffffff)
            *(*(arg1 + 0x90) + (r8_3 << 3)) = *(*(arg1 + 0x60) + (rcx_4 << 3))
        
        r8_3 += 1
    while (r8_3 s< rbx)

int32_t rdx_4 = *(arg1 + 0x98)
*(arg1 + 0xa8) = 0

if (rdx_4 s> *(arg1 + 0xac))
    sub_1405c5570(arg1 + 0xa0, rdx_4)

int64_t r14 = sx.q(*(arg1 + 0x98))
int64_t rsi_1 = sx.q(*(arg1 + 0xa8))
int32_t rax_5 = (r14 + rsi_1).d
*(arg1 + 0xa8) = rax_5

if (rax_5 s> *(arg1 + 0xac))
    sub_1405a4d70(arg1 + 0xa0)

memset(*(arg1 + 0xa0) + (rsi_1 << 3), 0, r14 << 3)
uint64_t result = sub_141df0480(arg1 + 0x90, arg1 + 0xa0, arg1 + 0x40)
int64_t i_5 = sx.q(*(arg2 + 0xc8))
int32_t result_1 = 0
int64_t i_3 = i_5

if (i_5.d s> 0)
    int64_t rcx_10 = *(arg2 + 0xc0)
    int64_t i
    
    do
        bool cond:2_1 = *rcx_10 == 0xffff
        result = zx.q(result_1 + 1)
        rcx_10 += 2
        
        if (cond:2_1)
            result = zx.q(result_1)
        
        result_1 = result.d
        i = i_3
        i_3 -= 1
    while (i != 1)

*(arg1 + 0xb8) = 0

if (result_1 s> *(arg1 + 0xbc))
    result = sub_1405c5510(arg1 + 0xb0, result_1)

*(arg1 + 0xb8) = 0

if (*(arg1 + 0xbc) != result_1)
    result = sub_1405c5510(arg1 + 0xb0, result_1)

if (result_1 s> 0)
    uint64_t i_4 = zx.q(result_1)
    uint64_t i_1
    
    do
        int64_t rbx_2 = sx.q(*(arg1 + 0xb8))
        int32_t rax_7 = (rbx_2 + 1).d
        *(arg1 + 0xb8) = rax_7
        
        if (rax_7 s> *(arg1 + 0xbc))
            sub_1405daba0(arg1 + 0xb0)
        
        result = rbx_2 + *(arg1 + 0xb0)
        
        if (rbx_2 != neg.q(*(arg1 + 0xb0)))
            *result = 0xff
        
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (i_5.d s> 0)
    int16_t* rbx_3 = nullptr
    int128_t var_48_1 = zmm6
    int16_t* arg_10 = nullptr
    zmm6 = zx.o(0)
    
    do
        int16_t r14_1 = *(rbx_3 + *(arg2 + 0xc0))
        result = 0xffff
        
        if (r14_1 != 0xffff)
            result = sub_141e40de0(rbp, i_2.w)
            uint64_t result_2 = result
            
            if (result != 0)
                int64_t rdi_1 = sx.q(*(result + 0x10))
                int64_t rbp_3 = 0
                
                if (rdi_1 s>= 4)
                    char* r11_1 = zx.q(r14_1)
                    int64_t r8_7 = 0
                    int64_t j_2 = ((rdi_1 - 4) u>> 2) + 1
                    rbp_3 = j_2 << 2
                    int64_t j
                    
                    do
                        int64_t rdx_11 = *(result_2 + 8)
                        int32_t rax_10 = *(r8_7 + rdx_11 + 8)
                        int32_t rax_14
                        
                        if (rax_10 s>= 0)
                            rax_14 = *(r8_7 + rdx_11 + 0xc)
                        label_141acab41:
                            
                            if (rax_14 != 0xffffffff)
                                int64_t r9_1 = sx.q(rax_14)
                                int64_t rax_15 = *(arg1 + 0x90)
                                
                                if (not(zmm6.d f>= *(rax_15 + (r9_1 << 3) + 4)))
                                    r11_1[*(arg1 + 0xb0)] = *(rax_15 + (r9_1 << 3))
                                    rdx_11 = *(result_2 + 8)
                        else
                            int32_t rcx_15 = rax_10 * 2
                            
                            if ((rcx_15 & 0xfffffffe) != 0xfffffffe)
                                rax_14 = *(*(arg2 + 0x80) + (sx.q(rcx_15) s>> 1 << 2))
                                goto label_141acab41
                        int32_t rax_17 = *(r8_7 + rdx_11 + 0x18)
                        int32_t rax_21
                        
                        if (rax_17 s>= 0)
                            rax_21 = *(r8_7 + rdx_11 + 0x1c)
                        label_141acab92:
                            
                            if (rax_21 != 0xffffffff)
                                int64_t r9_2 = sx.q(rax_21)
                                int64_t rax_22 = *(arg1 + 0x90)
                                
                                if (not(zmm6.d f>= *(rax_22 + (r9_2 << 3) + 4)))
                                    r11_1[*(arg1 + 0xb0)] = *(rax_22 + (r9_2 << 3))
                                    rdx_11 = *(result_2 + 8)
                        else
                            int32_t rcx_19 = rax_17 * 2
                            
                            if ((rcx_19 & 0xfffffffe) != 0xfffffffe)
                                rax_21 = *(*(arg2 + 0x80) + (sx.q(rcx_19) s>> 1 << 2))
                                goto label_141acab92
                        int32_t rax_24 = *(r8_7 + rdx_11 + 0x28)
                        int32_t rax_28
                        
                        if (rax_24 s>= 0)
                            rax_28 = *(r8_7 + rdx_11 + 0x2c)
                        label_141acabe3:
                            
                            if (rax_28 != 0xffffffff)
                                int64_t r9_3 = sx.q(rax_28)
                                int64_t rax_29 = *(arg1 + 0x90)
                                
                                if (not(zmm6.d f>= *(rax_29 + (r9_3 << 3) + 4)))
                                    r11_1[*(arg1 + 0xb0)] = *(rax_29 + (r9_3 << 3))
                                    rdx_11 = *(result_2 + 8)
                        else
                            int32_t rcx_23 = rax_24 * 2
                            
                            if ((rcx_23 & 0xfffffffe) != 0xfffffffe)
                                rax_28 = *(*(arg2 + 0x80) + (sx.q(rcx_23) s>> 1 << 2))
                                goto label_141acabe3
                        int32_t rcx_27 = *(r8_7 + rdx_11 + 0x38)
                        
                        if (rcx_27 s>= 0)
                            result = zx.q(*(r8_7 + rdx_11 + 0x3c))
                        label_141acac33:
                            
                            if (result.d != 0xffffffff)
                                int64_t rdx_12 = sx.q(result.d)
                                result = *(arg1 + 0x90)
                                
                                if (not(zmm6.d f>= *(result + (rdx_12 << 3) + 4)))
                                    result = zx.q(*(result + (rdx_12 << 3)))
                                    r11_1[*(arg1 + 0xb0)] = result.b
                        else
                            int32_t rcx_28 = rcx_27 * 2
                            result = zx.q(rcx_28) & 0xfffffffe
                            
                            if (result.d != 0xfffffffe)
                                result = zx.q(*(*(arg2 + 0x80) + (sx.q(rcx_28) s>> 1 << 2)))
                                goto label_141acac33
                        
                        r8_7 += 0x40
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                    rbx_3 = arg_10
                
                if (rbp_3 s< rdi_1)
                    int64_t rdx_14 = rbp_3 << 4
                    int64_t j_3 = rdi_1 - rbp_3
                    int64_t j_1
                    
                    do
                        int64_t rax_33 = *(result_2 + 8)
                        int32_t rcx_32 = *(rdx_14 + rax_33 + 8)
                        
                        if (rcx_32 s>= 0)
                            result = zx.q(*(rdx_14 + rax_33 + 0xc))
                        label_141acaca5:
                            
                            if (result.d != 0xffffffff)
                                int64_t r8_8 = sx.q(result.d)
                                result = *(arg1 + 0x90)
                                
                                if (not(zmm6.d f>= *(result + (r8_8 << 3) + 4)))
                                    result = zx.q(*(result + (r8_8 << 3)))
                                    zx.q(r14_1)[*(arg1 + 0xb0)] = result.b
                        else
                            int32_t rcx_33 = rcx_32 * 2
                            result = zx.q(rcx_33) & 0xfffffffe
                            
                            if (result.d != 0xfffffffe)
                                result = zx.q(*(*(arg2 + 0x80) + (sx.q(rcx_33) s>> 1 << 2)))
                                goto label_141acaca5
                        
                        rdx_14 += 0x10
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
        
        rbp = arg3
        rbx_3 = &rbx_3[1]
        i_2 += 1
        arg_10 = rbx_3
    while (i_2 s< i_5.d)

return result
