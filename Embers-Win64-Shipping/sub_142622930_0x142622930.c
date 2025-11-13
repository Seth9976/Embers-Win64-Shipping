// 函数: sub_142622930
// 地址: 0x142622930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r13 = arg2
void* rax = *arg1
uint32_t i_3 = zx.d(*(rax + 0x32))
uint64_t rbp = zx.q(*(rax + 0x30))
int32_t rax_2 = i_3 * rbp.d
uint32_t i_2 = i_3
memset(r13, 0xff, sx.q(rax_2) * 2)
int32_t r9 = 0

if (i_3 != 0)
    do
        int32_t i = 0
        
        if (rbp.d != 0)
            int32_t rdi_2 = r9 * rbp.d
            
            do
                int64_t rbx_1 = arg1[3]
                int64_t r10_1 = sx.q(rdi_2 + i)
                char r11_1 = *(r10_1 + rbx_1)
                int32_t r8_2
                
                if (r11_1 != 0)
                    r8_2 = 0
                    
                    if (i - 1 s>= 0 && i - 1 s< rbp.d && r9 s>= 0 && r9 s< i_3
                            && (*(r10_1 + arg1[4]) & 1) != 0
                            && r11_1 == *(sx.q(rdi_2 + i - 1) + rbx_1))
                        r8_2 = 1
                    
                    if (i s>= 0 && i s< rbp.d && r9 + 1 s>= 0 && r9 + 1 s< i_3
                            && (*(r10_1 + arg1[4]) & 2) != 0
                            && r11_1 == *(sx.q(i + (r9 + 1) * rbp.d) + rbx_1))
                        r8_2 += 1
                    
                    if (i + 1 s>= 0 && i + 1 s< rbp.d && r9 s>= 0 && r9 s< i_3
                            && (*(r10_1 + arg1[4]) & 4) != 0
                            && r11_1 == *(sx.q(rdi_2 + i + 1) + rbx_1))
                        r8_2 += 1
                    
                    if (i s>= 0 && i s< rbp.d && r9 - 1 s>= 0 && r9 - 1 s< i_3
                            && (*(r10_1 + arg1[4]) & 8) != 0
                            && r11_1 == *(sx.q(i + (r9 - 1) * rbp.d) + rbx_1))
                        r8_2 += 1
                
                if (r11_1 == 0 || r8_2 != 4)
                    r13[r10_1] = 0
                
                i += 1
            while (i s< rbp.d)
        
        r9 += 1
    while (r9 s< i_3)
    
    if (i_3 != 0)
        int16_t* r14_1 = arg2
        char* rsi = nullptr
        uint32_t i_1 = i_2
        int64_t r12_1 = sx.q(rbp.d)
        int32_t r11_2 = -1
        int32_t rdi_4 = neg.d(rbp.d)
        int64_t r13_1 = r12_1 * 2
        
        do
            if (rbp.d != 0)
                int32_t r8_3 = -1
                char* rbx_2 = rsi
                int16_t* r9_1 = r14_1
                
                do
                    if (rbx_2[arg1[3]] != 0)
                        if (r8_3 s>= 0 && r8_3 s< rbp.d && r11_2 + 1 s>= 0 && r11_2 + 1 s< i_2
                                && (rbx_2[arg1[4]] & 1) != 0)
                            uint32_t rcx_9 = zx.d(r9_1[-1])
                            uint32_t r10_2 = zx.d(*r9_1)
                            
                            if (rcx_9 + 2 u< r10_2)
                                rcx_9.w += 2
                                r10_2 = zx.d(rcx_9.w)
                                *r9_1 = rcx_9.w
                            
                            if (r11_2 s>= 0 && r11_2 s< i_2 && (rbx_2[arg1[4] - 1] & 8) != 0)
                                uint32_t rdx = zx.d(arg2[sx.q(rdi_4 + r8_3)])
                                
                                if (rdx + 3 u< zx.d(r10_2.w))
                                    rdx.w += 3
                                    *r9_1 = rdx.w
                        
                        if (r8_3 + 1 s>= 0 && r8_3 + 1 s< rbp.d && r11_2 s>= 0 && r11_2 s< i_2
                                && (rbx_2[arg1[4]] & 8) != 0)
                            uint32_t r10_3 = zx.d(*r9_1)
                            int64_t rdx_1 = sx.q(rdi_4 + r8_3 + 1)
                            uint32_t rcx_13 = zx.d(arg2[rdx_1])
                            
                            if (rcx_13 + 2 u< r10_3)
                                rcx_13.w += 2
                                r10_3 = zx.d(rcx_13.w)
                                *r9_1 = rcx_13.w
                            
                            if (r8_3 + 2 s>= 0 && r8_3 + 2 s< rbp.d
                                    && (*(rdx_1 + arg1[4]) & 4) != 0)
                                uint32_t rdx_2 = zx.d(arg2[sx.q(rdi_4 + r8_3 + 2)])
                                
                                if (rdx_2 + 3 u< zx.d(r10_3.w))
                                    rdx_2.w += 3
                                    *r9_1 = rdx_2.w
                    
                    r8_3 += 1
                    rbx_2 = &rbx_2[1]
                    r9_1 = &r9_1[1]
                while (r8_3 + 1 s< rbp.d)
                
                i_1 = i_2
                r13_1 = rbp << 1
                r12_1 = rbp
            
            r11_2 += 1
            rsi = &rsi[r12_1]
            r14_1 += r13_1
            rdi_4 += rbp.d
        while (r11_2 + 1 s< i_1)
        
        i_3 = i_2
        r13 = arg2

