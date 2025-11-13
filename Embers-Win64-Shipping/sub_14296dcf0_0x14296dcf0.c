// 函数: sub_14296dcf0
// 地址: 0x14296dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void* var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t r10 = 0
int32_t var_70 = *(arg2 + 0x20) + *arg2
uint64_t rax_2 = 0
int64_t i = 1
int32_t r9_3 = *(arg3 + 0x20) + *arg3
int32_t j_4 = 1
int32_t r8_1 = *(arg2 + 0x24) + *(arg2 + 4)
int32_t var_4c = *(arg3 + 0x24) + *(arg3 + 4)
int32_t var_68 = *(arg2 + 0x28) + *(arg2 + 8)
int32_t var_48 = *(arg3 + 0x28) + *(arg3 + 8)
int32_t var_64 = *(arg2 + 0x2c) + *(arg2 + 0xc)
int32_t var_44 = *(arg3 + 0x2c) + *(arg3 + 0xc)
int32_t var_60 = *(arg2 + 0x30) + *(arg2 + 0x10)
int32_t var_40 = *(arg3 + 0x30) + *(arg3 + 0x10)
int32_t var_5c = *(arg2 + 0x34) + *(arg2 + 0x14)
int32_t var_3c = *(arg3 + 0x34) + *(arg3 + 0x14)
int32_t var_58 = *(arg2 + 0x38) + *(arg2 + 0x18)
int32_t var_38 = *(arg3 + 0x38) + *(arg3 + 0x18)
int32_t var_54 = *(arg2 + 0x3c) + *(arg2 + 0x1c)
int32_t var_34 = *(arg3 + 0x3c) + *(arg3 + 0x1c)
int32_t var_6c = r8_1
void* r14 = &arg1[8]
var_98 = arg2
void* r8_4 = arg3 - arg1 - 0x1c
int32_t var_50 = r9_3
void* var_90 = r8_4
void* rcx_29 = arg2 - arg1 - 0x20
void* var_88 = rcx_29

do
    int64_t r11_1 = 0
    int64_t j_2 = sx.q(j_4)
    
    if (j_4 s> 0)
        void* r8_5 = arg3
        void* r9_4 = rcx_29 + r14
        int64_t j
        
        do
            uint64_t rcx_30 = zx.q(*r8_5)
            r8_5 += 4
            uint64_t rdx = zx.q(*r9_4)
            r9_4 -= 4
            r11_1 += rdx * rcx_30
            rax_2 += zx.q(*(&var_70 - arg2 + r9_4 + 4)) * zx.q(*(&var_50 - arg3 + r8_5 - 4))
            r10 += zx.q(*(r9_4 + 0x24)) * zx.q(*(r8_5 + 0x1c))
            j = j_2
            j_2 -= 1
        while (j != 1)
        arg2 = var_98
        r8_4 = var_90
    
    int64_t rax_3 = rax_2 - r11_1
    int64_t r10_1 = r10 + r11_1
    int64_t r11_2 = 0
    
    if (i s< 8)
        void* rcx_34 = arg2 - &var_50
        void* r8_6 = r8_4 + r14
        int32_t* r9_5 = &var_54
        int64_t j_3 = 8 - i
        int64_t j_1
        
        do
            uint64_t rcx_35 = zx.q(*r8_6)
            r8_6 += 4
            uint64_t rdx_6 = zx.q(*(rcx_34 + 0x20 + r9_5))
            r9_5 = &r9_5[-1]
            r10_1 -= rdx_6 * rcx_35
            r11_2 += zx.q(*(&var_50 - arg3 + r8_6 - 4)) * zx.q(r9_5[1])
            rax_3 += zx.q(*(rcx_34 + 0x40 + r9_5 + 4)) * zx.q(*(r8_6 + 0x1c))
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
    
    arg2 = var_98
    int64_t r10_2 = r10_1 + r11_2
    r8_4 = var_90
    r10 = r10_2 u>> 0x1c
    *(r14 - 0x20) = r10_2.d & 0xfffffff
    int64_t rax_4 = rax_3 + r11_2
    j_4 += 1
    rax_2 = rax_4 u>> 0x1c
    *r14 = rax_4.d & 0xfffffff
    i += 1
    rcx_29 = var_88
    r14 += 4
while (i s<= 8)

uint64_t r10_3 = r10 + zx.q(arg1[8]) + rax_2
uint64_t rax_5 = rax_2 + zx.q(*arg1)
arg1[9] += (r10_3 u>> 0x1c).d
arg1[8] = r10_3.d & 0xfffffff
uint32_t result = (rax_5 u>> 0x1c).d
arg1[1] += result
*arg1 = rax_5.d & 0xfffffff
__security_check_cookie(rax_1 ^ &var_98)
return result
