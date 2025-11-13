// 函数: sub_141c621a0
// 地址: 0x141c621a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

void* var_118
int32_t var_110
int32_t i_2

if (data_143de5480 == 0 || rax_1.b != 0)
    *(arg1 + 0xab1) = 1
    int64_t* rax_2 = sub_142475900()
    void* r14_1 = rax_2[0x23]
    
    if (r14_1 == 0)
        int64_t rdx_1 = *rax_2
        (*(rdx_1 + 0x390))(rax_2, rdx_1)
        r14_1 = rax_2[0x23]
    
    int64_t var_148 = 0
    int32_t var_140_1 = 0
    sub_1405947f0(&var_148, 0x14)
    int32_t rax_3 = var_140_1 + 0x14
    var_140_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_148)
    
    UnDecorator::getReferenceType(var_148, u"MasterSubmixDefault", 0x28)
    sub_141c63f10(arg1, 0, &var_148, 0, r14_1 + 0xb0)
    int64_t rcx_5 = var_148
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int16_t* var_138 = nullptr
    int32_t var_130_1 = 0
    sub_1405947f0(&var_138, 0x1a)
    int32_t rax_5 = var_130_1 + 0x1a
    var_130_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_138)
    
    UnDecorator::getReferenceType(var_138, u"MasterReverbSubmixDefault", 0x34)
    sub_141c63f10(arg1, 1, &var_138, 1, r14_1 + 0xc8)
    int16_t* rcx_10 = var_138
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (data_143f34d88 == 0)
        int16_t* var_128 = nullptr
        int32_t var_120_1 = 0
        sub_1405947f0(&var_128, 0x16)
        int32_t rax_7 = var_120_1 + 0x16
        var_120_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_128)
        
        UnDecorator::getReferenceType(var_128, u"MasterEQSubmixDefault", 0x2c)
        sub_141c63f10(arg1, 2, &var_128, 0, r14_1 + 0xe0)
        int16_t* rcx_15 = var_128
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    sub_141c64700(arg1)
    var_118 = nullptr
    var_110 = 0
    int32_t var_108 = 0xffffffff
    arg2 = sub_140d3cc80(sub_1425a16e0(), &var_118, 1, 0x10, 0)
    int32_t r8_5 = var_110
    int32_t i = var_108 + 1
    void* r9_2 = var_118
    i_2 = i
    
    if (i s< r8_5)
        while (*(r9_2 + (sx.q(i) << 3)) == 0)
            int32_t i_3 = i + 1
            i_2 = i_3
            i = i_3
            
            if (i_3 s>= r8_5)
                break
    
    while (i s>= 0)
        if (i s>= r8_5)
            break
        
        int64_t rdx_6 = 0
        void* j = *(r9_2 + (sx.q(i) << 3))
        int64_t* rax_12 = *(arg1 + 0x7d0)
        
        while (j != *rax_12)
            rdx_6 += 1
            rax_12 = &rax_12[1]
            
            if (rdx_6 s>= 3)
                int128_t zmm1 = sub_141c64a30(arg1, j)
                void var_78
                int64_t* rax_13 = sub_141c5eea0(arg1, &var_78, j)
                int64_t var_d0 = 0
                int64_t var_c8
                sub_141c4d620(&var_c8, &rax_13[1])
                
                if (var_c8 != 0)
                    var_d0 = *rax_13
                    *rax_13 = 0
                
                arg2 = sub_141c62780(arg1, j, &var_d0, 0, zmm1)
                int64_t* var_70
                
                if (var_70 != 0)
                    int32_t rax_14 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (rax_14 == 1 && var_70 != 0)
                        (*(*var_70 + 8))(var_70, 1)
                
                r9_2 = var_118
                r8_5 = var_110
                i = i_2
                break
        
        int32_t i_4 = i + 1
        i_2 = i_4
        i = i_4
        
        if (i_4 s< r8_5)
            while (*(r9_2 + (sx.q(i) << 3)) == 0)
                int32_t i_5 = i + 1
                i_2 = i_5
                i = i_5
                
                if (i_5 s>= r8_5)
                    break
    
    if (r9_2 != 0)
        arg2 = sub_140a74f90(r9_2)
    
    *(arg1 + 0xab1) = 0

if (sub_140a80ea0() == 0)
    void** const var_48_1 = &data_142da2668
    int64_t var_58_1 = 0
    int64_t (* var_68)(int64_t* arg1) = sub_141c56c10
    void* var_40_1 = arg1
    return sub_141e85cb0(&var_68, arg3)

