// 函数: sub_141dc7a00
// 地址: 0x141dc7a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg2, 0)

if (*(arg1 + 0xb0) == *(arg1 + 0xdc))
    void* rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0)
        return sub_142363b10(rcx_1, arg2)

int32_t rcx_2 = 0
int32_t r10_1 = *(arg1 + 0xd0)
int32_t var_88 = 0
int32_t var_84_1 = 1
void* var_80_1 = arg1 + 0xb8
int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
int32_t var_70_1 = 0

if (r10_1 != 0)
    void* rax_1 = *(arg1 + 0xc8)
    void* r8_1 = arg1 + 0xb8
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_3 = *r8_1
    int32_t var_74_3
    
    if (rdx_3 != 0)
    label_141dc7af6:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_74_2 = rcx_2 - rax_9 + 0x1f
        
        if (rcx_2 - rax_9 + 0x1f s> r10_1)
            var_74_3 = r10_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rdi)
            rcx_2 += 0x20
            rdi += 1
            int32_t var_70_2 = rcx_2
            var_88 = rdi
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r8_1 + (rdx_4 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141dc7af6
        
        var_74_3 = r10_1

int32_t rdx_6 = *(arg1 + 0xd0)
double zmm2[0x2] = var_78_1.o
double var_28_1[0x2] = zmm2
int32_t r14_1 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_38_1 = var_88.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_2 = rdx_6 & 0xffffffe0
int64_t var_48_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_78_2 = r14_1
int32_t var_74_4 = rdx_6
int128_t var_68 = (arg1 + 0xa8).o
int128_t var_58_1 = var_38_1

if (rdx_6 != r10_1)
    void* rax_11 = *(arg1 + 0xc8)
    void* r10_2 = arg1 + 0xb8
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_10 = *(r10_2 + (sx.q(r8_3) << 2)) & r14_1
    int32_t var_74_6
    
    if (rdx_10 != 0)
    label_141dc7bc2:
        int32_t rax_18 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_74_5 = r9_2 - r11_1 + 0x1f
        
        if (r9_2 - r11_1 + 0x1f s> r10_1)
            var_74_6 = r10_1
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_2 + (rcx_7 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141dc7bc2
        
        var_74_6 = r10_1

while (true)
    int64_t rcx_9 = sx.q(var_58_1:0xc.d)
    uint64_t result = var_68.q
    
    if (rcx_9.d == (var_78_2.q u>> 0x20).d && var_58_1.q == arg1 + 0xb8 && result == arg1 + 0xa8)
        return result
    
    void* rdx_11 = *(*result + rcx_9 * 0x10)
    
    if (rdx_11 != 0)
        int64_t* rax_21 = sub_14234f100(&var_88, rdx_11)
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rcx_12 = (rdi_1 + 1).d
        arg2[1].d = rcx_12
        
        if (rcx_12 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        *(*arg2 + rdi_1 * 0x10) = *rax_21
    
    int32_t var_5c
    var_58_1:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
