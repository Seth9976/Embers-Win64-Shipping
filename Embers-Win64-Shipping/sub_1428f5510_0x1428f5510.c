// 函数: sub_1428f5510
// 地址: 0x1428f5510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg3 s< 0)
    sub_1428a5670(3, 0x91, 0x77, "crypto\bn\bn_shift.c", 0x5d)
    return 0

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
int32_t rdx_1 = temp0 & 0x3f
int32_t rax_3 = temp1 + rdx_1
int32_t rax_5 = (rax_3 & 0x3f) - rdx_1
int32_t rbx_1 = rax_3 s>> 6
int64_t* result = sub_142890e60(arg1, arg2[1].d + 1 + rbx_1)

if (result == 0)
    return result

arg1[2].d = arg2[2].d
int64_t r11 = *arg2
int64_t r15 = *arg1
*(r15 + (sx.q(arg2[1].d + rbx_1) << 3)) = 0
int32_t rax_11 = arg2[1].d - 1
int64_t r8 = sx.q(rax_11)

if (rax_5 != 0)
    if (rax_11 s>= 0)
        int64_t rcx_1 = sx.q(rbx_1)
        int64_t rax_15 = r8 + 1 + rcx_1
        int64_t r10_1 = *(r15 + (rax_15 << 3))
        int64_t* r9_1 = r15 + (rax_15 << 3)
        int64_t temp2_1
        
        do
            int64_t rdx_8 = *(r11 - ((rcx_1 << 3) + 8) - r15 + r9_1)
            r9_1 = &r9_1[-1]
            int64_t rax_19 = rdx_8 u>> (0x40 - rax_5.b) | r10_1
            r10_1 = rdx_8 << rax_5.b
            temp2_1 = r8
            r8 -= 1
            *r9_1 = r10_1
            r9_1[1] = rax_19
        while (temp2_1 - 1 s>= 0)
else if (rax_11 s>= 0)
    int64_t* rcx = r11 + (r8 << 3)
    int64_t temp3_1
    
    do
        temp3_1 = r8
        r8 -= 1
        *((sx.q(rbx_1) << 3) - r11 + r15 + rcx) = *rcx
        rcx = &rcx[-1]
    while (temp3_1 - 1 s>= 0)

memset(r15, 0, sx.q(rbx_1) << 3)
arg1[1].d = arg2[1].d + 1 + rbx_1
sub_142890ce0(arg1)
return 1
