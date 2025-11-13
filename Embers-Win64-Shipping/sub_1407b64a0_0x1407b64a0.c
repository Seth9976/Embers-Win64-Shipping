// 函数: sub_1407b64a0
// 地址: 0x1407b64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t arg_18 = arg3
int32_t* arg_10 = arg2
void* rsi_1 = arg1
uint64_t var_3f8 = 0
void* rax_1 = sub_140d3c6e0(arg2)
void* const r15_1 = rax_1
void* rax_2
int64_t rax_3
void* rdx

if (rax_1 != 0)
    rax_2 = sub_142591550()
    rdx = *(r15_1 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

uint64_t rcx_2

if (rax_1 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rcx_2 = var_3f8
    r15_1 = nullptr
else
    rcx_2 = *(r15_1 + 0x430)
    var_3f8 = rcx_2

uint64_t rax

if (rcx_2 == 0)
    rax = sub_140d3c6e0(&arg_10[0x18])
    var_3f8 = rax
    rcx_2 = rax
    
    if (rax != 0)
        goto label_1407b656d
    
    return 

label_1407b656d:
uint32_t var_58_1[0x4] = arg4
float var_68_1[0x4] = arg5
float var_78_1[0x4] = arg6
float zmm10[0x4]
float var_98_1[0x4] = zmm10
int64_t* var_2b8 = &var_3f8
float zmm11[0x4]
float var_a8_1[0x4] = zmm11
int32_t* var_2b0_1 = &arg_18
float zmm12[0x4]
float var_b8_1[0x4] = zmm12
int64_t var_3c0
int64_t* var_2a8_1 = &var_3c0
float zmm13[0x4]
float var_c8_1[0x4] = zmm13
int64_t var_3d0
int64_t* var_2a0_1 = &var_3d0
float zmm14[0x4]
float var_d8_1[0x4] = zmm14
int32_t** var_290_1 = &arg_10
float zmm15[0x4]
float var_e8_1[0x4] = zmm15
__builtin_memset(&var_3d0, 0, 0x20)
void* var_298_1 = rsi_1
int512_t zmm6
int512_t zmm7
int512_t zmm8
int512_t zmm9
void* var_3f0
uint32_t var_328[0x4]
void* rcx_28
float zmm1[0x4]
float zmm5[0x4]

if (r15_1 == 0)
    int32_t rdx_16 = *(rsi_1 + 0x10)
    int32_t rbx_2 = 0
    int32_t var_3e8_1 = 0
    void* rdi_2 = nullptr
    var_3f0 = nullptr
    int32_t var_3e4_1 = 0
    
    if (rdx_16 s> 0)
        sub_1405a5220(&var_3f0, rdx_16)
        rcx_2 = var_3f8
        rbx_2 = var_3e8_1
        rdi_2 = var_3f0
    
    int64_t* r13_3 = rcx_2 + 0x1b8
    int32_t r12_3 = 0
    
    if (r13_3[1].d s> 0)
        int64_t r15_2 = 0
        int64_t rsi_2 = 0
        
        while (true)
            uint32_t (* rax_12)[0x4] = *r13_3
            arg4 = *(rax_12 + rsi_2)
            zmm13 = *(rax_12 + rsi_2 + 0x10)
            zmm14 = *(rax_12 + rsi_2 + 0x20)
            uint32_t var_258_1[0x4] = arg4
            float var_248_1[0x4] = zmm13
            float var_238_1[0x4] = zmm14
            int64_t rcx_31 = sx.q(*(*(rcx_2 + 0x1a8) + r15_2 + 8))
            int64_t rax_13
            
            if (rcx_31.d s< 0 || rcx_31.d s>= rbx_2)
                rax_13.b = 0
            else
                rax_13.b = 1
            
            if (rax_13.b != 0)
                void* rcx_34 = rcx_31 * 0x30 + rdi_2
                zmm5 = *rcx_34
                arg5 = *(rcx_34 + 0x20)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, arg5), data_143ce07b0, 1)) == 0)
                    float temp0_303[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), _mm_shuffle_ps(arg4, arg4, 0x1b))
                    float temp0_304[0x4] = _mm_mul_ps(arg5, zmm13)
                    float temp0_305[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                    float temp0_306[0x4] = __mulps_xmmps_memps(temp0_303, data_143ce0330)
                    float temp0_307[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm14 = _mm_mul_ps(zmm14, arg5)
                    float temp0_310[0x4] = _mm_add_ps(temp0_306, _mm_mul_ps(temp0_307, arg4))
                    float temp0_312[0x4] = _mm_mul_ps(temp0_305, _mm_shuffle_ps(arg4, arg4, 0x4e))
                    float temp0_315[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), 
                        _mm_shuffle_ps(arg4, arg4, 0xb1))
                    float temp0_316[0x4] = __mulps_xmmps_memps(temp0_312, data_143ce0320)
                    float temp0_317[0x4] = __mulps_xmmps_memps(temp0_315, data_143ce0310)
                    float temp0_318[0x4] = _mm_add_ps(temp0_310, temp0_316)
                    float temp0_319[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    float temp0_320[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    arg4 = _mm_add_ps(temp0_318, temp0_317)
                    float temp0_326[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0xd2), temp0_320), 
                        _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0xc9), temp0_319))
                    float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
                    float temp0_328[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)
                    float temp0_329[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
                    float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_320)
                    float temp0_331[0x4] = _mm_mul_ps(temp0_329, temp0_319)
                    float temp0_332[0x4] = _mm_mul_ps(temp0_327, temp0_307)
                    zmm13 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_330, temp0_331), 
                            _mm_add_ps(temp0_332, temp0_304)), 
                        *(rcx_34 + 0x10))
                else
                    zmm10 = data_143ce0340
                    float temp0_172[0x4] = _mm_add_ps(zmm5, zmm5)
                    arg6 = *(rcx_34 + 0x10)
                    float temp0_173[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
                    float temp0_174[0x4] = _mm_shuffle_ps(arg5, arg5, 0xc9)
                    float temp0_175[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    float temp0_176[0x4] = _mm_mul_ps(zmm5, temp0_172)
                    float temp0_178[0x4] =
                        _mm_mul_ps(temp0_173, _mm_shuffle_ps(temp0_172, temp0_172, 0x29))
                    float temp0_179[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x12)
                    float temp0_180[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0x1a)
                    float temp0_181[0x4] = _mm_mul_ps(temp0_175, temp0_179)
                    float temp0_183[0x4] =
                        _mm_add_ps(temp0_180, _mm_shuffle_ps(temp0_176, temp0_176, 1))
                    _mm_mul_ps(arg5, zmm14)
                    float temp0_185[0x4] = _mm_add_ps(temp0_181, temp0_178)
                    float temp0_186[0x4] = _mm_sub_ps(temp0_178, temp0_181)
                    float temp0_187[0x4] = _mm_sub_ps(zmm10, temp0_183)
                    float temp0_188[0x4] = _mm_mul_ps(temp0_185, arg5)
                    float temp0_189[0x4] = _mm_mul_ps(temp0_174, temp0_186)
                    float temp0_190[0x4] = _mm_mul_ps(temp0_187, arg5)
                    float temp0_191[0x4] = _mm_add_ps(arg4, arg4)
                    zmm1 = __andps_xmmxud_memxud(temp0_190, data_143ce0350)
                    float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, zmm1, 0x32)
                    float temp0_194[0x4] = _mm_mul_ps(temp0_191, arg4)
                    float temp0_196[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1, 0), temp0_193, 0x82)
                    float temp0_197[0x4] = _mm_shuffle_ps(temp0_188, zmm1, 0x31)
                    float temp0_199[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, zmm1, 0x10), temp0_197, 0x88)
                    float temp0_201[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, temp0_189, 0x12), zmm1, 0xe8)
                    float temp0_202[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0x29)
                    zmm10[0].q = arg6 u>> 0x40
                    float temp0_203[0x4] = _mm_shuffle_ps(arg6, zmm10, 0xc4)
                    float temp0_205[0x4] = _mm_mul_ps(temp0_202, _mm_shuffle_ps(arg4, arg4, 4))
                    float temp0_206[0x4] = _mm_shuffle_ps(temp0_194, temp0_194, 0x1a)
                    arg4 = _mm_shuffle_ps(arg4, arg4, 0xff)
                    float temp0_209[0x4] =
                        _mm_add_ps(temp0_206, _mm_shuffle_ps(temp0_194, temp0_194, 1))
                    float temp0_211[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_191, temp0_191, 0x12), arg4)
                    float temp0_212[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float var_188_1[0x4] = temp0_196
                    float var_178_1[0x4] = temp0_199
                    float var_168_1[0x4] = temp0_201
                    arg4 = _mm_add_ps(temp0_211, temp0_205)
                    float var_158_1[0x4] = temp0_203
                    float temp0_214[0x4] = _mm_sub_ps(temp0_205, temp0_211)
                    arg4 = _mm_mul_ps(arg4, zmm14)
                    float temp0_216[0x4] = _mm_mul_ps(temp0_212, temp0_214)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_209), zmm14), 
                        data_143ce0350)
                    float temp0_222[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg4, zmm1, 0), 
                        _mm_shuffle_ps(temp0_216, zmm1, 0x32), 0x82)
                    float var_148_1[0x4] = temp0_222
                    float temp0_223[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0x55)
                    float temp0_224[0x4] = _mm_shuffle_ps(arg4, zmm1, 0x31)
                    float temp0_226[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, zmm1, 0x10), temp0_224, 0x88)
                    float temp0_227[0x4] = _mm_mul_ps(temp0_223, temp0_199)
                    zmm10[0].q = zmm13 u>> 0x40
                    float temp0_228[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
                    float temp0_230[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0), temp0_196)
                    arg4 = _mm_shuffle_ps(_mm_shuffle_ps(arg4, temp0_216, 0x12), zmm1, 0xe8)
                    float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xaa)
                    float temp0_234[0x4] = _mm_add_ps(temp0_227, temp0_230)
                    float temp0_236[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_203)
                    float temp0_237[0x4] = _mm_mul_ps(temp0_233, temp0_201)
                    float temp0_239[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0), temp0_196)
                    float temp0_240[0x4] = _mm_add_ps(temp0_234, temp0_237)
                    float var_138_1[0x4] = temp0_226
                    uint32_t var_128_1[0x4] = arg4
                    float temp0_242[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xaa), temp0_201)
                    float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_236)
                    float var_118_1[0x4] = temp0_228
                    float temp0_245[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0x55), temp0_199)
                    float var_368[0x4] = temp0_243
                    float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0x55), temp0_199)
                    float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
                    float temp0_250[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xff), temp0_203)
                    float temp0_252[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_196)
                    float temp0_253[0x4] = _mm_add_ps(temp0_248, temp0_242)
                    float temp0_255[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xaa), temp0_201)
                    float temp0_256[0x4] = _mm_add_ps(temp0_247, temp0_252)
                    arg4 = _mm_shuffle_ps(arg4, arg4, 0xff)
                    float temp0_258[0x4] = _mm_add_ps(temp0_253, temp0_250)
                    arg4 = _mm_mul_ps(arg4, temp0_203)
                    float temp0_260[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0)
                    float temp0_261[0x4] = _mm_add_ps(temp0_256, temp0_255)
                    float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_196)
                    int96_t var_358_1 = temp0_258[0].12
                    float temp0_263[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xaa)
                    float temp0_265[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0x55), temp0_199)
                    float temp0_266[0x4] = _mm_add_ps(temp0_261, arg4)
                    float temp0_267[0x4] = _mm_mul_ps(temp0_263, temp0_201)
                    float temp0_268[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xff)
                    float temp0_269[0x4] = _mm_add_ps(temp0_265, temp0_262)
                    float temp0_270[0x4] = _mm_mul_ps(temp0_268, temp0_203)
                    int96_t var_348_1 = temp0_266[0].12
                    int96_t var_338_1 =
                        _mm_add_ps(_mm_add_ps(temp0_269, temp0_267), temp0_270)[0].12
                    zmm10, zmm12, zmm15 = sub_1407740e0(&var_368, 0x322bcc77)
                    zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), data_143ce0390 ^ zmm10)
                        ^ data_143ce0390
                    float zmm2_2[0x4] = var_368[0]
                    float zmm1_2 = var_368[1]
                    uint32_t zmm0_2[0x4] = var_368[2]
                    zmm2_2[0] = zmm2_2[0] * zmm15[0]
                    zmm1_2 = zmm1_2 * zmm15[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                    var_368[0] = zmm2_2[0]
                    float temp0_275[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                    var_368[1] = zmm1_2
                    zmm1_2 = var_358_1:4.d * temp0_275[0]
                    var_368[2] = zmm0_2[0]
                    zmm0_2 = var_358_1:8.d
                    zmm0_2[0] = zmm0_2[0] f* temp0_275[0]
                    float zmm3_2 = var_358_1.d * temp0_275[0]
                    zmm2_2 = var_348_1.d
                    var_358_1:4.d = zmm1_2
                    var_358_1:8.d = zmm0_2[0]
                    zmm0_2 = var_348_1:8.d
                    float var_218_1[0x4] = zmm15
                    float temp0_276[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                    zmm1_2 = var_348_1:4.d * temp0_276[0]
                    zmm0_2[0] = zmm0_2[0] f* temp0_276[0]
                    zmm2_2[0] = zmm2_2[0] * temp0_276[0]
                    var_348_1:4.d = zmm1_2
                    var_348_1:8.d = zmm0_2[0]
                    var_358_1.d = zmm3_2
                    var_348_1.d = zmm2_2[0]
                    sub_14077e4a0(&var_328, &var_368)
                    zmm5 = var_328
                    zmm14 = zmm12
                    arg4 = data_143ce07a0
                    float temp0_277[0x4] = _mm_mul_ps(zmm5, zmm5)
                    float temp0_279[0x4] =
                        _mm_add_ps(temp0_277, _mm_shuffle_ps(temp0_277, temp0_277, 0x4e))
                    float temp0_281[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_279, temp0_279, 0x39), temp0_279)
                    float temp0_282[0x4] = _mm_rsqrt_ps(temp0_281)
                    float temp0_283[0x4] = _mm_mul_ps(temp0_281, arg4)
                    float temp0_288[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(arg4, 
                                _mm_mul_ps(_mm_mul_ps(temp0_282, temp0_282), temp0_283)), 
                            temp0_282), 
                        temp0_282)
                    arg4 = _mm_sub_ps(arg4, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), temp0_283))
                    float temp0_293[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_281, 2)
                    arg4 = _mm_add_ps(_mm_mul_ps(arg4, temp0_288), temp0_288)
                    float temp0_296[0x4] = _mm_unpacklo_ps(var_338_1:4.d, 0)
                    arg4 = _mm_and_ps(_mm_mul_ps(arg4, zmm5) ^ data_143ce0790, temp0_293)
                        ^ data_143ce0790
                    zmm13 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_338_1.d, var_338_1:8.d[0].q), 
                        temp0_296[0].q)
                    var_328 = arg4
                
                uint32_t var_258_2[0x4] = arg4
                float var_248_2[0x4] = zmm13
                float var_238_2[0x4] = zmm14
            
            int64_t r14_3 = sx.q(rbx_2)
            rbx_2 = (r14_3 + 1).d
            
            if (rbx_2 s> var_3e4_1)
                sub_140638970(&var_3f0)
                rdi_2 = var_3f0
            
            r12_3 += 1
            int64_t rcx_39 = r14_3 * 6
            rsi_2 += 0x30
            r15_2 += 0xc
            *(rdi_2 + (rcx_39 << 3)) = arg4
            *(rdi_2 + (rcx_39 << 3) + 0x10) = zmm13
            *(rdi_2 + (rcx_39 << 3) + 0x20) = zmm14
            
            if (r12_3 s>= r13_3[1].d)
                break
            
            rcx_2 = var_3f8
        
        rsi_1 = arg1
    
    zmm6, zmm7, zmm8, zmm9 = sub_140781330(&var_2b8, &var_3f0)
    rcx_28 = var_3f0
