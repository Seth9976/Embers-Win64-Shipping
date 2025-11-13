// 函数: sub_14202d310
// 地址: 0x14202d310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t var_270 = arg2
int16_t var_238[0x30]
char rax_2 = sub_140b297e0(&var_270, &var_238, 0x100, 1)
void* rax_4
int64_t r8_1

if (rax_2 != 0)
    rax_4, r8_1 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &var_238, 0)

void* result

if (rax_2 == 0 || rax_4 == 0)
    sub_140b1f700(arg3, u"Unrecognized class %s", &var_238)
else
    r8_1.b = 1
    char rax_5 = sub_140b0f6c0(&var_270, u"SHOWPENDINGKILLS")
    int32_t var_288_1 = 0xffffffff
    int32_t rdi_1 = 0
    int64_t var_298 = 0
    int32_t var_290_1 = 0
    sub_140d3cc80(sub_142452380(), &var_298, 1, 0x10, 0)
    int32_t r11_1 = var_290_1
    int32_t r9_2 = var_288_1 + 1
    int64_t r10_1 = var_298
    int32_t var_288_2 = r9_2
    
    if (r9_2 s< r11_1)
        while (*(r10_1 + (sx.q(r9_2) << 3)) == 0)
            result = zx.q(r9_2 + 1)
            var_288_2 = result.d
            r9_2 = result.d
            
            if (result.d s>= r11_1)
                break
    
    while (true)
        if (r9_2 s< 0 || r9_2 s>= r11_1)
            result.b = 0
        else
            result.b = 1
        
        if (result.b == 0)
            break
        
        void* const rax_14
        
        if (rax_5 == 0)
            int32_t rax_8 = *(*(r10_1 + (sx.q(r9_2) << 3)) + 0xc)
            
            if (rax_8 s>= data_143e1d9b4)
                rax_14 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_8)
                uint32_t rdx_3 = zx.d(temp0_1)
                int32_t rax_10 = temp1_1 + rdx_3
                rax_14 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_10.w) - rdx_3) * 0x18
        
        if (rax_5 != 0 || ((*(rax_14 + 8) u>> 0x1d).b & 1) == 0)
            int64_t rcx_9 = sx.q(*(rax_4 + 0x38))
            void* rbx_1 = *(r10_1 + (sx.q(r9_2) << 3))
            void* rax_18 = *(rbx_1 + 0x10)
            
            if (rcx_9.d s<= *(rax_18 + 0x38) && *(*(rax_18 + 0x30) + (rcx_9 << 3)) == rax_4 + 0x30)
                void* rax_20 = *(rbx_1 + 0x130)
                int32_t* rax_21
                
                if (rax_20 == 0)
                    int32_t var_254_1 = data_143dbb200
                    uint64_t var_25c
                    rax_21 = &var_25c
                    var_25c = data_143dbb1f8.q
                else
                    float zmm1_1[0x4] = *(rax_20 + 0x1d0)
                    float var_268
                    rax_21 = &var_268
                    var_268 = zmm1_1[0]
                    uint128_t zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    float var_260_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    int32_t var_264_1 = zmm0_1.d
                
                int32_t rax_23 = rax_21[2]
                uint64_t var_280_1 = *rax_21
                int64_t var_250
                int64_t* rax_24 = sub_140d21830(rbx_1, &var_250, 0, 0)
                
                if (rax_24[1].d != 0)
                    *rax_24
                
                float var_2a8_1[0x2] = _mm_cvtps_pd(rax_23).q
                int64_t var_2b0_1 = (_mm_cvtps_pd(var_280_1:4.d[0].q)).q
                int32_t var_2b8_1
                var_2b8_1.q = _mm_cvtps_pd(var_280_1.d).q
                sub_140b1f700(arg3, u"%i) %s (%f, %f, %f)", zx.q(rdi_1))
                int64_t rcx_12 = var_250
                rdi_1 += 1
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                r10_1 = var_298
                r11_1 = var_290_1
                r9_2 = var_288_2
        
        result = zx.q(r9_2 + 1)
        var_288_2 = result.d
        r9_2 = result.d
        
        if (result.d s< r11_1)
            while (*(r10_1 + (sx.q(r9_2) << 3)) == 0)
                result = zx.q(r9_2 + 1)
                var_288_2 = result.d
                r9_2 = result.d
                
                if (result.d s>= r11_1)
                    break
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)

result.b = 1
__security_check_cookie(rax_1 ^ &var_2d8)
return result
