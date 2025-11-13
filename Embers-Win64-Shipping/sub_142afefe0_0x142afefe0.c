// 函数: sub_142afefe0
// 地址: 0x142afefe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = *(arg1 + 0x10)
int32_t rsi_2 = ((*(arg1 + 0x18) - rbx) s>> 1).d

if (rsi_2 == 0)
    return 

void* r15_1 = *(arg1 + 8)

if (*(r15_1 + 0x50) == 1)
    sub_142b6b510(r15_1, &data_143664a14, 2, arg1 + 0x20, *(arg1 + 0x28), arg1 + 0x30, 0xffffffff, 
        arg2)
    *(r15_1 + 0x50) = 0

void* rcx_2 = *(arg1 + 0x20)
void* arg_18 = rcx_2

if (rcx_2 u>= *(arg1 + 0x28))
    *arg2 = 0xf
    return 

int32_t r10_1 = 0
int32_t r11_1 = *(arg1 + 0x28)
int32_t* arg_20 = *(arg1 + 0x30)
int32_t r11_2 = r11_1 - rcx_2.d
uint32_t rdx = zx.d(*(r15_1 + 0x54))
char arg_8
char arg_9
int32_t rsi_3

if (rdx.w == 0)
label_142aff156:
    int32_t rax_17 = rsi_2 * 2
    int32_t r8_3 = r11_2 & 0xfffffffe
    
    if (rax_17 u<= r11_2)
        r8_3 = rax_17
    
    r11_2 -= r8_3
    uint64_t r8_4 = zx.q(r8_3 u>> 1)
    rsi_3 = rsi_2 - r8_4.d
    
    if (arg_20 == 0)
        if (r8_4.d == 0)
            goto label_142aff34c
        
        int32_t i
        
        do
            rdx = zx.d(*rbx)
            rbx = &rbx[1]
            
            if ((rdx & 0xfffff800) == 0xd800)
                if ((0x400 & rdx.w) != 0)
                    break
                
                if (r8_4.d u< 2)
                    break
                
                uint32_t r9_2 = zx.d(*rbx)
                
                if ((r9_2 & 0xfffffc00) != 0xdc00)
                    break
                
                rbx = &rbx[1]
                r8_4 = zx.q(r8_4.d - 1)
                *rcx_2 = (rdx.w u>> 8).b
                *(arg_18 + 1) = rdx.b
                *(arg_18 + 2) = (r9_2.w u>> 8).b
                *(arg_18 + 3) = r9_2.b
                rcx_2 = arg_18 + 4
            else
                *rcx_2 = (rdx.w u>> 8).b
                *(arg_18 + 1) = rdx.b
                rcx_2 = arg_18 + 2
            
            arg_18 = rcx_2
            i = r8_4.d
            r8_4 = zx.q(r8_4.d - 1)
        while (i != 1)
        goto label_142aff347
    
    if (r8_4.d != 0)
        int32_t i_1
        
        do
            rdx = zx.d(*rbx)
            rbx = &rbx[1]
            int32_t rax_35
            
            if ((rdx & 0xfffff800) == 0xd800)
                if ((0x400 & rdx.w) != 0)
                    break
                
                if (r8_4.d u< 2)
                    break
                
                uint32_t r9_3 = zx.d(*rbx)
                
                if ((r9_3 & 0xfffffc00) != 0xdc00)
                    break
                
                rbx = &rbx[1]
                r8_4 = zx.q(r8_4.d - 1)
                *rcx_2 = (rdx.w u>> 8).b
                *(arg_18 + 1) = rdx.b
                *(arg_18 + 2) = (r9_3.w u>> 8).b
                *(arg_18 + 3) = r9_3.b
                int32_t* rax_42 = arg_20
                arg_18 += 4
                *rax_42 = r10_1
                void* rax_44 = &arg_20[1]
                arg_20 = rax_44
                *rax_44 = r10_1
                void* rax_46 = &arg_20[1]
                arg_20 = rax_46
                *rax_46 = r10_1
                void* rax_48 = &arg_20[1]
                arg_20 = rax_48
                *rax_48 = r10_1
                rax_35 = 2
            else
                *rcx_2 = (rdx.w u>> 8).b
                *(arg_18 + 1) = rdx.b
                int32_t* rax_32 = arg_20
                arg_18 += 2
                *rax_32 = r10_1
                void* rax_34 = &arg_20[1]
                arg_20 = rax_34
                *rax_34 = r10_1
                rax_35 = 1
            
            arg_20 = &arg_20[1]
            r10_1 += rax_35
            rcx_2 = arg_18
            i_1 = r8_4.d
            r8_4 = zx.q(r8_4.d - 1)
        while (i_1 != 1)
    label_142aff347:
        
        if (r8_4.d != 0)
            r11_2 += (r8_4 << 1).d
            goto label_142aff38d
    