label_1407b7352:
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
else
    void* rax_5 = sub_140d3c6e0(r15_1 + 0x438)
    
    if (rax_5 != 0)
        int32_t rdx_1 = *(rsi_1 + 0x10)
        int32_t rbx_1 = 0
        int32_t r12_1 = *(r15_1 + 0x4b8)
        void* rdi_1 = nullptr
        int32_t var_400_1 = 0
        int32_t arg_20 = r12_1
        void* var_408 = nullptr
        int32_t var_3fc_1 = 0
        
        if (rdx_1 s> 0)
            sub_1405a5220(&var_408, rdx_1)
            rbx_1 = var_400_1
            rdi_1 = var_408
        
        if (r12_1 != 0)
            int32_t rax_6 = 0
            int32_t var_3e0_1 = 0
            int64_t i = 0
            void* rcx_11 = ((sx.q(*(rax_5 + 0x494)) + 0x45) << 4) + rax_5
            var_3f0 = rcx_11
            
            if (r12_1 s> 0)
                int64_t rdx_3 = 0
                int64_t r14_2 = 0
                int64_t var_3d8_1 = 0
                
                do
                    if (i s< 0 || rax_6 s>= *(r15_1 + 0x4b8))
                        rax_6.b = 0
                    else
                        rax_6.b = 1
                    
                    if (rax_6.b == 0)
                        goto label_1407b676c
                    
                    int64_t r12_2 = sx.q(*(*(r15_1 + 0x4b0) + (i << 2)))
                    
                    if (r12_2.d == 0xffffffff || r12_2.d s>= *(rcx_11 + 8))
                        r12_1 = arg_20
                    label_1407b676c:
                        uint64_t rcx_16 = var_3f8
                        int64_t rdx_7 = sx.q(*(*(rcx_16 + 0x1a8) + rdx_3 + 8))
                        uint32_t (* rax_9)[0x4] = *(rcx_16 + 0x1b8)
                        arg4 = *(rax_9 + r14_2)
                        zmm13 = *(rax_9 + r14_2 + 0x10)
                        zmm14 = *(rax_9 + r14_2 + 0x20)
                        uint32_t var_288_1[0x4] = arg4
                        float var_278_1[0x4] = zmm13
                        float var_268_1[0x4] = zmm14
                        
                        if (rdx_7.d s< 0 || rdx_7.d s>= rbx_1)
                            rax_9.b = 0
                        else
                            rax_9.b = 1
                        
                        if (rax_9.b != 0)
                            float (* rcx_19)[0x4] = rdx_7 * 0x30 + rdi_1
                            arg5 = rcx_19[2]
                            zmm5 = *rcx_19
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, arg5), 
                                    data_143ce07b0, 1)) == 0)
                                float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), 
                                    _mm_shuffle_ps(arg4, arg4, 0x1b))
                                float temp0_136[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                                float temp0_137[0x4] = _mm_mul_ps(arg5, zmm13)
                                float temp0_138[0x4] =
                                    __mulps_xmmps_memps(temp0_135, data_143ce0330)
                                float temp0_139[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                                zmm14 = _mm_mul_ps(zmm14, arg5)
                                float temp0_142[0x4] =
                                    _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, arg4))
                                float temp0_144[0x4] =
                                    _mm_mul_ps(temp0_136, _mm_shuffle_ps(arg4, arg4, 0x4e))
                                float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), 
                                    _mm_shuffle_ps(arg4, arg4, 0xb1))
                                float temp0_148[0x4] =
                                    __mulps_xmmps_memps(temp0_144, data_143ce0320)
                                float temp0_149[0x4] =
                                    __mulps_xmmps_memps(temp0_147, data_143ce0310)
                                float temp0_150[0x4] = _mm_add_ps(temp0_142, temp0_148)
                                float temp0_151[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                                float temp0_152[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                                arg4 = _mm_add_ps(temp0_150, temp0_149)
                                float temp0_158[0x4] = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xd2), 
                                        temp0_152), 
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), 
                                    temp0_151))
                                float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                                float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
                                float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                                float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_152)
                                float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_151)
                                float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_139)
                                zmm13 = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), 
                                        _mm_add_ps(temp0_164, temp0_137)), 
                                    rcx_19[1])
                            else
                                zmm10 = data_143ce0340
                                float temp0_4[0x4] = _mm_add_ps(zmm5, zmm5)
                                arg6 = rcx_19[1]
                                float temp0_5[0x4] = _mm_shuffle_ps(arg5, arg5, 0xc9)
                                _mm_mul_ps(arg5, zmm14)
                                float temp0_7[0x4] = _mm_mul_ps(zmm5, temp0_4)
                                float temp0_10[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_4, temp0_4, 0x29), 
                                    _mm_shuffle_ps(zmm5, zmm5, 4))
                                float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
                                float temp0_14[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_7, temp0_7, 0x1a), 
                                    _mm_shuffle_ps(temp0_7, temp0_7, 1))
                                float temp0_16[0x4] =
                                    _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm5, zmm5, 0xff))
                                float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_10)
                                float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_16)
                                float temp0_19[0x4] = _mm_add_ps(arg4, arg4)
                                float temp0_20[0x4] = _mm_mul_ps(temp0_17, arg5)
                                float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
                                float temp0_22[0x4] = _mm_mul_ps(temp0_19, arg4)
                                zmm1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm10, temp0_14), arg5), data_143ce0350)
                                float temp0_26[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
                                float temp0_28[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_20, zmm1, 0), temp0_26, 0x82)
                                float temp0_29[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
                                float temp0_31[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_29, 0x88)
                                float temp0_33[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
                                float temp0_34[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x29)
                                zmm10[0].q = arg6 u>> 0x40
                                float temp0_35[0x4] = _mm_shuffle_ps(arg6, zmm10, 0xc4)
                                float temp0_37[0x4] =
                                    _mm_mul_ps(temp0_34, _mm_shuffle_ps(arg4, arg4, 4))
                                float temp0_38[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x1a)
                                arg4 = _mm_shuffle_ps(arg4, arg4, 0xff)
                                float temp0_41[0x4] =
                                    _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_22, temp0_22, 1))
                                float temp0_43[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0x12), arg4)
                                float temp0_44[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                                float var_208_1[0x4] = temp0_28
                                float var_1f8_1[0x4] = temp0_31
                                float var_1e8_1[0x4] = temp0_33
                                arg4 = _mm_add_ps(temp0_43, temp0_37)
                                float var_1d8_1[0x4] = temp0_35
                                float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
                                arg4 = _mm_mul_ps(arg4, zmm14)
                                float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
                                zmm1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm10, temp0_41), zmm14), data_143ce0350)
                                float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg4, zmm1, 0), 
                                    _mm_shuffle_ps(temp0_48, zmm1, 0x32), 0x82)
                                float var_1c8_1[0x4] = temp0_54
                                float temp0_56[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x55), temp0_31)
                                float temp0_57[0x4] = _mm_shuffle_ps(arg4, zmm1, 0x31)
                                float temp0_59[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_57, 0x88)
                                zmm10[0].q = zmm13 u>> 0x40
                                float temp0_60[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
                                float temp0_62[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0), temp0_28)
                                arg4 =
                                    _mm_shuffle_ps(_mm_shuffle_ps(arg4, temp0_48, 0x12), zmm1, 0xe8)
                                float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
                                float temp0_66[0x4] = _mm_add_ps(temp0_56, temp0_62)
                                float temp0_68[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
                                float temp0_69[0x4] = _mm_mul_ps(temp0_65, temp0_33)
                                float temp0_71[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_28)
                                float temp0_72[0x4] = _mm_add_ps(temp0_66, temp0_69)
                                float var_1b8_1[0x4] = temp0_59
                                uint32_t var_1a8_1[0x4] = arg4
                                float temp0_74[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_33)
                                float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_68)
                                float var_198_1[0x4] = temp0_60
                                float temp0_77[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_31)
                                float var_3a8[0x4] = temp0_75
                                float temp0_79[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0x55), temp0_31)
                                float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                                float temp0_82[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), temp0_35)
                                float temp0_84[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_28)
                                float temp0_85[0x4] = _mm_add_ps(temp0_80, temp0_74)
                                float temp0_87[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xaa), temp0_33)
                                float temp0_88[0x4] = _mm_add_ps(temp0_79, temp0_84)
                                arg4 = _mm_shuffle_ps(arg4, arg4, 0xff)
                                float temp0_90[0x4] = _mm_add_ps(temp0_85, temp0_82)
                                arg4 = _mm_mul_ps(arg4, temp0_35)
                                float temp0_92[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
                                float temp0_93[0x4] = _mm_add_ps(temp0_88, temp0_87)
                                float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_28)
                                int96_t var_398_1 = temp0_90[0].12
                                float temp0_95[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
                                float temp0_97[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_31)
                                float temp0_98[0x4] = _mm_add_ps(temp0_93, arg4)
                                float temp0_99[0x4] = _mm_mul_ps(temp0_95, temp0_33)
                                float temp0_100[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
                                float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_94)
                                float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_35)
                                int96_t var_388_1 = temp0_98[0].12
                                int96_t var_378_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_101, temp0_99), temp0_102)[0].12
                                zmm10, zmm12, zmm15 = sub_1407740e0(&var_3a8, 0x322bcc77)
                                zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), 
                                    data_143ce0390 ^ zmm10) ^ data_143ce0390
                                float zmm2_1[0x4] = var_3a8[0]
                                float zmm1_1 = var_3a8[1]
                                uint32_t zmm0_1[0x4] = var_3a8[2]
                                zmm2_1[0] = zmm2_1[0] * zmm15[0]
                                zmm1_1 = zmm1_1 * zmm15[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm15[0]
                                var_3a8[0] = zmm2_1[0]
                                float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                                var_3a8[1] = zmm1_1
                                zmm1_1 = var_398_1:4.d * temp0_107[0]
                                var_3a8[2] = zmm0_1[0]
                                zmm0_1 = var_398_1:8.d
                                zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
                                float zmm3_1 = var_398_1.d * temp0_107[0]
                                zmm2_1 = var_388_1.d
                                var_398_1:4.d = zmm1_1
                                var_398_1:8.d = zmm0_1[0]
                                zmm0_1 = var_388_1:8.d
                                float var_228_1[0x4] = zmm15
                                float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                                zmm1_1 = var_388_1:4.d * temp0_108[0]
                                zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
                                zmm2_1[0] = zmm2_1[0] * temp0_108[0]
                                var_388_1:4.d = zmm1_1
                                var_388_1:8.d = zmm0_1[0]
                                var_398_1.d = zmm3_1
                                var_388_1.d = zmm2_1[0]
                                uint32_t var_2c8[0x4]
                                sub_14077e4a0(&var_2c8, &var_3a8)
                                zmm5 = var_2c8
                                zmm14 = zmm12
                                arg4 = data_143ce07a0
                                float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
                                float temp0_111[0x4] = _mm_add_ps(temp0_109, 
                                    _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                                float temp0_113[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                                float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                                float temp0_115[0x4] = _mm_mul_ps(temp0_113, arg4)
                                float temp0_120[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(arg4, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), 
                                                temp0_115)), 
                                        temp0_114), 
                                    temp0_114)
                                arg4 = _mm_sub_ps(arg4, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                                float temp0_125[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                                arg4 = _mm_add_ps(_mm_mul_ps(arg4, temp0_120), temp0_120)
                                float temp0_128[0x4] = _mm_unpacklo_ps(var_378_1:4.d, 0)
                                arg4 =
                                    _mm_and_ps(_mm_mul_ps(arg4, zmm5) ^ data_143ce0790, temp0_125)
                                    ^ data_143ce0790
                                zmm13 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_378_1.d, var_378_1:8.d[0].q), 
                                    temp0_128[0].q)
                                var_2c8 = arg4
                            
                            uint32_t var_288_2[0x4] = arg4
                            float var_278_2[0x4] = zmm13
                            float var_268_2[0x4] = zmm14
                        
                        int64_t r13_2 = sx.q(rbx_1)
                        rbx_1 = (r13_2 + 1).d
                        
                        if (rbx_1 s> var_3fc_1)
                            sub_140638970(&var_408)
                            rdi_1 = var_408
                        
                        int64_t rcx_25 = r13_2 * 6
                        *(rdi_1 + (rcx_25 << 3)) = arg4
                        *(rdi_1 + (rcx_25 << 3) + 0x10) = zmm13
                        *(rdi_1 + (rcx_25 << 3) + 0x20) = zmm14
                    else
                        int64_t r8_1 = *rcx_11
                        int64_t r13_1 = sx.q(rbx_1)
                        var_328[0].q = r8_1
                        rbx_1 = (r13_1 + 1).d
                        
                        if (rbx_1 s> var_3fc_1)
                            sub_140638970(&var_408)
                            r8_1 = var_328[0].q
                            rdi_1 = var_408
                        
                        r12_1 = arg_20
                        int64_t rdx_6 = r12_2 * 6
                        int64_t rcx_15 = r13_1 * 6
                        *(rdi_1 + (rcx_15 << 3)) = *(r8_1 + (rdx_6 << 3))
                        *(rdi_1 + (rcx_15 << 3) + 0x10) = *(r8_1 + (rdx_6 << 3) + 0x10)
                        *(rdi_1 + (rcx_15 << 3) + 0x20) = *(r8_1 + (rdx_6 << 3) + 0x20)
                    
                    i += 1
                    rax_6 = var_3e0_1 + 1
                    rdx_3 = var_3d8_1 + 0xc
                    r14_2 += 0x30
                    var_3e0_1 = rax_6
                    var_3d8_1 = rdx_3
                    rcx_11 = var_3f0
                while (i s< sx.q(r12_1))
            
            rsi_1 = arg1
        else
            sub_140783960(&var_408, *(rsi_1 + 0x10))
        
        zmm6, zmm7, zmm8, zmm9 = sub_140781330(&var_2b8, &var_408)
        rcx_28 = var_408
        goto label_1407b7352
    
    zmm6, zmm7, zmm8, zmm9 = sub_140781330(&var_2b8, ((sx.q(*(r15_1 + 0x494)) + 0x45) << 4) + r15_1)
