// 函数: sub_140403a80
// 地址: 0x140403a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg19)
int32_t r15 = arg9
bool cond:0 = rax.d s> 1
uint32_t rdi = (rax << 3).d
int64_t rcx_1 = sx.q(arg3)
int32_t rax_3 = 0x40
int32_t r10 = arg2
int32_t arg_18 = arg2
int32_t arg_10 = arg3
int32_t rbp = 0
int32_t var_90 = 0x40
int64_t rdx = rcx_1
int64_t var_78 = rcx_1
int64_t i_5 = 6
int64_t i

do
    int32_t r8 = 0
    int32_t r11_1 = 0
    int32_t r9_1 = (rax_3 + rbp) s>> 1
    
    if (rcx_1.d s> r10)
        int64_t rdx_1 = arg5 + (rdx << 2)
        uint64_t j_1 = zx.q(rcx_1.d - r10)
        uint64_t j
        
        do
            int32_t rax_6 = *(arg6 - arg5 + rdx_1 - 4)
            rdx_1 -= 4
            int32_t rax_9 = ((rax_6 * r9_1) s>> 6) + *rdx_1
            
            if (rax_9 s>= *(arg7 - arg5 + rdx_1) || r11_1 != 0)
                int32_t rcx_2 = *(arg8 - arg5 + rdx_1)
                r11_1 = 1
                
                if (rax_9 s< rcx_2)
                    rcx_2 = rax_9
                
                r8 += rcx_2
            else if (rax_9 s>= rdi)
                r8 += rdi
            
            j = j_1
            j_1 -= 1
        while (j != 1)
        r10 = arg_18
        rcx_1 = zx.q(arg_10)
        rax_3 = var_90
        rdx = var_78
    
    if (r8 s<= r15)
        rbp = r9_1
    else
        rax_3 = r9_1
        var_90 = rax_3
    
    i = i_5
    i_5 -= 1
while (i != 1)
int32_t rbx_3 = 0
int32_t r8_1 = 0

if (rcx_1.d s> r10)
    void* rsi_4 = arg8 - arg5
    uint64_t i_3 = zx.q(rcx_1.d - r10)
    int32_t* rdx_2 = arg5 + (rdx << 2)
    uint64_t i_1
    
    do
        int32_t rcx_3 = *(rdx_2 + arg6 - arg5 - 4)
        rdx_2 = &rdx_2[-1]
        uint32_t rcx_6 = ((rcx_3 * rbp) s>> 6) + *rdx_2
        
        if (rcx_6 s>= *(rdx_2 + arg7 - arg5) || r8_1 != 0)
            r8_1 = 1
        else
            uint32_t rax_10 = 0
            
            if (rcx_6 s>= rdi)
                rax_10 = rdi
            
            rcx_6 = rax_10
        
        if (rcx_6 s>= *(rdx_2 + rsi_4))
            rcx_6 = *(rdx_2 + rsi_4)
        
        rbx_3 += rcx_6
        *(arg16 - arg5 + rdx_2) = rcx_6
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    r15 = arg9
    rcx_1 = zx.q(arg_10)

uint32_t r12_1 = arg13
int32_t rbp_1 = (rcx_1 - 1).d
int64_t r14_5 = sx.q(rbp_1)
int64_t* rsi_10

if (rbp_1 s<= arg4)
label_140403e80:
    r15 += arg11
label_140403e88:
    rsi_10 = arg21
