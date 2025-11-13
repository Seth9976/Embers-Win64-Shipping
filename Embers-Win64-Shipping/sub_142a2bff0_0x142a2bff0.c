// 函数: sub_142a2bff0
// 地址: 0x142a2bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_20 = 0
uint32_t rdi_4 = ((arg1[1].d - 1) * zx.d(*arg2) + 0x100) u>> 8

if (*(arg1 + 0xc) s< 0)
    sub_142a23140(arg1)

int64_t r8 = *arg1
uint64_t rcx_1 = zx.q(rdi_4) << 0x38

if (r8 u>= rcx_1)
    arg_20 = 1
    rdi_4 = arg1[1].d - rdi_4
    r8 -= rcx_1

uint32_t rdx = zx.d(*(zx.q(rdi_4) + &data_143603f00))
*(arg1 + 0xc) -= rdx
arg1[1].d = rdi_4 << rdx.b
uint64_t i
i.b = 0
*arg1 = r8 << rdx.b
uint32_t rdi_10
int32_t r9_2

do
    int32_t rbp_1 = 0
    uint32_t rdi_9 = (zx.d(arg2[(sx.q(i.b) s>> 1) + 1]) * (arg1[1].d - 1) + 0x100) u>> 8
    
    if (*(arg1 + 0xc) s< 0)
        sub_142a23140(arg1)
    
    int64_t r8_2 = *arg1
    int32_t r9_1 = *(arg1 + 0xc)
    uint64_t rcx_6 = zx.q(rdi_9) << 0x38
    
    if (r8_2 u>= rcx_6)
        rbp_1 = 1
        rdi_9 = arg1[1].d - rdi_9
        r8_2 -= rcx_6
    
    uint32_t rdx_1 = zx.d(*(zx.q(rdi_9) + &data_143603f00))
    *arg1 = r8_2 << rdx_1.b
    rdi_10 = rdi_9 << rdx_1.b
    r9_2 = r9_1 - rdx_1
    *(arg1 + 0xc) = r9_2
    arg1[1].d = rdi_10
    i = zx.q(*(sx.q(sx.d(i.b) + rbp_1) + &data_143602848))
while (i.b s> 0)

int32_t r10 = 0
int32_t rax_14 = neg.d(sx.d(i.b))
int32_t arg_8 = 0
int32_t arg_10 = rax_14
void* r12_2
int32_t r13

if (rax_14 != 0)
    int32_t r12_3 = 0
    i = 0
    
    if (rax_14 s> 0)
        do
            int32_t rbp_7 = 0
            uint32_t rdi_14 = (zx.d(arg2[i + 0xc]) * (arg1[1].d - 1) + 0x100) u>> 8
            
            if (*(arg1 + 0xc) s< 0)
                sub_142a23140(arg1)
                r10 = arg_8
            
            int64_t r8_6 = *arg1
            uint64_t rcx_18 = zx.q(rdi_14) << 0x38
            
            if (r8_6 u>= rcx_18)
                rbp_7 = 1
                rdi_14 = arg1[1].d - rdi_14
                r8_6 -= rcx_18
            
            i += 1
            uint32_t rdx_3 = zx.d(*(zx.q(rdi_14) + &data_143603f00))
            *(arg1 + 0xc) -= rdx_3
            int32_t rbp_8 = rbp_7 << r12_3.b
            r12_3 += 1
            r10 |= rbp_8
            *arg1 = r8_6 << rdx_3.b
            arg1[1].d = rdi_14 << rdx_3.b
            arg_8 = r10
        while (i s< sx.q(rax_14))
        
        rax_14 = arg_10
    
    r13 = 2 << (rax_14.b + 2)
    r12_2 = &arg2[0x1c]
else
    uint32_t rbp_5 = (zx.d(arg2[0xb]) * (rdi_10 - 1) + 0x100) u>> 8
    
    if (r9_2 s< 0)
        sub_142a23140(arg1)
        r10 = 0
    
    int64_t r8_4 = *arg1
    uint64_t rcx_12 = zx.q(rbp_5) << 0x38
    
    if (r8_4 u>= rcx_12)
        r10 = 1
        arg_8 = 1
        rbp_5 = arg1[1].d - rbp_5
        r8_4 -= rcx_12
    
    r13 = 0
    uint32_t rdx_2 = zx.d(*(zx.q(rbp_5) + &data_143603f00))
    *(arg1 + 0xc) -= rdx_2
    *arg1 = r8_4 << rdx_2.b
    arg1[1].d = rbp_5 << rdx_2.b
    r12_2 = &arg2[0x16 + sx.q(r10) * 3]

i.b = 0
uint32_t rdi_20
int32_t r9_4

do
    int32_t rbp_9 = 0
    uint32_t rdi_19 = (zx.d(*((sx.q(i.b) s>> 1) + r12_2)) * (arg1[1].d - 1) + 0x100) u>> 8
    
    if (*(arg1 + 0xc) s< 0)
        sub_142a23140(arg1)
    
    int64_t r8_8 = *arg1
    int32_t r9_3 = *(arg1 + 0xc)
    uint64_t rcx_25 = zx.q(rdi_19) << 0x38
    
    if (r8_8 u>= rcx_25)
        rbp_9 = 1
        rdi_19 = arg1[1].d - rdi_19
        r8_8 -= rcx_25
    
    uint32_t rdx_4 = zx.d(*(zx.q(rdi_19) + &data_143603f00))
    *arg1 = r8_8 << rdx_4.b
    rdi_20 = rdi_19 << rdx_4.b
    r9_4 = r9_3 - rdx_4
    *(arg1 + 0xc) = r9_4
    arg1[1].d = rdi_20
    i = zx.q(*(sx.q(sx.d(i.b) + rbp_9) + &data_143602860))
while (i.b s> 0)

if (arg3 == 0)
    rsi = 1
else
    char rax_33
    
    if (arg_10 != 0)
        rax_33 = arg2[0x20]
    else
        rax_33 = arg2[0x1f]
    
    uint32_t rdi_24 = ((rdi_20 - 1) * zx.d(rax_33) + 0x100) u>> 8
    
    if (r9_4 s< 0)
        sub_142a23140(arg1)
    
    int64_t r8_10 = *arg1
    uint64_t rcx_31 = zx.q(rdi_24) << 0x38
    
    if (r8_10 u>= rcx_31)
        rsi = 1
        rdi_24 = arg1[1].d - rdi_24
        r8_10 -= rcx_31
    
    uint32_t rdx_5 = zx.d(*(zx.q(rdi_24) + &data_143603f00))
    *(arg1 + 0xc) -= rdx_5
    arg1[1].d = rdi_24 << rdx_5.b
    *arg1 = r8_10 << rdx_5.b

int32_t rcx_37 = (((arg_8 << 2 | neg.d(sx.d(i.b))) * 2) | rsi) + 1 + r13

if (arg_20 == 0)
    return zx.q(rcx_37)

return zx.q(neg.d(rcx_37))
