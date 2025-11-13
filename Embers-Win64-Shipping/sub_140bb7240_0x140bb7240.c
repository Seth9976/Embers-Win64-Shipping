// 函数: sub_140bb7240
// 地址: 0x140bb7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int64_t* arg_8 = arg2
sub_140688b80(arg1 + 0x40, &arg_8)
int32_t rbx = 0
int32_t var_c4 = 1
int32_t var_c8 = 0
int32_t r11 = arg1->__offset(0x78).d
void* __offset(_RTL_CRITICAL_SECTION, 0x60) r9 = arg1 + 0x60
void* __offset(_RTL_CRITICAL_SECTION, 0x60) var_c0 = r9
int32_t r8 = 0
int32_t var_b8 = 0xffffffff
int32_t rcx_1 = 0
int64_t var_b4 = 0

if (r11 != 0)
    void* rax_1 = (r9 - 0x60)->__offset(0x70).q
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = (r9 - 0x60)->__offset(0x60).d
    
    if (rdx_3 != 0)
    label_140bb7308:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            var_b4:4.d = rcx_1
            var_c8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140bb7308
        
        var_b4.d = r11

double zmm4[0x2] = var_b8.o
void* __offset(_RTL_CRITICAL_SECTION, 0x50) var_60 = &arg1[2]
int16_t var_90 = 0
double zmm3[0x2] = var_c8.o
double rax_11 = zmm3[0]
var_b8.o = zmm3
var_c8.o = (&arg1[2]).o
double rcx_3 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_70[0x2] = zmm4

if ((rcx_3 u>> 0x20).d s< *(rax_11 i+ 0x18))
    int32_t i_2
    int32_t i = i_2
    
    do
        if (sub_140a32a50(*var_c8.q + sx.q(i) * 0x28, arg2, 1) != 0)
            sub_140bb6330(zmm4[1], i)
            var_90.b = 1
        
        var_b4:4.d &= not.d(var_c0:4.d)
        sub_14059bdd0(&var_c0)
        i = i_2
    while (i s< *(var_b8.q + 0x18))
    
    if (var_90.b != 0 && var_90:1.b != 0)
        sub_1405e1160(&arg1[2], arg1->__offset(0x58).d - arg1->__offset(0x84).d, 1)

var_c8 = 0
int32_t r9_1 = arg1->__offset(0xc8).d
void* r8_3 = arg1 + 0xb0
int32_t var_c4_2 = 1
int32_t rcx_10 = 0
var_c0 = r8_3
int32_t var_b8_1 = 0xffffffff
int64_t var_b4_1 = 0

if (r9_1 != 0)
    void* rax_18 = *(r8_3 + 0x10)
    
    if (rax_18 != 0)
        r8_3 = rax_18
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9_1 - 1)
    int32_t rdx_12 = *r8_3
    
    if (rdx_12 != 0)
    label_140bb7476:
        int32_t rax_25 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t var_c4_3 = rax_25
        int32_t r14_1
        
        if (rax_25 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        var_b4_1.d = rcx_10 - r14_1 + 0x1f
        
        if (rcx_10 - r14_1 + 0x1f s> r9_1)
            var_b4_1.d = r9_1
    else
        while (true)
            int64_t rdx_13 = sx.q(rbx)
            rcx_10 += 0x20
            rbx += 1
            var_b4_1:4.d = rcx_10
            var_c8 = rbx
            
            if (rdx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r8_3 + (rdx_13 << 2) + 4)
            var_b8_1 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_140bb7476
        
        var_b4_1.d = r9_1

zmm4 = var_b8_1.o
void* __offset(_RTL_CRITICAL_SECTION, 0xa0) var_60_1 = &arg1[4]
int16_t var_20 = 0
zmm3 = var_c8.o
double result = zmm3[0]
int128_t var_58 = (&arg1[4]).o
double rcx_12 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q

if ((rcx_12 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i_1 = zmm3[1]:4.d
    
    do
        char rax_29 = sub_140a32a50(sub_140b63b70((sx.q(i_1) << 5) + *var_58.q, &var_c8), arg2, 1)
        int64_t rcx_18 = var_c8.q
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        if (rax_29 != 0)
            sub_140afe470(zmm4[1], i_1)
            var_20.b = 1
        
        zmm3[1].d &= not.d(var_58:0xc.d)
        sub_14059bdd0(&var_58:8)
        result = zmm3[0]
        i_1 = zmm3[1]:4.d
    while (i_1 s< *(result i+ 0x18))
    
    if (var_20.b != 0 && var_20:1.b != 0)
        result = sub_1405b67e0(&arg1[4], arg1->__offset(0xa8).d - arg1->__offset(0xd4).d, 1)

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1)