int32_t r14_2 = i_3 - 1

if (r14_2 s>= 0)
    int32_t rax_29 = (rbp - 1).d
    int32_t r12_4 = r14_2 * rbp.d
    int32_t rsi_1 = r14_2 + 1
    
    while (true)
        int32_t r10_4 = rax_29
        
        if (rax_29 s>= 0)
            int32_t r11_3 = rax_29 + 1
            int32_t rax_30 = rax_29 + r12_4
            int64_t rdi_5 = sx.q(rax_30)
            int64_t r15_1 = sx.q(rax_30 + 1)
            int16_t* r8_5 = &r13[rdi_5]
            void* r13_3 = &r13[r15_1]
            int32_t temp3_1
            
            do
                int64_t* rdx_4 = arg1
                
                if (*(rdi_5 + rdx_4[3]) != 0)
                    if (r11_3 s>= 0 && r11_3 s< rbp.d && r14_2 s>= 0 && r14_2 s< i_2
                            && (*(rdi_5 + rdx_4[4]) & 4) != 0)
                        uint32_t rcx_17 = zx.d(*r13_3)
                        uint32_t r9_2 = zx.d(*r8_5)
                        
                        if (rcx_17 + 2 u< r9_2)
                            rcx_17.w += 2
                            r9_2 = zx.d(rcx_17.w)
                            *r8_5 = rcx_17.w
                        
                        if (rsi_1 s>= 0 && rsi_1 s< i_2 && (*(r15_1 + rdx_4[4]) & 2) != 0)
                            uint32_t rdx_3 = zx.d(arg2[sx.q(r12_4 + r11_3 + rbp.d)])
                            
                            if (rdx_3 + 3 u< zx.d(r9_2.w))
                                rdx_3.w += 3
                                *r8_5 = rdx_3.w
                            
                            rdx_4 = arg1
                    
                    if (r10_4 s>= 0 && r10_4 s< rbp.d && rsi_1 s>= 0 && rsi_1 s< i_2
                            && (*(rdi_5 + rdx_4[4]) & 2) != 0)
                        uint32_t r9_3 = zx.d(*r8_5)
                        int32_t rbx_4 = r12_4 + rbp.d
                        int64_t rdx_5 = sx.q(rbx_4 + r10_4)
                        uint32_t rcx_20 = zx.d(arg2[rdx_5])
                        
                        if (rcx_20 + 2 u< r9_3)
                            rcx_20.w += 2
                            r9_3 = zx.d(rcx_20.w)
                            *r8_5 = rcx_20.w
                        
                        if (r11_3 - 2 s>= 0 && r11_3 - 2 s< rbp.d && (*(rdx_5 + arg1[4]) & 1) != 0)
                            uint32_t rdx_6 = zx.d(arg2[sx.q(rbx_4 + r11_3 - 2)])
                            
                            if (rdx_6 + 3 u< zx.d(r9_3.w))
                                rdx_6.w += 3
                                *r8_5 = rdx_6.w
                
                rdi_5 -= 1
                r8_5 -= 2
                r11_3 -= 1
                r15_1 -= 1
                r13_3 -= 2
                temp3_1 = r10_4
                r10_4 -= 1
            while (temp3_1 - 1 s>= 0)
            rax_29 = (rbp - 1).d
        
        r12_4 -= rbp.d
        rsi_1 -= 1
        int32_t temp1_1 = r14_2
        r14_2 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        r13 = arg2

*arg3 = 0
uint32_t result = rax_2 - 1
int64_t result_1 = sx.q(result)

if (rax_2 - 1 s>= 0)
    int64_t result_2
    
    do
        int16_t rcx_24 = *arg3
        result = zx.d(arg2[result_1])
        
        if (result.w u> rcx_24)
            rcx_24 = result.w
        
        result_2 = result_1
        result_1 -= 1
        *arg3 = rcx_24
    while (result_2 - 1 s>= 0)

return result
