// 函数: sub_1413f8c80
// 地址: 0x1413f8c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int32_t var_14c = 0x80
*arg3 = 0
int64_t* r14 = arg1
int64_t var_178
__builtin_memset(&var_178, 0, 0x2c)
int64_t* rbx = arg2
int32_t var_148 = 0xffffffff
int32_t var_144 = 0
int64_t var_138 = 0
int32_t var_130 = 0
int64_t var_128
__builtin_memset(&var_128, 0, 0x2c)
int32_t var_fc = 0x80
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
*(arg3 + 8) = *(data_1439b7120 + 0x10)
*(arg3 + 0x10) = data_14395f4d0
*(arg3 + 0x18) = *(data_1439b7128 + 0x10)
*(arg3 + 0x20) = data_14395f4d0
void* rax_7 = *(data_143f10dc8 + 0x10)
void* var_2d8 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1
    rax_7 = var_2d8

int128_t zmm6 = 0x3f800000
*(arg3 + 0x28) = rax_7
*(arg3 + 0x30) = rax_7
*(arg3 + 0x38) = rax_7
*(arg3 + 0x40) = rax_7
*(arg3 + 0x48) = rax_7
*(arg3 + 0x50) = rax_7
*(arg3 + 0x58) = rax_7
*(arg3 + 0x60) = rax_7
int64_t* rax_8 = arg2[0x2aa]
uint64_t var_338
int128_t zmm0

if (rax_8 == 0 || rax_8[4].d == 0)
    *(arg3 + 0x70) = *(data_143f10dc8 + 0x10)
else
    uint64_t rax_9 = *rax_8
    var_338 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
        rax_9 = var_338
    
    *(arg3 + 0x70) = rax_9
    zmm6 = sub_1405d1550(&var_338)
    uint64_t rcx_3 = zx.q(*(rbx[0x2aa] + 0x20))
    
    if (rcx_3.d == 0)
        zmm6 = zx.o(0)
    else
        zmm0.d = float.s(rcx_3)
        zmm6.d = zmm6.d f/ zmm0.d

arg3[1] = zmm6.d
int32_t* r13 = &r14[2]
int32_t rcx_5 = 0
*(arg3 + 0x68) = data_14395f4d0
int32_t r8 = 0
int32_t r11 = r13[6]
int32_t var_320 = 0
int32_t var_31c = 1
int32_t* var_318 = r13
int32_t var_310 = 0xffffffff
int64_t var_30c = 0

if (r11 != 0)
    int32_t* rax_13 = *(r13 + 0x10)
    int32_t* r9 = r13
    
    if (rax_13 != 0)
        r9 = rax_13
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1413f8eeb:
        int32_t rax_20 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_20)
        int32_t var_31c_1 = rax_20
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_2
        
        var_30c.d = r8 - rax_21 + 0x1f
        
        if (r8 - rax_21 + 0x1f s> r11)
            var_30c.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_5)
            r8 += 0x20
            rcx_5 += 1
            var_30c:4.d = r8
            var_320 = rcx_5
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9[rdx_3 + 1]
            int32_t var_310_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1413f8eeb
        
        var_30c.d = r11

int32_t rdx_4 = r14[5].d
int32_t r8_3 = rdx_4 s>> 5
int32_t rdi = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r9_2 = rdx_4 & 0xffffffe0
int64_t* var_2c0 = r14
int32_t var_1b8 = rdi
int64_t* r10 = r14
int32_t var_1b4 = rdx_4
int128_t var_2b8 = var_320.o
int64_t var_2a8 = 0xffffffff

if (rdx_4 != r11)
    int32_t* rax_23 = *(r13 + 0x10)
    int32_t* r11_1 = r13
    
    if (rax_23 != 0)
        r11_1 = rax_23
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = r11_1[sx.q(r8_3)] & rdi
    int32_t var_1b4_2
    
    if (rdx_8 != 0)
    label_1413f8fb5:
        int32_t rax_30 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t rax_31
        
        if (rax_30 == 0)
            rax_31 = 0x20
        else
            rax_31 = 0x1f - temp0_3
        
        int32_t var_1b4_1 = r9_2 - rax_31 + 0x1f
        
        if (r9_2 - rax_31 + 0x1f s> r11)
            var_1b4_2 = r11
    else
        while (true)
            int64_t rcx_10 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r11_1[rcx_10 + 1]
            var_1b8 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1413f8fb5
        
        var_1b4_2 = r11

uint64_t rcx_13 = var_1b8.q u>> 0x20
var_338 = rcx_13
int64_t var_170
int64_t var_120
int64_t* r14_2
int128_t zmm3

