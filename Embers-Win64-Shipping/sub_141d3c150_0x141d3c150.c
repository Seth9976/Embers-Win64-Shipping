// 函数: sub_141d3c150
// 地址: 0x141d3c150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg6 == 0)
    return 

int32_t rax_1 = *(arg3 + 0xc)
int32_t i = 0
arg3[1].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_140638cc0(arg3, 0)

int32_t rax_2 = *(arg4 + 0xc)
arg4[1].d = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405c5570(arg4, 0)

int32_t rax_3 = *(arg1 + 0x210)
int32_t rcx_2 = arg2[1].d

if (rax_3 s> rcx_2)
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
else if (rax_3 s< rcx_2 && rax_3 != rcx_2)
    arg2[1].d = rax_3
    sub_1405c53d0(arg2)

uint64_t rax = zx.q(arg5)
int32_t r8 = 0

if (rax.d == 2)
    int64_t r11_1 = 0
    int64_t* r10_1 = *(arg1 + 0x208)
    uint64_t r12_2 = sx.q(*(arg1 + 0x210)) << 3 u>> 3
    
    if (r10_1 u> &r10_1[sx.q(*(arg1 + 0x210))])
        r12_2 = 0
    
    if (r12_2 != 0)
        int64_t rsi_1 = 0
        
        do
            uint64_t* r9 = *r10_1
            
            if (r9 != 0 && *(sx.q(r9[1].d) + *(*r9 + 0x368)) == 0)
                r8 += 1
                *(rsi_1 + *arg2) = r9
                rsi_1 += 8
            
            r10_1 = &r10_1[1]
            r11_1 += 1
        while (r11_1 != r12_2)
else if (rax.d == 0)
    int64_t rdx_2 = 0
    int64_t* rcx_6 = *(arg1 + 0x208)
    uint64_t r11_3 = sx.q(*(arg1 + 0x210)) << 3 u>> 3
    
    if (rcx_6 u> &rcx_6[sx.q(*(arg1 + 0x210))])
        r11_3 = 0
    
    if (r11_3 != 0)
        int64_t r10_2 = 0
        
        do
            int64_t r9_1 = *rcx_6
            
            if (r9_1 != 0)
                r8 += 1
                *(r10_2 + *arg2) = r9_1
                r10_2 += 8
            
            rcx_6 = &rcx_6[1]
            rdx_2 += 1
        while (rdx_2 != r11_3)

int64_t rsi_2 = sx.q(arg2[1].d)

if (r8 s> rsi_2.d)
    arg2[1].d = r8
    
    if (r8 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rsi_2 << 3), 0, sx.q(r8 - rsi_2.d) << 3)
else if (r8 s< rsi_2.d && r8 != rsi_2.d)
    arg2[1].d = r8
    sub_1405c53d0(arg2)

int32_t rcx_11 = arg2[1].d + arg3[1].d
arg3[1].d = rcx_11

if (rcx_11 s> *(arg3 + 0xc))
    sub_140638a00(arg3)

int32_t rcx_14 = arg2[1].d + arg4[1].d
arg4[1].d = rcx_14

if (rcx_14 s> *(arg4 + 0xc))
    sub_1405a4d70(arg4)

if (arg2[1].d s<= 0)
    return 

int64_t r9_2 = 0
int64_t r10_3 = 0

do
    r10_3 += 0xc
    int64_t r8_3 = *arg3
    r9_2 += 8
    int32_t i_1 = i
    int32_t i_2 = i
    i += 1
    int64_t* rcx_16 = *(r9_2 + *arg2 - 8)
    int64_t rdx_6 = sx.q(rcx_16[1].d) * 3
    int64_t rcx_17 = *(*rcx_16 + 0x28)
    *(r8_3 + r10_3 - 0xc) = *(rcx_17 + (rdx_6 << 2))
    *(r8_3 + r10_3 - 4) = *(rcx_17 + (rdx_6 << 2) + 8)
    *(r9_2 + *arg4 - 8) = i_1.q
while (i s< arg2[1].d)
