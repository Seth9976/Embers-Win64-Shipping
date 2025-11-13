// 函数: sub_1403c7b00
// 地址: 0x1403c7b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx
char* var_30 = rbx

if (arg1[4].b != 3)
    return 

int32_t* r10_1 = arg1
uint64_t r11_1 = zx.q(*arg1)
arg1.b = *(arg1 + 0x11)

if (arg1.b u<= 7)
    uint64_t rax_1
    
    if (arg1.b == 1)
        if (r11_1.d == 0)
            rax_1 = 0
        else
            int32_t rcx_5 = not.d((r11_1 - 1).d) & 7
            void* rax_8 = &arg2[r11_1]
            rbx = zx.q((r11_1 - 1).d)
            void* rsi_4 = &arg2[zx.q(rbx.d u>> 3)]
            int32_t r14_4 = r11_1.d & 1
            
            if (rbx.d != 0)
                rbx = zx.q(r14_4 - r11_1.d)
                int32_t i
                
                do
                    *(rax_8 - 1) = test_bit(zx.d(*rsi_4), rcx_5)
                    void* rdi_3 = rsi_4 - 1
                    int32_t rbp_2 = rcx_5 + 1
                    
                    if (rcx_5 != 7)
                        rdi_3 = rsi_4
                    
                    if (rcx_5 == 7)
                        rbp_2 = 0
                    
                    *(rax_8 - 2) = test_bit(zx.d(*rdi_3), rbp_2)
                    rax_8 -= 2
                    rsi_4 = rdi_3 - 1
                    
                    if (rbp_2 != 7)
                        rsi_4 = rdi_3
                    
                    rcx_5 = rbp_2 + 1
                    
                    if (rbp_2 == 7)
                        rcx_5 = 0
                    
                    i = rbx.d
                    rbx = zx.q(rbx.d + 2)
                while (i != 0xfffffffe)
            
            if (r14_4 != 0)
                *(rax_8 - 1) = test_bit(zx.d(*rsi_4), rcx_5)
            
            rax_1 = r11_1
    else
        void* rsi_1
        
        if (arg1.b != 2)
            rax_1 = r11_1
            
            if (arg1.b == 4)
                if (r11_1.d == 0)
                    rax_1 = 0
                else
                    int32_t rcx_1 = (r11_1 << 2).d & 4
                    rsi_1 = &arg2[r11_1]
                    int32_t rax_2 = (r11_1 - 1).d
                    rbx = &arg2[zx.q(rax_2 u>> 1)]
                    int32_t r14_2 = r11_1.d & 1
                    
                    if (rax_2 != 0)
                        int32_t i_4 = r14_2 - r11_1.d
                        int32_t i_1
                        
                        do
                            *(rsi_1 - 1) = (zx.d(*rbx) u>> rcx_1.b).b & 0xf
                            void* rdi_1 = &rbx[-1]
                            int32_t rax_5 = rcx_1 + 4
                            
                            if (rcx_1 != 4)
                                rdi_1 = rbx
                            
                            if (rcx_1 == 4)
                                rax_5 = 0
                            
                            *(rsi_1 - 2) = (zx.d(*rdi_1) u>> rax_5.b).b & 0xf
                            rsi_1 -= 2
                            rbx = rdi_1 - 1
                            
                            if (rax_5 != 4)
                                rbx = rdi_1
                            
                            rcx_1 = rax_5 + 4
                            
                            if (rax_5 == 4)
                                rcx_1 = 0
                            
                            i_1 = i_4
                            i_4 += 2
                        while (i_1 != 0xfffffffe)
                    
                    rax_1 = r11_1
                    
                    if (r14_2 != 0)
                        *(rsi_1 - 1) = (zx.d(*rbx) u>> rcx_1.b).b & 0xf
                        rax_1 = r11_1
        else if (r11_1.d == 0)
            rax_1 = 0
        else
            int32_t rcx_10 = not.d((r11_1 * 2).d + 6) & 6
            rsi_1 = &arg2[r11_1]
            int32_t rax_9 = (r11_1 - 1).d
            rbx = &arg2[zx.q(rax_9 u>> 2)]
            int32_t r14_6 = r11_1.d & 1
            
            if (rax_9 != 0)
                int32_t i_5 = r14_6 - r11_1.d
                int32_t i_2
                
                do
                    *(rsi_1 - 1) = (zx.d(*rbx) u>> rcx_10.b).b & 3
                    char* rdi_4 = &rbx[-1]
                    int32_t rax_12 = rcx_10 + 2
                    
                    if (rcx_10 != 6)
                        rdi_4 = rbx
                    
                    if (rcx_10 == 6)
                        rax_12 = 0
                    
                    *(rsi_1 - 2) = (zx.d(*rdi_4) u>> rax_12.b).b & 3
                    rsi_1 -= 2
                    rbx = &rdi_4[-1]
                    
                    if (rax_12 != 6)
                        rbx = rdi_4
                    
                    rcx_10 = rax_12 + 2
                    
                    if (rax_12 == 6)
                        rcx_10 = 0
                    
                    i_2 = i_5
                    i_5 += 2
                while (i_2 != 0xfffffffe)
            
            rax_1 = r11_1
            
            if (r14_6 != 0)
                *(rsi_1 - 1) = (zx.d(*rbx) u>> rcx_10.b).b & 3
                rax_1 = r11_1
    
    *(r10_1 + 0x11) = 8
    *(r10_1 + 0x13) = 8
    *(r10_1 + 8) = rax_1
    goto label_1403c7d2f