while (true)
    int64_t rax_33 = sx.q(var_2a8:4.d)
    
    if (rax_33.d == rcx_13.d && var_2b8:8.q == r13 && r10 == r14)
        r14_2 = arg2
        break
    
    zmm0 = *(*r10 + rax_33 * 0x30 + 0x20)
    void* r14_1 = zmm0.q
    int96_t var_1a8_1 = zmm0.12
    char rax_36
    
    if ((*(*(r14_1 + 0x20) + 0x138) & 4) != 0)
        rax_36 = sub_14122cc00(r14_1)
    
    if ((*(*(r14_1 + 0x20) + 0x138) & 4) == 0 || rax_36 == 0)
        int64_t* rcx_17 = *(r14_1 + 0x20)
        
        if ((*(rcx_17 + 0x139) & 0x20) != 0)
            int64_t var_230 = 0
            int32_t var_288
            (*(*rcx_17 + 0x68))(rcx_17, &var_288)
            int64_t* rcx_18 = *(r14_1 + 0x20)
            int32_t var_26c
            
            if ((*(*rcx_18 + 0x30))(rcx_18) != 0)
                var_26c = 0
            
            int32_t rcx_19 = -1
            
            if ((*(*rbx + 0x28) & 0x8000000) != 0)
                int64_t r8_4 = *(*(r14_1 + 0x20) + 0x130)
                int64_t var_1e0 = r8_4
                
                if (r8_4 != 0)
                    int32_t var_330
                    sub_140865c40(&var_178, &var_330, r8_4)
                    int64_t rax_42 = sx.q(var_330)
                    void* const rcx_21
                    
                    if (rax_42.d == 0xffffffff)
                        rcx_21 = nullptr
                    else
                        rcx_21 = var_178 + rax_42 * 0x18
                    
                    int32_t* rax_44 = rcx_21 + 8
                    
                    if (rcx_21 == 0)
                        rax_44 = nullptr
                    
                    if (rax_44 != 0)
                        rcx_19 = *rax_44
                    else
                        int32_t var_32c = var_170.d - var_144
                        int64_t* var_198 = &var_1e0
                        int32_t* var_190_1 = &var_32c
                        int32_t var_328
                        sub_1413b8960(&var_178, &var_328, &var_198, nullptr)
                        rcx_19 = *(var_178 + sx.q(var_328) * 0x18 + 8)
            
            int64_t* rdi_1 = *(r14_1 + 0x20)
            int32_t r12_2 = var_1a8_1:8.d & 3
            int32_t var_268
            int32_t var_b8_1 = var_268.d
            int32_t var_c8_1 = var_288.d
            int32_t var_278
            int32_t var_a8_1 = var_278.d
            int32_t var_258
            int32_t var_98_1 = var_258.d
            int32_t var_264
            int32_t var_b4_1 = var_264.d
            int32_t var_284
            int32_t var_c4_1 = var_284.d
            int32_t var_274
            int32_t var_a4_1 = var_274.d
            int32_t var_254
            int32_t var_94_1 = var_254.d
            int32_t var_260
            int32_t var_b0_1 = var_260.d
            int32_t var_280
            int32_t var_c0_1 = var_280.d
            int32_t var_d4_1 = rcx_19
            int32_t var_270
            int32_t var_a0_1 = var_270.d
            int32_t var_250
            int32_t var_90_1 = var_250.d
            int32_t var_d0_1 = 0x63
            r14_2 = arg2
            int32_t var_2e0
            (*(*rdi_1 + 0x70))(rdi_1, &var_2e0, zx.q(rbx[0x2a9].d), zx.q(sub_14122cc00(r14_1)), 
                r14_2[0x4f].d)
            int32_t var_2dc
            int128_t zmm2 = var_2dc
            int32_t var_244
            zmm3 = var_244
            int128_t zmm1
            zmm1.d = zmm2.d f* var_2e0
            int64_t i = 0
            int32_t var_248
            int128_t zmm4_1 = var_248
            int32_t rcx_26 = 1
            zmm1 ^= 0x80000000
            int128_t var_88
            int128_t var_78
            
            do
                zmm0 = i != 0 ? zmm3 : zmm4_1
                
                *(&var_88 + (i << 2)) = zmm0.d
                
                zmm0 = i != 0 ? zmm1 : zmm2
                
                *(&var_78 + (i << 2)) = zmm0.d
                
                zmm0 = rcx_26 != 0 ? zmm3 : zmm4_1
                
                *(&var_88:4 + (i << 2)) = zmm0.d
                
                zmm0 = rcx_26 != 0 ? zmm1 : zmm2
                
                *(&var_78:4 + (i << 2)) = zmm0.d
                rcx_26 += 2
                i += 2
            while (i s< 2)
            
            int32_t var_27c
            int32_t var_bc_1 = var_27c.d
            int32_t var_25c
            int32_t var_9c_1 = var_25c.d
            int64_t rdi_2 = sx.q(*(arg4 + 0x10))
            int32_t var_ac_1 = var_26c.d
            int32_t var_24c
            int32_t var_8c_1 = var_24c.d
            int32_t rax_51 = (rdi_2 + 1).d
            int32_t var_23c
            int32_t var_80_1 = var_23c.d
            int32_t var_240
            int32_t var_7c_1 = var_240.d
            int32_t var_238
            int32_t var_70_1 = var_238.d
            int32_t var_234
            int32_t var_6c_1 = var_234.d
            int32_t var_cc_1 = 0
            *(arg4 + 0x10) = rax_51
            
            if (rax_51 s> *(arg4 + 0x14))
                sub_1413f6c30(arg4 + 8, rdi_2.d)
            
            void* rcx_29 = *(arg4 + 8)
            
            if ((rcx_29.b & 1) != 0)
                rcx_29 = (rcx_29 s>> 1) + arg4 + 8
            
            int64_t rax_53 = rdi_2 << 7
            *(rax_53 + rcx_29) = r12_2.o
            *(rax_53 + rcx_29 + 0x10) = var_c8_1.o
            *(rax_53 + rcx_29 + 0x20) = var_b8_1.o
            *(rax_53 + rcx_29 + 0x30) = var_a8_1.o
            zmm1 = var_88
            *(rax_53 + rcx_29 + 0x40) = var_98_1.o
            zmm0 = var_78
            *(rax_53 + rcx_29 + 0x50) = zmm1
            *(rax_53 + rcx_29 + 0x60) = zmm0
            int128_t var_68
            *(rax_53 + rcx_29 + 0x70) = var_68
            int64_t r8_7
            
            if (r12_2 == 3)
                r8_7 = var_230
            
            if (r12_2 != 3 || r8_7 == 0)
                int32_t var_348 = 0x63
            else
                var_348 = 0x63
                int32_t var_324
                sub_140865c40(&var_128, &var_324, r8_7)
                int64_t rax_54 = sx.q(var_324)
                void* const rcx_31
                
                if (rax_54.d == 0xffffffff)
                    rcx_31 = nullptr
                else
                    rcx_31 = var_128 + rax_54 * 0x18
                
                int32_t* rax_56 = rcx_31 + 8
                
                if (rcx_31 == 0)
                    rax_56 = nullptr
                
                int32_t rdx_18
                
                if (rax_56 != 0)
                    rdx_18 = *rax_56
                    var_348 = rdx_18
                label_1413f9480:
                    
                    if (rdx_18 != 0x63)
                        void* rcx_33 = *(arg4 + 8)
                        
                        if ((rcx_33.b & 1) != 0)
                            rcx_33 = (rcx_33 s>> 1) + arg4 + 8
                        
                        *((sx.q(*arg3) << 7) + rcx_33 + 8) = rdx_18
                        uint64_t rax_61 = zx.q(var_348)
                        
                        if (rax_61.d u<= 7)
                            switch (rax_61)
                                case 0
                                    *(arg3 + 0x28) = var_230
                                case 1
                                    *(arg3 + 0x30) = var_230
                                case 2
                                    *(arg3 + 0x38) = var_230
                                case 3
                                    *(arg3 + 0x40) = var_230
                                case 4
                                    *(arg3 + 0x48) = var_230
                                case 5
                                    *(arg3 + 0x50) = var_230
                                case 6
                                    *(arg3 + 0x58) = var_230
                                case 7
                                    *(arg3 + 0x60) = var_230
                else
                    int32_t rax_58 = var_120.d - var_f4
                    
                    if (rax_58 u< 8)
                        var_348 = rax_58
                        int64_t* var_188 = &var_230
                        int32_t* var_180_1 = &var_348
                        void var_1e8
                        sub_1408419d0(&var_128, &var_1e8, &var_188, nullptr)
                        rdx_18 = var_348
                        goto label_1413f9480
            
            *arg3 += 1
            
            if (*arg3 u>= 0x100)
                break
    
    var_2a8.d &= not.d(var_2b8:4.d)
    sub_14059bdd0(&var_2b8)
    r10 = var_2c0
    rcx_13 = var_338
    rbx = arg2
    r14 = arg1

