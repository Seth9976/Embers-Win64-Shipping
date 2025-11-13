// 函数: sub_142ba43f0
// 地址: 0x142ba43f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t* rdi = arg1[6]
int32_t rbx = 0
int64_t r10 = sx.q(arg2)
void* rsi = &rdi[sx.q(*(arg1 + 0x2c))]
int32_t var_cc = 0
void* r11_1 = &arg1[7 + r10 * 0x113]
char* r8_1 = nullptr
char* var_c0 = nullptr
int64_t* var_b0 = rdi
int64_t var_98 = 0
uint32_t rcx_4 = *(arg1[0x22e] + 0x38) u/ 0xe
int64_t var_90
__builtin_memset(&var_90, 0, 0x38)
var_98.b = 0
int32_t rax_3 = *(r11_1 + 0x20)
int64_t var_68
var_68.d = 0x7d00

if (rax_3 s< 0)
    rax_3 = neg.d(rax_3)

*r11_1 = 0
void* i = arg1[4]
int32_t var_d0 = rax_3
void* rdx_3 = sx.q(*(arg1 + 0x1c)) * 0x30 + i

if (r10.d != 0)
    for (; i u< rdx_3; i += 0x30)
        *(i + 0x18) = sx.d(*(i + 0xe))
        *(i + 0x1c) = sx.d(*(i + 0xc))
else
    for (; i u< rdx_3; i += 0x30)
        *(i + 0x18) = sx.d(*(i + 0xc))
        *(i + 0x1c) = sx.d(*(i + 0xe))

