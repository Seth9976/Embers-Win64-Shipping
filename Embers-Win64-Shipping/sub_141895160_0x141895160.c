// 函数: sub_141895160
// 地址: 0x141895160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rsi = arg1
void* rax_2 = sub_140cde0b0()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
void* rdi = nullptr
int32_t var_170 = 0
void* rax_4 = sub_140d2dfc0(sub_1418add00(), rax_2, 0, 0, 0, 0, 0, 0, 0)
void* r12 = rax_4
int32_t rax_5 = *(rax_4 + 0xc)
void* const rax_12

if (rax_5 s>= data_143e1d9b4)
    rax_12 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_5)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_7 = temp1_1 + rdx_2
    rax_12 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_2) * 0x18

*(rax_12 + 8) |= 0x40000000
(*(*rsi + 0xe0))(rsi, 0x1b8)

if ((rsi[5].b & 1) == 0)
    *(r12 + 0x28) = *(arg2 + 8)
    *(r12 + 0x29) = *(arg2 + 0xc)
    *(r12 + 0x2c) = *(arg2 + 0x10)
    sub_140597df0(r12 + 0x30, arg2 + 0x18)
    sub_140597df0(r12 + 0x40, arg2 + 0x28)
    sub_140597df0(r12 + 0x50, arg2 + 0x38)
    sub_140597df0(r12 + 0x60, arg2 + 0x48)
    sub_1418235f0(r12 + 0x70, arg2 + 0x58)
    sub_140597df0(r12 + 0xc0, arg2 + 0xa8)
    sub_140597df0(r12 + 0xd0, arg2 + 0xb8)
    sub_140597df0(r12 + 0xe0, arg2 + 0xc8)
    sub_14187f750(r12 + 0xf0, *(arg2 + 0x100))
    int64_t* r15_1 = *(arg2 + 0xf8)
    void* rax_20 = &r15_1[sx.q(*(arg2 + 0x100)) * 0xc]
    int128_t var_168
    void* var_b8
    
    if (r15_1 != rax_20)
        do
            uint64_t* rax_21 = sub_14189acf0(&var_b8, r15_1)
            uint64_t rcx_17 = *rax_21
            *rax_21 = 0
            int32_t rcx_18 = rax_21[1].d
            int32_t rcx_19 = *(rax_21 + 0xc)
            rax_21[1] = 0
            int128_t zmm0_1 = *(rax_21 + 0x10)
            int32_t rcx_20 = rax_21[4].d
            int64_t rcx_21 = rax_21[5]
            __builtin_memset(&rax_21[5], 0, 0x20)
            int32_t rcx_22 = rax_21[6].d
            int32_t rcx_23 = *(rax_21 + 0x34)
            int64_t rcx_24 = rax_21[7]
            int32_t rcx_25 = rax_21[8].d
            int32_t rcx_26 = *(rax_21 + 0x44)
            char rcx_27 = rax_21[9].b
            int64_t rcx_28 = rax_21[0xa]
            rax_21[0xa] = 0
            int32_t rcx_29 = rax_21[0xb].d
            int32_t rcx_30 = *(rax_21 + 0x5c)
            rax_21[0xb] = 0
            char rcx_31 = rax_21[0xc].b
            char rax_22 = *(rax_21 + 0x61)
            var_168 = zmm0_1
            int64_t var_68
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            int32_t i_2
            int32_t i_1 = i_2
            int64_t* var_80
            int64_t* rbx_1 = var_80
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t rcx_33 = *rbx_1
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                    
                    rbx_1 = &rbx_1[2]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rbx_1 = var_80
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            int64_t var_90
            
            if (var_90 != 0)
                sub_140a74f90(var_90)
            
            void* rcx_36 = var_b8
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
            
            int64_t rbx_2 = sx.q(*(r12 + 0xf8))
            int32_t rax_23 = (rbx_2 + 1).d
            *(r12 + 0xf8) = rax_23
            
            if (rax_23 s> *(r12 + 0xfc))
                sub_1405fde00(r12 + 0xf0)
            
            r15_1 = &r15_1[0xc]
            zmm0_1 = var_168
            uint64_t* rcx_39 = rbx_2 * 0x68 + *(r12 + 0xf0)
            *rcx_39 = rcx_17
            rcx_39[1].d = rcx_18
            *(rcx_39 + 0xc) = rcx_19
            *(rcx_39 + 0x10) = zmm0_1
            rcx_39[4].d = rcx_20
            rcx_39[5] = rcx_21
            rcx_39[6].d = rcx_22
            *(rcx_39 + 0x34) = rcx_23
            rcx_39[7] = rcx_24
            rcx_39[8].d = rcx_25
            *(rcx_39 + 0x44) = rcx_26
            rcx_39[9].b = rcx_27
            rcx_39[0xa] = rcx_28
            rcx_39[0xb].d = rcx_29
            *(rcx_39 + 0x5c) = rcx_30
            rcx_39[0xc].b = rcx_31
            *(rcx_39 + 0x61) = rax_22
        while (r15_1 != rax_20)
        
        r12 = rax_4
    
    int32_t rdx_15 = *(arg2 + 0xf0)
    *(r12 + 0x108) = 0
    
    if (*(r12 + 0x10c) != rdx_15)
        sub_1405a52a0(r12 + 0x100, rdx_15)
    
    int128_t* rsi_1 = *(arg2 + 0xe8)
    void* r15_4 = &rsi_1[sx.q(*(arg2 + 0xf0)) * 4]
    double zmm2_1[0x2]
    
    while (rsi_1 != r15_4)
        int128_t* rax_40 = sub_14189ac60(&var_b8, rsi_1)
        int64_t r14_2 = sx.q(*(r12 + 0x108))
        int128_t zmm0_2 = *rax_40
        int128_t zmm1_1 = rax_40[1]
        zmm2_1 = rax_40[2]
        int128_t zmm3_1 = rax_40[3]
        int32_t rax_41 = (r14_2 + 1).d
        var_168 = zmm0_2
        *(r12 + 0x108) = rax_41
        int64_t var_f8
        var_f8.o = zmm1_1
        int64_t var_108
        var_108.o = zmm2_1
        int64_t var_118
        var_118.o = zmm3_1
        
        if (rax_41 s> *(r12 + 0x10c))
            sub_1405c4fe0(r12 + 0x100)
            zmm0_2 = var_168
            zmm1_1 = var_f8.o
            zmm2_1 = var_108.o
            zmm3_1 = var_118.o
        
        int64_t rax_42 = *(r12 + 0x100)
        int64_t rcx_44 = r14_2 << 6
        rsi_1 = &rsi_1[4]
        *(rcx_44 + rax_42) = zmm0_2
        *(rcx_44 + rax_42 + 0x10) = zmm1_1
        *(rcx_44 + rax_42 + 0x20) = zmm2_1
        *(rcx_44 + rax_42 + 0x30) = zmm3_1
    
    sub_140ba25b0(r12 + 0x110, *(arg2 + 0x110) - *(arg2 + 0x13c))
    void* rbx_4 = arg2 + 0x108
    var_168:4.d = 1
    int32_t rsi_2 = *(rbx_4 + 0x28)
    void* r13_1 = rbx_4 + 0x10
    void* var_170_1 = rbx_4
    int32_t rcx_46 = 0
    var_168.d = 0
    int32_t r8_1 = 0
    var_168:8.q = r13_1
    int32_t var_158 = 0xffffffff
    int64_t var_154_1 = 0
    
    if (rsi_2 != 0)
        void* rax_43 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_43 != 0)
            r9_1 = rax_43
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rsi_2 - 1)
        int32_t rdx_22 = *r9_1
        
        if (rdx_22 != 0)
        label_14189565b:
            int32_t rax_50 = neg.d(rdx_22) & rdx_22
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_50)
            var_168:4.d = rax_50
            int32_t rax_51
            
            if (rax_50 == 0)
                rax_51 = 0x20
            else
                rax_51 = 0x1f - temp0_2
            
            var_154_1.d = r8_1 - rax_51 + 0x1f
            
            if (r8_1 - rax_51 + 0x1f s> rsi_2)
                var_154_1.d = rsi_2
        else
            while (true)
                int64_t rdx_23 = sx.q(rcx_46)
                r8_1 += 0x20
                rcx_46 += 1
                var_154_1:4.d = r8_1
                var_168.d = rcx_46
                
                if (rdx_23.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_22 = *(r9_1 + (rdx_23 << 2) + 4)
                var_158 = 0xffffffff
                
                if (rdx_22 != 0)
                    goto label_14189565b
            
            var_154_1.d = rsi_2
    
    int32_t rdx_24 = *(rbx_4 + 0x28)
    zmm2_1 = var_158.o
    var_b8 = rbx_4
    double var_a0_1[0x2] = zmm2_1
    int32_t r15_5 = 0xffffffff << (rdx_24.b & 0x1f)
    int128_t var_b0_1 = var_168
    int32_t r8_4 = rdx_24 s>> 5
    int32_t r9_3 = rdx_24 & 0xffffffe0
    int64_t var_c0_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    var_158 = r15_5
    var_154_1.d = rdx_24
    int128_t var_e0 = var_b8.o
    
    if (rdx_24 != rsi_2)
        void* rax_53 = *(r13_1 + 0x10)
        void* r10_1 = r13_1
        
        if (rax_53 != 0)
            r10_1 = rax_53
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rsi_2 - 1)
        int32_t rdx_28 = *(r10_1 + (sx.q(r8_4) << 2)) & r15_5
        
        if (rdx_28 != 0)
        label_141895733:
            int32_t rax_60 = neg.d(rdx_28) & rdx_28
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_60)
            int32_t r11_1
            
            if (rax_60 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_154_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rsi_2)
                var_154_1.d = rsi_2
        else
            while (true)
                int64_t rcx_51 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_51.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_28 = *(r10_1 + (rcx_51 << 2) + 4)
                var_158 = 0xffffffff
                
                if (rdx_28 != 0)
                    goto label_141895733
            
            var_154_1.d = rsi_2
    
    uint32_t r12_3 = (var_158.q u>> 0x20).d
    
    while (true)
        int32_t var_c4
        int64_t rax_62 = sx.q(var_c4)
        int64_t* rdx_29 = var_e0.q
        
        if (rax_62.d == r12_3 && var_b0_1:8.q == r13_1 && rdx_29 == rbx_4)
            break
        
        __builtin_memset(&var_168, 0, 0x20)
        int64_t* rsi_3 = *rdx_29 + rax_62 * 0x28
        
        if (&var_168 != rsi_3)
            int32_t rbx_5 = rsi_3[1].d
            int64_t r15_6 = *rsi_3
            var_168:8.d = rbx_5
            
            if (rbx_5 != 0)
                sub_1405a4c70(&var_168, rbx_5, 0)
                memcpy(var_168.q, r15_6, rbx_5 * 2)
        
        sub_140597df0(&var_158, &rsi_3[2])
        int64_t rbx_6 = sx.q(*(r12 + 0x118))
        int32_t rax_64 = (rbx_6 + 1).d
        *(r12 + 0x118) = rax_64
        
        if (rax_64 s> *(r12 + 0x11c))
            sub_1405c4e40(r12 + 0x110)
        
        int64_t* rcx_60 = (rbx_6 << 5) + *(r12 + 0x110)
        *rcx_60 = var_168.q
        rcx_60[1].d = var_168:8.d
        *(rcx_60 + 0xc) = var_168:0xc.d
        rcx_60[2] = var_158.q
        rcx_60[3].d = var_154_1:4.d
        int32_t var_14c
        *(rcx_60 + 0x1c) = var_14c
        int32_t var_c8 = var_c8 & not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
        rbx_4 = var_170_1
    
    r12 = rax_4
    rsi = arg1
    (*(*r12 + 0xa0))(r12, rsi)
