// 函数: sub_141e7bb70
// 地址: 0x141e7bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t var_230 = 0
int32_t var_228 = 0
sub_140a20ba0(&var_230, u"All Cache Misses:\nSoundWave:\t, ChunkIndex\n", 0x2a)
int64_t var_98 = 0
int32_t var_90 = 0
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int64_t* i_3 = j_sub_140a82f30(0x20)

if (i_3 == 0)
    i_3 = nullptr
else
    *i_3 = 0
    i_3[1] = 0

int64_t* i_1 = i_3
int64_t* i_6 = i_3
int64_t var_220 = 0

while (true)
    void* rdx = **(arg1 + 0x78)
    int32_t var_210
    int64_t* rax_2
    
    if (rdx != 0)
        int64_t rcx_1 = *(arg1 + 0x78)
        var_220.o = *(rdx + 8)
        int32_t rax_3 = *(rdx + 0x18)
        *(arg1 + 0x78) = rdx
        var_210 = rax_3
        int64_t var_190
        __builtin_memset(&var_190, 0, 0x14)
        *(rdx + 8) = var_190.o
        *(rdx + 0x18) = 0
        j_sub_140a74f90(rcx_1)
        rax_2 = 1
    else
        rax_2.b = 0
    
    if (rax_2.b == 0)
        break
    
    int64_t var_e0
    int64_t* rax_4 = sub_140b63b70(&var_220, &var_e0)
    int32_t rax_5 = rax_4[1].d
    int32_t r8_1 = rax_5 - 1
    
    if (rax_5 == 0)
        r8_1 = 0
    
    sub_140a20ba0(&var_230, *rax_4, r8_1)
    int64_t rcx_4 = var_e0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    sub_140a20ba0(&var_230, &data_1432511d8, 3)
    int32_t var_218
    sub_140a20c40(&var_230, var_218)
    sub_140a20ba0(&var_230, &data_142d576a0, 1)
    int64_t rcx_8 = var_220
    int64_t var_f8 = 0
    int32_t r8_5 = ((rcx_8 u>> 0x20).d - var_218) ^ var_218 u>> 0xd
    int64_t var_f0_1 = rcx_8
    int32_t var_e8_1 = var_218
    int32_t rdx_7 = (0x9e3779b9 - r8_5 - var_218) ^ r8_5 << 8
    int32_t r11_4 = (var_218 - rdx_7 - r8_5) ^ rdx_7 u>> 0xd
    int32_t r8_8 = (r8_5 - rdx_7 - r11_4) ^ r11_4 u>> 0xc
    int32_t rdx_10 = (rdx_7 - r8_8 - r11_4) ^ r8_8 << 0x10
    int32_t r11_7 = (r11_4 - rdx_10 - r8_8) ^ rdx_10 u>> 5
    int32_t r8_11 = (r8_8 - rdx_10 - r11_7) ^ r11_7 u>> 3
    int32_t rdx_13 = (rdx_10 - r8_11 - r11_7) ^ r8_11 << 0xa
    int32_t r11_10 = (r11_7 - rdx_13 - r8_11) ^ rdx_13 u>> 0xf
    void* rax_28
    
    if (var_90 == var_64)
    label_141e7be3e:
        rax_28 = sub_141e6e4e0(&var_98, r11_10, &var_f8)
    else
        void var_60
        void* rdx_15 = &var_60
        
        if (var_58 != 0)
            rdx_15 = var_58
        
        int32_t rax_27 = *(rdx_15 + ((sx.q(var_50 - 1) & sx.q(r11_10)) << 2))
        
        if (rax_27 == 0xffffffff)
        label_141e7be3e_1:
            rax_28 = sub_141e6e4e0(&var_98, r11_10, &var_f8)
        else
            int64_t r9_1 = var_98
            void* rdx_17
            
            while (true)
                int64_t r8_14 = sx.q(rax_27) * 5
                rdx_17 = r9_1 + (r8_14 << 3)
                
                if (*(r9_1 + (r8_14 << 3) + 8) == rcx_8 && *(rdx_17 + 0x10) == var_218)
                    break
                
                rax_27 = *(rdx_17 + 0x20)
                
                if (rax_27 == 0xffffffff)
                    goto label_141e7be3e_2
            
            if (rax_27 == 0xffffffff || rdx_17 == 0)
            label_141e7be3e_2:
                rax_28 = sub_141e6e4e0(&var_98, r11_10, &var_f8)
            else
                rax_28 = rdx_17 + 0x18
    
    *rax_28 += 1
    
    if (data_143a2d468 != 0)
        int64_t* i_7 = j_sub_140a82f30(0x20)
        
        if (i_7 != 0)
            *i_7 = 0
            *(i_7 + 8) = var_220.o
            i_7[3].d = var_210
            int64_t* i_8 = i_6
            i_6 = i_7
            *i_8 = i_7

