// 函数: sub_142affa50
// 地址: 0x142affa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = *(arg1 + 0x10)
int32_t rsi_2 = ((*(arg1 + 0x18) - rbx) s>> 1).d

if (rsi_2 == 0)
    return 

void* r15_1 = *(arg1 + 8)

if (*(r15_1 + 0x50) == 1)
    sub_142b6b510(r15_1, &data_1436652ec, 2, arg1 + 0x20, *(arg1 + 0x28), arg1 + 0x30, 0xffffffff, 
        arg2)
    *(r15_1 + 0x50) = 0

char* rdx = *(arg1 + 0x20)
char* arg_18 = rdx

if (rdx u>= *(arg1 + 0x28))
    *arg2 = 0xf
    return 

int32_t r10_1 = 0
int32_t r11_1 = *(arg1 + 0x28)
int32_t* arg_20 = *(arg1 + 0x30)
int32_t r11_2 = r11_1 - rdx.d
uint32_t rax_4 = zx.d(*(r15_1 + 0x54))
char arg_8
char arg_9
int32_t rsi_3

if (rax_4.w == 0)
label_142affbc3:
    int32_t rcx_4 = rsi_2 * 2
    int32_t r8_3 = r11_2 & 0xfffffffe
    
    if (rcx_4 u<= r11_2)
        r8_3 = rcx_4
    
    r11_2 -= r8_3
    uint64_t r8_4 = zx.q(r8_3 u>> 1)
    rsi_3 = rsi_2 - r8_4.d
    
    if (arg_20 == 0)
        if (r8_4.d == 0)
            goto label_142affdae
        
        int32_t i
        
        do
            rax_4 = zx.d(*rbx)
            rbx = &rbx[1]
            
            if ((rax_4 & 0xfffff800) == 0xd800)
                if ((0x400 & rax_4.w) != 0)
                    break
                
                if (r8_4.d u< 2)
                    break
                
                uint32_t r9_2 = zx.d(*rbx)
                
                if ((r9_2 & 0xfffffc00) != 0xdc00)
                    break
                
                *rdx = rax_4.b
                rbx = &rbx[1]
                r8_4 = zx.q(r8_4.d - 1)
                arg_18[1] = (rax_4.w u>> 8).b
                arg_18[2] = r9_2.b
                r9_2.w u>>= 8
                arg_18[3] = r9_2.b
                rdx = &arg_18[4]
            else
                *rdx = rax_4.b
                arg_18[1] = (rax_4.w u>> 8).b
                rdx = &arg_18[2]
            
            arg_18 = rdx
            i = r8_4.d
            r8_4 = zx.q(r8_4.d - 1)
        while (i != 1)
        goto label_142affda9
    
    if (r8_4.d != 0)
        int32_t i_1
        
        do
            rax_4 = zx.d(*rbx)
            rbx = &rbx[1]
            int32_t rcx_19
            
            if ((rax_4 & 0xfffff800) == 0xd800)
                if ((0x400 & rax_4.w) != 0)
                    break
                
                if (r8_4.d u< 2)
                    break
                
                uint32_t r9_3 = zx.d(*rbx)
                
                if ((r9_3 & 0xfffffc00) != 0xdc00)
                    break
                
                *rdx = rax_4.b
                rbx = &rbx[1]
                r8_4 = zx.q(r8_4.d - 1)
                arg_18[1] = (rax_4.w u>> 8).b
                arg_18[2] = r9_3.b
                r9_3.w u>>= 8
                arg_18[3] = r9_3.b
                int32_t* rcx_25 = arg_20
                arg_18 = &arg_18[4]
                *rcx_25 = r10_1
                void* rcx_27 = &arg_20[1]
                arg_20 = rcx_27
                *rcx_27 = r10_1
                void* rcx_29 = &arg_20[1]
                arg_20 = rcx_29
                *rcx_29 = r10_1
                void* rcx_31 = &arg_20[1]
                arg_20 = rcx_31
                *rcx_31 = r10_1
                rcx_19 = 2
            else
                *rdx = rax_4.b
                arg_18[1] = (rax_4.w u>> 8).b
                int32_t* rcx_16 = arg_20
                arg_18 = &arg_18[2]
                *rcx_16 = r10_1
                void* rcx_18 = &arg_20[1]
                arg_20 = rcx_18
                *rcx_18 = r10_1
                rcx_19 = 1
            
            arg_20 = &arg_20[1]
            r10_1 += rcx_19
            rdx = arg_18
            i_1 = r8_4.d
            r8_4 = zx.q(r8_4.d - 1)
        while (i_1 != 1)
    label_142affda9:
        
        if (r8_4.d != 0)
            r11_2 += (r8_4 << 1).d
            goto label_142affdee
    
