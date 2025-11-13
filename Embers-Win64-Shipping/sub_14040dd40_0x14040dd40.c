// 函数: sub_14040dd40
// 地址: 0x14040dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg7) << 2
int32_t rcx = 1
int32_t* r12_1 = arg9 + r10
void* rsi = arg4

if (*r12_1 s> 1)
    rcx = *r12_1

arg10.d = *(r10 + arg10)
int32_t rax_3 = sub_1403e3870(rcx, 0x2f)
int32_t rdx = *r12_1
int32_t rcx_1 = *(arg2 + 0x1114)
int32_t rdi = rax_3
int64_t i_7 = 0x10
int32_t r9

if (rdx == rcx_1)
    r9 = 0x10000
else
    r9 = sub_1403e0590(rcx_1, rdx, 0x10)

int32_t i = 0
int32_t rax_8 = ((rdi s>> 7) + 1) s>> 1

if (*(arg1 + 0x1204) s> 0)
    int32_t r11_1 = sx.d(rax_8.w)
    int32_t* r14_1 = arg3 - rsi
    
    do
        int32_t rcx_2 = *(r14_1 + rsi)
        i += 1
        rsi += 4
        *(rsi - 4) = ((zx.d(rcx_2.w) * r11_1) s>> 0x10) + (rcx_2 s>> 0x10) * r11_1
            + (((rax_8 s>> 0xf) + 1) s>> 1) * rcx_2
    while (i s< *(arg1 + 0x1204))

bool cond:1 = *(arg2 + 0x1118) == 0
int32_t result = *r12_1
*(arg2 + 0x1114) = result
int32_t r14_2

if (cond:1)
    r14_2 = arg10.d
else
    if (arg7 == 0)
        int32_t rax_14 = sx.d(arg8)
        rdi = (((rdi s>> 0x10) * rax_14) << 2) + ((zx.d(rdi.w) * rax_14) s>> 0x10 << 2)
    
    result = *(arg2 + 0x1108)
    r14_2 = arg10.d
    int32_t i_1 = result - r14_2 - 2
    int64_t i_6 = sx.q(i_1)
    
    if (i_1 s< result)
        void* r8 = arg6 + (i_6 << 2)
        int16_t* r10_5 = arg5 + (i_6 << 1)
        
        do
            int32_t rax_16 = sx.d(*r10_5)
            i_1 += 1
            r10_5 = &r10_5[1]
            r8 += 4
            result = rax_16 * (rdi s>> 0x10)
            *(r8 - 4) = ((rax_16 * zx.d(rdi.w)) s>> 0x10) + result
        while (i_1 s< *(arg2 + 0x1108))

if (r9 != 0x10000)
    int32_t rax_17 = *(arg2 + 0x110c)
    int32_t i_2 = rax_17 - *(arg1 + 0x1208)
    
    if (i_2 s< rax_17)
        void* r8_2 = arg2 + 0x500 + (sx.q(i_2) << 2)
        
        do
            int32_t rcx_11 = sx.d(*r8_2)
            int32_t rdx_9 = *r8_2 s>> 0xf
            i_2 += 1
            r8_2 += 4
            *(r8_2 - 4) =
                ((rdx_9 + 1) s>> 1) * r9 + ((zx.d(r9.w) * rcx_11) s>> 0x10) + (r9 s>> 0x10) * rcx_11
        while (i_2 s< *(arg2 + 0x110c))
    
    if (arg11 == 2 && *(arg2 + 0x1118) == 0)
        int32_t rax_23 = *(arg2 + 0x1108)
        int32_t i_3 = rax_23 - r14_2 - 2
        
        if (i_3 s< rax_23)
            int16_t* r10_7 = arg6 + (sx.q(i_3) << 2)
            
            do
                int32_t rcx_13 = sx.d(*r10_7)
                int32_t rdx_16 = *r10_7 s>> 0xf
                i_3 += 1
                r10_7 = &r10_7[2]
                *(r10_7 - 4) = ((rdx_16 + 1) s>> 1) * r9 + ((zx.d(r9.w) * rcx_13) s>> 0x10)
                    + (r9 s>> 0x10) * rcx_13
            while (i_3 s< *(arg2 + 0x1108))
    
    int32_t rdx_22 = sx.d(*(arg2 + 0x1100))
    uint32_t r11_7 = zx.d(r9.w)
    int32_t r10_9 = r9 s>> 0x10
    void* r8_5 = arg2 + 0xf00
    int64_t i_8 = 0x20
    *(arg2 + 0x1100) =
        (((*(arg2 + 0x1100) s>> 0xf) + 1) s>> 1) * r9 + ((rdx_22 * r11_7) s>> 0x10) + rdx_22 * r10_9
    int64_t i_4
    
    do
        int32_t rcx_21 = sx.d(*r8_5)
        int32_t rdx_25 = *r8_5 s>> 0xf
        r8_5 += 4
        *(r8_5 - 4) = ((rdx_25 + 1) s>> 1) * r9 + ((r11_7 * rcx_21) s>> 0x10) + r10_9 * rcx_21
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    void* r8_6 = arg2 + 0x10c0
    int64_t i_5
    
    do
        int32_t rcx_22 = sx.d(*r8_6)
        int32_t rdx_32 = *r8_6 s>> 0xf
        r8_6 += 4
        result = r10_9 * rcx_22
        *(r8_6 - 4) = ((rdx_32 + 1) s>> 1) * r9 + ((r11_7 * rcx_22) s>> 0x10) + result
        i_5 = i_7
        i_7 -= 1
    while (i_5 != 1)

return result