if (arg1.b != 8)
    return 

label_1403c7d2f:
void* rax = &arg2[r11_1 - 1]

if (arg4 != 0)
    uint64_t rcx_12 = zx.q((r11_1 << 2).d)
    
    if (r11_1.d != 0)
        int64_t rdi_5 = 0
        
        do
            uint64_t rbp_4 = zx.q(*(rax + rdi_5))
            rbx.b = 0xff
            
            if (rbp_4.d s< arg5)
                rbx = zx.q(*(arg4 + rbp_4))
            
            arg2[rcx_12 - 1 + (rdi_5 << 2)] = rbx.b
            arg2[rcx_12 - 1 + (rdi_5 << 2) - 1] = arg3[zx.q(*(rax + rdi_5)) * 3 + 2]
            arg2[rcx_12 - 1 + (rdi_5 << 2) - 2] = arg3[zx.q(*(rax + rdi_5)) * 3 + 1]
            arg2[rcx_12 - 1 + (rdi_5 << 2) - 3] = arg3[zx.q(*(rax + rdi_5)) * 3]
            rdi_5 -= 1
        while (neg.d(r11_1.d) != rdi_5.d)
    
    *(r10_1 + 8) = rcx_12
    r10_1[4] = 0x20040806
    return 

uint64_t rcx_13 = zx.q((r11_1 * 3).d)

if (r11_1.d != 0)
    int32_t rbp_6 = r11_1.d & 1
    char* rsi_8
    
    if (r11_1.d != 1)
        void* rsi_9 = rcx_13 - 1
        void* rax_16 = r11_1 - 1
        int32_t i_6 = rbp_6 - r11_1.d
        int32_t i_3
        
        do
            *(arg2 + rsi_9) = arg3[zx.q(*(arg2 + rax_16)) * 3 + 2]
            *(arg2 + rsi_9 - 1) = arg3[zx.q(*(arg2 + rax_16)) * 3 + 1]
            *(arg2 + rsi_9 - 2) = arg3[zx.q(*(arg2 + rax_16)) * 3]
            *(arg2 + rsi_9 - 3) = arg3[zx.q(*(arg2 + rax_16 - 1)) * 3 + 2]
            *(arg2 + rsi_9 - 4) = arg3[zx.q(*(arg2 + rax_16 - 1)) * 3 + 1]
            *(arg2 + rsi_9 - 5) = arg3[zx.q(*(arg2 + rax_16 - 1)) * 3]
            rsi_9 -= 6
            rax_16 -= 2
            i_3 = i_6
            i_6 += 2
        while (i_3 != 0xfffffffe)
        rsi_8 = rsi_9 + arg2
        rax = rax_16 + arg2
        
        if (rbp_6 != 0)
            goto label_1403c7e83
    else
        rsi_8 = &arg2[rcx_13 - 1]
        
        if (rbp_6 != 0)
        label_1403c7e83:
            uint64_t rdx_3
            rdx_3.b = arg3[zx.q(*rax) * 3 + 2]
            *rsi_8 = rdx_3.b
            uint64_t rdx_5
            rdx_5.b = arg3[zx.q(*rax) * 3 + 1]
            rsi_8[-1] = rdx_5.b
            rax.b = *(arg3 + zx.q(*rax) * 3)
            rsi_8[-2] = rax.b

*(r10_1 + 8) = rcx_13
r10_1[4] = 0x18030802
