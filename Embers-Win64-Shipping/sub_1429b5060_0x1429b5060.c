// 函数: sub_1429b5060
// 地址: 0x1429b5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t var_48 = -2
int64_t* r10 = *(arg1 + 0x18)
int32_t arg_10

if (*r10 != 0)
    arg_10 = 1
else
    int64_t rsi_1 = 0
    void* r14_1 = *(arg1 + 0x10)
    int32_t rdi_1 = *(r14_1 + 0xc8)
    int64_t r8_1 = 0
    int64_t r9_1 = 0
    
    if (rdi_1 s>= *(r10 + 0x24))
        rdi_1 = *(r10 + 0x24)
    
    int32_t rcx = *(r14_1 + 0xc4)
    int64_t i = sx.q(r10[4].d - rcx)
    int64_t rbx_1 = sx.q(rdi_1 - rcx)
    
    if (i s<= rbx_1)
        if (rbx_1 - i + 1 s>= 2)
            int64_t rdx_3 = *(r14_1 + 0xf0)
            
            do
                r8_1 += sx.q(*(rdx_3 + (i << 3)))
                r9_1 += sx.q(*(rdx_3 + (i << 3) + 8))
                i += 2
            while (i s<= rbx_1 - 1)
        
        if (i s<= rbx_1)
            rsi_1 = sx.q(*(*(r14_1 + 0xf0) + (i << 3)))
        
        rsi_1 += r9_1 + r8_1
    
    int64_t* rcx_1 = r10[5]
    arg_10 = 1
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1, r8_1, r9_1)
        r10 = *(arg1 + 0x18)
    
    int64_t rbx_2 = 0
    void* r9_2 = *(arg1 + 0x10)
    int32_t rcx_2 = *(r9_2 + 0xc4)
    int64_t r8_2 = sx.q(r10[4].d - rcx_2)
    int64_t rcx_3 = sx.q(rdi_1 - rcx_2)
    
    if (r8_2 s<= rcx_3)
        int64_t* rdx_4 = *(r9_2 + 0xf0) + (r8_2 << 3)
        int64_t i_2 = rcx_3 - r8_2 + 1
        int64_t i_1
        
        do
            int64_t rax_14 = rbx_2
            rbx_2 = *rdx_4
            
            if (rbx_2 u<= rax_14)
                rbx_2 = rax_14
            
            rdx_4 = &rdx_4[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(*(arg1 + 0x18) + 0x28) =
        sub_14298bdf0(*sub_14297ea20(r9_2 + 0x50), rbx_2, *(arg1 + 0x10) + 0x50)
    void* rax_17 = *(arg1 + 0x18)
    int64_t* rcx_8 = *(rax_17 + 0x28)
    
    if (rcx_8 == 0 || *(rax_17 + 0x10) u>= rsi_1)
        *(rax_17 + 0x30) = 1
        void** rcx_12 = *(arg1 + 0x18)
        *rcx_12 = rcx_12[1]
    else
        *(*(arg1 + 0x18) + 0x30) = (*(*rcx_8 + 0x10))(rcx_8)
        void* rdx_6 = *(arg1 + 0x18)
        int64_t* rcx_10 = *(rdx_6 + 0x28)
        *(*(arg1 + 0x18) + 0x10) = sx.q((*(*rcx_10 + 0x28))(rcx_10, *(rdx_6 + 8), 
            zx.q(*(rdx_6 + 0x10)), zx.q(*(rdx_6 + 0x20)), rdx_6))

void* rdi_3 = *(arg1 + 0x10)
int32_t rbx_3
int32_t r13_1

if (*(rdi_3 + 0xb8) != 0)
    rbx_3 = *(arg1 + 0x24)
    r13_1 = *(arg1 + 0x20) - 1
    arg_10 = 0xffffffff
else
    rbx_3 = *(arg1 + 0x20)
    r13_1 = *(arg1 + 0x24) + 1

while (rbx_3 != r13_1)
    uint64_t arg_18 = *(*(rdi_3 + 0x108) + (sx.q(rbx_3 - *(rdi_3 + 0xc4)) << 3)) + **(arg1 + 0x18)
    int32_t r14_2 = 0
    
    while (true)
        rdi_3 = *(arg1 + 0x10)
        int64_t rsi_2 = *(rdi_3 + 0x120)
        uint64_t rcx_14 = zx.q(r14_2)
        
        if (rcx_14 u>= (*(rdi_3 + 0x128) - rsi_2) s>> 3)
            break
        
        int32_t* rsi_3 = *(rsi_2 + (rcx_14 << 3))
        int32_t r8_6 = rsi_3[0xd]
        int32_t rcx_15
        
        if (rbx_3 s< 0)
            int32_t rax_32
            
            if (r8_6 s< 0)
                rax_32 = not.d(r8_6) - rbx_3
            else
                rax_32 = r8_6 - rbx_3 - 1
            
            rcx_15 = neg.d(divs.dp.d(sx.q(rax_32), r8_6))
        else
            rcx_15 = divs.dp.d(sx.q(rbx_3), r8_6)
        
        if (rbx_3 == rcx_15 * r8_6)
            if (*(rsi_3 + 0x39) == 0)
                int32_t r10_1 = *(rdi_3 + 0xc0)
                int64_t r11_2 = sx.q(*(rdi_3 + 0xbc))
                sub_1429a4050(&arg_18, *(rsi_3 + 8), 
                    *(rdi_3 + 0x178)
                        - ((sx.q(*(rdi_3 + 0xc4) * (r10_1 - r11_2.d + 1)) + r11_2) << 2), 
                    4, (r10_1 - r11_2.d + 1) << 2, rbx_3, r11_2.d, r10_1, 0, 0, 0, 0, 
                    *(rsi_3 + 0x28), *(rsi_3 + 0x18), *(rsi_3 + 0x20), rsi_3[0xe].b, 
                    *(rsi_3 + 0x40), *(*(arg1 + 0x18) + 0x30), *rsi_3, rsi_3[1])
            else
                sub_1429a6610(&arg_18, rsi_3[1], 
                    zx.q(*(*(rdi_3 + 0x188) + (sx.q(rbx_3 - *(rdi_3 + 0xc4)) << 2))))
                r14_2 += 1
                continue
        
        r14_2 += 1
    
    rbx_3 += arg_10
