// 函数: sub_141883e30
// 地址: 0x141883e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_18 = arg3
int32_t rax = *(arg1 + 0xb0)
void* rsi = nullptr
int32_t rcx = *arg3
int128_t* rbp = arg4
int32_t* r14 = arg3
int32_t r10 = rax - 1
int32_t r8 = rcx
int32_t r11 = *(arg1 + 0xb4)

if (rax s<= 0)
    r10 = 0

int32_t r9 = r11

if (rcx != r11)
    goto label_141883ff8

int32_t* rdi_1 = *(arg1 + 0xa0)
int32_t rbp_1 = *rdi_1
int32_t r15_1 = rdi_1[2]
int32_t r14_1 = rdi_1[3]
void* rdx_2

if ((rbp_1 | rdi_1[1] | r15_1 | r14_1) != 0 && r10 != 0)
    rdx_2 = &rdi_1[sx.q(r10) * 4]

uint64_t result

if ((rbp_1 | rdi_1[1] | r15_1 | r14_1) == 0 || r10 == 0 || ((*(rdx_2 + 4) ^ rdi_1[1])
        | (*(rdx_2 + 8) ^ r15_1) | (*(rdx_2 + 0xc) ^ r14_1) | (rbp_1 ^ *rdx_2)) != 0)
    r14 = arg_18
label_141883fe2:
    rbp = arg4
label_141883ff8:
    
    if (r8 != r9 || *(arg1 + 0xb0) s>= *(arg1 + 0x98))
        int64_t* rax_21 = *(arg1 + 0xa0)
        rax_21[1] = 0
        *rax_21 = 0
        *(arg1 + 0xb0) = 0
        *(arg1 + 0xb8) = 0
    
    result = sub_1405948a0(arg2)
    int64_t* rdi_3 = *(arg1 + 0x28)
    uint64_t result_1 = result
    
    if (rdi_3[1].d == *(rdi_3 + 0x34))
        goto label_14188412e
    
    void* r9_2 = rdi_3[8]
    void* r10_1 = &rdi_3[7]
    
    if (r9_2 != 0)
        r10_1 = r9_2
    
    result = zx.q(
        *(r10_1 + ((sx.q((result u>> 0x20).d * 0x17 + result_1.d) & (sx.q(rdi_3[9].d) - 1)) << 2)))
    
    if (result.d == 0xffffffff)
        goto label_14188412e
    
    int64_t r8_7 = *rdi_3
    
    while (true)
        int64_t rdx_10 = sx.q(result.d) * 0x60
        
        if (*(rdx_10 + r8_7) == result_1)
            break
        
        result = zx.q(*(rdx_10 + r8_7 + 0x58))
        
        if (result.d == 0xffffffff)
            goto label_14188412e
    
    if (result.d == 0xffffffff)
        goto label_14188412e
    
    sub_141888460(sub_140902e90(arg2), arg5)
    int64_t* r8_8 = *(arg1 + 0x38)
    *(r8_8 + 0x34)
    
    if (r8_8[1].d == *(r8_8 + 0x34))
    label_141884129:
        sub_141828360(*(arg1 + 0xe8), 1)
    label_14188412e:
        int64_t rcx_29 = sx.q(*(arg1 + 0xb0))
        
        if (rcx_29.d s> 0)
            *(arg1 + 0xb0) = (rcx_29 + 1).d
            result = (rcx_29 << 4) + *(arg1 + 0xa0)
            *(result + 8) = 0
            *result = 0
            *(arg1 + 0xb4) += 1
        
        result.b = 0
    else
        void* rcx_23 = r8_8[8]
        void* rdx_12 = &r8_8[7]
        int64_t r10_2 = sx.q(*arg5)
        
        if (rcx_23 != 0)
            rdx_12 = rcx_23
        
        result = zx.q(*(rdx_12 + (((sx.q(r8_8[9].d) - 1) & r10_2) << 2)))
        
        if (result.d == 0xffffffff)
            goto label_141884129
        
        int64_t r9_3 = *r8_8
        
        while (true)
            int64_t* rdx_13 = sx.q(result.d) * 0x70
            
            if (*(rdx_13 + r9_3) == *arg5 && *(rdx_13 + r9_3 + 8) == *(arg5 + 8)
                    && *(rdx_13 + r9_3 + 0x10) == arg5[1].d)
                break
            
            result = zx.q(*(rdx_13 + r9_3 + 0x68))
            
            if (result.d == 0xffffffff)
                goto label_141884129
        
        if (result.d == 0xffffffff)
            goto label_141884129
        
        int64_t* r8_10
        
        if (r8_8[1].d == *(r8_8 + 0x34))
        label_1418841e5:
            r8_10 = nullptr
        else
            void* rax_31 = r8_8[8]
            void* rdx_14 = &r8_8[7]
            
            if (rax_31 != 0)
                rdx_14 = rax_31
            
            int32_t rax_32 = *(rdx_14 + (((sx.q(r8_8[9].d) - 1) & r10_2) << 2))
            
            if (rax_32 == 0xffffffff)
            label_1418841e5_1:
                r8_10 = nullptr
            else
                while (true)
                    r8_10 = sx.q(rax_32) * 0x70 + r9_3
                    
                    if (*r8_10 == *arg5 && r8_10[1] == *(arg5 + 8) && r8_10[2].d == arg5[1].d)
                        break
                    
                    rax_32 = r8_10[0xd].d
                    
                    if (rax_32 == 0xffffffff)
                        goto label_1418841e5_2
                
                if (rax_32 == 0xffffffff)
                label_1418841e5_2:
                    r8_10 = nullptr
        
        *rbp = *r8_10[3]
        int64_t rcx_37 = sx.q(*(arg1 + 0xb0))
        *(arg1 + 0xb0) = (rcx_37 + 1).d
        *(*(arg1 + 0xa0) + rcx_37 * 0x10) = *rbp
        *(arg1 + 0xb4) = *r14 + 1
        result.b = 1
