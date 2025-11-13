// 函数: sub_141e34e40
// 地址: 0x141e34e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e3d140(arg2, arg1[3].d - *(arg1 + 0x44))
int32_t var_a4 = 1
int32_t var_a8 = 0
int32_t r11 = arg1[7].d
void* r9 = &arg1[4]
void* var_a0 = r9
int32_t rcx_1 = 0
int32_t var_98 = 0xffffffff
int32_t r8 = 0
int32_t var_94 = 0
int32_t var_90 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9
    int32_t var_94_2
    
    if (rdx_4 != 0)
    label_141e34ef8:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_94_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r11)
            var_94_2 = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_90_1 = rcx_1
            var_a8 = r8
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9 + (rdx_5 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141e34ef8
        
        var_94_2 = r11

double zmm4[0x2] = var_98.o
void* var_20 = &arg1[2]
int16_t var_50 = 0
double zmm3[0x2] = var_a8.o
double result = zmm3[0]
int128_t var_88 = (&arg1[2]).o
double rcx_3 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_68[0x2] = zmm4

if ((rcx_3 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i = zmm3[1]:4.d
    
    do
        int64_t rdx_7 = sx.q(i) * 3
        int64_t rcx_5 = *var_88.q
        void* rbx_1 = *(rcx_5 + (rdx_7 << 3) + 8)
        int64_t* r14_1 = rcx_5 + (rdx_7 << 3)
        sub_141e3b060(arg1, rbx_1, r14_1)
        int64_t* rax_13 = sub_1422c1300(rbx_1, &var_a8)
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rcx_8 = (rbx_2 + 1).d
        arg2[1].d = rcx_8
        
        if (rcx_8 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int64_t* rcx_10 = *arg2 + rbx_2 * 0x18
        *rcx_10 = *r14_1
        rcx_10[1] = *rax_13
        *rax_13 = 0
        rcx_10[2] = rax_13[1]
        rax_13[1] = 0
        sub_1405d1550(&var_a0)
        sub_1405d1550(&var_a8)
        zmm3[1].d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        result = zmm3[0]
        i = zmm3[1]:4.d
    while (i s< *(result i+ 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_1405b6730(&arg1[2], arg1[3].d - *(arg1 + 0x44), 1)

return result