else
    int64_t rax_11 = sx.q(r10)
    int32_t r13_2 = rbp_1
    int64_t rdx_3 = rax_11 * 2
    int64_t var_88_1 = var_78 - 1
    int64_t rcx_7 = var_78 * 2
    var_90.q = (var_78 << 2) + -fffffffffffffffc
    int64_t var_58_1 = rdx_3
    int64_t var_70_1 = rcx_7
    
    while (true)
        int64_t r8_3 = *(arg1 + 0x20)
        int32_t r10_2 = r15 - rbx_3
        int32_t rsi_5 = sx.d(*(rcx_7 + r8_3))
        int32_t r9_3 = sx.d(*(rdx_3 + r8_3))
        int32_t rcx_9 = rsi_5 - r9_3
        int32_t temp0_1 = divs.dp.d(sx.q(r10_2), rcx_9)
        int32_t rcx_11 = sx.d(*(r8_3 + (r14_5 << 1)))
        int32_t rax_18 = r9_3 - rcx_11 + r10_2 - rcx_9 * temp0_1
        int32_t rdx_5 = 0
        
        if (rax_18 s> 0)
            rdx_5 = rax_18
        
        int32_t rsi_6 = rsi_5 - rcx_11
        uint32_t* r8_4 = arg16 + (r14_5 << 2)
        int32_t rax_21 = *(arg7 + (r14_5 << 2))
        int32_t rsi_9 = rsi_6 * temp0_1 + *r8_4 + rdx_5
        int32_t rcx_12 = rdi + 8
        
        if (rax_21 s> rdi + 8)
            rcx_12 = rax_21
        
        if (rsi_9 s>= rcx_12)
            if (arg22 == 0)
                if (sub_1403f72f0(arg21, 1) != 0)
                    goto label_140403e88
            else
                if (arg_10 s<= arg_18 + 2)
                label_140403e66:
                    rsi_10 = arg21
                    sub_1403fe0d0(rsi_10, 1, 1)
                    break
                
                int32_t rax_24 = 9
                
                if (rbp_1 s< arg23)
                    rax_24 = 7
                
                if (rsi_9 s> (rax_24 * rsi_6) << arg20.b << 3 s>> 4 && rbp_1 s<= arg24)
                    goto label_140403e66
                
                sub_1403fe0d0(arg21, 0, 1)
            
            rbx_3 += 8
            rsi_9 -= 8
        
        int32_t rbx_4 = rbx_3 - (*r8_4 + r12_1)
        
        if (r12_1 s> 0)
            r12_1 = zx.d(*(r14_5 - rax_11 + &data_143700570))
        
        rbx_3 = rbx_4 + r12_1
        
        if (rsi_9 s< rdi)
            *r8_4 = 0
        else
            rbx_3 += rdi
            *r8_4 = rdi
        
        arg_10 -= 1
        var_90.q -= 4
        int64_t rax_33 = var_88_1 - 1
        r13_2 -= 1
        rcx_7 = var_70_1 - 2
        var_88_1 = rax_33
        r14_5 = rax_33
        var_70_1 = rcx_7
        rbp_1 = r13_2
        
        if (r13_2 s<= arg4)
            goto label_140403e80
        
        rdx_3 = var_58_1

int32_t r14_7 = arg_18
int32_t* r13_3

if (r12_1 s<= 0)
    r13_3 = arg12
    *r13_3 = 0
else
    int32_t rdx_7 = arg_10
    
    if (arg22 == 0)
        r13_3 = arg12
        *r13_3 = sub_1403f7510(rsi_10, rdx_7 - r14_7 + 1) + r14_7
    else
        r13_3 = arg12
        
        if (*r13_3 s< arg_10)
            rdx_7 = *r13_3
        
        *r13_3 = rdx_7
        sub_1403fe640(rsi_10, rdx_7 - r14_7, arg_10 - r14_7 + 1)

if (*r13_3 s<= r14_7)
    r15 += arg15
    *arg14 = 0
else if (arg15 s<= 0)
    *arg14 = 0
else if (arg22 == 0)
    *arg14 = sub_1403f72f0(rsi_10, 1)
else
    sub_1403fe0d0(rsi_10, *arg14, 1)

void* r10_4 = arg1
int64_t r12_3 = arg16
int64_t rsi_11 = sx.q(r14_7)
int64_t rcx_20 = *(r10_4 + 0x20)
int32_t r15_1 = r15 - rbx_3
int64_t rbp_3 = sx.q(arg_10)
int32_t r8_9 = sx.d(*(rcx_20 + (rbp_3 << 1))) - sx.d(*(rcx_20 + (rsi_11 << 1)))
int32_t temp0_2 = divs.dp.d(sx.q(r15_1), r8_9)
int64_t rdx_12 = rsi_11
int32_t r15_2 = r15_1 - r8_9 * temp0_2

if (rsi_11 s< rbp_3)
    do
        int64_t rax_40 = *(r10_4 + 0x20)
        rdx_12 += 1
        *(r12_3 + (rdx_12 << 2) - 4) +=
            (sx.d(*(rax_40 + (rdx_12 << 1))) - sx.d(*(rax_40 + (rdx_12 << 1) - 2))) * temp0_2
    while (rdx_12 s< rbp_3)

int64_t rdx_13 = rsi_11

if (rsi_11 s< rbp_3)
    do
        int64_t rax_42 = *(r10_4 + 0x20)
        int32_t rcx_25 = sx.d(*(rax_42 + (rdx_13 << 1) + 2)) - sx.d(*(rax_42 + (rdx_13 << 1)))
        
        if (r15_2 s< rcx_25)
            rcx_25 = r15_2
        
        rdx_13 += 1
        *(r12_3 + (rdx_13 << 2) - 4) += rcx_25
        r15_2 -= rcx_25
    while (rdx_13 s< rbp_3)

int32_t r15_3 = 0