label_142aff34c:
    
    if (rsi_3 != 0 && r11_2 != 0)
        rdx = zx.d(*rbx)
        rbx = &rbx[1]
        
        if ((rdx & 0xfffff800) == 0xd800)
            goto label_142aff38d
        
        arg_9 = rdx.b
        rsi_3 = 2
        arg_8 = (rdx.w u>> 8).b
    label_142aff418:
        sub_142b6b510(r15_1, &arg_8, rsi_3, &arg_18, *(arg1 + 0x28), &arg_20, r10_1, arg2)
        rcx_2 = arg_18
        r11_2 = *(arg1 + 0x28) - rcx_2.d
else
    uint32_t r8_1 = zx.d(*rbx)
    
    if ((r8_1 & 0xfffffc00) == 0xdc00 && r11_2 u>= 4)
        rbx = &rbx[1]
        rsi_2 -= 1
        *rcx_2 = (rdx.w u>> 8).b
        r11_2 -= 4
        *(arg_18 + 1) = rdx.b
        *(arg_18 + 2) = (r8_1.w u>> 8).b
        *(arg_18 + 3) = r8_1.b
        arg_18 += 4
        int32_t* rax_10 = arg_20
        
        if (rax_10 != 0)
            *rax_10 = 0xffffffff
            int32_t* rax_12 = &arg_20[1]
            arg_20 = rax_12
            *rax_12 = 0xffffffff
            void* rax_14 = &arg_20[1]
            arg_20 = rax_14
            *rax_14 = 0xffffffff
            void* rax_16 = &arg_20[1]
            arg_20 = rax_16
            *rax_16 = 0xffffffff
            arg_20 = &arg_20[1]
        
        *(r15_1 + 0x54) = 0
        r10_1 = 1
        rcx_2 = arg_18
        goto label_142aff156
    
    rsi_3 = 0
label_142aff38d:
    
    if (rdx.w != 0)
        rsi_3 = 0
        
        if ((0x400 & rdx.w) != 0)
            *arg2 = 0xc
        else if (rbx u< *(arg1 + 0x18))
            uint32_t rcx_7 = zx.d(*rbx)
            
            if ((rcx_7 & 0xfffffc00) != 0xdc00)
                *arg2 = 0xc
            else
                arg_9 = rdx.b
                rbx = &rbx[1]
                arg_8 = (rdx.w u>> 8).b
                rsi_3 = 4
                char arg_b = rcx_7.b
                rdx = 0
                char arg_a = (rcx_7.w u>> 8).b
        
        *(r15_1 + 0x54) = zx.d(rdx.w)
        rcx_2 = arg_18
    
    if (rsi_3 != 0)
        goto label_142aff418

if (*arg2 s<= 0 && rbx u< *(arg1 + 0x18) && r11_2 == 0)
    *arg2 = 0xf

*(arg1 + 0x30) = arg_20
*(arg1 + 0x10) = rbx
*(arg1 + 0x20) = rcx_2