else
    if (*(arg1 + 0xb8) == 0)
        *(arg1 + 0xb8) = r10
        *(arg1 + 0xbc) = 1
    
    int32_t rax_9 = sub_141840b50(arg2)
    r14 = arg_18
    int32_t r8_3 = *r14 - 1 + rax_9
    int64_t r9_1 = **(arg1 + 0x10)
    
    if (*(sx.q(r8_3 - *(arg1 + 0xb8)) + r9_1) != *(sx.q(r8_3) + r9_1))
        *(arg1 + 0xb4) = 0
        r9 = 0
        r8 = *r14
        goto label_141883fe2
    
    *arg4 = *(*(arg1 + 0xa0) + sx.q(*(arg1 + 0xbc)) * 0x10)
    int32_t rax_18 = *(arg4 + 0xc) | *(arg4 + 8) | *(arg4 + 4) | *arg4
    int32_t rbp_2
    rbp_2.b = rax_18 != 0
    
    if (rax_18 != 0)
        int64_t* rdi_2 = *(arg1 + 0x30)
        sub_1418390c0(rdi_2, &arg_18, arg4)
        int64_t rax_19 = sx.q(arg_18.d)
        
        if (rax_19.d != 0xffffffff)
            rsi = rax_19 * 0x2c + *rdi_2
        
        *arg5 = *(rsi + 0x10)
        arg5[1].d = *(rsi + 0x20)
    
    *(arg1 + 0xbc) += 1
    result = zx.q(rbp_2.b)
    int32_t rcx_13 = *(arg1 + 0xbc)
    int32_t rdx_6 = rcx_13
    *(arg1 + 0xb4) += 1
    
    if (rcx_13 u> *(arg1 + 0xb8))
        rdx_6 = 1
    
    *(arg1 + 0xbc) = rdx_6

return result
