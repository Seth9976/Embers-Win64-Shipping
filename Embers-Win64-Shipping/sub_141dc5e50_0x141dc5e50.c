// 函数: sub_141dc5e50
// 地址: 0x141dc5e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t zmm10
uint128_t var_88 = zmm10
uint128_t zmm11
uint128_t var_98 = zmm11
uint32_t zmm12[0x4]
uint32_t var_a8[0x4] = zmm12
uint128_t zmm13
uint128_t var_b8 = zmm13
uint128_t zmm14
uint128_t var_c8 = zmm14
uint128_t zmm15
uint128_t var_d8 = zmm15
void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t var_1f4 = arg4.d
uint64_t* result_1 = arg2

if (arg4.d f<= 0f)
    goto label_141dc6e70

void* rdi_1 = *(arg1 + 0x20)
zmm15.d = arg4.d f* arg3[1].d
zmm14.d = arg4.d f* *(arg3 + 0xc)
int32_t var_244_1 = zmm15.d
zmm9.d = arg4.d f* *(arg3 + 0x14)
uint128_t zmm0
zmm0.d = zmm15.d f* zmm15.d
zmm13.d = zmm14.d f* zmm14.d
int32_t var_278_1 = zmm9.d
int32_t var_268_1 = zmm14.d
zmm13.d = zmm13.d f+ zmm0.d
float temp0_1[0x4] = _mm_sqrt_ss(0, zmm13.d)
int32_t var_1f8_1 = zmm13.d
float var_1c0_1 = temp0_1[0]

if (rdi_1 == 0)
    goto label_141dc6e70

void* rax_2 = sub_1425be5e0()
void* rdx = *(rdi_1 + 0x10)
int64_t rax_3 = sx.q(*(rax_2 + 0x38))

if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    goto label_141dc6e70

uint64_t r15
r15.b = 1
int32_t var_1c8_1 = (*(rdi_1 + 0x520)).d

if (temp0_1[0] < 0.00999999978f)
    goto label_141dc6e70

int32_t rdx_1 = *(arg1 + 0xc4)
*(arg1 + 0xc0) = 0

if (*(arg1 + 0xc4) != rdx_1)
    sub_1405a51b0(arg1 + 0xb8, rdx_1)

void* r11_2 = arg1 + 0x58
int64_t var_204_1 = 0
int32_t r10_1 = *(r11_2 + 0x28)
void* r13_1 = r11_2 + 0x10
void* var_240 = r11_2
int32_t rcx_2 = 0
int32_t var_218_1 = 0
int32_t var_214_1 = 1
int32_t r8_1 = 0
void* var_210_1 = r13_1
int32_t var_208_1 = 0xffffffff

if (r10_1 != 0)
    void* rax_5 = *(r13_1 + 0x10)
    void* r11_1 = r13_1
    
    if (rax_5 != 0)
        r11_1 = rax_5
    
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r11_1
    
    if (rdx_4 != 0)
    label_141dc6045:
        int32_t rax_12 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_214_2 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_3
        
        var_204_1.d = r8_1 - rax_13 + 0x1f
        
        if (r8_1 - rax_13 + 0x1f s> r10_1)
            var_204_1.d = r10_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_1 += 0x20
            rcx_2 += 1
            var_204_1:4.d = r8_1
            var_218_1 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r11_1 + (rdx_5 << 2) + 4)
            int32_t var_208_2 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141dc6045
        
        var_204_1.d = r10_1
    
    r11_2 = var_240

int32_t rsi_1 = *(r11_2 + 0x28)
int32_t r8_4 = rsi_1 s>> 5
uint128_t var_170_1 = var_218_1.o
int128_t var_160_1 = 0xffffffff
int32_t rcx_6 = rsi_1 & 0xffffffe0
uint64_t var_180_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
uint128_t var_1a0 = r11_2.o
uint128_t var_190_1 = var_170_1
uint64_t rax_16

