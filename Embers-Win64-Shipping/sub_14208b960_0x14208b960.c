// 函数: sub_14208b960
// 地址: 0x14208b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* r12 = arg1
uint64_t* r15 = arg5
uint64_t* var_1f0 = r15
r15[1].d = 0

if (*(r15 + 0xc) s<= 0xffffffff)
    sub_140638c50(r15, 0)

int64_t zmm2 = *arg3
int128_t zmm1 = *arg4
int64_t var_218 = zmm2
float var_220

if (zmm2.d f> zmm1.d)
    var_220 = zmm1.d
else
    var_220 = zmm2.d

float zmm6[0x4] = zmm2:4.d
int128_t zmm0 = *(arg4 + 4)
float var_228 = zmm6[0]
float var_224

if (zmm6[0] f> zmm0.d)
    var_224 = zmm0.d
else
    var_224 = zmm6[0]

if (not(zmm2.d f>= zmm1.d))
    var_218.d = zmm1.d

if (not(zmm6[0] f>= zmm0.d))
    var_228 = zmm0.d

int64_t rax_2 = *r12
int128_t var_138
__builtin_memcpy(&var_138, 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x"
"00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00"
"00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00"
"80\xbf\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf", 
    0x60)
int64_t rax_3 = (*(rax_2 + 0x150))(r12, data_143296ad0)
int32_t var_198 = 5
char var_140 = 0
void* var_190
sub_1405ab0f0(&var_190, rax_3, arg2)
char var_140_1 = 1
uint32_t result = sub_1406277a0(&var_198)
int64_t** var_188
char result_1
int64_t var_160

