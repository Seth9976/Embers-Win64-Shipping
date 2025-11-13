// 函数: sub_1428f5760
// 地址: 0x1428f5760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 s< 0)
    sub_1428a5670(3, 0x92, 0x77, "crypto\bn\bn_shift.c", 0x84)
    return 0

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)
int32_t rdx_1 = temp0 & 0x3f
int32_t rax_3 = temp1 + rdx_1
int32_t rax_5 = (rax_3 & 0x3f) - rdx_1
int32_t r14_1 = rax_3 s>> 6
int32_t rax_6 = arg2[1].d

if (r14_1 s>= rax_6 || rax_6 == 0)
    sub_142890900(arg1, 0)
    return 1

int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(sub_142890560(arg2) + 0x3f - arg3)
int32_t r12_2 = ((temp2_1 & 0x3f) + temp3_1) s>> 6

if (arg1 != arg2)
    int64_t* result = sub_142890e60(arg1, r12_2)
    
    if (result == 0)
        return result
    
    arg1[2].d = arg2[2].d
    goto label_1428f584f

if (arg3 != 0)
label_1428f584f:
    int64_t* r9_1 = *arg1
    int64_t* r8 = *arg2 + (sx.q(r14_1) << 3)
    int32_t i_2 = arg2[1].d - r14_1
    arg1[1].d = r12_2
    
    if (rax_5 != 0)
        int64_t r10_1 = *r8
        int32_t i_3 = i_2 - 1
        void* r8_1 = &r8[1]
        
        if (i_3 != 0)
            int32_t i
            
            do
                r8_1 += 8
                uint64_t r10_2 = r10_1 u>> rax_5.b
                r10_1 = *(r8_1 - 8)
                *r9_1 = r10_1 << (0x40 - rax_5.b) | r10_2
                r9_1 = &r9_1[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        uint64_t r10_3 = r10_1 u>> rax_5.b
        
        if (r10_3 != 0)
            *r9_1 = r10_3
    else if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rax_12 = *r8
            r8 = &r8[1]
            *r9_1 = rax_12
            r9_1 = &r9_1[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (arg1[1].d == 0)
        arg1[2].d = 0

return 1