label_142affdae:
    
    if (rsi_3 != 0 && r11_2 != 0)
        rax_4 = zx.d(*rbx)
        rbx = &rbx[1]
        
        if ((rax_4 & 0xfffff800) == 0xd800)
            goto label_142affdee
        
        arg_8 = rax_4.b
        rsi_3 = 2
        rax_4.w u>>= 8
        arg_9 = rax_4.b
    label_142affe75:
        sub_142b6b510(r15_1, &arg_8, rsi_3, &arg_18, *(arg1 + 0x28), &arg_20, r10_1, arg2)
        rdx = arg_18
        r11_2 = *(arg1 + 0x28) - rdx.d
else
    uint32_t r8_1 = zx.d(*rbx)
    
    if ((r8_1 & 0xfffffc00) == 0xdc00 && r11_2 u>= 4)
        *rdx = rax_4.b
        rbx = &rbx[1]
        rsi_2 -= 1
        rax_4.w u>>= 8
        r11_2 -= 4
        arg_18[1] = rax_4.b
        arg_18[2] = r8_1.b
        r8_1.w u>>= 8
        arg_18[3] = r8_1.b
        arg_18 = &arg_18[4]
        int32_t* rax_7 = arg_20
        
        if (rax_7 != 0)
            *rax_7 = 0xffffffff
            int32_t* rax_9 = &arg_20[1]
            arg_20 = rax_9
            *rax_9 = 0xffffffff
            void* rax_11 = &arg_20[1]
            arg_20 = rax_11
            *rax_11 = 0xffffffff
            void* rax_13 = &arg_20[1]
            arg_20 = rax_13
            *rax_13 = 0xffffffff
            arg_20 = &arg_20[1]
        
        *(r15_1 + 0x54) = 0
        r10_1 = 1
        rdx = arg_18
        goto label_142affbc3
    
    rsi_3 = 0
label_142affdee:
    
    if (rax_4.w != 0)
        rsi_3 = 0
        
        if ((0x400 & rax_4.w) != 0)
            *arg2 = 0xc
        else if (rbx u< *(arg1 + 0x18))
            uint32_t rdx_7 = zx.d(*rbx)
            
            if ((rdx_7 & 0xfffffc00) != 0xdc00)
                *arg2 = 0xc
            else
                arg_8 = rax_4.b
                rbx = &rbx[1]
                rax_4.w u>>= 8
                rsi_3 = 4
                char arg_a = rdx_7.b
                rdx_7.w u>>= 8
                arg_9 = rax_4.b
                rax_4 = 0
                char arg_b = rdx_7.b
        
        *(r15_1 + 0x54) = zx.d(rax_4.w)
        rdx = arg_18
    
    if (rsi_3 != 0)
        goto label_142affe75

if (*arg2 s<= 0 && rbx u< *(arg1 + 0x18) && r11_2 == 0)
    *arg2 = 0xf

*(arg1 + 0x30) = arg_20
*(arg1 + 0x10) = rbx
*(arg1 + 0x20) = rdx