int32_t i_1 = 0
int64_t r14_3 = 0
int64_t r15_1 = 0

do
    if (data_143f34d88 == 0 || i_1 != 2)
        int64_t* rax_18 = *(arg1 + 0x7d0)
        void* rdx_12 = *(rax_18 + r14_3)
        
        if (rdx_12 != *rax_18)
            arg2 = sub_141c6a730(arg1, rdx_12, *(arg1 + 0x7e0) + r15_1, arg2)
    
    i_1 += 1
    r15_1 += 0x10
    r14_3 += 8
while (i_1 s< 3)

int32_t var_f0_1 = 0
int32_t r10_1 = *(arg1 + 0x9a8)
int32_t var_ec_1 = 1
int32_t rcx_28 = 0
void* var_e8_1 = arg1 + 0x990
int32_t var_e0_1 = 0xffffffff
int64_t var_dc_1 = 0

if (r10_1 != 0)
    void* rax_19 = *(arg1 + 0x9a0)
    void* r8_10 = arg1 + 0x990
    
    if (rax_19 != 0)
        r8_10 = rax_19
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10_1 - 1)
    int32_t rdx_15 = *r8_10
    
    if (rdx_15 != 0)
    label_141c62616:
        int32_t rax_26 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_26)
        int32_t var_ec_2 = rax_26
        int32_t rax_27
        
        if (rax_26 == 0)
            rax_27 = 0x20
        else
            rax_27 = 0x1f - temp0_2
        
        var_dc_1.d = rcx_28 - rax_27 + 0x1f
        
        if (rcx_28 - rax_27 + 0x1f s> r10_1)
            var_dc_1.d = r10_1
    else
        while (true)
            int64_t rdx_16 = sx.q(rbx)
            rcx_28 += 0x20
            rbx += 1
            var_dc_1:4.d = rcx_28
            var_f0_1 = rbx
            
            if (rdx_16.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r8_10 + (rdx_16 << 2) + 4)
            var_e0_1 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_141c62616
        
        var_dc_1.d = r10_1

int32_t rdx_18 = *(arg1 + 0x9a8)
var_118 = arg1 + 0x980
double zmm2[0x2] = var_e0_1.o
var_110 = var_f0_1.o.d
int32_t r12_1 = 0xffffffff << (rdx_18.b & 0x1f)
int128_t zmm0 = var_118.o
int32_t r8_12 = rdx_18 s>> 5
int32_t r9_4 = rdx_18 & 0xffffffe0
int32_t var_88_1 = r12_1
int32_t var_84_1 = rdx_18
double var_100_1[0x2] = zmm2
int64_t var_a0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
arg2 = i_2.o
int128_t var_c0 = zmm0
int128_t var_b0_1 = arg2

if (rdx_18 != r10_1)
    void* rax_29 = *(arg1 + 0x9a0)
    void* r10_2 = arg1 + 0x990
    
    if (rax_29 != 0)
        r10_2 = rax_29
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10_1 - 1)
    int32_t rdx_22 = *(r10_2 + (sx.q(r8_12) << 2)) & r12_1
    int32_t var_84_3
    
    if (rdx_22 != 0)
    label_141c626f2:
        int32_t rax_36 = neg.d(rdx_22) & rdx_22
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_36)
        int32_t r11_1
        
        if (rax_36 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_84_2 = r9_4 - r11_1 + 0x1f
        
        if (r9_4 - r11_1 + 0x1f s> r10_1)
            var_84_3 = r10_1
    else
        while (true)
            int64_t rcx_33 = sx.q(r8_12)
            r9_4 += 0x20
            r8_12 += 1
            
            if (rcx_33.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_22 = *(r10_2 + (rcx_33 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_22 != 0)
                goto label_141c626f2
        
        var_84_3 = r10_1

while (true)
    int64_t rcx_35 = sx.q(var_b0_1:0xc.d)
    int64_t* result = var_c0.q
    
    if (rcx_35.d == (var_88_1.q u>> 0x20).d && var_b0_1.q == arg1 + 0x990 && result == arg1 + 0x980)
        return result
    
    void** rdx_25 = (rcx_35 << 5) + *result
    arg2 = sub_141c6a730(arg1, *rdx_25, &rdx_25[1], arg2)
    var_b0_1:8.d &= not.d(var_c0:0xc.d)
    sub_14059bdd0(&var_c0:8)