else
    *(rsi + 0x29) |= 1

*(r12 + 0x38) = 0

if (*(r12 + 0x3c) != 0)
    sub_1405947f0(r12 + 0x30, 0)

*(r12 + 0x48) = 0

if (*(r12 + 0x4c) != 0)
    sub_1405947f0(r12 + 0x40, 0)

*(r12 + 0x58) = 0

if (*(r12 + 0x5c) != 0)
    sub_1405947f0(r12 + 0x50, 0)

*(r12 + 0x68) = 0

if (*(r12 + 0x6c) != 0)
    sub_1405947f0(r12 + 0x60, 0)

sub_14059a980(r12 + 0x70, 0)
*(r12 + 0xc8) = 0

if (*(r12 + 0xcc) != 0)
    sub_1405947f0(r12 + 0xc0, 0)

*(r12 + 0xd8) = 0

if (*(r12 + 0xdc) != 0)
    sub_1405947f0(r12 + 0xd0, 0)

*(r12 + 0xe8) = 0

if (*(r12 + 0xec) != 0)
    sub_1405947f0(r12 + 0xe0, 0)

sub_14187f750(r12 + 0xf0, 0)
*(r12 + 0x108) = 0

if (*(r12 + 0x10c) != 0)
    sub_1405a52a0(r12 + 0x100, 0)

sub_140ba25b0(r12 + 0x110, 0)
int32_t rax_74 = *(r12 + 0xc)

if (rax_74 s< data_143e1d9b4)
    int16_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(rax_74)
    uint32_t rdx_36 = zx.d(temp7_1)
    int32_t rax_76 = temp8_1 + rdx_36
    rdi = *(data_143e1d9a0 + (sx.q(rax_76 s>> 0x10) << 3)) + sx.q(zx.d(rax_76.w) - rdx_36) * 0x18

*(rdi + 8) &= 0xbfffffff
char result = not.b(*(rsi + 0x29)) & 1
__security_check_cookie(rax_1 ^ &var_1c8)
return result
