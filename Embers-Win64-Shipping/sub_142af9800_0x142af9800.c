// 函数: sub_142af9800
// 地址: 0x142af9800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_10 = *(arg1 + 8)
void* rsi = arg1
char* result_9 = *(arg1 + 0x20)
void* r15 = *(arg2 + 8)
int32_t rbp_1 = *(arg1 + 0x28) - result_9.d
char* i_1 = *(arg2 + 0x10)
void* result_3 = *(arg2 + 0x18)
char* result_1 = result_9
void* rax = *(result_10 + 0x30)
uint64_t result_12 = result_10
void* result_7 = result_3
int64_t rcx = *(rax + 0x58)
int64_t r13

if ((*(result_10 + 0x38) & 0x10) == 0)
    r13 = *(rax + 0xe8)
else
    r13 = *(rax + 0xf0)

int32_t result_2 = *(rax + 0x104)
int32_t r11 = 0x800
char result_5 = *(r15 + 0x40)

if (*(result_10 + 0x3f) == 0)
    r11.w = 0xc00

char rax_1 = *(rax + 0xfd) & 1
int32_t arg_20 = r11
uint64_t rdi
uint32_t r8

if (result_5 s<= 0)
    rdi.b = 0
    result_5 = 0
    r8 = 0
else
    rdi = zx.q(*(r15 + 0x4c))
    r8 = *(r15 + 0x48)

uint64_t result = zx.q(sx.d(rdi.b))
int32_t rcx_5 = sx.d(result_5) - result.d - i_1.d + result_3.d

if (rcx_5 s> 0)
    result = result_3 - 1
    char rdx = *(result_3 - 1)
    
    if (rdx s>= 0)
        result_3 = result_7
    else if (rdx s>= 0xc0 || rcx_5 s< 2)
        void* result_11 = result_7
        result_3 = result_7
        
        if (rdx + 0x3e u<= 0x2d)
            result_3 = result
        
        result_7 = result_3
    else
        uint32_t rsi_1 = zx.d(*(result_7 - 2))
        result = zx.q(rsi_1 + 0x20)
        
        if (result.b u> 0xf)
            rsi = arg1
            r11 = arg_20
            result_3 = result_7
        else
            rsi = arg1
            result = zx.q(sx.d(*((zx.q(rsi_1.b) & 0xf) + " 000000000000")))
            
            if (not(test_bit(result.d, zx.d(rdx u>> 5))))
                r11 = arg_20
                result_3 = result_7
            else
                result_3 = result_7 - 2
                r11 = arg_20
                result_7 = result_3

int32_t r12 = 1

if (r8 == 0 || rbp_1 s<= 0)
    rdi = arg3
    goto label_142af99bb

*(r15 + 0x48) = 0
result_10 = zx.q(result_5)
*(r15 + 0x40) = 0
result_9 = result_1
label_142af9aed:
bool cond:4_1 = result_5 != rdi.b