int64_t var_168
int64_t* var_158

if (r14_2[0x2aa] != 0)
    int32_t rax_73 = var_170.d - var_144
    
    if (rax_73 s> 0)
        int64_t var_2d0 = 0
        int32_t var_2c4_1 = 0
        int32_t var_2c8_1 = rax_73
        sub_14083a310(&var_2d0, 0)
        int64_t* var_2f8_1 = &var_168
        int32_t rcx_39 = 0
        int32_t var_300_1 = 0
        int32_t r8_9 = 0
        int32_t var_2fc_1 = 1
        int32_t var_2f0_1 = 0xffffffff
        int64_t var_2ec_1 = 0
        int32_t var_150
        
        if (var_150 != 0)
            int64_t* r9_5 = &var_168
            
            if (var_158 != 0)
                r9_5 = var_158
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_150 - 1)
            int32_t rdx_21 = *r9_5
            
            if (rdx_21 != 0)
            label_1413f9619:
                int32_t rax_81 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_3
                int32_t temp0_4
                temp0_4, rflags_3 = _bit_scan_reverse(rax_81)
                int32_t var_2fc_2 = rax_81
                int32_t r12_3
                
                if (rax_81 == 0)
                    r12_3 = 0x20
                else
                    r12_3 = 0x1f - temp0_4
                
                int32_t rax_82 = r8_9 - r12_3 + 0x1f
                
                if (rax_82 s> var_150)
                    rax_82 = var_150
                
                var_2ec_1.d = rax_82
            else
                while (true)
                    int64_t rdx_22 = sx.q(rcx_39)
                    r8_9 += 0x20
                    rcx_39 += 1
                    var_2ec_1:4.d = r8_9
                    var_300_1 = rcx_39
                    
                    if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_2ec_1.d = var_150
                        break
                    
                    rdx_21 = *(r9_5 + (rdx_22 << 2) + 4)
                    int32_t var_2f0_2 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_1413f9619
        
        int16_t var_1f0_1 = 0
        int64_t* var_2c0_1 = &var_178
        int64_t* var_298_1 = &var_178
        var_2b8 = var_300_1.o
        int64_t* var_1f8_1 = &var_178
        int128_t var_2a8_1 = 0xffffffff
        zmm3 = var_2b8
        int64_t zmm1_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_228 = var_2c0_1.o
        int128_t zmm0_1
        zmm0_1.q = zmm1_1
        int128_t var_218_1 = zmm3
        int128_t var_208_1 = zmm0_1
        
        if (0 s< *(zmm3.q + 0x18))
            int64_t rbx_4 = var_2d0
            int32_t i_1 = var_218_1:0xc.d
            
            do
                int64_t rdx_23 = sx.q(i_1) * 3
                int64_t rax_86 = *var_228.q
                *(rbx_4 + (sx.q(*(rax_86 + (rdx_23 << 3) + 8)) << 3)) = *(rax_86 + (rdx_23 << 3))
                var_218_1:8.d &= not.d(var_228:0xc.d)
                sub_14059bdd0(&var_228:8)
                i_1 = var_218_1:0xc.d
            while (i_1 s< *(var_218_1.q + 0x18))
            
            if (var_1f0_1.b != 0 && var_1f0_1:1.b != 0)
                sub_1405b6470(var_1f8_1, var_1f8_1[1].d - *(var_1f8_1 + 0x34), 1)
        
        sub_1413d27e0(r14_2[0x2aa], &var_2d0)

sub_1405d1550(&var_2d8)
int32_t var_e0_1 = 0

if (var_e8 != 0)
    sub_140a74f90(var_e8)

bool cond:3 = var_120:4.d == 0
var_120.d = 0

if (not(cond:3))
    sub_1405a5130(&var_128, 0)

int32_t var_f8_1 = 0xffffffff
int32_t var_f4_1 = 0
int64_t var_118
sub_14059a8e0(&var_118, 0)
int64_t var_108

if (var_108 != 0)
    sub_140a74f90(var_108)

int64_t rcx_50 = var_128

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

int32_t var_130_1 = 0

if (var_138 != 0)
    sub_140a74f90(var_138)

bool cond:6 = var_170:4.d == 0
var_170.d = 0

if (not(cond:6))
    sub_1405a5130(&var_178, 0)

int32_t var_148_1 = 0xffffffff
int32_t var_144_1 = 0
void* result = sub_14059a8e0(&var_168, 0)

if (var_158 != 0)
    result = sub_140a74f90(var_158)

int64_t rcx_55 = var_178

if (rcx_55 != 0)
    result = sub_140a74f90(rcx_55)

__security_check_cookie(rax_1 ^ &var_378)
return result
