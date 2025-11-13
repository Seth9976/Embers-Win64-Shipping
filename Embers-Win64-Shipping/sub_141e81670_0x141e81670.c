// 函数: sub_141e81670
// 地址: 0x141e81670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int64_t var_78 = 0
int64_t var_70 = 0
int32_t rbx = *(arg1 + 0xc8)
int32_t rcx = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_90 = (arg1 + 0xb0).d
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx != 0)
    int32_t* rax_1 = *(arg1 + 0xc0)
    int32_t* r9_1 = arg1 + 0xb0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141e81728:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9_1[rdx_4 + 1]
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e81728
        
        var_84.d = rbx

int32_t rdx_5 = *(arg1 + 0xc8)
double zmm2[0x2] = var_88.o
double var_28[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_38 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r14
var_84.d = rdx_5
int128_t var_68 = (arg1 + 0xa0).o
int128_t var_58 = var_38

if (rdx_5 != rbx)
    int32_t* rax_11 = *(arg1 + 0xc0)
    int32_t* r10_1 = arg1 + 0xb0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_3)] & r14
    
    if (rdx_9 != 0)
    label_141e817f2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_5 + 1]
            var_88_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141e817f2
        
        var_84.d = rbx

while (true)
    int64_t rcx_7 = sx.q(var_58:0xc.d)
    int64_t result = var_68.q
    
    if (rcx_7.d == (var_88_1.q u>> 0x20).d && var_58.q == arg1 + 0xb0 && result == arg1 + 0xa0)
        int64_t rcx_13 = var_78
        
        if (rcx_13 == 0)
            return result
        
        return sub_140a74f90(rcx_13)
    
    int64_t* const rcx_8 = &data_142e5e448
    int32_t* rdx_12 = (rcx_7 << 6) + *result
    
    if (*(rdx_12 + 0x29) != 0)
        rcx_8 = &data_142e5e440
    
    int32_t var_a0_1 = rdx_12[4]
    int64_t* const var_a8_1 = rcx_8
    rdx_12[0xa].b
    sub_140a2e390(&var_98, 
        \n\t\t\t\t\tDevice %d:\n\t\t\t\t\tScope: %s \n\t\t\t\t\tRealtime: %s\n\t\t\t\t\tNumber Of "
    "Owners: %d \n\t\t", zx.q(*rdx_12))
    int32_t r8_6
    
    if (var_90 == 0)
        r8_6 = 0
    else
        r8_6 = var_90 - 1
    
    sub_140a20ba0(&var_78, var_98.q, r8_6)
    int64_t rcx_11 = var_98.q
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