if (rsi_11 s< rbp_3)
    void* r9_7 = arg8 - r12_3
    void* r8_12 = arg17 - r12_3
    int32_t* rdx_15 = arg18 - r12_3
    int32_t* r11_5 = r12_3 + (rsi_11 << 2)
    arg12 = rdx_15
    arg8 = r9_7
    void* var_88_2 = r8_12
    
    do
        int64_t rax_44 = *(r10_4 + 0x20)
        int32_t r10_6 = *r11_5 + r15_3
        int32_t rbx_7 =
            (sx.d(*(rax_44 + (rsi_11 << 1) + 2)) - sx.d(*(rax_44 + (rsi_11 << 1)))) << arg20.b
        int32_t* rbx_10
        int32_t r9_8
        void* r10_12
        
        if (rbx_7 s<= 1)
            rbx_10 = r8_12 + r11_5
            r9_8 = r10_6 - rdi
            
            if (r10_6 - rdi s< 0)
                r9_8 = 0
            
            *r11_5 = r10_6 - r9_8
            r10_12 = rdx_15 + r11_5
            *rbx_10 = 0
            *r10_12 = 1
        else
            int32_t rax_47 = r10_6 - *(r9_7 + r11_5)
            r9_8 = 0
            
            if (rax_47 s> 0)
                r9_8 = rax_47
            
            int32_t r10_7 = r10_6 - r9_8
            *r11_5 = r10_7
            int32_t rax_48
            
            if (arg19 == 2 && rbx_7 s> arg19 && *arg14 == 0)
                rax_48 = 1
            
            if (arg19 != 2 || rbx_7 s<= arg19 || *arg14 != 0 || r14_7 s>= *r13_3)
                rax_48 = 0
            
            uint64_t rcx_29 = zx.q(rbx_7 * arg19 + rax_48)
            int32_t rdx_19 = (sx.d(*(*(arg1 + 0x40) + (rsi_11 << 1))) + (arg20 << 3)) * rcx_29.d
            int32_t r8_15 = (rdx_19 s>> 1) - rcx_29.d * 0x15
            
            if (rbx_7 == 2)
                r8_15 += (rcx_29 << 3).d s>> 2
            
            int32_t rbx_8 = r10_7 + r8_15
            
            if (rbx_8 s< rcx_29.d << 4)
                r8_15 += rdx_19 s>> 2
            else if (rbx_8 s< (rcx_29 * 3).d << 3)
                r8_15 += rdx_19 s>> 3
            
            uint32_t r14_8 = (rcx_29 << 3).d
            int32_t temp0_3 = divs.dp.d(sx.q(r10_7 + (rcx_29 << 2).d + r8_15), r14_8)
            int32_t r10_8 = temp0_3
            
            if (temp0_3 s< 0)
                r10_8 = 0
            
            rbx_10 = var_88_2 + r11_5
            *rbx_10 = r10_8
            int32_t rdx_24 = *r11_5
            
            if (r10_8 * arg19 s> rdx_24 s>> 3)
                r10_8 = rdx_24 s>> cond:0 s>> 3
                *rbx_10 = r10_8
            
            int32_t rdx_25 = 8
            
            if (r10_8 s< 8)
                rdx_25 = r10_8
            
            *rbx_10 = rdx_25
            r10_12 = arg12 + r11_5
            r14_7 = arg_18
            int32_t rax_66
            rax_66.b = rdx_25 * r14_8 s>= *r11_5 + r8_15
            *r10_12 = rax_66
            *r11_5 -= (arg19 * *rbx_10) << 3
        
        if (r9_8 s> 0)
            int32_t rdx_27 = *rbx_10
            int32_t rax_71 = r9_8 s>> (cond:0 + 3)
            int32_t r8_16 = 8 - rdx_27
            
            if (rax_71 s< r8_16)
                r8_16 = rax_71
            
            *rbx_10 = rdx_27 + r8_16
            int32_t r8_18 = (r8_16 * arg19) << 3
            int32_t rcx_41
            rcx_41.b = r8_18 s>= r9_8 - r15_3
            r9_8 -= r8_18
            *r10_12 = rcx_41
        
        rdx_15 = arg12
        r8_12 = var_88_2
        r10_4 = arg1
        r14_7 += 1
        rsi_11 += 1
        r11_5 = &r11_5[1]
        r15_3 = r9_8
        r9_7 = arg8
        arg_18 = r14_7
    while (rsi_11 s< rbp_3)
    
    r12_3 = arg16

*arg10 = r15_3
int64_t rax_76 = sx.q(r14_7)

if (rax_76 s< var_78)
    int32_t* r12_5 = r12_3 - arg17
    void* r8_19 = arg17 + (rax_76 << 2)
    int64_t i_4 = var_78 - rax_76
    int64_t i_2
    
    do
        int32_t rdx_28 = *(r12_5 + r8_19)
        r8_19 += 4
        *(r8_19 - 4) = rdx_28 s>> cond:0 s>> 3
        *(r12_5 + r8_19 - 4) = 0
        int32_t rcx_44
        rcx_44.b = *(r8_19 - 4) s< 1
        *(arg18 - arg17 + r8_19 - 4) = rcx_44
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

return zx.q(arg_10)
