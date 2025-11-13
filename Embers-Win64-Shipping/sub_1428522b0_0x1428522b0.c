// 函数: sub_1428522b0
// 地址: 0x1428522b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = 0x38
__chkstk(0x38)
void* rdx = *(arg1 + 0x488)
int32_t* rsi_1 = *(arg1 + 0xa8) + 0x310

if (rdx != 0)
    int32_t rax = 1
    int32_t r12_1
    
    if (*(rdx + 8) == 0 && *(rdx + 0x10) == 0)
        r12_1 = 0
    
    if (*(rdx + 8) != 0 || *(rdx + 0x10) != 0 || *(rdx + 0x18) != 0)
        r12_1 = 1
    
    int32_t r8_1 = 0x10
    int32_t rbx_2 = *rsi_1 & 1
    int32_t r9_1
    int32_t r10_1
    
    if (*(rdx + 0x110) == 0 || *(rdx + 0x118) == 0)
        r9_1 = 0
        r10_1 = 0
    else
        r9_1 = 0x80
        r10_1 = 0x10
    
    int32_t rcx
    
    if (*(rdx + 0xe8) != 0)
        rcx = 1
    
    if (*(rdx + 0xe8) == 0 || *(rdx + 0xf0) == 0)
        rcx = 0
    
    int32_t r11_1 = 0x80
    int32_t rbp_1 = 0x10
    
    if (rcx == 0)
        r11_1 = r9_1
    
    if (rcx == 0)
        rbp_1 = r10_1
    
    if (*(rdx + 0xc0) == 0 || *(rdx + 0xc8) == 0)
        rax = 0
    
    int32_t r9_3 = r11_1 | 0x20
    
    if (rax == 0)
        r8_1 = rbp_1
    
    if (rax == 0)
        r9_3 = r11_1
    
    int32_t rax_2 = r8_1 | 1
    
    if (rbx_2 == 0)
        rax_2 = r8_1
    
    int32_t rbp_3 = rax_2 | 2
    
    if (r12_1 == 0)
        rbp_3 = rax_2
    
    int32_t r8_2
    
    if (rbx_2 != 0)
        r8_2 = r9_3 | 1
    else if (*(rdx + 0x48) == 0 || *(rdx + 0x50) == 0)
        r8_2 = r9_3
    else
        r8_2 = r9_3
        
        if ((rsi_1[1] & 0x100) != 0)
            int32_t rcx_1 = *arg1
            
            if ((rcx_1 & 0xffffff00) != 0x300)
                rcx_1 = 0
            
            if (rcx_1 == 0x303)
                r8_2 = r9_3 | 1
    
    int32_t rbx_4 = r8_2 | 2
    
    if ((rsi_1[2] & 1) == 0)
        rbx_4 = r8_2
    
    int32_t rbx_5 = rbx_4 | 4
    
    if ((rsi_1[3] & 1) != 0)
        int32_t rax_6 = sub_1428aea60(*(rdx + 0x98)) & 0x80
        int32_t rcx_3 = 0
        
        if ((rsi_1[3].b & 2) != 0)
            rcx_3 = rax_6
        
        if (rcx_3 != 0)
            rbx_5 |= 8
    
    if ((rbx_5.b & 8) == 0)
        void* rax_7 = *(arg1 + 0x488)
        
        if (*(rax_7 + 0x138) != 0 && *(rax_7 + 0x140) != 0 && (rsi_1[7] & 0x100) != 0)
            int32_t rcx_4 = *arg1
            
            if ((rcx_4 & 0xffffff00) != 0x300)
                rcx_4 = 0
            
            if (rcx_4 == 0x303)
                rbx_5 |= 8
        
        if ((rbx_5.b & 8) == 0)
            void* rax_10 = *(arg1 + 0x488)
            
            if (*(rax_10 + 0x160) != 0 && *(rax_10 + 0x168) != 0 && (rsi_1[8] & 0x100) != 0)
                int32_t rcx_5 = *arg1
                
                if ((rcx_5 & 0xffffff00) != 0x300)
                    rcx_5 = 0
                
                if (rcx_5 == 0x303)
                    rbx_5 |= 8
    
    int32_t rdx_5 = (((rbp_3 & 1) << 6) + 0xc) | rbp_3
    int32_t rcx_7 = rdx_5 | 0x100
    
    if ((rdx_5.b & 2) == 0)
        rcx_7 = rdx_5
    
    *(*(arg1 + 0xa8) + 0x334) = rcx_7 | 0x80
    result = *(arg1 + 0xa8)
    *(result + 0x338) = rbx_5 | 0x10

return result