if (result_1 == 0)
    zmm6 = 0x3f000000
    int64_t* var_168
    int64_t* rdi_1 = var_168
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    uint128_t zmm12
    uint128_t var_98_1 = zmm12
    int128_t zmm13
    int128_t var_a8_1 = zmm13
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    uint128_t zmm15
    uint128_t var_c8_1 = zmm15
    
    do
        int32_t var_1b8
        (*(*rdi_1 + 0x548))(rdi_1, &var_1b8, zx.q(arg6), 0, var_228, var_220, var_218)
        int32_t var_1b0
        int128_t zmm2_1 = var_1b0
        void* rbx_1 = &var_138:4
        int32_t var_1b4
        float zmm1_1[0x4] = var_1b4
        uint128_t zmm0_1 = var_1b8
        zmm14 = zmm1_1
        int32_t var_1a4
        zmm10 = var_1a4
        int32_t var_1a8
        zmm11 = var_1a8
        zmm13.d = zmm2_1.d f+ zmm10.d
        int32_t var_1ac
        zmm12 = var_1ac
        zmm14[0] = zmm14[0] + zmm11[0]
        zmm9 = data_143dbb1f0.d
        zmm15.d = zmm0_1.d f+ zmm12.d
        zmm8 = data_143dbb1f0:4.d
        zmm10.d = zmm10.d f- zmm2_1.d
        zmm11[0] = zmm11[0] - zmm1_1[0]
        zmm7 = zmm8
        zmm12.d = zmm12.d f- zmm0_1.d
        zmm13.d = zmm13.d f* zmm6[0]
        int64_t* rsi
        rsi.b = 0
        int64_t i_1 = 8
        zmm14[0] = zmm14[0] * zmm6[0]
        zmm10.d = zmm10.d f* zmm6[0]
        zmm11[0] = zmm11[0] * zmm6[0]
        zmm12.d = zmm12.d f* zmm6[0]
        zmm15.d = zmm15.d f* zmm6[0]
        char rax_5
        int64_t i
        
        do
            zmm2_1.d = zmm10.d f* *(rbx_1 + 4)
            zmm11[0] = zmm11[0] f* *rbx_1
            zmm0_1.d = zmm12.d f* *(rbx_1 - 4)
            zmm2_1.d = zmm2_1.d f+ zmm13.d
            zmm11[0] = zmm11[0] + zmm14[0]
            zmm0_1.d = zmm0_1.d f+ zmm15.d
            int32_t var_1f8_1 = zmm2_1.d
            float var_1fc_1 = zmm11[0]
            int32_t var_200_1 = zmm0_1.d
            rax_5, zmm6 = sub_142099320(r12)
            int32_t var_210
            int32_t var_20c
            
            if (rax_5 == 0)
                zmm1_1 = zx.o(0)
                int32_t var_208_1 = 0
                zmm0_1 = zx.o(0)
                var_210 = 0
                var_20c = 0
            else
                void* rcx_6 = r12[0x4e]
                uint64_t var_1d8 = var_200_1.q
                int64_t var_1d0
                var_1d0.d = var_1f8_1
                sub_14241d460(rcx_6, &var_210, &var_1d8)
                zmm0_1 = var_20c
                zmm1_1 = var_210
            
            if (rsi.b == 0)
                zmm9 = zmm1_1
                rsi.b = 1
                zmm6 = zmm1_1
                zmm7 = zmm0_1
                zmm8 = zmm0_1
            else
                bool cond:3_1 = zmm9[0] >= zmm1_1[0]
                zmm6 = _mm_min_ss(zmm6[0], zmm1_1[0])
                zmm7 = _mm_min_ss(zmm7[0], zmm0_1.d)
                
                if (not(cond:3_1))
                    zmm9 = zmm1_1
                
                if (not(zmm8.d f>= zmm0_1.d))
                    zmm8 = zmm0_1
            
            rbx_1 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (arg7 != i_1.b)
            zmm0_1 = zx.o(var_218)
            zmm2_1 = var_224
            zmm1_1 = var_228
            
            if (zmm6[0] <= var_220 || zmm6[0] f>= zmm0_1.d || zmm7[0] f<= zmm2_1.d
                    || zmm7[0] >= zmm1_1[0])
                rax_5 = 0
            else
                rax_5 = 1
            
            if (rax_5 == 0)
                rax_5 = 0
            else
                if (zmm9[0] <= var_220 || zmm9[0] f>= zmm0_1.d || zmm8.d f<= zmm2_1.d
                        || zmm8.d f>= zmm1_1[0])
                    rax_5 = 0
                else
                    rax_5 = 1
                
                rax_5 = rax_5 == 0 ? 0 : 1
            
            if (rax_5 != 0)
                goto label_14208bd3b
        else if (not(var_220.d f> zmm9[0]) && not(zmm6[0] f> var_218.d) && not(var_224.d f> zmm8.d)
            && not(zmm7[0] > var_228))
        label_14208bd3b:
            int64_t rbx_2 = sx.q(r15[1].d)
            int32_t rax_7 = (rbx_2 + 1).d
            r15[1].d = rax_7
            
            if (rax_7 s> *(r15 + 0xc))
                sub_1405a4d70(r15)
            
            *(*r15 + (rbx_2 << 3)) = rdi_1
        
        int32_t var_158
        int32_t r8_3 = var_158
        int32_t var_180
        int32_t rdx_4 = var_180
        void* r13_1 = var_190
        int32_t var_178
        int32_t r14_2 = var_178 + 1
        
        if (r14_2 s>= r8_3 + rdx_4)
        label_14208bf08:
            result.b = 1
            rdi_1 = nullptr
            result_1 = 1
        else
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_4)
                    rdi_1 = *(var_160 + (sx.q(r14_2 - rdx_4) << 3))
                else
                    rdi_1 = *(var_188 + r12_1)
                
                int32_t var_170 = var_170 + 1
                
                if (rdi_1 != 0)
                    void* rax_13 = sub_141dc9840(rdi_1)
                    
                    if (rax_13 != 0)
                        void* const rax_20
                        
                        if ((var_198.b & 1) != 0)
                            int32_t rax_14 = *(rdi_1 + 0xc)
                            
                            if (rax_14 s>= data_143e1d9b4)
                                rax_20 = nullptr
                            else
                                int16_t temp1_1
                                int32_t temp2_1
                                temp1_1:temp2_1 = sx.q(rax_14)
                                uint32_t rdx_6 = zx.d(temp1_1)
                                int32_t rax_16 = temp2_1 + rdx_6
                                rax_20 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_16.w) - rdx_6) * 0x18
                        
                        if ((var_198.b & 1) == 0 || ((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_16 = var_198
                            
                            if (((rcx_16 u>> 1).b & 1) == 0)
                                goto label_14208be32
                            
                            uint64_t rax_24 = sub_1405949a0()
                            
                            if (rax_24.b != 0)
                                rcx_16 = var_198
                            label_14208be32:
                                
                                if (((rcx_16 u>> 2).b & 1) == 0)
                                label_14208beae:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_13) == r13_1)
                                        void* rax_26
                                        int64_t rax_27
                                        void* rdx_8
                                        
                                        if (rax_13 != *(r13_1 + 0x30))
                                            rax_26 = sub_1425bd0d0()
                                            rdx_8 = rdi_1[2]
                                            rax_27 = sx.q(*(rax_26 + 0x38))
                                        
                                        if (rax_13 == *(r13_1 + 0x30) || rax_27.d s> *(rdx_8 + 0x38)
                                                || *(*(rdx_8 + 0x30) + (rax_27 << 3))
                                                != rax_26 + 0x30)
                                            result = zx.d(result_1)
                                            var_178 = r14_2
                                            break
                                else
                                    if ((*(rax_13 + 0x1f4) & 0x20) == 0
                                            || (*(rax_13 + 0x1f6) & 8) != 0)
                                        rax_24 = zx.q(*(rax_13 + 0x1f5))
                                    
                                    if (((*(rax_13 + 0x1f4) & 0x20) != 0
                                            && (*(rax_13 + 0x1f6) & 8) == 0) || (rax_24.b & 0x40) != 0
                                            || rax_24.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_18 = *(rax_13 + 0xb8)
                                    rsi = *(rax_13 + 0x248)
                                    
                                    if (rcx_18 != 0)
                                        rax_24 = sub_1424359b0(rcx_18)
                                    
                                    if (rcx_18 == 0 || rax_24 == 0 || rsi == rax_24)
                                        rcx_18.b = 1
                                    else
                                        rcx_18.b = 0
                                    
                                    if (rsi == 0 || *rsi == 2)
                                        rax_24.b = 1
                                    else
                                        rax_24.b = 0
                                    
                                    if (rcx_18.b != 0 || rax_24.b != 0)
                                        rax_24.b = 1
                                    
                                    if (r15.b != 0 && rax_24.b != 0)
                                        goto label_14208beae
                    
                    r8_3 = var_158
                    rdx_4 = var_180
                
                r14_2 += 1
                r12_1 += 8
                
                if (r14_2 s>= r8_3 + rdx_4)
                    goto label_14208bf08
        
        zmm6 = 0x3f000000
        r15 = var_1f0
        r12 = arg1
        int64_t* var_168_1 = rdi_1
    while (result.b == 0)

if (var_140_1 != 0)
    char var_140_2 = 0
    int64_t var_148
    result = sub_142441560(var_190, var_148)
    
    if (var_160 != 0)
        result = sub_140a74f90(var_160)
    
    if (var_188 != 0)
        result = sub_140a74f90(var_188)

__security_check_cookie(rax_1 ^ &var_248)
return result
