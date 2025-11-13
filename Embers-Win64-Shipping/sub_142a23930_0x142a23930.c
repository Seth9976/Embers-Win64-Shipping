// 函数: sub_142a23930
// 地址: 0x142a23930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12_1 = *(arg1 + 0x1168) + 0x7b2
void* rdi_2 = *(arg1 + 0x1170) + 0x7b2 + zx.q(*(arg1 + 0x1178)) * 0x7fc
sub_142a2d270(&data_143602840, rdi_2, arg1 + 0x437c, r12_1)
void* r12_2 = r12_1 - rdi_2
void* rsi = rdi_2 + 0x19
void* r14 = arg1 + 0x4454
int64_t i_1 = 2
uint32_t result
int64_t i

do
    int32_t rdx_1 = *(r14 - 0xc8)
    int32_t rcx = *(r14 - 0xc4)
    char r10_1 = *(rsi - 0x16)
    int32_t rcx_1 = rcx + rdx_1
    
    if (rcx != neg.d(rdx_1))
        uint64_t rax_1 = 0x14
        
        if (rcx_1 u< 0x14)
            rax_1 = zx.q(rcx_1)
        
        int32_t r9_1 = *(&data_143602870 + (rax_1 << 2))
        uint32_t temp0_1 = (divu.dp.q(0:((zx.q(rcx_1) u>> 1) + (zx.q(rdx_1) << 8)), zx.q(rcx_1))).d
        int32_t rcx_7
        rcx_7.b = temp0_1 == 0
        r10_1 = ((zx.d(r10_1) * (0x100 - r9_1)
            + (zx.d(((0xff - temp0_1) s>> 0x17).b) | zx.d(temp0_1.b) | rcx_7) * r9_1 + 0x80) s>> 8).b
    
    char* rbx_2 = r12_2 - 0x16 + rsi
    *rbx_2 = r10_1
    sub_142a2d270(&data_143602848, rsi - 0x15, r14 - 0xc0, r12_2 - 0x15 + rsi)
    sub_142a2d270(&data_14360285c, rsi - 0xb, r14 - 0x94, r12_2 - 0xb + rsi)
    int64_t j_3 = 0xa
    void* r10_6 = r12_2 - 0xa + rsi
    void* r11_1 = r14 - 0x8c
    int64_t j
    
    do
        int32_t rdx_10 = *r11_1
        int32_t rcx_9 = *(r11_1 + 4)
        char rbx_3 = *(rsi - 0x16 - rbx_2 + r10_6)
        int32_t rcx_10 = rcx_9 + rdx_10
        
        if (rcx_9 != neg.d(rdx_10))
            uint64_t rax_6 = 0x14
            
            if (rcx_10 u< 0x14)
                rax_6 = zx.q(rcx_10)
            
            int32_t r9_6 = *(&data_143602870 + (rax_6 << 2))
            uint32_t temp0_2 =
                (divu.dp.q(0:((zx.q(rcx_10) u>> 1) + (zx.q(rdx_10) << 8)), zx.q(rcx_10))).d
            int32_t rcx_16
            rcx_16.b = temp0_2 == 0
            rbx_3 = ((zx.d(rbx_3) * (0x100 - r9_6)
                + (zx.d(((0xff - temp0_2) s>> 0x17).b) | zx.d(temp0_2.b) | rcx_16) * r9_6 + 0x80)
                s>> 8).b
        
        *r10_6 = rbx_3
        r11_1 += 8
        r10_6 += 1
        j = j_3
        j_3 -= 1
    while (j != 1)
    void* rbx_7 = rsi
    void* rdi_3 = r14 - 0x3c
    int64_t j_2 = 2
    int64_t j_1
    
    do
        sub_142a2d270(&data_143602860, rbx_7, rdi_3, r12_2 + rbx_7)
        rbx_7 += 3
        rdi_3 += 0x10
        j_1 = j_2
        j_2 -= 1
    while (j_1 != 1)
    result = sub_142a2d270(&data_143602860, rsi + 6, r14 - 0x1c, r12_2 + 6 + rsi)
    
    if (arg2 != j_2.d)
        int32_t rdx_19 = *(r14 - 0xc)
        int32_t rcx_18 = *(r14 - 8)
        char r10_7 = *(rsi + 9)
        int32_t rcx_19 = rcx_18 + rdx_19
        
        if (rcx_18 != neg.d(rdx_19))
            uint64_t rax_11 = 0x14
            
            if (rcx_19 u< 0x14)
                rax_11 = zx.q(rcx_19)
            
            int32_t r9_10 = *(&data_143602870 + (rax_11 << 2))
            result = (divu.dp.q(0:((zx.q(rcx_19) u>> 1) + (zx.q(rdx_19) << 8)), zx.q(rcx_19))).d
            int32_t rcx_25
            rcx_25.b = result == 0
            r10_7 = ((zx.d(r10_7) * (0x100 - r9_10)
                + (zx.d(((0xff - result) s>> 0x17).b) | zx.d(result.b) | rcx_25) * r9_10 + 0x80) s>> 8)
                .b
        
        *(r12_2 + rsi + 9) = r10_7
        int32_t rdx_26 = *(r14 - 4)
        int32_t rcx_27 = *r14
        char r10_11 = *(rsi + 0xa)
        int32_t rcx_28 = rcx_27 + rdx_26
        
        if (rcx_27 != neg.d(rdx_26))
            uint64_t rax_15 = 0x14
            
            if (rcx_28 u< 0x14)
                rax_15 = zx.q(rcx_28)
            
            int32_t r9_11 = *(&data_143602870 + (rax_15 << 2))
            result = (divu.dp.q(0:((zx.q(rcx_28) u>> 1) + (zx.q(rdx_26) << 8)), zx.q(rcx_28))).d
            int32_t rcx_34
            rcx_34.b = result == 0
            r10_11 = ((zx.d(r10_11) * (0x100 - r9_11)
                + (zx.d(((0xff - result) s>> 0x17).b) | zx.d(result.b) | rcx_34) * r9_11 + 0x80) s>> 8)
                .b
        
        *(r12_2 + rsi + 0xa) = r10_11
    
    rsi += 0x21
    r14 += 0xcc
    i = i_1
    i_1 -= 1
while (i != 1)
return result
