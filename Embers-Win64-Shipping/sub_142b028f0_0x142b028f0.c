// 函数: sub_142b028f0
// 地址: 0x142b028f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x18)
int16_t* r14 = *(arg1 + 0x10)
char* rbx = *(arg1 + 0x20)
int64_t r13 = *(arg1 + 0x28)
void* rcx = *(arg1 + 8)
int32_t* arg_20 = *(arg1 + 0x30)
uint32_t arg_18 = 0
int64_t var_48 = rdx
void* rax_1 = *(rcx + 0x10)

if (*(rax_1 + 0x6c) == 1)
    return sub_142b047d0(arg1, arg2)

uint64_t rsi = zx.q(*(rcx + 0x54))
void* r10 = *(*(rax_1 + 0x50) + 0x30)
bool r12 = *(rcx + 0x50)
char arg_8 = *(rcx + 0x3f)
void* var_40 = r10

if (rsi.d != 0 && rbx u< r13)
label_142b02c01:
    
    if (r14 u>= rdx)
        *arg2 = 0
    else
        uint32_t rcx_17 = zx.d(*r14)
        
        if ((rcx_17 & 0xfffffc00) != 0xdc00)
        label_142b02cc9:
            *arg2 = 0xc
        else
            r14 = &r14[1]
            rsi = zx.q(((rsi.d - 0xd7f7) << 0xa) + rcx_17)
        label_142b02c2f:
            *arg2 = 0xa
    
    *(*(arg1 + 8) + 0x54) = rsi.d
