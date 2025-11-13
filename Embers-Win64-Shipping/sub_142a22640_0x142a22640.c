// 函数: sub_142a22640
// 地址: 0x142a22640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xf00)
int64_t r12 = *(arg1 + 0xea8)
int64_t* r13 = *(arg1 + 0xe18)
int64_t* var_38
int32_t var_30

if (*(rax + 8) u>= 3)
    int32_t* r14_1 = 0x10
    int32_t* rdi_1 = arg1 + 0x880
    void* rbp_1 = arg1 + 0x890
    int64_t i_5 = 8
    int64_t i
    
    do
        int32_t rsi_1 = *(arg1 + 0xe80)
        rdi_1[4] = *(*(arg1 + 0xf00) + r14_1 - 4)
        rdi_1[0x12] = *(r14_1 + *(arg1 + 0xf00))
        
        if (*(*(arg1 + 0xf00) + 0xa) != 0)
            sub_142a22ce0(rbp_1, arg1)
            sub_142a22ce0(rbp_1 + 0x38, arg1)
        
        if (rdi_1[4] != rdi_1[0x12])
            var_30.q = *(arg1 + 0xf98)
            var_38.d = rsi_1
            sub_142a22bc0(&rdi_1[-8], sx.q(*rdi_1) + r12, rsi_1, r13, var_38.d, var_30)
            var_30.q = *(arg1 + 0xf98)
            var_38.d = rsi_1
            sub_142a22bc0(&rdi_1[6], sx.q(rdi_1[0xe]) + r12, rsi_1, r13, var_38.d, var_30)
        else
            sub_142a22a80(arg1, &rdi_1[-8], sx.q(*rdi_1) + r12, zx.q(rsi_1), r13, rsi_1)
        
        rbp_1 += 0x70
        r14_1 = &r14_1[2]
        rdi_1 = &rdi_1[0x1c]
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    int32_t rdi = *(arg1 + 0xe80)
    *(arg1 + 0x890) = *(rax + 0xc)
    *(arg1 + 0x900) = *(*(arg1 + 0xf00) + 0x14)
    *(arg1 + 0xa50) = *(*(arg1 + 0xf00) + 0x2c)
    *(arg1 + 0xac0) = *(*(arg1 + 0xf00) + 0x34)
    
    if (*(*(arg1 + 0xf00) + 0xa) != 0)
        sub_142a22ce0(arg1 + 0x890, arg1)
        sub_142a22ce0(arg1 + 0x900, arg1)
        sub_142a22ce0(arg1 + 0xa50, arg1)
        sub_142a22ce0(arg1 + 0xac0, arg1)
    
    sub_142a22b20(arg1, arg1 + 0x860, sx.q(*(arg1 + 0x880)) + r12, zx.q(rdi), r13, rdi)
    sub_142a22b20(arg1, arg1 + 0x8d0, sx.q(*(arg1 + 0x8f0)) + r12, zx.q(rdi), r13, rdi)
    sub_142a22b20(arg1, arg1 + 0xa20, sx.q(*(arg1 + 0xa40)) + r12, zx.q(rdi), r13, rdi)
    sub_142a22b20(arg1, arg1 + 0xa90, sx.q(*(arg1 + 0xab0)) + r12, zx.q(rdi), r13, rdi)

int64_t r15_1 = *(arg1 + 0xeb0)
void* rdi_2 = arg1 + 0xc10
int64_t r12_1 = *(arg1 + 0xe20)
int64_t i_4 = 2
int64_t i_3 = 2
int64_t i_1

do
    int32_t rsi_2 = *(arg1 + 0xe94)
    
    if (*rdi_2 != *(rdi_2 + 0x38))
        var_30.q = *(arg1 + 0xf98)
        var_38.d = rsi_2
        sub_142a22bc0(rdi_2 - 0x30, sx.q(*(rdi_2 - 0x10)) + r15_1, rsi_2, r12_1, var_38.d, var_30)
        var_30.q = *(arg1 + 0xf98)
        var_38.d = rsi_2
        sub_142a22bc0(rdi_2 + 8, sx.q(*(rdi_2 + 0x28)) + r15_1, rsi_2, r12_1, var_38.d, var_30)
    else
        int32_t r9_8 = sx.d(*rdi_2)
        int64_t rcx_15 = sx.q(*(rdi_2 - 0x10))
        int64_t r8_13 = sx.q(*(rdi_2 + 2))
        int64_t* r11_1 = rcx_15 + r15_1
        int64_t* r10_4 = (r8_13 s>> 3) + sx.q((r9_8 s>> 3) * rsi_2) + rcx_15 + r12_1
        
        if ((r9_8.b & 7) != 0 || (r8_13.b & 7) != 0)
            (*(arg1 + 0xfa0))(r10_4, zx.q(rsi_2), zx.q(r8_13.d) & 7, zx.q(r9_8) & 7, r11_1, rsi_2)
        else
            sub_1403addff(r10_4, rsi_2, r11_1, rsi_2)
    
    rdi_2 += 0x70
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int64_t rbp_2 = *(arg1 + 0xeb8)
void* rdi_3 = arg1 + 0xcf0
int64_t r15_2 = *(arg1 + 0xe28)
int64_t result
int64_t i_2

do
    int32_t rsi_3 = *(arg1 + 0xe94)
    
    if (*rdi_3 != *(rdi_3 + 0x38))
        var_30.q = *(arg1 + 0xf98)
        var_38.d = rsi_3
        sub_142a22bc0(rdi_3 - 0x30, sx.q(*(rdi_3 - 0x10)) + rbp_2, rsi_3, r15_2, var_38.d, var_30)
        var_30.q = *(arg1 + 0xf98)
        var_38.d = rsi_3
        result =
            sub_142a22bc0(rdi_3 + 8, sx.q(*(rdi_3 + 0x28)) + rbp_2, rsi_3, r15_2, var_38.d, var_30)
    else
        int32_t r9_13 = sx.d(*rdi_3)
        int64_t rcx_20 = sx.q(*(rdi_3 - 0x10))
        int64_t r8_18 = sx.q(*(rdi_3 + 2))
        int64_t* r11_2 = rcx_20 + rbp_2
        int64_t* r10_8 = (r8_18 s>> 3) + sx.q((r9_13 s>> 3) * rsi_3) + rcx_20 + r15_2
        
        if ((r9_13.b & 7) != 0 || (r8_18.b & 7) != 0)
            result = (*(arg1 + 0xfa0))(r10_8, zx.q(rsi_3), zx.q(r8_18.d) & 7, zx.q(r9_13) & 7, 
                r11_2, rsi_3)
        else
            result = sub_1403addff(r10_8, rsi_3, r11_2, rsi_3)
    
    rdi_3 += 0x70
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
return result
