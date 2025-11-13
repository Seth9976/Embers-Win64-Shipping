// 函数: sub_1403e7cd0
// 地址: 0x1403e7cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r12 = sx.q(arg3)
int32_t r15 = 0
void* const r10 = &data_1436fdab8

if (r12.d == 0x10)
    r10 = &data_1436fdaa8

int64_t r9 = 0
int32_t var_78

if (arg3 s> 0)
    do
        int32_t r8 = sx.d(*(arg2 + (r9 << 1)))
        r9 += 1
        int32_t rax_3 = r8 s>> 8
        int64_t rcx = sx.q(rax_3)
        int32_t rdx = sx.d((&data_1436fdb10)[rcx])
        (&var_78)[zx.q(*(r9 + r10 - 1))] = (((
            (r8 - (rax_3 << 8)) * (sx.d(*((rcx << 1) + 0x1436fdb12)) - rdx) + (rdx << 8)) s>> 3) + 1)
            s>> 1
    while (r9 s< r12)

int64_t i_7 = 1
int32_t rax_9 = neg.d(var_78)
int32_t var_a0 = 0x10000
int64_t i_5 = sx.q(r12.d s>> 1)
int32_t var_9c = rax_9
int64_t i_6 = 1

if (1 s< i_5)
    void var_98
    void* r10_1 = &var_98
    
    do
        int64_t r14_1 = sx.q((&var_78)[i_6 * 2])
        int64_t i = i_6
        *r10_1 = *(r10_1 - 8) * 2 - ((((sx.q(*(r10_1 - 4)) * r14_1) s>> 0xf) + 1) s>> 1).d
        
        if (i_6 s> 1)
            do
                void var_a4
                int64_t rcx_8 = sx.q(*(&var_a4 + (i << 2)))
                void var_a8
                int32_t rax_13 = *(&var_a8 + (i << 2))
                i -= 1
                (&var_9c)[i] += rax_13 - ((((rcx_8 * r14_1) s>> 0xf) + 1) s>> 1).d
            while (i s> 1)
        
        var_9c -= r14_1.d
        i_6 += 1
        r10_1 += 4
    while (i_6 s< i_5)

int32_t var_74[0x5]
int32_t rax_15 = var_74[0]
int32_t var_c8 = 0x10000
int32_t var_c4 = neg.d(rax_15)

if (1 s< i_5)
    void var_c0
    void* r8_7 = &var_c0
    
    do
        int64_t r11_2 = sx.q(var_74[i_7 * 2])
        int64_t i_1 = i_7
        *r8_7 = *(r8_7 - 8) * 2 - ((((sx.q(*(r8_7 - 4)) * r11_2) s>> 0xf) + 1) s>> 1).d
        
        if (i_7 s> 1)
            do
                void var_cc
                int64_t rcx_18 = sx.q(*(&var_cc + (i_1 << 2)))
                void var_d0
                int32_t rax_20 = *(&var_d0 + (i_1 << 2))
                i_1 -= 1
                (&var_c4)[i_1] += rax_20 - ((((rcx_18 * r11_2) s>> 0xf) + 1) s>> 1).d
            while (i_1 s> 1)
        
        var_c4 -= r11_2.d
        i_7 += 1
        r8_7 += 4
    while (i_7 s< i_5)

void var_7c

if (i_5 s> 0)
    void var_5f
    void* r9_1 = &var_5f + (r12 << 2) - 0x1d
    int64_t r8_8 = 0
    int64_t i_2
    
    do
        r9_1 -= 4
        int32_t rdx_3 = *(&var_9c + r8_8) + *(&var_a0 + r8_8)
        int32_t rcx_24 = *(&var_c4 + r8_8) - *(&var_c8 + r8_8)
        r8_8 += 4
        *(&var_7c + r8_8) = neg.d(rcx_24 + rdx_3)
        *(r9_1 + 4) = rcx_24 - rdx_3
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int32_t i_3

for (i_3 = 0; i_3 s< 0xa; i_3 += 1)
    int32_t rdx_4 = 0
    int32_t r8_9 = 0
    int64_t rcx_26 = 0
    
    if (r12.d s> 0)
        do
            int32_t rax_24 = (&var_78)[rcx_26]
            
            if (rax_24 s<= 0)
                rax_24 = neg.d(rax_24)
            
            if (rax_24 s> rdx_4)
                rdx_4 = rax_24
                r15 = r8_9
            
            rcx_26 += 1
            r8_9 += 1
        while (rcx_26 s< r12)
    
    int32_t rdx_7 = ((rdx_4 s>> 4) + 1) s>> 1
    
    if (rdx_7 s<= 0x7fff)
        break
    
    int32_t rax_25 = 0x27ffe
    
    if (rdx_7 s< 0x27ffe)
        rax_25 = rdx_7
    
    sub_1403e8890(&var_78, r12.d, 
        0xffbe - divs.dp.d(sx.q((rax_25 - 0x7fff) << 0xe), ((r15 + 1) * rax_25) s>> 2))

int64_t rcx_31 = 0

if (i_3 != 0xa)
    if (r12.d s> 0)
        do
            int32_t rax_36 = (&var_78)[rcx_31]
            rcx_31 += 1
            *(arg1 + (rcx_31 << 1) - 2) = (((rax_36 s>> 4) + 1) s>> 1).w
        while (rcx_31 s< r12)
else if (r12.d s> 0)
    do
        int32_t rax_33 = (((&var_78)[rcx_31] s>> 4) + 1) s>> 1
        
        if (rax_33 s> 0x7fff)
            rax_33 = 0x7fff
        else if (rax_33 s< 0xffff8000)
            rax_33 = -0x8000
        
        *(arg1 + (rcx_31 << 1)) = rax_33.w
        rcx_31 += 1
        *(&var_7c + (rcx_31 << 2)) = sx.d(rax_33.w) << 5
    while (rcx_31 s< r12)

int32_t result

for (int32_t i_4 = 0; i_4 s< 0x10; i_4 += 1)
    result = sub_1403e7970(arg1, r12.d)
    
    if (result s>= 0x1a36e)
        break
    
    result = sub_1403e8890(&var_78, r12.d, 0x10000 - (2 << i_4.b))
    int64_t rcx_35 = 0
    
    if (r12.d s> 0)
        do
            int32_t rax_41 = (&var_78)[rcx_35]
            rcx_35 += 1
            result = ((rax_41 s>> 4) + 1) s>> 1
            *(arg1 + (rcx_35 << 1) - 2) = result.w
        while (rcx_35 s< r12)

__security_check_cookie(rax_1 ^ &var_e8)
return result