if (rdi u< rsi)
    do
        int16_t* rbx_1 = *rdi
        int32_t r10_1 = 0x7d00
        int32_t r9_1 = -0x7d00
        int16_t arg_8 = 0
        int32_t var_e8_1 = 0x7d00
        int16_t arg_18 = 0
        int32_t rdx_4 = 0
        int16_t r15_1 = 0
        int16_t arg_20 = 0
        char* rdi_1 = nullptr
        int32_t r14_1 = 0x7d00
        int32_t var_e4_1 = 0xffff8300
        int32_t r11_2 = -0x7d00
        int32_t var_d8_1 = 0x7d00
        char rcx_5 = *(*(rbx_1 + 0x28) + 3)
        int32_t rbp_1 = 0x7d00
        int32_t var_d4_1 = 0xffff8300
        int32_t rsi_1 = -0x7d00
        int32_t rax_10 = sx.d(rcx_5)
        int32_t r12_1 = 0x7d00
        int32_t r13_1 = -0x7d00
        
        if (rcx_5 s< 0)
            rax_10 = neg.d(rax_10)
        
        if (rax_10 == rax_3)
            char rax_11 = *(rbx_1 + 3)
            rax_10 = sx.d(rax_11)
            
            if (rax_11 s< 0)
                rax_10 = neg.d(rax_10)
            
            if (rax_10 == rax_3)
                int16_t* rcx_7 = rbx_1
                
                do
                    rbx_1 = *(rbx_1 + 0x28)
                    char rax_12 = *(rbx_1 + 3)
                    rax_10 = sx.d(rax_12)
                    
                    if (rax_12 s< 0)
                        rax_10 = neg.d(rax_10)
                    
                    if (rax_10 != rax_3)
                        rbx_1 = *(rbx_1 + 0x20)
                        break
                while (rbx_1 != rcx_7)
        
        rax_10.b = 0
        int16_t* var_c8_1 = rbx_1
        char arg_10 = 0
        int16_t* rcx_8 = rbx_1
        
        while (true)
            if (rdx_4 == 0)
                goto label_142ba48eb
            
            int32_t rax_13 = *(rbx_1 + 0x18)
            
            if (rax_13 s< r10_1)
                r10_1 = rax_13
            
            if (rax_13 s> r9_1)
                r9_1 = rax_13
            
            int32_t rax_14 = *(rbx_1 + 0x1c)
            
            if (rax_14 s< r14_1)
                r14_1 = rax_14
                arg_8 = *rbx_1
                rcx_8 = var_c8_1
            
            if (rax_14 s> r11_2)
                r15_1 = *rbx_1
                r11_2 = rax_14
            
            if ((*rbx_1 & 3) == 0)
                if (rax_14 s< rbp_1)
                    rbp_1 = rax_14
                
                if (rax_14 s> rsi_1)
                    rsi_1 = rax_14
            
            if (sx.d(*(rbx_1 + 3)) != var_d0 || rbx_1 == rcx_8)
                void* rcx_10
                
                if (rdi_1 != 0)
                    rcx_10 = *(rdi_1 + 0x40)
                
                if (rdi_1 == 0 || *(r8_1 + 0x38) != rcx_10)
                    *(r8_1 + 0x40) = rbx_1
                    *(r8_1 + 2) = ((r9_1 + r10_1) s>> 1).w
                    *(r8_1 + 4) = ((r9_1 - r10_1) s>> 1).w
                    
                    if (((r15_1.b | arg_8.b) & 3) != 0 && rsi_1 - rbp_1 s< rcx_4)
                        *r8_1 |= 1
                    
                    *(r8_1 + 6) = r14_1.w
                    *(r8_1 + 8) = r11_2.w
                    rdi_1 = r8_1
                    r12_1 = r10_1
                    *(r8_1 + 0xa) = r11_2.w - *(r8_1 + 6)
                    r13_1 = r9_1
                    var_e8_1 = r14_1
                    var_e4_1 = r11_2
                    arg_18 = arg_8
                    arg_20 = r15_1
                    var_d8_1 = rbp_1
                    var_d4_1 = rsi_1
                else if (*(rcx_10 + 2) != rbx_1[1].b)
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(var_e4_1 - var_e8_1)
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(r11_2 - r14_1)
                    
                    if ((temp4_1 ^ temp3_1) - temp3_1 s<= (temp6_1 ^ temp5_1) - temp5_1)
                        *(r8_1 + 0x40) = rbx_1
                        
                        if (r12_1 s< r10_1)
                            r10_1 = r12_1
                        
                        if (r13_1 s> r9_1)
                            r9_1 = r13_1
                        
                        *(r8_1 + 2) = ((r9_1 + r10_1) s>> 1).w
                        *(r8_1 + 4) = ((r9_1 - r10_1) s>> 1).w
                        
                        if (((r15_1.b | arg_8.b) & 3) != 0 && rsi_1 - rbp_1 s< rcx_4)
                            *r8_1 |= 1
                        
                        *(r8_1 + 6) = r14_1.w
                        *(r8_1 + 8) = r11_2.w
                        r12_1 = r10_1
                        r13_1 = r9_1
                        *(r8_1 + 0xa) = r11_2.w - *(r8_1 + 6)
                        var_e8_1 = r14_1
                        *rdi_1 = *r8_1
                        var_e4_1 = r11_2
                        arg_18 = arg_8
                        arg_20 = r15_1
                        *(rdi_1 + 0x10) = *(r8_1 + 0x10)
                        var_d8_1 = rbp_1
                        var_d4_1 = rsi_1
                        *(rdi_1 + 0x20) = *(r8_1 + 0x20)
                        *(rdi_1 + 0x30) = *(r8_1 + 0x30)
                        *(rdi_1 + 0x40) = *(r8_1 + 0x40)
                        *r11_1 -= 1
                    else
                        *(rdi_1 + 0x40) = rbx_1
                        
                        if (r10_1 s< r12_1)
                            r12_1 = r10_1
                        
                        if (r9_1 s> r13_1)
                            r13_1 = r9_1
                        
                        *(rdi_1 + 2) = ((r12_1 + r13_1) s>> 1).w
                        *(rdi_1 + 4) = ((r13_1 - r12_1) s>> 1).w
                        *r11_1 -= 1
                else
                    if (r12_1 s< r10_1)
                        r10_1 = r12_1
                    
                    if (r13_1 s> r9_1)
                        r9_1 = r13_1
                    
                    int16_t rcx_11
                    
                    if (var_e8_1 s>= r14_1)
                        rcx_11 = arg_8
                    else
                        rcx_11 = arg_18
                        r14_1 = var_e8_1
                        arg_8 = rcx_11
                    
                    if (var_e4_1 s> r11_2)
                        r15_1 = arg_20
                        r11_2 = var_e4_1
                    
                    *(rdi_1 + 0x40) = rbx_1
                    
                    if (var_d8_1 s< rbp_1)
                        rbp_1 = var_d8_1
                    
                    if (var_d4_1 s> rsi_1)
                        rsi_1 = var_d4_1
                    
                    *(rdi_1 + 2) = ((r9_1 + r10_1) s>> 1).w
                    *(rdi_1 + 4) = ((r9_1 - r10_1) s>> 1).w
                    
                    if (((r15_1.b | rcx_11.b) & 3) == 0 || rsi_1 - rbp_1 s>= rcx_4)
                        *rdi_1 &= 0xfe
                    else
                        *rdi_1 |= 1
                    
                    *(rdi_1 + 6) = r14_1.w
                    *(rdi_1 + 8) = r11_2.w
                    *(rdi_1 + 0xa) = r11_2.w - r14_1.w
                    *r11_1 -= 1
                
                rcx_8 = var_c8_1
                rdx_4 = 0
                var_c0 = nullptr
                r8_1 = nullptr
                rax_10 = zx.d(arg_10)
            label_142ba48eb:
                
                if (rbx_1 == rcx_8)
                    if (rax_10.b != 0)
                        break
                    
                    arg_10 = 1
            
            if (rdx_4 == 0)
                char rax_62 = *(rbx_1 + 3)
                int32_t rcx_17 = sx.d(rax_62)
                int32_t rax_63 = rcx_17
                
                if (rax_62 s< 0)
                    rax_63 = neg.d(rax_63)
                
                if (rax_63 == rax_3 || rbx_1 == *(rbx_1 + 0x28))
                    var_d0 = rcx_17
                    int32_t rax_64 = sub_142b9ff60(r11_1, rax, &var_c0)
                    var_cc = rax_64
                    
                    if (rax_64 != 0)
                        return rax_64
                    
                    r8_1 = var_c0
                    *r8_1 = var_98.o
                    int64_t var_88
                    *(r8_1 + 0x10) = var_88.o
                    int64_t var_78
                    *(r8_1 + 0x20) = var_78.o
                    *(r8_1 + 0x30) = var_68.o
                    r8_1[1] = rcx_17.b
                    *(r8_1 + 0x38) = rbx_1
                    *(r8_1 + 0x40) = rbx_1
                    
                    if (rdi_1 != 0)
                        rdi_1 = &r8_1[-0x48]
                    
                    r15_1 = *rbx_1
                    r9_1 = *(rbx_1 + 0x18)
                    r10_1 = r9_1
                    r11_2 = *(rbx_1 + 0x1c)
                    r14_1 = r11_2
                    arg_8 = r15_1
                    
                    if ((r15_1.b & 3) == 0)
                        rsi_1 = r11_2
                        rbp_1 = r11_2
                    else
                        rbp_1 = 0x7d00
                        rsi_1 = -0x7d00
                    
                    rdx_4 = 1
                    
                    if (rbx_1 == *(rbx_1 + 0x28))
                        *(r8_1 + 2) = r9_1.w
                        
                        if ((*rbx_1 & 3) != 0)
                            *r8_1 |= 1
                        
                        *(r8_1 + 6) = rbx_1[0xe]
                        *(r8_1 + 8) = rbx_1[0xe]
                        *(r8_1 + 0xa) = 0
                        rdx_4 = 0
                        r8_1 = nullptr
                        var_c0 = nullptr
                
                rcx_8 = var_c8_1
            
            rbx_1 = *(rbx_1 + 0x20)
            rax_10 = zx.d(arg_10)
        
        rdi = &var_b0[1]
        var_b0 = rdi
    while (rdi u< rsi)
    
    rbx = var_cc

