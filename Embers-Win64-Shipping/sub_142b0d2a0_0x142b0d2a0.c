// 函数: sub_142b0d2a0
// 地址: 0x142b0d2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
uint64_t result = __security_cookie ^ &var_a8
uint64_t result_1 = result
int64_t r10 = *(arg1 + 0x28)
char* r14 = *(arg1 + 0x20)
int32_t* r11 = arg2
int16_t* r12 = *(arg1 + 0x10)
void* rdx = *(arg1 + 8)
int64_t rcx = *(arg1 + 0x18)
void* var_60 = rdx
int64_t var_78 = r10
void* rbx = *(rdx + 0x10)
char rbp = *(rdx + 0x3f)
uint32_t rdi = *(rdx + 0x54)
int64_t var_58 = rcx
int32_t r9 = *(rbx + 0xa0)
int32_t var_84 = r9
char var_88 = rbp
void* var_68 = rbx

if (rdi != 0 && r14 u< r10)
    goto label_142b0d361

while (r12 u< rcx)
    if (r14 u>= r10)
        *r11 = 0xf
        goto label_142b0d5e9
    
    rdi = zx.d(*r12)
    r12 = &r12[1]
    result = zx.q(rdi) & 0xfffff800
    
    if (result.d == 0xd800)
        if (test_bit(rdi, 0xa))
            goto label_142b0d5d6
        
    label_142b0d361:
        
        if (r12 u>= rcx)
            goto label_142b0d5dd
        
        uint32_t rcx_1 = zx.d(*r12)
        result = zx.q(rcx_1) & 0xfffffc00
        
        if (result.d != 0xdc00)
        label_142b0d5d6:
            *r11 = 0xc
        label_142b0d5dd:
            *(rdx + 0x54) = rdi
        label_142b0d5e9:
            *(rbx + 0xa0) = r9
            *(arg1 + 0x10) = r12
            *(arg1 + 0x20) = r14
            __security_check_cookie(result_1 ^ &var_a8)
            return result
        
        *(rdx + 0x54) = 0
        r12 = &r12[1]
        rdi = ((rdi - 0xd7f7) << 0xa) + rcx_1
    
    int32_t rsi_1 = 0
    int32_t rax_3 = sub_142b0da70(rdi)
    char var_50[0x8]
    
    if (rax_3 != 0xffffffff && r9 != rax_3)
        r9 = rax_3
        var_84 = rax_3
        int64_t rdx_1 = sx.q(rax_3) * 5
        void* rcx_4 = rdx_1 + &data_1436698b0
        char i = *(rdx_1 + &data_1436698b0)
        
        if (i != 0)
            char* r8_1 = &var_50 - rcx_4
            
            do
                *(r8_1 + rcx_4) = i
                rcx_4 += 1
                i = *rcx_4
                rsi_1 += 1
            while (i != 0)
    
    int64_t r15_1 = sx.q(rsi_1)
    uint32_t var_80
    
    if (rax_3 == 0xffffffff)
        int32_t rbp_1 = 1
        
        for (int64_t i_1 = 1; i_1 s< 0xc; i_1 += 1)
            int32_t rax_5 = sub_142afc250(*(var_68 + (i_1 << 3)), rdi, &var_80, var_88)
            
            if (rax_5 s> 0)
                if (var_84 != rbp_1)
                    var_84 = rbp_1
                    void* rax_8 = &data_1436698b0 + sx.q(rbp_1) * 5
                    char j = *rax_8
                    
                    if (j != 0)
                        void* rcx_9 = &var_50[r15_1]
                        
                        do
                            *rcx_9 = j
                            rax_8 += 1
                            j = *rax_8
                            rcx_9 += 1
                            rsi_1 += 1
                        while (j != 0)
                
                uint64_t rdx_5 = zx.q(rax_5 - 1)
                
                if (rdx_5.d s>= 0)
                    uint32_t r9_3 = var_80
                    uint32_t rcx_10 = (rdx_5 << 3).d
                    void* r8_5 = &var_50[sx.q(rsi_1)]
                    rsi_1 = rsi_1 + 1 + rdx_5.d
                    int32_t temp1_1
                    
                    do
                        r8_5 += 1
                        uint8_t rax_11 = (r9_3 u>> rcx_10.b).b
                        rcx_10 -= 8
                        temp1_1 = rdx_5.d
                        rdx_5 = zx.q(rdx_5.d - 1)
                        *(r8_5 - 1) = rax_11
                    while (temp1_1 - 1 s>= 0)
                
                break
            
            rbp_1 += 1
        
        rbx = var_68
        rbp = var_88
        r11 = arg2
        r10 = var_78
    else if (rax_3 != 0)
        int32_t rax_12 = sub_142afc250(*(rbx + (sx.q(r9) << 3)), rdi, &var_80, rbp)
        
        if (rax_12 s> 0)
            uint64_t rdx_7 = zx.q(rax_12 - 1)
            
            if (rdx_7.d s>= 0)
                uint32_t r9_5 = var_80
                void* r8_7 = &var_50[r15_1]
                uint32_t rcx_13 = (rdx_7 << 3).d
                rsi_1 = rsi_1 + 1 + rdx_7.d
                int32_t temp0_1
                
                do
                    r8_7 += 1
                    uint8_t rax_14 = (r9_5 u>> rcx_13.b).b
                    rcx_13 -= 8
                    temp0_1 = rdx_7.d
                    rdx_7 = zx.q(rdx_7.d - 1)
                    *(r8_7 - 1) = rax_14
                while (temp0_1 - 1 s>= 0)
        
        r11 = arg2
        r10 = var_78
    else
        var_50[r15_1] = rdi.b
        rsi_1 += 1
    int32_t rdx_3 = 0
    int64_t r9_2 = sx.q(rsi_1)
    result = 0
    
    if (rsi_1 s> 0)
        while (r14 u< r10)
            rdx_3 += 1
            *r14 = var_50[result]
            result += 1
            r14 = &r14[1]
            
            if (result s>= r9_2)
                goto label_142b0d479
        
        *r11 = 0xf
        goto label_142b0d484
    
label_142b0d479:
    rcx = var_58
    
    if (*r11 != 0xf)
        rdx = var_60
    else
    label_142b0d484:
        rcx = var_58
        int64_t r8_4 = sx.q(rdx_3)
        rdx = var_60
        
        if (r8_4 s< r9_2)
            do
                void* rdx_4 = *(arg1 + 8)
                char rax_6 = var_50[r8_4]
                r8_4 += 1
                *(sx.q(*(rdx_4 + 0x5b)) + rdx_4 + 0x68) = rax_6
                result = *(arg1 + 8)
                *(result + 0x5b) += 1
            while (r8_4 s< r9_2)
            
            rcx = var_58
            rdx = var_60
    
    r9 = var_84

goto label_142b0d5e9
