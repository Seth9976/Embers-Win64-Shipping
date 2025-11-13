// 函数: sub_141e47070
// 地址: 0x141e47070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_f4 = 1
int32_t var_e8 = 0xffffffff
int32_t r11 = *(arg1 + 0x88)
void* r9 = arg1 + 0x70
void* var_f0 = r9
int32_t rcx = 0
int32_t var_f8 = 0
int32_t r8 = 0
int64_t var_e4 = 0

if (r11 != 0)
    void* rax_2 = *(r9 + 0x10)
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141e4711b:
        int32_t rax_9 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_f4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_e4.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_e4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_e4:4.d = r8
            var_f8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141e4711b
        
        var_e4.d = r11

double zmm4[0x2] = var_e8.o
void* var_90 = arg1 + 0x60
int16_t var_c0 = 0
double zmm3[0x2] = var_f8.o
double result = zmm3[0]
var_e8.o = zmm3
var_f8.o = (arg1 + 0x60).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_d8[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x4c)
        int64_t* rbx_3 = *var_f8.q + 8 + (sx.q(i) << 7)
        int32_t var_3c_1 = 0x80
        int32_t var_38_1 = 0xffffffff
        int32_t var_34
        __builtin_memset(&var_34, 0, 0x18)
        
        if (rbx_3 != &var_88)
            int64_t rcx_4 = *rbx_3
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            *rbx_3 = 0
            rbx_3[1] = 0
        
        int64_t var_78
        
        if (&rbx_3[2] != &var_78)
            int64_t rcx_5 = rbx_3[2]
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_3[2] = 0
            rbx_3[3] = 0
        
        int64_t var_68
        
        if (&rbx_3[4] != &var_68)
            sub_140780e10(&rbx_3[4], &var_68)
            int64_t var_28_1
            int64_t var_30
            
            if (var_28_1 == 0)
                memmove(&rbx_3[0xb], &var_30, (var_28_1 + 4).d)
            int64_t rcx_8 = rbx_3[0xc]
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rbx_3[0xc] = var_28_1
            int32_t var_20_1
            rbx_3[0xd].d = var_20_1
            var_20_1 = 0
            int64_t var_28_2 = 0
        
        sub_1405ae180(&var_68)
        int64_t rcx_10 = var_78
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_88
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        var_e4:4.d &= not.d(var_f0:4.d)
        sub_14059bdd0(&var_f0)
        result = var_e8.q
        i = i_1
    while (i s< *(result i+ 0x18))
    
    if (var_c0.b != 0 && var_c0:1.b != 0)
        result = sub_141e3c0c0(arg1 + 0x60, *(arg1 + 0x68) - *(arg1 + 0x94), 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
