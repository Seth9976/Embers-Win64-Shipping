// 函数: sub_1414d76c0
// 地址: 0x1414d76c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void*** rdi = nullptr
int32_t r13 = 0
int64_t* r9_2 = *(arg1 + 8) + 0xee8
int32_t r11 = r9_2[5].d
void* r10 = &r9_2[2]
void* rsi = arg1
float rcx = 0f
int32_t r14 = 0
int32_t r8 = 0
void*** var_348 = nullptr
int32_t var_33c = 0
float var_330 = 0f
float var_32c = 1.40129846e-45f
void* var_328 = r10
int32_t var_320 = 0xffffffff
int64_t var_31c = 0

if (r11 != 0)
    void* rax_4 = *(r10 + 0x10)
    
    if (rax_4 != 0)
        r10 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r10
    
    if (rdx_2 != 0)
    label_1414d77ac:
        float rax_11 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        var_32c = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_31c.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r11)
            var_31c.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_31c:4.d = r8
            var_330 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10 + (rdx_3 << 2) + 4)
            var_320 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1414d77ac
        
        var_31c.d = r11

int64_t zmm1 = var_320.q
int64_t* var_308 = r9_2
uint64_t result = zmm1 u>> 0x20
int128_t var_300 = var_330.o
int64_t var_2f0 = zmm1

if (result.d s< r11)
    int32_t rcx_2 = var_2f0:4.d
    int128_t zmm6 = 0x3727c5ac
    int128_t* rsi_2
    
    while (true)
        void* rbx_1 = *(*r9_2 + sx.q(rcx_2) * 0x30 + 0x20)
        void* rax_17 = *(rbx_1 + 0x20)
        int128_t zmm0 = *(rax_17 + 0x30)
        zmm0.d = zmm0.d f* zmm0.d
        
        if (zmm0.d f>= zmm6.d)
        label_1414d787b:
            char rax_18
            
            if ((*(rax_17 + 0x138) & 4) != 0)
                rax_18 = sub_14122cc00(rbx_1)
            
            if ((*(rax_17 + 0x138) & 4) != 0 && rax_18 != 0)
                rsi_2 = arg5
            else if (sub_14123dc60(rbx_1, arg3) == 0)
                rsi_2 = arg5
            else
                void* rdi_1 = *(rbx_1 + 0x20)
                void* r15_2 = sx.q(*(rbx_1 + 0x28)) * 0x70 + *(rsi + 0x2f0)
                
                if (data_1439b7064 == 0 || *(rdi_1 + 0x13c) - 1 u> 2)
                    rdi = var_348
                    rsi_2 = arg5
                else
                    char rax_22 = *(rdi_1 + 0x138)
                    
                    if ((rax_22 & 4) != 0 || (rax_22 & 0x10) == 0 || (*(rdi_1 + 0x139) & 1) == 0)
                        rdi = var_348
                        rsi_2 = arg5
                    else
                        void* rsi_1 = *(rdi_1 + 0x108)
                        
                        if (sub_14122cc00(rbx_1) == 0 || rsi_1 == 0 || *(rsi_1 + 0x48) == 0
                                || *(rsi_1 + 0x10) == 0)
                            rsi_1.b = 0
                        else
                            rsi_1.b = 1
                        
                        if (sub_1414cba40(rdi_1, r15_2) != 0 || rsi_1.b != 0)
                            int64_t* rcx_9 = *(rbx_1 + 0x20)
                            
                            if (0f f>= *(rcx_9 + 0xcc))
                                rdi = var_348
                                rsi_2 = arg5
                            else
                                (*(*rcx_9 + 0x10))(rcx_9, &var_330)
                                float zmm3 = *(arg3 + 0x610) - var_32c
                                float zmm2 = *(arg3 + 0x60c) - var_330
                                zmm0.d = (*(arg3 + 0x614)).d f- var_328.d
                                rsi_2 = arg5
                                zmm1.d = var_328:4.d.d f+ *(rsi_2 + 0x98)
                                zmm0.d = zmm0.d f* zmm0.d
                                zmm1.d = zmm1.d f* zmm1.d
                                
                                if (zmm3 * zmm3 + zmm2 * zmm2 f+ zmm0.d f>= zmm1.d)
                                    rdi = var_348
                                else
                                    int64_t rdi_2 = sx.q(r14)
                                    r14 = (rdi_2 + 1).d
                                    int16_t var_340
                                    var_340.d = r14
                                    
                                    if (r14 s> r13)
                                        zmm6 = sub_14083a310(&var_348, rdi_2.d)
                                        r13 = var_33c
                                        r14 = var_340.d
                                    
                                    rdi = var_348
                                    rdi[rdi_2] = rbx_1
                        else
                            rdi = var_348
                            rsi_2 = arg5
        else
            zmm0 = *(rax_17 + 0x34)
            zmm0.d = zmm0.d f* zmm0.d
            
            if (zmm0.d f>= zmm6.d)
                goto label_1414d787b
            
            zmm0 = *(rax_17 + 0x38)
            zmm0.d = zmm0.d f* zmm0.d
            
            if (not(zmm0.d f< zmm6.d))
                goto label_1414d787b
            
            rsi_2 = arg5
        
        var_2f0.d &= not.d(var_300:4.d)
        sub_14059bdd0(&var_300)
        result = var_300:8.q
        rcx_2 = var_2f0:4.d
        
        if (rcx_2 s>= *(result + 0x18))
            break
        
        r9_2 = var_308
        rsi = arg1
    
    if (r14 s> 0)
        *arg9 = sub_141188e50(arg2, arg8, u"LocalShadowedLightScattering", 0)
        int128_t* rax_30 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
        int128_t* rbx_2 = rax_30
        
        if (rax_30 == 0)
            rbx_2 = nullptr
        else
            sub_14117af20(rax_30)
        
        memset(rbx_2, 0, 0x90)
        var_348 = *arg9
        int16_t var_340_1 = 2
        char var_33e_1 = 0
        int32_t var_33c_1 = 0xffffffff
        *rbx_2 = var_348.o
        void* var_2b8_1 = arg1
        int128_t* var_2c8 = rbx_2
        void* var_2c0_1 = arg3
        int64_t var_2b0 = 0
        int32_t var_2a8_1 = r14
        sub_14119a550(&var_2b0, r14, 0)
        memcpy(var_2b0, rdi, r14 << 3)
        int32_t var_298_1 = arg6[1].d
        int64_t var_2a0_1 = *arg6
        int32_t var_28c_1 = arg7[1].d
        char r9
        char var_288_1 = r9
        int64_t var_294_1 = *arg7
        void var_278
        sub_1414c05a0(&var_278, arg4)
        int128_t var_118_1 = *rsi_2
        int128_t var_108_1 = rsi_2[1]
        int128_t var_f8_1 = rsi_2[2]
        int128_t var_e8_1 = rsi_2[3]
        int128_t var_d8_1 = rsi_2[4]
        int128_t var_c8_1 = rsi_2[5]
        int128_t var_b8_1 = rsi_2[6]
        int128_t var_a8_1 = rsi_2[7]
        int128_t var_98_1 = rsi_2[8]
        int128_t var_88_1 = rsi_2[9]
        int64_t var_78_1 = rsi_2[0xa].q
        void var_338
        result = sub_1414b7360(arg2, &var_338, rbx_2, 1, &var_2c8)
        int64_t var_168
        
        if (var_168 != 0)
            result = sub_140a74f90(var_168)

__security_check_cookie(rax_1 ^ &var_388)
return result