else if (r14 u< rdx)
    while (true)
        uint32_t r9_1 = 0xffff
        arg_18 = 0xffff
        
        if (rbx u>= *(arg1 + 0x28))
            *arg2 = 0xf
            goto label_142b02d19
        
        rsi = zx.q(*r14)
        r14 = &r14[1]
        
        if (rsi.d u< 0x20 && (1 << rsi.b & 0x800c000) != 0)
            goto label_142b02cc9
        
        int64_t rdx_2 = *(r10 + 0x58)
        int32_t r8_1 =
            *(rdx_2 + (zx.q(zx.d(*(rdx_2 + (rsi u>> 0xa << 1))) + (rsi.d u>> 4 & 0x3f)) << 2))
        int32_t rdx_4 = rsi.d & 0xf
        uint32_t r11_1 = zx.d(*(*(r10 + 0xe8) + (zx.q((zx.d(r8_1.w) << 4) + rdx_4) << 1)))
        int32_t r10_1
        r10_1.b = r11_1 u> 0xff
        int32_t r10_2 = r10_1 + 1
        
        if (not(test_bit(r8_1, zx.d(rdx_4.b + 0x10))))
            char r8_2 = arg_8
            
            if ((r8_2 != 0 || (rsi - 0xe000).d u< 0x1900) && r11_1 != 0)
                r9_1 = r11_1
                arg_18 = r11_1
                r10_2 = neg.d(r10_2)
            else
                void* rcx_10 = *(var_40 + 0x120)
                
                if (rcx_10 == 0)
                    r10_2 = 0
                else
                    int32_t rax_14 = sub_142b6cc10(rcx_10, rsi.d, &arg_18, r8_2)
                    r9_1 = arg_18
                    r10_2 = rax_14
        else
            r9_1 = r11_1
            arg_18 = r11_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_2)
        int32_t rax_18 = (temp1_1 ^ temp0_1) - temp0_1
        
        if (rax_18 s> 2 || rax_18 == 0)
            arg_18 = 0xffff
        else
            bool cond:1_1
            
            if (rax_18 == 1)
                cond:1_1 = r9_1 u> 0x7f
            label_142b02aba:
                
                if (not(cond:1_1))
                    goto label_142b02ac0
                
                arg_18 = 0xffff
            else if (rax_18 != 2)
            label_142b02ac0:
                
                if (r9_1 != 0xffff)
                    bool rax_21 = r12
                    r12 = r9_1 u> 0xff
                    
                    if (rax_21 != r12)
                        *rbx = (r12 == 0) + 0xe
                        rbx = &rbx[1]
                        int32_t* rcx_11 = arg_20
                        
                        if (rcx_11 != 0)
                            *rcx_11 = ((r14 - *(arg1 + 0x10)) s>> 1).d - 1
                            arg_20 = &arg_20[1]
                        
                        r9_1 = arg_18
                    
                    if (r9_1 u<= 0xff)
                        if (rbx u>= r13)
                            void* rcx_13 = *(arg1 + 8)
                            *(sx.q(*(rcx_13 + 0x5b)) + rcx_13 + 0x68) = r9_1.b
                        label_142b02bbe:
                            void* rax_39 = *(arg1 + 8)
                            *(rax_39 + 0x5b) += 1
                            *arg2 = 0xf
                        else
                            *rbx = r9_1.b
                        label_142b02b1f:
                            int32_t* rcx_12 = arg_20
                            rbx = &rbx[1]
                            
                            if (rcx_12 != 0)
                                *rcx_12 = ((r14 - *(arg1 + 0x10)) s>> 1).d - 1
                                arg_20 = &arg_20[1]
                        
                        rdx = var_48
                        
                        if (r14 u>= rdx)
                            break
                        
                        r10 = var_40
                        continue
                    
                    if (rbx u>= r13)
                        void* rcx_15 = *(arg1 + 8)
                        *(sx.q(*(rcx_15 + 0x5b)) + rcx_15 + 0x68) = (r9_1 u>> 8).b - 0x80
                        void* rax_37 = *(arg1 + 8)
                        *(rax_37 + 0x5b) += 1
                    label_142b02baa:
                        void* rdx_7 = *(arg1 + 8)
                        *(sx.q(*(rdx_7 + 0x5b)) + rdx_7 + 0x68) = arg_18.b - 0x80
                        goto label_142b02bbe
                    
                    *rbx = (r9_1 u>> 8).b - 0x80
                    rbx = &rbx[1]
                    int32_t* rcx_14 = arg_20
                    
                    if (rcx_14 != 0)
                        *rcx_14 = ((r14 - *(arg1 + 0x10)) s>> 1).d - 1
                        arg_20 = &arg_20[1]
                    
                    if (rbx u>= r13)
                        goto label_142b02baa
                    
                    *rbx = arg_18.b - 0x80
                    goto label_142b02b1f
            else
                if (0x5e5f + r9_1.w u<= 0x5d5d)
                    cond:1_1 = r9_1.b + 0x5f u> 0x5d
                    goto label_142b02aba
                
                arg_18 = 0xffff
        
        rdx = var_48
        
        if ((rsi.d & 0xfffff800) != 0xd800)
            goto label_142b02c2f
        
        if (test_bit(rsi.d, 0xa))
            goto label_142b02cc9
        
        goto label_142b02c01

if (*arg2 s<= 0 && r12 != 0 && *(arg1 + 2) != 0 && r14 u>= rdx)
    void* r10_3 = *(arg1 + 8)
    
    if (*(r10_3 + 0x54) == 0)
        int64_t r8_4 = *(arg1 + 0x10)
        r12 = false
        int32_t rdx_10 = ((r14 - r8_4) s>> 1).d
        int32_t rdx_11
        
        if (rdx_10 s<= 0)
            rdx_11 = -1
        else
            rdx_11 = rdx_10 - 1
            
            if ((zx.d(*(r8_4 + (sx.q(rdx_11) << 1))) & 0xfffffc00) == 0xdc00 && (rdx_11 == 0
                    || (zx.d(*(r8_4 + (sx.q(rdx_11 - 1) << 1))) & 0xfffffc00) == 0xd800))
                rdx_11 -= 1
        
        arg_8.q = rbx
        sub_142b6b510(r10_3, &data_143665a70, 1, &arg_8, r13, &arg_20, rdx_11, arg2)
        rbx = arg_8.q

label_142b02d19:
void* result = *(arg1 + 8)
*(arg1 + 0x10) = r14
*(arg1 + 0x20) = rbx
*(result + 0x50) = sx.d(r12)
return result
