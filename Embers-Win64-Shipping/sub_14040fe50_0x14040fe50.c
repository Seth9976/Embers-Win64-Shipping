// 函数: sub_14040fe50
// 地址: 0x14040fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 1
int64_t r10 = sx.q(arg8) << 2
int32_t r13 = *(r10 + arg12)
int32_t* r15_1 = arg11 + r10

if (*r15_1 s> 1)
    rcx = *r15_1

int32_t rax_2 = sub_1403e3870(rcx, 0x2f)
int32_t rdx = *r15_1
int32_t rcx_1 = *(arg2 + 0x1114)
int32_t rdi = rax_2
int32_t r9

if (rdx == rcx_1)
    r9 = 0x10000
else
    r9 = sub_1403e0590(rcx_1, rdx, 0x10)

int32_t i = 0
int32_t rax_7 = ((rdi s>> 7) + 1) s>> 1

if (*(arg1 + 0x1204) s> 0)
    void* r8 = arg5
    int32_t rsi_1 = sx.d(rax_7.w)
    int32_t* r14_1 = arg4 - r8
    
    do
        int32_t rcx_2 = *(r14_1 + r8)
        i += 1
        r8 += 4
        *(r8 - 4) = ((zx.d(rcx_2.w) * rsi_1) s>> 0x10) + (rcx_2 s>> 0x10) * rsi_1
            + (((rax_7 s>> 0xf) + 1) s>> 1) * rcx_2
    while (i s< *(arg1 + 0x1204))

bool cond:0 = *(arg2 + 0x1118) == 0
int32_t result = *r15_1
*(arg2 + 0x1114) = result

if (not(cond:0))
    if (arg8 == 0)
        int32_t rax_13 = sx.d(arg10)
        rdi = (((rdi s>> 0x10) * rax_13) << 2) + ((zx.d(rdi.w) * rax_13) s>> 0x10 << 2)
    
    result = *(arg2 + 0x1108)
    int32_t i_1 = result - r13 - 2
    int64_t i_4 = sx.q(i_1)
    
    if (i_1 s< result)
        void* r10_1 = arg7 + (i_4 << 2)
        int16_t* r11_5 = arg6 + (i_4 << 1)
        
        do
            int32_t rcx_6 = sx.d(*r11_5)
            i_1 += 1
            r11_5 = &r11_5[1]
            r10_1 += 4
            result = (rdi s>> 0x10) * rcx_6
            *(r10_1 - 4) = ((zx.d(rdi.w) * rcx_6) s>> 0x10) + result
        while (i_1 s< *(arg2 + 0x1108))

if (r9 != 0x10000)
    result = *(arg2 + 0x110c)
    int32_t i_2 = result - *(arg1 + 0x1208)
    
    if (i_2 s< result)
        void* r8_4 = arg2 + 0x500 + (sx.q(i_2) << 2)
        
        do
            int32_t rcx_8 = sx.d(*r8_4)
            int32_t rdx_11 = *r8_4 s>> 0xf
            i_2 += 1
            r8_4 += 4
            result = (r9 s>> 0x10) * rcx_8
            *(r8_4 - 4) = ((rdx_11 + 1) s>> 1) * r9 + ((zx.d(r9.w) * rcx_8) s>> 0x10) + result
        while (i_2 s< *(arg2 + 0x110c))
    
    if (arg13 == 2 && *(arg2 + 0x1118) == 0)
        int32_t rax_20 = *(arg2 + 0x1108)
        result = rax_20 - arg14
        int32_t r8_7 = rax_20 - r13 - 2
        
        if (r8_7 s< result)
            int16_t* r10_3 = arg7 + (sx.q(r8_7) << 2)
            
            do
                int32_t rcx_10 = sx.d(*r10_3)
                int32_t rdx_18 = *r10_3 s>> 0xf
                r8_7 += 1
                r10_3 = &r10_3[2]
                *(r10_3 - 4) = ((rdx_18 + 1) s>> 1) * r9 + ((zx.d(r9.w) * rcx_10) s>> 0x10)
                    + (r9 s>> 0x10) * rcx_10
                result = *(arg2 + 0x1108) - arg14
            while (r8_7 s< result)
    
    int64_t i_5 = sx.q(arg9)
    
    if (i_5 s> 0)
        uint32_t rbx_1 = zx.d(r9.w)
        int32_t r10_5 = r9 s>> 0x10
        int16_t* rsi_5 = arg3 + 0x480
        int64_t i_3
        
        do
            int32_t rcx_11 = sx.d(*rsi_5)
            int64_t j_5 = 0x20
            void* rax_30 = &rsi_5[-0x240]
            *rsi_5 =
                (((*rsi_5 s>> 0xf) + 1) s>> 1) * r9 + ((rcx_11 * rbx_1) s>> 0x10) + rcx_11 * r10_5
            int64_t j
            
            do
                int32_t rdx_31 = sx.d(*rax_30)
                int32_t r8_9 = *rax_30 s>> 0xf
                rax_30 += 4
                *(rax_30 - 4) =
                    ((r8_9 + 1) s>> 1) * r9 + ((rbx_1 * rdx_31) s>> 0x10) + r10_5 * rdx_31
                j = j_5
                j_5 -= 1
            while (j != 1)
            void* r11_10 = &rsi_5[-0x60]
            int64_t j_3 = 0x10
            void* r8_15 = r11_10 + 0x80
            int64_t j_1
            
            do
                int32_t rcx_18 = sx.d(*r8_15)
                int32_t rdx_33 = *r8_15 s>> 0xf
                r8_15 += 4
                *(r8_15 - 4) =
                    ((rdx_33 + 1) s>> 1) * r9 + ((rbx_1 * rcx_18) s>> 0x10) + r10_5 * rcx_18
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            uint64_t j_4 = zx.q((j_3 + 0x20).d)
            uint64_t j_2
            
            do
                int32_t rcx_19 = sx.d(*(r11_10 - 0x80))
                int32_t rdx_40 = *(r11_10 - 0x80) s>> 0xf
                r11_10 += 4
                int32_t rcx_20 = sx.d(*(r11_10 - 4))
                *(r11_10 - 0x84) =
                    ((rdx_40 + 1) s>> 1) * r9 + ((rbx_1 * rcx_19) s>> 0x10) + r10_5 * rcx_19
                result = r10_5 * rcx_20
                *(r11_10 - 4) = (((*(r11_10 - 4) s>> 0xf) + 1) s>> 1) * r9
                    + ((rbx_1 * rcx_20) s>> 0x10) + result
                j_2 = j_4
                j_4 -= 1
            while (j_2 != 1)
            rsi_5 = &rsi_5[0x248]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)

return result