int64_t* var_1c0 = &var_88
int32_t rbx = 0
int32_t var_1e0 = 0
int32_t rcx_11 = 0
int32_t var_1c8 = 0
int32_t var_1b8 = 0xffffffff
int32_t* rsi = nullptr
int32_t* var_1e8 = nullptr
int32_t r15 = 0
int32_t var_1dc = 0
int32_t r8_16 = 0
int32_t var_1c4 = 1
int64_t var_1b4 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r10_2 = &var_88
    
    if (var_78 != 0)
        r10_2 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_21 = *r10_2
    
    if (rdx_21 != 0)
    label_141e7bf35:
        int32_t rax_36 = neg.d(rdx_21) & rdx_21
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_36)
        int32_t var_1c4_1 = rax_36
        int32_t var_1a8_1 = temp0_2
        int32_t rax_37
        
        if (rax_36 == 0)
            rax_37 = 0x20
        else
            rax_37 = 0x1f - temp0_2
        
        int32_t rax_38 = r8_16 - rax_37 + 0x1f
        
        if (rax_38 s> var_70)
            rax_38 = var_70
        
        var_1b4.d = rax_38
    else
        while (true)
            int64_t rax_33 = sx.q(rcx_11)
            r8_16 += 0x20
            rcx_11 += 1
            var_1b4:4.d = r8_16
            var_1c8 = rcx_11
            
            if (rax_33.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                var_1b4.d = var_70
                break
            
            rdx_21 = *(r10_2 + (rax_33 << 2) + 4)
            var_1b8 = 0xffffffff
            
            if (rdx_21 != 0)
                goto label_141e7bf35

double zmm2[0x2] = var_1b8.o
char rcx_14 = var_70.b & 0x1f
double var_118[0x2] = var_1c8.o
int32_t var_154 = var_70
double var_108[0x2] = zmm2
int32_t var_164 = 1 << rcx_14
double var_148[0x2] = (&var_98).o
int64_t* var_160 = &var_88
double var_118_1[0x2] = (var_70 s>> 5).o
int64_t var_128 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_150 = var_70 & 0xffffffe0
zmm2 = (0xffffffff << rcx_14).o
double var_c0[0x2] = (&var_98).o
double var_108_1[0x2] = zmm2
double r12 = zmm2[0]
int64_t var_a0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
double var_b0[0x2] = var_118_1

while (true)
    int64_t rax_42 = sx.q(var_118[1]:4.d)
    int64_t* rdx_22 = var_148[0]
    
    if (rax_42.d == (r12 u>> 0x20).d && var_118[0] == &var_88 && rdx_22 == &var_98)
        char var_248
        sub_141e6f8f0(rsi, rbx, var_248)
        int64_t var_240 = 0
        int32_t var_238 = 0
        sub_1405947f0(&var_240, 0x15)
        int32_t rax_51 = var_238 + 0x15
        
        if (rax_51 s> 0)
            sub_140594770(&var_240)
        
        UnDecorator::getReferenceType(var_240, u"Most Missed Chunks:\n", 0x2a)
        int64_t* rcx_23 = sub_140a20ba0(&var_240, u"Name:\t, Index:\t, Miss Count:\n", 0x1d)
        int32_t r15_1 = 1
        int32_t* rbx_1 = rsi
        void* rdi_6 = &rsi[sx.q(rbx) * 4]
        
        if (rsi != rdi_6)
            do
                int64_t var_d0
                int64_t* rax_52 = sub_140b63b70(rbx_1, &var_d0)
                int32_t rax_53 = rax_52[1].d
                int32_t r8_19 = rax_53 - 1
                
                if (rax_53 == 0)
                    r8_19 = 0
                
                sub_140a20ba0(&var_240, *rax_52, r8_19)
                int64_t rcx_26 = var_d0
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                sub_140a20ba0(&var_240, &data_1432511d8, 3)
                sub_140a20c40(&var_240, rbx_1[2])
                sub_140a20ba0(&var_240, &data_1432511d8, 3)
                sub_140a20c40(&var_240, rbx_1[3])
                rcx_23 = sub_140a20ba0(&var_240, &data_142d576a0, 1)
                rbx_1 = &rbx_1[4]
            while (rbx_1 != rdi_6)
        
        if (data_143a2d468 != 0)
            while (true)
                int64_t* i_5 = *i_1
                
                if (i_5 == 0)
                    break
                
                int64_t* i_4 = i_1
                var_220.o = *(i_5 + 8)
                int32_t rax_55 = i_5[3].d
                i_1 = i_5
                int64_t var_17c
                __builtin_memset(&var_17c, 0, 0x14)
                *(i_5 + 8) = var_17c.o
                i_5[3].d = 0
                j_sub_140a74f90(i_4)
                int64_t* rax_56 = j_sub_140a82f30(0x20)
                rcx_23 = rax_56
                
                if (rax_56 != 0)
                    *rax_56 = 0
                    *(rax_56 + 8) = var_220.o
                    rcx_23[3].d = rax_55
                    int64_t** rax_58 = *(arg1 + 0x70)
                    *(arg1 + 0x70) = rcx_23
                    *rax_58 = rcx_23
            
            rsi = var_1e8
        
        int64_t rbx_2 = var_240
        int64_t var_208 = 0
        sub_1405a4c70(&var_208, sbb.d(rcx_23.d, rcx_23.d, rax_51 != 0) + 2 + rax_51, 0)
        memcpy(var_208, rbx_2, rax_51 * 2)
        sub_140a20ba0(&var_208, &data_142d576a0, 1)
        int64_t rdi_8 = var_208
        var_208 = 0
        int32_t var_200
        var_200.q = 0
        
        if (rax_51 s> 1)
            int32_t rbx_5
            
            if (var_228 == 0)
                rbx_5 = 0
            else
                rbx_5 = var_228 - 1
            
            if (rax_51 != 0 || rbx_5 == 0)
                r15_1 = 0
            
            int64_t var_1d8 = rdi_8
            int32_t rdx_38 = rbx_5 + r15_1 + rax_51
            int32_t var_1fc
            
            if (rdx_38 s> var_1fc)
                sub_1405947f0(&var_1d8, rdx_38)
            
            sub_140a20ba0(&var_1d8, var_230, rbx_5)
            *arg2 = var_1d8
            arg2[1].d = rax_51
            *(arg2 + 0xc) = var_1fc
        else
            int64_t r14_1 = var_230
            *arg2 = 0
            arg2[1].d = var_228
            
            if (var_228 != 0)
                sub_1405a4c70(arg2, var_228, 0)
                memcpy(*arg2, r14_1, var_228 * 2)
            else
                *(arg2 + 0xc) = 0
            
            if (rdi_8 != 0)
                sub_140a74f90(rdi_8)
        
        int64_t rcx_42 = var_240
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        if (rsi != 0)
            sub_140a74f90(rsi)
        
        int64_t* i_2
        
        for (int64_t* i = i_1; i != 0; i = i_2)
            i_2 = *i
            j_sub_140a74f90(i)
        
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        var_90 = 0
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        sub_14059a8e0(&var_88, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_48 = var_98
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)
        
        int64_t rcx_49 = var_230
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
        
        __security_check_cookie(rax_1 ^ &var_268)
        return arg2
    
    int64_t rcx_15 = rax_42 * 5
    int64_t rdi_3 = sx.q(rbx)
    int64_t rax_43 = *rdx_22
    rbx = (rdi_3 + 1).d
    void* rdx_23 = rax_43 + (rcx_15 << 3)
    int64_t rax_44 = *(rax_43 + (rcx_15 << 3) + 8)
    int32_t var_198_1 = *(rdx_23 + 0x10)
    int32_t var_194_1 = *(rdx_23 + 0x18)
    
    if (rbx s> r15)
        sub_14119a860(&var_1e8)
        r15 = var_1dc
        rsi = var_1e8
    
    *(rsi + rdi_3 * 0x10) = rax_44.o
    var_118[1].d &= not.d(var_148[1]:4.d)
    sub_14059bdd0(&var_148[1])
