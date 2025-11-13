// 函数: sub_141cd9030
// 地址: 0x141cd9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
int64_t r8 = data_143f35cc8
*(arg2 + 0xc) = data_143dbb1f8.q
*(arg2 + 0x14) = rax
*arg2 = *(arg2 + 0xc)
arg2[1].d = rax
arg2[3].b = 0
void* arg_8
sub_14090aa40(arg1 + 0x150, &arg_8, r8)
int32_t r11 = *(arg1 + 0x28)
int32_t rcx_1 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r8_1 = 0
void* var_90 = arg1 + 0x10
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r9_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141cd9108:
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
        
        var_84.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_84:4.d = r8_1
            var_98 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141cd9108
        
        var_84.d = r11

int32_t rdx_5 = *(arg1 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
uint128_t var_48 = var_98.o
int32_t r8_4 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int32_t var_88_2 = r15
var_84.d = rdx_5
uint128_t var_78 = arg1.o
int96_t var_68 = var_48[0].12

if (rdx_5 != r11)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r15
    
    if (rdx_9 != 0)
    label_141cd91d2:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141cd91d2
        
        var_84.d = r11

void* rbx_2 = arg_8

while (true)
    int64_t rdx_10 = var_68.q
    int32_t var_5c
    
    if (var_5c == (var_88_2.q u>> 0x20).d && rdx_10 == arg1 + 0x10 && var_78.q == arg1)
        return arg2
    
    int32_t rax_20 = data_143a1c6b4
    
    if (var_5c s< *(rdx_10 + 0x18))
        rax_20 = var_5c
    
    int64_t rdx_11 = sx.q(rax_20) * 3
    int64_t rcx_10 = **(rbx_2 + 0x18)
    uint128_t zmm0
    
    if (arg2[3].b == 0)
        zmm0 = zx.o(*(rcx_10 + (rdx_11 << 2)))
        int32_t rax_22 = *(rcx_10 + (rdx_11 << 2) + 8)
        *(arg2 + 0xc) = zmm0.q
        *arg2 = zmm0.q
        *(arg2 + 0x14) = rax_22
        arg2[1].d = rax_22
        arg2[3].b = 1
    else
        double zmm2[0x2] = *(rcx_10 + (rdx_11 << 2))
        float zmm3[0x4] = *(rcx_10 + (rdx_11 << 2) + 4)
        zmm0 = __minss_xmmss_memss(zmm2.d, *arg2)
        float zmm1[0x4] = *(rcx_10 + (rdx_11 << 2) + 8)
        zmm2 = __maxss_xmmss_memss(zmm2[0].d, *(arg2 + 0xc))
        *arg2 = zmm0.d
        zmm0 = __minss_xmmss_memss(zmm3.d, *(arg2 + 4))
        float temp0_8[0x4] = __maxss_xmmss_memss(zmm3[0], arg2[2].d)
        *(arg2 + 0xc) = zmm2[0].d
        *(arg2 + 4) = zmm0.d
        zmm0 = __minss_xmmss_memss(zmm1.d, arg2[1].d)
        float temp0_10[0x4] = __maxss_xmmss_memss(zmm1[0], *(arg2 + 0x14))
        arg2[2].d = temp0_8[0]
        arg2[1].d = zmm0.d
        *(arg2 + 0x14) = temp0_10[0]
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