int64_t rbx_3 = var_3c0
int64_t rdi_3 = var_3d0
int64_t var_3b8
int32_t r14_4 = var_3b8.d
int32_t r15_3 = var_3b8:4.d
int64_t var_3c8
int32_t r12_4 = var_3c8.d
int32_t r13_4 = var_3c8:4.d
int64_t var_2e8_1 = rbx_3
int64_t var_2d8_1 = rdi_3
__builtin_memset(&var_3d0, 0, 0x20)
void* var_2f0 = rsi_1
int32_t var_2e0_1 = r14_4
int32_t var_2dc_1 = r15_3
int32_t var_2d0_1 = r12_4
int32_t var_2cc_1 = r13_4
zmm9.o = arg7
zmm8.o = var_78_1
zmm7.o = var_68_1
zmm6.o = var_58_1

if (sub_140a80f40() == 0)
    uint32_t rax_16
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_16.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_16.b == 0))
        void var_108
        void** rax_17 = sub_140789b90(&var_108, nullptr, 0xff)
        void* rcx_47 = *rax_17
        *(rcx_47 + 0x10) = rsi_1
        *(rcx_47 + 0x18) = rbx_3
        *(rcx_47 + 0x20) = r14_4
        *(rcx_47 + 0x24) = r15_3
        *(rcx_47 + 0x28) = rdi_3
        *(rcx_47 + 0x30) = r12_4
        *(rcx_47 + 0x34) = r13_4
        void* rcx_48 = *rax_17
        int32_t r8_2 = rax_17[2].d
        int64_t* rdx_20 = rax_17[1]
        int64_t* rbx_4 = *(rcx_48 + 0x40)
        int64_t* var_3d8_2 = rbx_4
        int32_t* rdi_4 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rdi_4 += 1
            rbx_4 = var_3d8_2
        
        sub_1405e4b20(rcx_48, rdx_20, r8_2, 1)
        
        if (rbx_4 != 0)
            rax = zx.q(*rdi_4)
            *rdi_4 -= 1
            
            if (rax.d == 1)
                sub_140a2f6e0(var_3d8_2)
    else
        void* var_318 = rsi_1
        int64_t var_310_1 = rbx_3
        int32_t var_308_1 = r14_4
        int32_t var_304_1 = r15_3
        int64_t var_300_1 = rdi_3
        int32_t var_2f8_1 = r12_4
        int32_t var_2f4_1 = r13_4
        sub_1407811f0(&var_318, &data_143f02b98)
        UDTRefs::~UDTRefs(&var_318)
else
    sub_1407811f0(&var_2f0, &data_143f02b98)
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)

int64_t rcx_50 = var_3d0

if (rcx_50 != 0)
    sub_140a74f90(rcx_50)

int64_t rcx_51 = var_3c0

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)
