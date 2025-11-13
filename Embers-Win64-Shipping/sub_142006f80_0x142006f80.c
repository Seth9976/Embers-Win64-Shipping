// 函数: sub_142006f80
// 地址: 0x142006f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int32_t i = 0
int32_t var_278 = 0
*arg1 = 0
int64_t* rsi = arg2
arg1[1] = 0
int32_t r13 = 0
void* rax_2 = sub_1423de4f0(data_143f5b298, arg2)
void* r12 = rax_2
int32_t rdx_1 = rsi[0x14].d + 1

if (rdx_1 s> *(arg1 + 0xc))
    sub_1405c55e0(arg1, rdx_1)

int64_t var_1e0 = 0
int32_t var_1d8 = 0
void* rax_3 = sub_140d21d80(rsi)
int64_t r14 = sx.q(arg1[1].d)
var_1e0.d = 5
var_1e0:4.d = 0xffffffff
int64_t rcx_3 = *(rax_3 + 0x18)
int32_t rax_4 = (r14 + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405c4d20(arg1)

int64_t rdx_3 = *arg1
int64_t rcx_5 = r14 * 5
*(rdx_3 + (rcx_5 << 2)) = rcx_3.o
*(rdx_3 + (rcx_5 << 2) + 0x10) = 0
int64_t* r15 = rsi[0x13]
void* rax_6 = &r15[sx.q(rsi[0x14].d)]

if (r15 != rax_6)
    while (true)
        void* r14_1 = *r15
        int64_t var_240
        char rax_14
        
        if (r14_1 != 0 && *(r14_1 + 0x38) != 0)
            int32_t var_258 = 0xffffffff
            int64_t var_254_1 = 0
            var_278.q = 0
            int64_t var_248
            __builtin_memset(&var_248, 0, 0x18)
            void var_178
            int64_t* rax_8 = sub_140d21d60(&var_178, rsi)
            var_248 = *rax_8
            
            if (&var_240 != &rax_8[1])
                int64_t rcx_7 = var_240
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                var_240 = rax_8[1]
                rax_8[1] = 0
                int64_t var_238_1
                var_238_1.d = rax_8[2].d
                var_238_1:4.d = *(rax_8 + 0x14)
                rax_8[2] = 0
            
            int64_t var_170
            
            if (var_170 != 0)
                sub_140a74f90(var_170)
            
            sub_140d3a3a0(&var_258, arg2)
            int32_t rax_13 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_13 = data_1439aaa30
            
            var_254_1:4.d = rax_13
            r13 |= 1
            rax_14 = sub_140d16af0(r14_1 + 0x38, &var_248)
        
        if (r14_1 == 0 || *(r14_1 + 0x38) == 0 || rax_14 != 0)
            rsi.b = 0
        else
            rsi.b = 1
        
        if ((r13.b & 1) != 0)
            int64_t rcx_11 = var_240
            r13 &= 0xfffffffe
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        if (rsi.b != 0)
            int32_t var_1d0_1 = 0
            int64_t var_268_1 = 0
            int32_t var_260_1 = 0
            void var_228
            int64_t* rax_15 = sub_1420e4d10(r14_1, &var_228)
            int64_t rsi_1 = *(r14_1 + 0x128)
            uint64_t r12_1 = *rax_15
            var_268_1:4.d = *(r14_1 + 0xb0)
            
            if (rsi_1 == 0)
                int32_t var_298_1 = 0
                uint64_t rax_21 = sub_140d2f0c0(sub_140cddea0(), 0, r12_1, 0, 0, 0)
                void* rax_22
                
                if (rax_21 != 0)
                    rax_22 = sub_142435380(rax_21)
                
                if (rax_21 == 0 || rax_22 == 0)
                    int32_t rax_19 = 0
                    
                    if (*(r14_1 + 0xb8) == 3)
                        rax_19 = 2
                    
                    var_268_1.d = rax_19
                else
                    var_268_1.d = 1
            else if (sub_14242f5e0(arg2, rsi_1) != 1)
                var_268_1.d = 3
            else
                int32_t rax_18
                rax_18.b = arg2[0x1c] != rsi_1
                var_268_1.d = rax_18 + 4
            
            int64_t rsi_2 = sx.q(arg1[1].d)
            int32_t rax_23 = (rsi_2 + 1).d
            arg1[1].d = rax_23
            
            if (rax_23 s> *(arg1 + 0xc))
                sub_1405c4d20(arg1)
            
            int64_t rdx_10 = *arg1
            int64_t rcx_17 = rsi_2 * 5
            *(rdx_10 + (rcx_17 << 2)) = r12_1.o
            *(rdx_10 + (rcx_17 << 2) + 0x10) = var_1d0_1
        
        r15 = &r15[1]
        
        if (r15 == rax_6)
            break
        
        rsi = arg2
    
    r12 = rax_2

if (*(r12 + 0x1c0) s> 0)
    int64_t* r14_3 = nullptr
    
    do
        int64_t rsi_3 = sx.q(arg1[1].d)
        int64_t var_188_1 = 0
        var_188_1.d = 6
        int64_t rax_26 = *(r14_3 + *(r12 + 0x1b8))
        int32_t rax_27 = (rsi_3 + 1).d
        var_188_1:4.d = 0xffffffff
        arg1[1].d = rax_27
        
        if (rax_27 s> *(arg1 + 0xc))
            sub_1405c4d20(arg1)
        
        int64_t r8_2 = *arg1
        int64_t rdx_12 = rsi_3 * 5
        i += 1
        r14_3 = &r14_3[1]
        *(r8_2 + (rdx_12 << 2)) = rax_26.o
        *(r8_2 + (rdx_12 << 2) + 0x10) = 0
    while (i s< *(r12 + 0x1c0))

int64_t* var_1f8
sub_1424373a0(arg2, &var_1f8)
int32_t i_2
int32_t i_1 = i_2
uint64_t r14_4 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int32_t zmm6 = 0x43800000

while (i_1 s>= 0)
    int64_t* rcx_20 = var_1f8
    
    if (i_1 s>= rcx_20[1].d)
        break
    
    int64_t* rax_29 = sub_140d3c6e0(*rcx_20 + (sx.q(i_1) << 3))
    
    if (rax_29 != 0)
        void* rbx = rax_29[0x4a]
        
        if (rbx != 0)
            void var_158
            memset(&var_158, 0, 0x88)
            int32_t var_150_1 = 0x3f800000
            
            if (data_143f3f3f0 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_4 << 3))))
                _Init_thread_header(&data_143f3f3f0)
                
                if (data_143f3f3f0 == 0xffffffff)
                    zmm6 = sub_140b58170(&data_143f3f3e8, "FindLevel", 1)
                    _Init_thread_footer(&data_143f3f3f0)
            
            void* rcx_25 = *(rbx + 0x130)
            int32_t rdx_14 = data_143dbb200
            int64_t zmm2_1 = data_143dbb1f8.q
            int32_t var_230 = 1
            char var_22c_1 = 0
            int32_t* rax_31
            uint128_t zmm1_1
            
            if (rcx_25 == 0)
                int64_t var_1b8 = zmm2_1
                rax_31 = &var_1b8
                int32_t var_1b0_1 = rdx_14
            else
                zmm1_1 = *(rcx_25 + 0x1d0)
                int32_t var_21c
                rax_31 = &var_21c
                var_21c = zmm1_1.d
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                int32_t var_214_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa).d
                float var_218_1 = temp0_1[0]
            
            zmm1_1 = zx.o(*rax_31)
            int32_t rax_32 = rax_31[2]
            float zmm0_1[0x4] = zmm1_1
            float var_200_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0]
            zmm0_1 = rax_32
            int32_t var_204 = zmm1_1.d
            zmm0_1[0] = zmm0_1[0] f- zmm6
            float var_1fc_1 = zmm0_1[0]
            int32_t* rax_33
            
            if (rcx_25 == 0)
                int64_t var_1ac = zmm2_1
                rax_33 = &var_1ac
                int32_t var_1a4_1 = rdx_14
            else
                zmm1_1 = *(rcx_25 + 0x1d0)
                int32_t var_210
                rax_33 = &var_210
                var_210 = zmm1_1.d
                float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                int32_t var_208_1 = zmm1_1.d
                float var_20c_1 = temp0_4[0]
            
            int32_t rax_34 = rax_33[2]
            int64_t rdx_15 = data_143f3f3e8
            int64_t var_1a0 = *rax_33
            int32_t var_198_1 = rax_34
            char var_2a8
            var_2a8.q = rbx
            int32_t var_2a0
            void var_288
            void var_c8
            var_2a0.q = sub_141eb54c0(&var_c8, rdx_15, &var_288, 1, var_2a8)
            var_2a8.q = &var_230
            zmm6 = sub_141ec6b10((*(*rax_29 + 0x150))(rax_29, zmm1_1), &var_158, &var_1a0, 
                &var_204, var_2a8, var_2a0)
            int64_t var_68
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            void var_f0
            void* rax_38 = sub_140d3c6e0(&var_f0)
            void* rax_39
            
            if (rax_38 == 0)
                void var_e8
                void* rax_40 = sub_140d3c6e0(&var_e8)
                
                if (rax_40 != 0)
                    rax_39 = sub_141ee26c0(rax_40)
                    goto label_1420074dc
            else
                rax_39 = sub_141dc9840(rax_38)
            label_1420074dc:
                
                if (rax_39 != 0)
                    void* rax_41 = sub_140d21d80(rax_39)
                    int64_t* r8_5 = *arg1
                    void* rcx_37 = r8_5 + sx.q(arg1[1].d) * 0x14
                    
                    if (r8_5 != rcx_37)
                        do
                            if (*r8_5 == *(rax_41 + 0x18))
                                *(r8_5 + 0x11) = 1
                                goto label_142007524
                            
                            r8_5 += 0x14
                        while (r8_5 != rcx_37)
                        
                        i_1 = i_2 + 1
                        i_2 = i_1
                        continue
    
label_142007524:
    i_1 = i_2 + 1
    i_2 = i_1

__security_check_cookie(rax_1 ^ &var_2c8)
return arg1