if (result_5 s>= rdi.b)
label_142af9b8c:
    
    if (cond:4_1)
        void* rbx_1 = i_1 - sx.q(sx.d(result_5) - sx.d(result_10.b))
        
        if (result_10.b s< result_5)
            void* rcx_36 = r15 + 0x41 + sx.q(result_10.b)
            uint64_t i_4 = zx.q(result_5 - result_10.b)
            uint64_t i
            
            do
                char rax_39 = *rbx_1
                rbx_1 += 1
                *rcx_36 = rax_39
                rcx_36 += 1
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        *(r15 + 0x40) = result_5
        char* result_8 = result_1
        *(arg2 + 0x10) = rbx_1
        *(arg1 + 0x20) = result_8
        result = arg3
        *result = 0xc
    else
        result = sx.q(result_5)
        uint32_t r8_1 = r8 - *((result << 2) + 0x143663d10)
        int16_t rcx_10
        
        if (result_5 s<= 3 || rax_1 != 0)
            uint64_t rcx_22 = zx.q(zx.d(*
                (rcx + (zx.q(zx.d(*(rcx + (sx.q(r8_1) s>> 0xa << 1))) + (r8_1 s>> 4 & 0x3f)) << 1)))
                + (r8_1 & 0xf))
            result = zx.q(rcx_22.d)
            rcx_10 = *(r13 + (rcx_22 << 1))
        else
            rcx_10 = 0
        
        result_10 = result_12
        r11 = arg_20
    label_142af9bf8:
        rsi = arg1
        rdi = arg3
        
        if (rcx_10 u>= r11.w)
            *result_9 = rcx_10.b
            
            while (true)
                result_3 = result_7
                result_9 = &result_1[1]
                result_1 = result_9
                rbp_1 -= 1
            label_142af99bb:
                
                if (i_1 u>= result_3)
                    break
                
                if (rbp_1 s<= 0)
                    *rdi = 0xf
                    goto label_142af9e38
                
                result_3 = zx.q(*i_1)
                i_1 = &i_1[1]
                
                if (result_3.b s< 0)
                    uint64_t rcx_11
                    uint64_t r8_3
                    char result_6
                    
                    if (result_3.b u>= 0xe0)
                        if (result_3.b == 0xe0)
                            char rcx_12 = *i_1 - 0x80
                            
                            if (rcx_12 - 0x20 u<= 0x1f)
                                result_6 = i_1[1] - 0x80
                                
                                if (result_6 u<= 0x3f)
                                    r8_3 = zx.q(rcx_12)
                                    i_1 = &i_1[2]
                                    result = zx.q(result_6)
                                    rcx_11 = zx.q(*(rax + 0x68 + (r8_3 << 1)))
                                    goto label_142af9a9c
                    else if (result_3.b u>= 0xc2)
                        result_6 = *i_1 - 0x80
                        
                        if (result_6 u<= 0x3f)
                            r11 = arg_20
                            r8_3 = zx.q(result_3.b) & 0x1f
                            i_1 = &i_1[1]
                            rcx_11 = zx.q(*(rax + 0x68 + (r8_3 << 1)))
                            result = zx.q(result_6)
                        label_142af9a9c:
                            rcx_10 = *(r13 + ((rcx_11 + result) << 1))
                            
                            if (rcx_10 u< r11.w)
                                result = zx.q(result_6)
                                r8_1 = r8_3.d << 6 | result.d
                                
                                if (r8_1 s>= 0)
                                    goto label_142af9bf8
                            else
                                *result_9 = rcx_10.b
                                continue
                    result_10.b = 0
                    result_5 = 1
                    
                    if ((result_3 + 0x3e).b u> 0x32)
                        rdi.b = 0
                    else
                        rdi.b = result_3.b u>= 0xf0
                        rdi.b += (result_3.b u>= 0xe0) + 2
                    
                    r8 = zx.d(result_3.b)
                    goto label_142af9aed
                
                r8_1 = zx.d(result_3.b)
                result = zx.q(result_2)
                
                if (not(test_bit(result.d, zx.d((r8_1 u>> 2).b))))
                    result = zx.q(zx.d(*(rax + 0x68)) + r8_1)
                    rcx_10 = *(r13 + (result << 1))
                    goto label_142af9bf8
                
                *result_9 = result_3.b
            
            goto label_142af9d24
        
        char rax_27 = *(rsi + 2)
        void* const var_58 = &data_1436640e8
        result = sub_142afa850(result_10, *(result_10 + 0x30), r8_1, &var_58, &data_1436640e8, 
            &result_1, &result_9[sx.q(rbp_1)], nullptr, 0xffffffff, rax_27, rdi)
        
        if (*rdi s> 0)
            *(result_10 + 0x54) = result.d
            result_9 = result_1
        label_142af9d24:
            
            if (*rdi s<= 0)
                goto label_142af9d35
            
        label_142af9e38:
            *(arg2 + 0x10) = i_1
            *(rsi + 0x20) = result_9
        else
            result_9 = result_1
            
            if (*(result_10 + 0xd0) s< 0)
                r11 = arg_20
                rbp_1 = *(rsi + 0x28) - result_9.d
                result_3 = result_7
                goto label_142af99bb
            
            *rdi = 0xffffff81
        label_142af9d35:
            
            if (*(result_10 + 0xd0) s< 0)
                int64_t r10 = *(arg2 + 0x18)
                
                if (i_1 u< r10)
                    uint32_t rcx_31 = zx.d(*i_1)
                    char result_4 = 1
                    i_1 = &i_1[1]
                    *(r15 + 0x41) = rcx_31.b
                    uint32_t rdx_3 = rcx_31
                    
                    if (rcx_31.b s< 0)
                        result = zx.q(rcx_31 + 0x3e)
                        r12 = 0
                        
                        if (result.b u<= 0x32)
                            r12.b = rcx_31.b u>= 0xf0
                            result = zx.q(sbb.d(result.d, result.d, rcx_31.b u< 0xe0) + 3)
                            r12 += result.d
                    
                    while (i_1 u< r10)
                        uint32_t rcx_32 = zx.d(*i_1)
                        i_1 = &i_1[1]
                        result = sx.q(result_4)
                        result_4 += 1
                        rdx_3 = (rdx_3 << 6) + rcx_32
                        *(result + r15 + 0x41) = rcx_32.b
                    
                    *(r15 + 0x48) = rdx_3
                    *(r15 + 0x40) = result_4
                    *(r15 + 0x4c) = r12
                    result_9 = result_1
            
            *(arg2 + 0x10) = i_1
            *(rsi + 0x20) = result_9
else
    while (i_1 u< *(arg2 + 0x18))
        char r11_4 = *i_1
        int32_t rax_14 = sx.d(rdi.b)
        
        if (rax_14 s<= 2 || result_5 s> 1)
            result_3.b = r11_4 s< 0xc0
        else if (rax_14 != 3)
            result_3.b = 1 << (r8.b & 7)
            result_3.b &= *((zx.q(r11_4) u>> 4) + 0x14363c6e8)
        else
            result_3.b = 1 << r11_4 u>> 5
            result_3.b &= *((zx.q(r8) & 0xf) + " 000000000000")
        
        if (result_3.b != 0)
            i_1 = &i_1[1]
            result_5 += 1
            r8 = (r8 << 6) + zx.d(r11_4)
            
            if (result_5 s< rdi.b)
                continue
        
        cond:4_1 = result_5 != rdi.b
        goto label_142af9b8c
    
    void* rbx = i_1 - sx.q(sx.d(result_5) - sx.d(result_10.b))
    
    if (result_10.b s< result_5)
        void* rcx_29 = r15 + 0x41 + sx.q(result_10.b)
        uint64_t i_3 = zx.q(result_5 - result_10.b)
        uint64_t i_2
        
        do
            char rax_32 = *rbx
            rbx += 1
            *rcx_29 = rax_32
            rcx_29 += 1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    *(r15 + 0x48) = r8
    *(r15 + 0x40) = result_5
    *(r15 + 0x4c) = sx.d(rdi.b)
    result = result_1
    *(arg2 + 0x10) = rbx
    *(arg1 + 0x20) = result

return result
