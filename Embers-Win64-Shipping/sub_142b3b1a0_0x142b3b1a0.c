// 函数: sub_142b3b1a0
// 地址: 0x142b3b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r10 = arg6
int64_t r15 = sx.q(arg2)
char* rbx = arg3
int64_t r8 = sx.q(arg5)
char* r11 = arg1
void* rdi_1 = &r10[sx.q(arg4)]
char* r14 = r10
void* r12 = &r10[r15]
uint32_t rax = 0

if (r8.d != 0)
    rdi_1 += r8
    
    if (arg1 != r10 || r8.d s> arg2)
        void* rcx_1 = &r10[r8]
        int64_t rdx = 0
        void* r8_2 = rcx_1 - r10
        
        if (r10 u> rcx_1)
            r8_2 = nullptr
        
        if (r8_2 != 0)
            do
                if (r11 u>= &r11[r15])
                    *r10 = 0
                else
                    *r10 = *r11
                
                r11 = &r11[1]
                r10 = &r10[1]
                rdx += 1
            while (rdx u< r8_2)
    else
        r10 = &r10[r8]
        r11 = &r11[r8]

if (rdi_1 u> r12)
    void* rcx_3 = rdi_1
    rdi_1 = r12
    r12 = rcx_3

int64_t r9_1 = 0
void* rsi_1 = rdi_1 - r10

if (r10 u> rdi_1)
    rsi_1 = nullptr

if (rsi_1 != 0)
    do
        uint32_t rcx_4 = zx.d(*r11)
        r11 = &r11[1]
        int32_t rcx_6 = zx.d(*rbx) * arg7
        rbx = &rbx[1]
        int32_t rax_2 = rax + rcx_4 + rcx_6
        
        if (rax_2 u<= 9)
            *r10 = rax_2.b
            rax = 0
        else if (rax_2 s< 0)
            uint32_t r8_6 = (((rax_2 + 0x64) u>> 1) * 0x6667) u>> 0x11
            int32_t rax_3
            rax_3.b = (rax_2 + 0x64).b - r8_6.b * 0xa
            *r10 = rax_3.b
            rax = r8_6 - 0xa
        else
            uint32_t r8_4 = ((rax_2 u>> 1) * 0x6667) u>> 0x11
            rax_2.b -= r8_4.b * 0xa
            *r10 = rax_2.b
            rax = r8_4
        
        r10 = &r10[1]
        r9_1 += 1
    while (r9_1 u< rsi_1)

if (r10 u< r12)
    int64_t r9_2 = 0
    void* rdi_3 = r12 - r10
    
    if (r12 != r10)
        do
            uint32_t rax_4
            
            if (r11 u>= &arg1[r15])
                rax_4 = rax + zx.d(*rbx) * arg7
                rbx = &rbx[1]
            else
                rax_4 = rax + zx.d(*r11)
                r11 = &r11[1]
            
            if (rax_4 u<= 9)
                *r10 = rax_4.b
                rax = 0
            else if (rax_4 s< 0)
                uint32_t r8_10 = (((rax_4 + 0x64) u>> 1) * 0x6667) u>> 0x11
                int32_t rax_5
                rax_5.b = (rax_4 + 0x64).b - r8_10.b * 0xa
                *r10 = rax_5.b
                rax = r8_10 - 0xa
            else
                uint32_t r8_8 = ((rax_4 u>> 1) * 0x6667) u>> 0x11
                rax_4.b -= r8_8.b * 0xa
                *r10 = rax_4.b
                rax = r8_8
            
            r10 = &r10[1]
            r9_2 += 1
        while (r9_2 u< rdi_3)

if (rax == 0)
    return zx.q(r10.d - r14.d)

if (rax s> 0)
    *r10 = rax.b
    return r10 - r14 + 1

int32_t r8_11 = 1
void* i = r12 - r14
char* r9_3 = r14

if (r14 u> r12)
    i = nullptr

if (i != 0)
    do
        int32_t r8_12 = r8_11 + 9 - zx.d(*r9_3)
        
        if (r8_12 s> 9)
            *r9_3 = 0
            r8_11 = 1
        else
            *r9_3 = r8_12.b
            r8_11 = 0
        
        r9_3 = &r9_3[1]
    while (&r9_3[neg.q(r14)] u< i)

if (r8_11 - rax != 1)
    r8_11.b -= rax.b
    r8_11.b -= 1
    *r9_3 = r8_11.b
    r9_3 = &r9_3[1]

return zx.q(r14.d - r9_3.d)
