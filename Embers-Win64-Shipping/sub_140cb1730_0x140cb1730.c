// 函数: sub_140cb1730
// 地址: 0x140cb1730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x34)
int32_t arg_10 = rsi

if (rsi == 0)
    int64_t result
    result.b = 0
    return result

int32_t rbx = arg1[1].d
int32_t rdx = rbx
int32_t i_1 = arg1[6].d
int64_t r12
r12.b = 0
int32_t r13_1 = rbx - rsi
int64_t r14 = *arg1
int32_t arg_8 = rbx

if (i_1 != 0xffffffff)
    int32_t i
    
    do
        int64_t r9_2 = sx.q(i_1) << 5
        i = *(r9_2 + *arg1 + 4)
        
        if (i_1 s< r13_1)
            void* rax_1 = arg1[4]
            void* rsi_1 = &arg1[2]
            int32_t rdx_1 = rol.d(1, rbx.b)
            void* r8_1 = rsi_1
            
            if (rax_1 != 0)
                r8_1 = rax_1
            
            int32_t rax_2
            
            do
                rbx -= 1
                rdx_1 = ror.d(rdx_1, 1)
                rax_2 = rbx
                
                if (rbx s< 0)
                    rax_2 = rbx + 0x1f
            while ((*(r8_1 + (sx.q(rax_2 s>> 5) << 2)) & rdx_1) == 0)
            memmove(r9_2 + r14, (sx.q(rbx) << 5) + r14, 0x20)
            void* rax_4 = *(rsi_1 + 0x10)
            
            if (rax_4 != 0)
                rsi_1 = rax_4
            
            int32_t i_2 = i_1
            
            if (i_1 s< 0)
                i_2 = i_1 + 0x1f
            
            void* rdx_5 = rsi_1 + (sx.q(i_2 s>> 5) << 2)
            r12.b = 1
            *rdx_5 |= 1 << (i_1.b & 0x1f)
        
        i_1 = i
    while (i != 0xffffffff)
    rbx = arg1[1].d
    rsi = arg_10
    rdx = arg_8

int32_t rcx_5 = rbx - r13_1

if (rcx_5 != rsi)
    memmove((sx.q(r13_1) << 5) + *arg1, (sx.q(rdx) << 5) + *arg1, (rcx_5 - rsi) << 5)
    rbx = arg1[1].d

arg1[1].d = rbx - rsi
sub_140a89440(arg1)
int32_t rax_8 = arg1[5].d
int32_t rcx_11 = rax_8
int32_t r8_4 = arg_8

if (r8_4 != rax_8)
    int32_t rdi_1 = 0
    int32_t rbx_2 = 0
    int32_t r11_1 = 0
    int32_t r9_3 = 0
    int32_t rdx_9 = 1
    int32_t r14_1 = 1
    
    if (rax_8 s> 0)
        do
            int32_t rbp_1 = r11_1
            
            if (r9_3 s< r13_1 || r9_3 s>= r8_4)
                if (rbx_2 != r9_3)
                    void* rax_9 = arg1[4]
                    void* rcx_12 = &arg1[2]
                    
                    if (rax_9 != 0)
                        rcx_12 = rax_9
                    
                    int64_t rax_10 = sx.q(rdi_1)
                    int32_t r8_5 = *(rcx_12 + (rax_10 << 2))
                    void* r10_1 = rcx_12 + (rax_10 << 2)
                    
                    if ((*(rcx_12 + (sx.q(r11_1) << 2)) & r14_1) == 0)
                        *r10_1 = not.d(rdx_9) & r8_5
                    else
                        *r10_1 = r8_5 | rdx_9
                    
                    r8_4 = arg_8
                
                rbx_2 += 1
                int32_t temp1_1 = rdx_9
                int32_t temp2_1 = rdx_9
                rdx_9 *= 2
                
                if (temp1_1 == neg.d(temp2_1))
                    rdx_9 = 1
                    rdi_1 += 1
            
            rcx_11 = arg1[5].d
            int32_t rax_15 = r14_1 * 2
            r9_3 += 1
            r14_1 = 1
            
            if (rax_15 != 0)
                r14_1 = rax_15
            
            r11_1 += 1
            
            if (rax_15 != 0)
                r11_1 = rbp_1
        while (r9_3 s< rcx_11)

arg1[5].d = rcx_11 - arg_10
*(arg1 + 0x34) = 0
arg1[6].d = 0xffffffff
return zx.q(r12.b)