if (rsi_1 != r10_1)
    void* rax_17 = *(r13_1 + 0x10)
    void* r11_3 = r13_1
    
    if (rax_17 != 0)
        r11_3 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_9 = *(r11_3 + (sx.q(r8_4) << 2)) & 0xffffffff << (rsi_1 & 0x1f).b
    
    if (rdx_9 != 0)
    label_141dc610d:
        rax_16 = zx.q(neg.d(rdx_9)) & zx.q(rdx_9)
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_16.d)
        int32_t rdi_2
        
        if (rax_16.d == 0)
            rdi_2 = 0x20
        else
            rdi_2 = 0x1f - temp0_5
        
        rsi_1 = rcx_6 - rdi_2 + 0x1f
        
        if (rsi_1 s> r10_1)
            rsi_1 = r10_1
    else
        while (true)
            int64_t rdx_10 = sx.q(r8_4)
            rcx_6 += 0x20
            r8_4 += 1
            
            if (rdx_10.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_9 = *(r11_3 + (rdx_10 << 2) + 4)
            
            if (rdx_9 != 0)
                goto label_141dc610d
        
        rsi_1 = r10_1
    
    r11_2 = var_240

zmm12 = 0x7fffffff
zmm8 = 0x3f800000
zmm6 = 0x322bcc77
zmm11 = 0x3f000000
int32_t var_1b8
uint128_t zmm1
uint128_t zmm2
uint128_t zmm4_1
uint128_t zmm5_1

while (true)
    int64_t rcx_8 = sx.q(var_190_1:0xc.d)
    
    if (rcx_8.d != rsi_1 || var_190_1.q != r13_1)
        rax_16.b = 0
    else
        rax_16.b = 1
    
    int64_t* rdx_12 = var_1a0.q
    
    if (rax_16.b == 0 || rdx_12 != r11_2)
        rax_16.b = 1
    else
        rax_16.b = 0
    
    if (rax_16.b == 0)
        break
    
    int64_t rdx_13 = *rdx_12
    int64_t rcx_9 = rcx_8 * 9
    
    if ((arg5 == 0 || *arg5 != *(rdx_13 + (rcx_9 << 3)))
            && not(0f f>= *(rdx_13 + (rcx_9 << 3) + 0x1c)))
        int32_t rax_23 = *(rdx_13 + (rcx_9 << 3) + 0x30)
        
        if ((arg3[3].d & rax_23) == 0 || (*(arg3 + 0x34) & rax_23) != 0)
            rax_23.b = 1
        else
            rax_23.b = 0
        
        if (rax_23.b == 0)
            zmm9 = *(rdx_13 + (rcx_9 << 3) + 4)
            zmm10 = *(rdx_13 + (rcx_9 << 3) + 8)
            zmm4_1.d = zmm9.d f- *arg3
            zmm2 = *(arg3 + 0x38)
            arg4.d = zmm10.d f- *(arg3 + 4)
            zmm2.d = zmm2.d f* zmm2.d
            zmm1.d = zmm4_1.d f* zmm4_1.d
            zmm0.d = arg4.d f* arg4.d
            zmm1.d = zmm1.d f+ zmm0.d
            
            if (zmm1.d f> zmm2.d)
                zmm9 = var_278_1
            else
                zmm0.d = arg3[2].d.d f+ *(rdx_13 + (rcx_9 << 3) + 0x24)
                zmm2.d = (*(rdx_13 + (rcx_9 << 3) + 0xc)).d f- *(arg3 + 8)
                zmm0.d = zmm0.d f+ *(arg1 + 0x48)
                
                if (_mm_and_ps(zmm2, zmm12).d f> zmm0.d)
                    zmm9 = var_278_1
                else
                    zmm2.d = zmm2.d f* var_278_1
                    zmm0.d = zmm14.d f* zmm4_1.d
                    arg4.d = arg4.d f* zmm15.d
                    zmm0.d = zmm0.d f+ arg4.d
                    zmm0.d = zmm0.d f+ zmm2.d
                    
                    if (zmm0.d f<= 0f)
                        zmm9 = var_278_1
                    else
                        zmm1 = zx.o(*arg3)
                        zmm9.d = zmm9.d f- zmm1.d
                        int32_t rax_25 = *(arg3 + 8)
                        zmm13.d = (*(arg3 + 0x1c)).d f+ *(rdx_13 + (rcx_9 << 3) + 0x20)
                        zmm5_1 = data_143dbb200
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        var_1b8.q = zmm1.q
                        zmm10.d = zmm10.d f- zmm0.d
                        int32_t var_1b0_1 = rax_25
                        zmm1.d = zmm9.d f* zmm9.d
                        zmm0.d = zmm10.d f* zmm10.d
                        zmm1.d = zmm1.d f+ zmm0.d
                        
                        if (not(zmm1.d f!= 1f))
                            zmm11 = zmm9
                            zmm4_1 = zmm10
                            zmm0 = zx.o(0)
                        else if (zmm1.d f>= zmm6[0])
                            zmm4_1.d = zmm11.d
                            zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                            arg4.d = zmm1.d f* zmm4_1.d
                            zmm0.d = zmm5_1.d f* zmm5_1.d
                            zmm1.d = arg4.d f* zmm0.d
                            zmm2.d = zmm4_1.d f- zmm1.d
                            zmm0.d = zmm5_1.d f* zmm2.d
                            zmm5_1.d = zmm5_1.d f+ zmm0.d
                            zmm1.d = zmm5_1.d f* zmm5_1.d
                            arg4.d = arg4.d f* zmm1.d
                            zmm4_1.d = zmm4_1.d f- arg4.d
                            zmm0.d = zmm5_1.d f* zmm4_1.d
                            zmm5_1.d = zmm5_1.d f+ zmm0.d
                            int32_t var_264_1 = zmm5_1.d
                            zmm11.d = zmm9.d f* zmm5_1.d
                            zmm4_1.d = zmm10.d f* zmm5_1.d
                            zmm5_1 = data_143dbb200
                            zmm0 = zx.o(0)
                        else
                            zmm11 = data_143dbb1f8
                            zmm0 = zmm5_1
                            zmm4_1 = data_143dbb1fc
                        
                        if (zmm11.d f!= 0f || zmm4_1.d f!= 0f || zmm0.d f!= 0f)
                            rax_25.b = 0
                        else
                            rax_25.b = 1
                        
                        if (rax_25.b != 0)
                            zmm11 = 0x3f000000
                            zmm9 = var_278_1
                        else
                            if (not(var_1c8_1.d f< *(rdx_13 + (rcx_9 << 3) + 0x2c)))
                                zmm6 = *(rdx_13 + (rcx_9 << 3) + 0x14)
                                arg4 = *(rdx_13 + (rcx_9 << 3) + 0x10)
                                zmm15 = *(rdx_13 + (rcx_9 << 3) + 0x18)
                                zmm1.d = arg4.d f* zmm9.d
                                zmm0.d = zmm6.d f* zmm10.d
                                zmm1.d = zmm1.d f+ zmm0.d
                            
                            if (var_1c8_1.d f< *(rdx_13 + (rcx_9 << 3) + 0x2c) || zmm1.d f>= 0f)
                                zmm15 = *(rdx_13 + (rcx_9 << 3) + 0x18)
                                zmm6 = *(rdx_13 + (rcx_9 << 3) + 0x14)
                                arg4 = *(rdx_13 + (rcx_9 << 3) + 0x10)
                            else
                                zmm0.d = 1f f- *(arg3 + 0x24)
                                zmm0.d = zmm0.d f+ *(rdx_13 + (rcx_9 << 3) + 0x28)
                                zmm0.d = zmm0.d f* 0.5f
                                zmm1.d = 1f f- zmm0.d
                                arg4.d = arg4.d f* zmm0.d
                                zmm6[0] = zmm6[0] f* zmm0.d
                                zmm15.d = zmm15.d f* zmm0.d
                                zmm2.d = zmm1.d f* *(arg3 + 0xc)
                                zmm0.d = zmm1.d f* arg3[1].d
                                zmm1.d = zmm1.d f* *(arg3 + 0x14)
                                arg4.d = arg4.d f+ zmm2.d
                                zmm6[0] = zmm6[0] f+ zmm0.d
                                zmm15.d = zmm15.d f+ zmm1.d
                            
                            zmm0 = var_1f4
                            zmm6[0] = zmm6[0] f* zmm0.d
                            zmm12 = zmm0
                            zmm12[0] = zmm12[0] f* arg4.d
                            zmm15.d = zmm15.d f* zmm0.d
                            zmm0.d = zmm13.d f* zmm4_1.d
                            zmm11.d = zmm11.d f* zmm13.d
                            zmm0 ^= data_142d3f780
                            zmm1.d = zmm15.d f+ 100f
                            arg4.d = zmm10.d f+ zmm11.d
                            int32_t var_1f0_1 = zmm11.d
                            zmm4_1.d = zmm9.d f+ zmm0.d
                            int32_t var_1c4_1 = zmm0.d
                            zmm1.d = zmm1.d f- zmm15.d
                            arg4.d = arg4.d f+ zmm6[0]
                            zmm4_1.d = zmm4_1.d f+ zmm12[0]
                            zmm11 = arg4
                            arg4.d = arg4.d f- zmm6[0]
                            zmm11.d = zmm11.d f- zmm6[0]
                            zmm2.d = zmm4_1.d f- zmm12[0]
                            zmm4_1.d = zmm4_1.d f- zmm12[0]
                            zmm13.d = zmm1.d f* arg4.d
                            zmm14 = zmm2
                            zmm2.d = zmm2.d f* arg4.d
                            zmm0.d = zmm11.d f* 0f
                            zmm1.d = zmm1.d f* zmm4_1.d
                            zmm13.d = zmm13.d f- zmm0.d
                            zmm14.d = zmm14.d f* 0f
                            zmm11.d = zmm11.d f* zmm4_1.d
                            zmm14.d = zmm14.d f- zmm1.d
                            int32_t var_258_1 = zmm13.d
                            zmm11.d = zmm11.d f- zmm2.d
                            arg4.d = zmm13.d f* zmm13.d
                            int32_t var_248_1 = zmm14.d
                            zmm0.d = zmm14.d f* zmm14.d
                            int32_t var_270_1 = zmm11.d
                            zmm1.d = zmm11.d f* zmm11.d
                            arg4.d = arg4.d f+ zmm0.d
                            arg4.d = arg4.d f+ zmm1.d
                            int32_t var_1e8_1
                            
                            if (not(arg4.d f!= 1f))
                                var_1e8_1 = zmm13.d
                                int32_t var_1e4_1 = zmm14.d
                                int32_t var_1e0_1 = zmm11.d
                                zmm4_1 = data_143dbb1fc
                            else if (arg4.d f>= 9.99999994e-09f)
                                zmm5_1 = _mm_rsqrt_ss(arg4.d, arg4.d)
                                arg4.d = arg4.d f* 0.5f
                                zmm0.d = zmm5_1.d f* zmm5_1.d
                                zmm1.d = arg4.d f* zmm0.d
                                zmm2.d = 0.5f f- zmm1.d
                                zmm0.d = zmm5_1.d f* zmm2.d
                                zmm5_1.d = zmm5_1.d f+ zmm0.d
                                zmm1.d = zmm5_1.d f* zmm5_1.d
                                arg4.d = arg4.d f* zmm1.d
                                zmm4_1.d = 0.5f f- arg4.d
                                zmm0.d = zmm5_1.d f* zmm4_1.d
                                zmm5_1.d = zmm5_1.d f+ zmm0.d
                                int32_t var_264_2 = zmm5_1.d
                                zmm0.d = zmm5_1.d f* zmm13.d
                                zmm1.d = zmm5_1.d f* zmm14.d
                                zmm5_1.d = zmm5_1.d f* zmm11.d
                                zmm13 = zmm0
                                var_258_1 = zmm0.d
                                zmm14 = zmm1
                                var_1e8_1 = zmm0.d
                                var_248_1 = zmm1.d
                                zmm11 = zmm5_1
                                int32_t var_1e4_3 = zmm1.d
                                var_270_1 = zmm5_1.d
                                int32_t var_1e0_3 = zmm5_1.d
                                zmm4_1 = data_143dbb1fc
                            else
                                zmm4_1 = data_143dbb1fc
                                zmm11 = zmm5_1
                                zmm13 = data_143dbb1f8
                                zmm14 = zmm4_1
                                var_258_1 = zmm13.d
                                var_1e8_1 = zmm13.d
                                var_248_1 = zmm4_1.d
                                int32_t var_1e4_2 = zmm4_1.d
                                var_270_1 = zmm5_1.d
                                int32_t var_1e0_2 = zmm5_1.d
                            
                            zmm9.d = zmm9.d f- var_1c4_1
                            zmm10.d = zmm10.d f- var_1f0_1
                            zmm0.d = zmm6.d f* zmm14.d
                            zmm1.d = zmm15.d f* zmm11.d
                            zmm9.d = zmm9.d f+ zmm12[0]
                            zmm2.d = zmm12.d f* zmm13.d
                            zmm10.d = zmm10.d f+ zmm6[0]
                            zmm2.d = zmm2.d f+ zmm0.d
                            zmm0 = var_1e8_1.o
                            _mm_shuffle_ps(zmm0, zmm0, 0x93)
                            zmm11.d = zmm10.d f- zmm6[0]
                            zmm10.d = zmm10.d f- zmm6[0]
                            zmm2.d = zmm2.d f+ zmm1.d
                            zmm1.d = zmm15.d f- 100f
                            zmm0.d = zmm2.d
                            int32_t var_264_3 = zmm2.d
                            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
                            zmm1.d = zmm1.d f- zmm15.d
                            var_1b8.o = zmm0
                            var_1e8_1.o = zmm0
                            zmm2.d = zmm9.d f- zmm12[0]
                            zmm9.d = zmm9.d f- zmm12[0]
                            zmm0.d = zmm11.d f* 0f
                            zmm13.d = zmm1.d f* zmm10.d
                            zmm1.d = zmm1.d f* zmm9.d
                            zmm13.d = zmm13.d f- zmm0.d
                            zmm14.d = zmm2.d f* 0f
                            zmm11.d = zmm11.d f* zmm9.d
                            zmm14.d = zmm14.d f- zmm1.d
                            zmm2.d = zmm2.d f* zmm10.d
                            arg4.d = zmm13.d f* zmm13.d
                            zmm11.d = zmm11.d f- zmm2.d
                            zmm0.d = zmm14.d f* zmm14.d
                            arg4.d = arg4.d f+ zmm0.d
                            zmm1.d = zmm11.d f* zmm11.d
                            arg4.d = arg4.d f+ zmm1.d
                            int32_t var_218_2
                            
                            if (not(arg4.d f!= 1f))
                                var_218_2 = zmm13.d
                                int32_t var_214_3 = zmm14.d
                                var_210_1.d = zmm11.d
                            else if (arg4.d f>= 9.99999994e-09f)
                                zmm5_1 = _mm_rsqrt_ss(arg4.d, arg4.d)
                                arg4.d = arg4.d f* 0.5f
                                zmm0.d = zmm5_1.d f* zmm5_1.d
                                zmm1.d = arg4.d f* zmm0.d
                                zmm2.d = 0.5f f- zmm1.d
                                zmm0.d = zmm5_1.d f* zmm2.d
                                zmm5_1.d = zmm5_1.d f+ zmm0.d
                                zmm1.d = zmm5_1.d f* zmm5_1.d
                                arg4.d = arg4.d f* zmm1.d
                                zmm4_1.d = 0.5f f- arg4.d
                                zmm0.d = zmm5_1.d f* zmm4_1.d
                                zmm5_1.d = zmm5_1.d f+ zmm0.d
                                int32_t var_1f0_2 = zmm5_1.d
                                zmm0.d = zmm5_1.d f* zmm13.d
                                zmm1.d = zmm5_1.d f* zmm14.d
                                zmm5_1.d = zmm5_1.d f* zmm11.d
                                zmm13 = zmm0
                                var_218_2 = zmm0.d
                                zmm14 = zmm1
                                int32_t var_214_5 = zmm1.d
                                var_210_1.d = zmm5_1.d
                                zmm11 = zmm5_1
                            else
                                zmm13 = data_143dbb1f8
                                zmm14 = zmm4_1
                                zmm11 = data_143dbb200
                                var_218_2 = zmm13.d
                                var_210_1.d = zmm11.d
                                int32_t var_214_4 = zmm4_1.d
                            
                            arg4 = var_268_1
                            zmm9 = var_278_1
                            zmm2.d = arg4.d f* var_258_1
                            zmm1.d = zmm9.d f* var_270_1
                            zmm6[0] = zmm6[0] f* zmm14.d
                            zmm12[0] = zmm12[0] f* zmm13.d
                            zmm15.d = zmm15.d f* zmm11.d
                            zmm12[0] = zmm12[0] f+ zmm6[0]
                            zmm6 = var_218_2.o
                            float temp0_13[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x93)
                            zmm12[0] = zmm12[0] f+ zmm15.d
                            zmm15 = var_244_1
                            zmm0.d = zmm15.d f* var_248_1
                            temp0_13[0] = zmm12[0]
                            zmm2.d = zmm2.d f+ zmm0.d
                            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
                            var_218_2.o = temp0_14
                            zmm2.d = zmm2.d f+ zmm1.d
                            zmm2.d = zmm2.d f- var_264_3
                            
                            if (not(zmm2.d f<= 0f))
                                r15 = zx.q(r15.b)
                                zmm2.d = arg4.d f* zmm13.d
                                zmm0.d = zmm15.d f* zmm14.d
                                zmm1.d = zmm9.d f* zmm11.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1.d
                                zmm2.d = zmm2.d f- zmm12[0]
                                
                                if (zmm2.d f> 0f)
                                    r15 = 0
                            
                            int64_t rdi_3 = sx.q(*(arg1 + 0xc0))
                            int32_t rax_26 = (rdi_3 + 1).d
                            *(arg1 + 0xc0) = rax_26
                            
                            if (rax_26 s> *(arg1 + 0xc4))
                                sub_1405c4e40(arg1 + 0xb8)
                            
                            int64_t rax_27 = *(arg1 + 0xb8)
                            zmm12 = 0x7fffffff
                            zmm14 = var_268_1
                            zmm11 = 0x3f000000
                            int64_t rcx_12 = rdi_3 << 5
                            *(rcx_12 + rax_27) = var_1b8.o
                            *(rcx_12 + rax_27 + 0x10) = temp0_14
                            zmm6 = 0x322bcc77
    
    var_190_1:8.d &= not.d(var_1a0:0xc.d)
    sub_14059bdd0(&var_1a0:8)
    r11_2 = var_240

uint64_t* result

if (r15.b != 0)
    result_1 = arg2
label_141dc6e70:
    *result_1 = *(arg3 + 0xc)
    result_1[1].d = *(arg3 + 0x14)
    result = result_1
else
    void* var_1d8 = nullptr
    int32_t var_1d0_1 = 0
    
    if (sub_140d3e110(arg1 + 0xc8) != 0)
        int64_t* rcx_15 = *(arg1 + 0xd0)
        (*(*rcx_15 + 0x10))(rcx_15, arg3, *(arg3 + 0x38), &var_1d8)
    
    if (*(arg1 + 0xc0) != 0)
        zmm13 = var_1f8_1
        
        if (not(zmm13.d f!= 1f))
            zmm0 = zmm14
            zmm6 = zmm15
        else if (zmm13.d f>= zmm6[0])
            zmm5_1.d = zmm11.d
            zmm4_1 = _mm_rsqrt_ss(zmm13.d, zmm13.d)
            arg4.d = zmm13.d f* zmm5_1.d
            zmm0.d = zmm4_1.d f* zmm4_1.d
            zmm1.d = arg4.d f* zmm0.d
            zmm2.d = zmm5_1.d f- zmm1.d
            zmm0.d = zmm4_1.d f* zmm2.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            zmm6 = zmm4_1
            zmm1.d = zmm4_1.d f* zmm4_1.d
            arg4.d = arg4.d f* zmm1.d
            zmm5_1.d = zmm5_1.d f- arg4.d
            zmm6[0] = zmm6[0] f* zmm5_1.d
            zmm6[0] = zmm6[0] f+ zmm4_1.d
            zmm6[0] = zmm6[0] f* zmm15.d
            zmm0.d = zmm6.d f* zmm14.d
        else
            zmm0 = data_143dbb1f8
            zmm6 = data_143dbb1fc
        
        zmm1 = 0xbf800000
        
        if (not(zmm0.d f< -1f))
            zmm1 = _mm_min_ss(zmm0.d, 0x3f800000)
        
        zmm9 = acosf(zmm1.d)
        
        if (not(zmm6[0] >= 0f))
            zmm9 ^= data_142d3f780
        
        float zmm0_1[0x4] = zx.o(0)
        uint64_t var_230_1 = data_143dbb1f8.q
        zmm1.d = zmm9.d f- 0.401425719f
        float var_270_2 = 0f
        int32_t var_228_1 = data_143dbb200
        zmm0_1[0] = zmm1.d
        float zmm0_2[0x4]
        float zmm9_1[0x4]
        zmm0_2, zmm9_1 = __libm_sse2_sincosf_(zmm0_1)
        float var_144_1 = zmm0_2[0]
        float temp0_17[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
        zmm0_2 = zx.o(0)
        float var_148_1 = temp0_17[0]
        zmm9_1[0] = zmm9_1[0] + 0.401425719f
        int32_t var_140 = 0
        zmm0_2[0] = zmm9_1[0]
        float zmm0_3[0x4]
        float zmm9_2[0x4]
        zmm0_3, zmm9_2 = __libm_sse2_sincosf_(zmm0_2)
        float var_138_1 = zmm0_3[0]
        float temp0_18[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
        zmm0_3 = zx.o(0)
        float var_13c_1 = temp0_18[0]
        zmm9_2[0] = zmm9_2[0] - 0.69813168f
        int32_t var_134_1 = 0
        zmm0_3[0] = zmm9_2[0]
        float zmm0_4[0x4]
        float zmm9_3[0x4]
        zmm0_4, zmm9_3 = __libm_sse2_sincosf_(zmm0_3)
        float var_12c_1 = zmm0_4[0]
        float temp0_19[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
        zmm0_4 = zx.o(0)
        float var_130_1 = temp0_19[0]
        zmm9_3[0] = zmm9_3[0] + 0.69813168f
        int32_t var_128_1 = 0
        zmm0_4[0] = zmm9_3[0]
        float zmm0_5[0x4]
        float zmm9_4[0x4]
        zmm0_5, zmm9_4 = __libm_sse2_sincosf_(zmm0_4)
        float var_120_1 = zmm0_5[0]
        float temp0_20[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 1)
        zmm0_5 = zx.o(0)
        float var_124_1 = temp0_20[0]
        zmm9_4[0] = zmm9_4[0] - 0.959931076f
        int32_t var_11c_1 = 0
        zmm0_5[0] = zmm9_4[0]
        float zmm0_6[0x4]
        float zmm9_5[0x4]
        zmm0_6, zmm9_5 = __libm_sse2_sincosf_(zmm0_5)
        float var_114_1 = zmm0_6[0]
        float temp0_21[0x4] = _mm_shuffle_ps(zmm0_6, zmm0_6, 1)
        zmm0_6 = zx.o(0)
        float var_118_1 = temp0_21[0]
        zmm9_5[0] = zmm9_5[0] + 0.959931076f
        int32_t var_110_1 = 0
        zmm0_6[0] = zmm9_5[0]
        float zmm0_7[0x4]
        float zmm9_6[0x4]
        zmm0_7, zmm9_6 = __libm_sse2_sincosf_(zmm0_6)
        float var_108_1 = zmm0_7[0]
        float temp0_22[0x4] = _mm_shuffle_ps(zmm0_7, zmm0_7, 1)
        zmm0_7 = zx.o(0)
        float var_10c_1 = temp0_22[0]
        zmm9_6[0] = zmm9_6[0] - 1.48352981f
        int32_t var_104_1 = 0
        zmm0_7[0] = zmm9_6[0]
        float zmm0_8[0x4]
        float zmm9_7
        zmm0_8, zmm9_7 = __libm_sse2_sincosf_(zmm0_7)
        float var_fc_1 = zmm0_8[0]
        float temp0_23[0x4] = _mm_shuffle_ps(zmm0_8, zmm0_8, 1)
        zmm0_8 = zx.o(0)
        float var_100_1 = temp0_23[0]
        int32_t var_f8_1 = 0
        zmm0_8[0] = zmm9_7 + 1.48352981f
        int32_t zmm7_1
        zmm0, zmm7_1, zmm8, zmm12, zmm13, zmm14 = __libm_sse2_sincosf_(zmm0_8)
        uint128_t* rdi_4 = &var_140
        int32_t rdx_16 = var_1d0_1
        int64_t i_1 = 8
        int32_t var_f4_1 = _mm_shuffle_ps(zmm0, zmm0, 1).d
        int32_t var_f0_1 = zmm0.d
        int32_t var_ec_1 = 0
        int64_t i
        
        do
            zmm0 = var_1c0_1
            uint128_t zmm2_1 = *rdi_4
            zmm9.d = zmm0.d f* *(rdi_4 - 8)
            zmm10.d = zmm0.d f* *(rdi_4 - 4)
            uint128_t zmm4_2
            zmm4_2.d = zmm2_1.d f* zmm0.d
            zmm1.d = zmm2_1.d f* var_1f8_1
            uint128_t zmm3
            zmm3.d = zmm9.d f* zmm9.d
            zmm1.d = zmm1.d f* zmm2_1.d
            zmm0.d = zmm10.d f* zmm10.d
            zmm2_1.d = zmm9.d f* zmm14.d
            zmm3.d = zmm3.d f+ zmm0.d
            int32_t var_1b0_2 = zmm4_2.d
            zmm4_2.d = zmm4_2.d f* var_278_1
            zmm0.d = zmm10.d f* var_244_1
            zmm3.d = zmm3.d f+ zmm1.d
            var_1b8 = zmm9.d
            int32_t var_1b4_1 = zmm10.d
            zmm2_1.d = zmm2_1.d f+ zmm0.d
            zmm2_1.d = zmm2_1.d f+ zmm4_2.d
            zmm3.d = zmm3.d f* zmm2_1.d
            
            if (not(zmm3.d f<= zmm13.d))
                uint128_t zmm5_2
                
                if (rdx_16 s<= 0)
                label_141dc6d70:
                    zmm7_1, zmm8, zmm12, zmm13, zmm14 = sub_141dbacf0(&var_240, arg1 + 0xb8, 
                        &data_143dbb1f8, &var_1b8, *(arg1 + 0xc0))
                    zmm5_2 = var_240.d
                    zmm4_2 = var_240:4.d
                    zmm6 = zmm5_2
                    int32_t var_238
                    zmm3 = var_238
                    rdx_16 = var_1d0_1
                    zmm6[0] = zmm6[0] f* zmm5_2.d
                    zmm0.d = zmm4_2.d f* zmm4_2.d
                    zmm1.d = zmm3.d f* zmm3.d
                    zmm6[0] = zmm6[0] f+ zmm0.d
                    zmm2_1.d = zmm14.d f* zmm5_2.d
                    zmm0.d = var_244_1.d f* zmm4_2.d
                    zmm6[0] = zmm6[0] f+ zmm1.d
                    zmm1.d = var_278_1.d f* zmm3.d
                    zmm2_1.d = zmm2_1.d f+ zmm0.d
                    zmm2_1.d = zmm2_1.d f+ zmm1.d
                    zmm6[0] = zmm6[0] f* zmm2_1.d
                    
                    if (not(zmm6[0] f<= zmm13.d))
                        zmm13 = zmm6
                        var_230_1 = var_240
                        var_270_2 = zmm6[0]
                        var_228_1 = var_238
                else
                    int32_t rcx_16 = 0
                    zmm11 = arg3[2].d
                    void* rax_34 = var_1d8 + 4
                    zmm13 = *arg3
                    zmm14 = *(arg3 + 4)
                    
                    while (true)
                        zmm5_2 = *(rax_34 - 4)
                        zmm6 = *rax_34
                        zmm2_1.d = (*(rax_34 + 8)).d f- zmm5_2.d
                        zmm5_2.d = zmm5_2.d f- zmm13.d
                        zmm4_2.d = (*(rax_34 + 0xc)).d f- zmm6[0]
                        zmm6[0] = zmm6[0] f- zmm14.d
                        zmm3.d = zmm2_1.d f* zmm10.d
                        zmm0.d = zmm4_2.d f* zmm9.d
                        zmm3.d = zmm3.d f- zmm0.d
                        
                        if (not(_mm_and_ps(zmm3, zmm12).d f< 9.99999975e-05f))
                            zmm2_1.d = zmm2_1.d f* zmm6[0]
                            zmm1.d = zmm8.d f/ zmm3.d
                            zmm4_2.d = zmm4_2.d f* zmm5_2.d
                            zmm3.d = zmm6.d f* zmm9.d
                            zmm0.d = zmm5_2.d f* zmm10.d
                            zmm2_1.d = zmm2_1.d f- zmm4_2.d
                            zmm3.d = zmm3.d f- zmm0.d
                            zmm2_1.d = zmm2_1.d f* zmm1.d
                            zmm3.d = zmm3.d f* zmm1.d
                            
                            if (not(zmm3.d f< zmm7_1) && not(zmm3.d f> zmm8.d)
                                    && not(zmm2_1.d f< zmm7_1) && not(zmm2_1.d f> zmm8.d))
                                zmm1.d = (*(rax_34 + 0x10)).d f- *(rax_34 + 4)
                                zmm1.d = zmm1.d f* zmm2_1.d
                                zmm1.d = zmm1.d f+ *(rax_34 + 4)
                                zmm0.d = (*(arg3 + 8)).d f- zmm1.d
                                
                                if (_mm_and_ps(zmm0, zmm12).d f<= zmm11.d)
                                    zmm13 = var_270_2
                                    zmm14 = var_268_1
                                    break
                        
                        rcx_16 += 1
                        rax_34 += 0x18
                        
                        if (rcx_16 s>= rdx_16)
                            goto label_141dc6d70
            
            rdi_4 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)
        zmm14 = var_230_1.d
        zmm15 = var_230_1:4.d
        zmm9 = var_228_1
    
    zmm8.d = zmm8.d f/ var_1f4
    void* rcx_18 = var_1d8
    zmm0.d = zmm8.d f* zmm14.d
    zmm1.d = zmm8.d f* zmm15.d
    zmm8.d = zmm8.d f* zmm9.d
    *arg2 = zmm0.d
    *(arg2 + 4) = zmm1.d
    arg2[1].d = zmm8.d
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    result = arg2

__security_check_cookie(rax_1 ^ &var_2a8)
return result
