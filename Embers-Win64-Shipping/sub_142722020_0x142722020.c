// 函数: sub_142722020
// 地址: 0x142722020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x90)
void* rbx = arg1
void* rax = *(arg1 + 0x38)
int128_t zmm9

if (zmm0.d f<= 0f)
    zmm9 = zx.o(0)
else
    zmm9.d = 1f f/ zmm0.d

int32_t r11 = *(rax + 0x60)
void* r9 = rax + 0x48
int32_t rcx = 0
int32_t var_124 = 1
int32_t r8 = 0
int32_t var_128 = 0
void* var_120 = r9
int32_t var_118 = 0xffffffff
int64_t var_114 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14272210c:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_124_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_114.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_114.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_114:4.d = r8
            var_128 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_118 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14272210c
        
        var_114.d = r11

void* var_c0 = rax + 0x38
void* var_e8 = rax + 0x38
int128_t zmm2 = var_e8.o
int16_t var_f0 = 0
int128_t var_d0 = 0xffffffff
uint128_t zmm3 = var_128.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_128.o = zmm2
var_118.o = zmm3
var_d0 = zmm0
uint128_t var_108 = zmm0

if (0 s< *(zmm3.q + 0x18))
    uint64_t r10_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int32_t i_1
    int32_t i = i_1
    int128_t zmm6
    int128_t var_58_1 = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    
    do
        int64_t r13_1 = *var_128.q
        int64_t rdi_1 = sx.q(i) * 0x3c
        int64_t var_a8_1 = rdi_1
        
        if (test_bit(*(rdi_1 + r13_1 + 0xc), zx.d(*(rbx + 0x44))))
            int32_t* r14_2
            
            if (*(rbx + 0xa0) == *(rbx + 0xcc))
            label_14272228f:
                r14_2 = nullptr
            else
                void* r9_1 = rbx + 0xd0
                void* r8_2 = *(r9_1 + 8)
                int64_t rcx_4 = sx.q(*(rdi_1 + r13_1 + 0x30))
                
                if (r8_2 != 0)
                    r9_1 = r8_2
                
                int32_t rax_16 = *(r9_1 + (((sx.q(*(rbx + 0xe0)) - 1) & rcx_4) << 2))
                
                if (rax_16 == 0xffffffff)
                label_14272228f_1:
                    r14_2 = nullptr
                else
                    while (true)
                        r14_2 = sx.q(rax_16) * 0x1c + *(rbx + 0x98)
                        
                        if (*r14_2 == rcx_4.d)
                            break
                        
                        rax_16 = r14_2[5]
                        
                        if (rax_16 == 0xffffffff)
                            goto label_14272228f_2
                    
                    if (rax_16 == 0xffffffff)
                    label_14272228f_2:
                        r14_2 = nullptr
            
            void* r15_1 = *(rbx + 0x80)
            void* rsi_3 = sx.q(*(rbx + 0x88)) * 0x30 + r15_1
            
            if (r15_1 != rsi_3)
                void* rax_18 = rsi_3
                void* rsi_4 = r15_1 + 0xc
                
                do
                    zmm0.d = (*(rdi_1 + r13_1 + 0x18)).d f- *rsi_4
                    int64_t zmm1 = *(rdi_1 + r13_1 + 0x10)
                    float temp0_4[0x4] = _mm_max_ss((*(rsi_4 + 4))[0], 0)
                    zmm6.d = (*(rdi_1 + r13_1 + 0x14)).d f- *(rsi_4 - 4)
                    zmm1.d = zmm1.d f- *(rsi_4 - 8)
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm6.d = zmm6.d f+ zmm1.d
                    zmm6.d = zmm6.d f+ zmm0.d
                    zmm0.d = temp0_4.d f* temp0_4[0]
                    zmm0.d = zmm0.d f* r14_2[1]
                    
                    if (not(zmm6.d f> zmm0.d))
                        zmm0 = *(rsi_4 + 8)
                        
                        if (zmm0.d f<= 0f)
                        label_142722347:
                            char r12_1 = r14_2[3].b
                            char rbx_1 = *(rsi_4 + 0x1c)
                            char rdi_2 = *(rdi_1 + r13_1 + 0x28)
                            
                            if (data_143f7251c
                                    s> *(0x14 + *(ThreadLocalStoragePointer + (r10_1 << 3))))
                                _Init_thread_header(&data_143f7251c)
                                
                                if (data_143f7251c == 0xffffffff)
                                    data_143f72519 = 7
                                    _Init_thread_footer(&data_143f7251c)
                            
                            char rax_24
                            
                            if (r12_1 != data_143f72519)
                                if (data_143b57fa0 == 0)
                                    rax_24 = 1
                                else
                                    void** rax_21 = data_143b57fb0
                                    void** rcx_5 = &data_143b57fc0
                                    char arg_10 = rbx_1
                                    char arg_18 = rdi_2
                                    
                                    if (rax_21 != 0)
                                        rcx_5 = rax_21
                                    
                                    rax_24 =
                                        data_143b57fa0((*(*rcx_5 + 8))(rcx_5), &arg_18, &arg_10)
                            
                            if (r12_1 != data_143f72519 && (r12_1 & (1 << rax_24).b) == 0)
                                rdi_1 = var_a8_1
                                rbx = arg1
                            else
                                rdi_1 = var_a8_1
                                uint128_t var_e0
                                var_e0:0xc.d = *rsi_4
                                var_e0:4.q = *(rsi_4 - 8)
                                var_e0.d = temp0_4[0]
                                var_d0:8.d = *(rdi_1 + r13_1 + 0x18)
                                var_d0:0xc.q = *(rsi_4 + 0x14)
                                var_e8.d = 0
                                var_e8:4.d = 0x7f7fffff
                                var_d0.q = *(rdi_1 + r13_1 + 0x10)
                                var_c0:4.b = 0xff
                                int64_t var_b8
                                int64_t r8_4
                                int512_t zmm2_1
                                float zmm6_1
                                r8_4, zmm2_1, zmm6_1 = sub_140b58260(&var_b8, u"Invalid", 1)
                                rbx = arg1
                                void* r9_3 = *(rsi_4 + 0xc)
                                zmm2_1.o = zx.o(0)
                                int32_t rcx_9
                                rcx_9.b = *(rbx + 0x2c) == 1
                                zmm2_1.o = _mm_sqrt_ss(0, zmm6_1 f* zmm9.d)
                                int32_t var_b0 = (rcx_9 + 2) | (var_b0 & 0xfffffffa)
                                char rcx_12 = *(rbx + 0x44)
                                var_b8 = *(rbx + 0x48)
                                int32_t arg_20 = *(rdi_1 + r13_1 + 0x30)
                                var_c0:4.b = rcx_12
                                sub_142709c70(rax, &arg_20, r8_4, r9_3, &var_e8)
                            
                            ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                            r10_1 = zx.q(data_14401b1a0)
                            rax_18 = rsi_3
                        else
                            zmm0.d = zmm0.d f* temp0_4[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            
                            if (not(zmm6.d f> zmm0.d))
                                goto label_142722347
                    
                    r15_1 += 0x30
                    rsi_4 += 0x30
                while (r15_1 != rax_18)
        
        var_114:4.d &= not.d(var_120:4.d)
        sub_14059bdd0(&var_120)
        i = i_1
        r10_1 = zx.q(data_14401b1a0)
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    while (i s< *(var_118.q + 0x18))
    
    if (var_f0.b != 0 && var_f0:1.b != 0)
        sub_1426f6b40(rax + 0x38, *(rax + 0x40) - *(rax + 0x6c), 1)

*(rbx + 0x88) = 0

if (*(rbx + 0x8c) s<= 0xffffffff)
    sub_1405a5220(rbx + 0x80, 0)

return 0x7f7fffff