void* r8_3 = *(r11_1 + 8)
void* rdx_8 = r8_3 + sx.q(*r11_1) * 0x48

if (r8_3 u< rdx_8)
    int16_t* rcx_20 = r8_3 + 0xa
    int64_t i_2 = (rdx_8 - r8_3 - 1) u/ 0x48 + 1
    int64_t i_1
    
    do
        void* rax_69 = *(rcx_20 + 0x2e)
        void* r10_2 = *(rcx_20 + 0x36)
        int32_t r9_2 = *(rax_69 + 0x1c)
        int32_t r8_4 = *(r10_2 + 0x1c)
        int32_t rdx_12 = *(*(rax_69 + 0x28) + 0x1c)
        
        if (r9_2 s>= r8_4)
            if (rdx_12 s> r9_2)
                *rcx_20 += ((rdx_12 - r9_2) s>> 1).w
            
            int32_t rdx_18 = *(*(r10_2 + 0x20) + 0x1c)
            
            if (rdx_18 s< r8_4)
                *rcx_20 += ((r8_4 - rdx_18) s>> 1).w
        else
            if (rdx_12 s< r9_2)
                *rcx_20 += ((r9_2 - rdx_12) s>> 1).w
            
            int32_t rdx_13 = *(*(r10_2 + 0x20) + 0x1c)
            
            if (rdx_13 s> r8_4)
                *rcx_20 += ((rdx_13 - r8_4) s>> 1).w
        
        rcx_20 = &rcx_20[0x24]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return rbx
