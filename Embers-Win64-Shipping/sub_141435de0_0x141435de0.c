// 函数: sub_141435de0
// 地址: 0x141435de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* rcx = *arg1
int32_t var_328 = 0
int64_t* rdi = arg1[1]
char r15 = arg1[4].b
int32_t rsi = arg1[3].d
*(rcx + 8)
void* rbx = rdi[1]
int32_t var_2c8 = 0
int64_t* rax_2 = arg1[2]
int32_t rax_3 = *(arg1 + 0x1c)
char rax_4 = *(arg1 + 0x21)
int64_t* var_300 = rdi
int32_t var_32c = rsi
float zmm0 = *(data_143f5b298 + 0x8f0)
int32_t rax_6 = sub_14141f720()
int32_t rax_7 = *(rbx + 0x214)
uint128_t zmm12 = *(*rdi + 0x38)
char var_2cc = 1
int32_t var_2d0 = rax_6
void* rax_9

if (sub_142391f10(rdi).b == 0 || *(rdi + 0xd72) != 0 || *(rdi[0x2b5] + 0x4c1) == 0)
    rax_9.b = 0
else
    rax_9.b = 1
    uint32_t r13_2
    r13_2.b = (*(rdi + 0x497c) u>> 4).b | r15
    var_2d0 = rax_6 * 2
    r13_2.b &= 1
    var_2cc.d = r13_2

int64_t* rcx_5 = arg1[8]
void* r15_1 = rbx + 0x1248
*(arg1 + 0x22) = rax_9.b
uint128_t zmm14 = zx.o(0)
void* var_238 = r15_1
char var_32f_1

if (not(data_143ed57ac.d f<= 0f) && data_1439b6dc0 s> 0)
    var_32f_1 = 1

if (data_143ed57ac.d f<= 0f || data_1439b6dc0 s<= 0 || data_1439b6dbc s<= 0)
    var_32f_1 = 0

uint128_t zmm0_1 = data_143ed57b4
void* r12_1 = &rdi[0x2b7]
int32_t rbx_1 = *(r12_1 + 0x18)
int32_t rax_10 = *(rdi + 0x614)
char rcx_7 = rsi.b & 0x1f
zmm0_1.d = zmm0_1.d f* zmm0_1.d
int32_t var_308 = 0
int32_t r13_4 = rsi s>> 5
int32_t r14_1 = 1 << rcx_7
int32_t r11 = 0xffffffff << rcx_7
int32_t r8_1 = rsi & 0xffffffe0
int32_t var_25c = zmm0_1.d
uint64_t var_2e8 = *(rdi + 0x60c)
int32_t var_2b8 = r13_4
int32_t var_314 = r14_1
int32_t var_2b4 = r14_1
void* var_240 = r12_1
void* var_2b0 = r12_1
int32_t var_2a8 = r11
int32_t var_2a4 = rsi
int32_t var_2a0 = r8_1
int64_t* result

if (rsi == rbx_1)
    result = arg1
    result[9].d = 0
else
    void* rax_11 = *(r12_1 + 0x10)
    void* r9_1 = r12_1
    int32_t rsi_1 = rbx_1
    int32_t var_32c_1 = rbx_1
    
    if (rax_11 != 0)
        r9_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_3 = *(r9_1 + (sx.q(r13_4) << 2)) & r11
    int32_t var_2a4_1
    int64_t rcx_9
    
    if (rdx_3 != 0)
    label_14143604c:
        r14_1 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(r14_1)
        rcx_9 = zx.q(temp0_1)
        var_314 = r14_1
        int32_t var_1c8_1 = rcx_9.d
        var_2b4 = r14_1
        int32_t rax_16
        
        if (r14_1 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - rcx_9.d
        
        int32_t rax_17 = r8_1 - rax_16 + 0x1f
        
        if (rax_17 s> rbx_1)
            rax_17 = rbx_1
        
        rsi_1 = rax_17
        var_32c_1 = rax_17
        var_2a4_1 = rax_17
    else
        while (true)
            rcx_9 = sx.q(r13_4)
            r8_1 += 0x20
            r13_4 += 1
            int32_t var_2a0_1 = r8_1
            var_2b8 = r13_4
            
            if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_2a4_1 = rbx_1
                break
            
            rdx_3 = *(r9_1 + (rcx_9 << 2) + 4)
            var_2a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14143604c
    
    int32_t rdx_4 = var_308
    
    if (rsi_1 s>= rbx_1)
        result = arg1
        result[9].d = 0
    else
        uint32_t zmm6[0x4] = zx.o(0)
        uint32_t zmm7[0x4]
        uint32_t var_58_1[0x4] = zmm7
        uint32_t zmm8[0x4]
        uint32_t var_68_1[0x4] = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        int128_t zmm10 = var_2e8.d
        uint128_t zmm11 = var_2e8:4.d
        int128_t zmm13 = 0x3f800000
        uint32_t zmm15[0x4] = 0x7fffffff
        int32_t var_320_1 = zmm11.d
        int32_t var_258_1 = rax_10.d
        int32_t var_31c_1 = zmm10.d
        
        while (rdx_4 s< rax_3)
            void* r11_1 = rcx
            rcx_9.b = 0
            int64_t rbx_2 = sx.q(rsi_1)
            int32_t var_2f8_1 = 1
            char var_338_1 = 0
            char rdx_5 = *(rbx_2 + *(r11_1 + 0xe18))
            void* var_250_1 = nullptr
            char r10_2 = rdx_5 & 1
            char var_337_1 = r10_2
            int64_t* r8_3 = arg1[0xa]
            int64_t* var_2f0_1 = r8_3
            int32_t rax_20 = r8_3[1].d
            
            if ((rdx_5 & 0x10) == 0 || data_1439b6db4 == 0 || (*(rdi + 0x497c) & 0x20) != 0)
            label_141436206:
                char var_32d_1 = 1
                char var_336_1 = 1
                int32_t rbx_3 = *(*(r11_1 + 0xe38) + (rbx_2 << 2))
                int32_t r9_2 = 0
                int32_t var_230_1 = rbx_3
                int32_t var_318_1 = 0
                int32_t var_358
                
                if (var_2f8_1 s> 0)
                    do
                        int32_t var_214_1 = r9_2
                        int32_t* rdi_2
                        
                        if (*(r15_1 + 8) == *(r15_1 + 0x34))
                        label_1414362b4:
                            rdi_2 = nullptr
                        else
                            void* rdx_10 = *(r15_1 + 0x40)
                            void* r8_4 = r15_1 + 0x38
                            
                            if (rdx_10 != 0)
                                r8_4 = rdx_10
                            
                            int32_t rax_33 = *(r8_4 + (((rbx_3.q u>> 0x34 ^ sx.q(rbx_3))
                                & (sx.q(*(r15_1 + 0x48)) - 1)) << 2))
                            
                            if (rax_33 == 0xffffffff)
                            label_1414362b4_1:
                                rdi_2 = nullptr
                            else
                                while (true)
                                    rdi_2 = sx.q(rax_33) * 0x70 + *r15_1
                                    int32_t rdx_11 = *rdi_2
                                    int32_t var_20c_1 = rdi_2[0x17]
                                    
                                    if (rdx_11 == rbx_3 && (rdx_11.q u>> 0x20).d == r9_2)
                                        break
                                    
                                    rax_33 = rdi_2[0x1a]
                                    
                                    if (rax_33 == 0xffffffff)
                                        goto label_1414362b4_2
                                
                                if (rax_33 == 0xffffffff)
                                label_1414362b4_2:
                                    rdi_2 = nullptr
                        
                        r12_1.b = 0
                        r15_1.b = 0
                        int32_t var_350
                        char rax_48
                        uint128_t zmm1
                        float zmm2
                        uint32_t zmm3[0x4]
                        uint32_t zmm4_1[0x4]
                        uint128_t zmm5_1
                        
                        if (rdi_2 != 0)
                            int32_t rax_50 = *(var_300 + 0x497c)
                            
                            if ((rax_50.b & 0x10) != 0)
                                r15_1.b = (rax_50 u>> 5).b & 1
                            else if (r10_2 == 0)
                                r15_1.b = 1
                            else
                                char var_348
                                
                                if (rax_4 == 0)
                                    int64_t var_208 = 0
                                    char var_330
                                    var_358.q = &var_330
                                    var_330 = 0
                                    int64_t rax_53
                                    rax_53, r9_2 =
                                        sub_1414559e0(rdi_2, rax_7, rax_6, var_2d0, var_358)
                                    
                                    if (rax_53 == 0)
                                        void* rcx_37 = data_143f5b298
                                        
                                        if (rax_6 s> 1 || data_1439c7a10 s< 0x7fffffff)
                                            uint8_t rax_58 = rdi_2[0x18].b
                                            r12_1.b = rax_58 u>> 6
                                            r12_1.b &= 1
                                            r15_1 = zx.q(rax_58 u>> 7)
                                        else
                                            r15_1.b = 1
                                            zmm0_1.d = rdi_2[0x14].d f+ *(rcx_37 + 0x8f0)
                                            r12_1.b = zmm12.d f> zmm0_1.d
                                        
                                        int32_t rax_59
                                        
                                        if (r12_1.b == 0)
                                            rax_59 = *(rcx_37 + 0x8f4)
                                        else
                                            rax_59 = 0
                                        
                                        rdi_2[0x16] = rax_59
                                    else
                                        int64_t* rcx_36 = data_143f0f180
                                        r9_2.b = 1
                                        char rax_54
                                        rax_54, r9_2 = (*(*rcx_36 + 0x328))(rcx_36, rax_53, 
                                            &var_208, r9_2, 0xffffffff, var_350, var_348)
                                        
                                        if (rax_54 != 0)
                                            int32_t rax_55 = var_208.d
                                            r12_1.b = rax_55 == 0
                                            
                                            if (rax_55 == 0)
                                                rdi_2[0x16] = zmm14.d
                                                r15_1.b = var_330 == 0
                                            else
                                                zmm0_1.d = float.s(zx.q(rax_55))
                                                zmm0_1.d = zmm0_1.d f* var_300[0xa12].d
                                                rdi_2[0x16] = zmm0_1.d
                                                r15_1.b = var_330 == 0
                                else if (sub_141421750(rbx + 0x138, rdi_2[0x11]) != 0)
                                    char rax_52
                                    rax_52, r9_2 = sub_141421760(rbx + 0x138, rdi_2[0x13])
                                    r15_1.b = 1
                                    r12_1.b = rax_52 == 0
                                
                                if (data_143ed57a0 != 0 && rax_2 != 0 && r12_1.b != 0)
                                    int128_t* rsi_5
                                    
                                    if (var_338_1 == 0)
                                        rsi_5 = sx.q(rsi_1) * 0x1c + *(rcx + 0xe28)
                                    else
                                        rsi_5 = sx.q(var_318_1) * 0x1c + *var_250_1
                                    
                                    int32_t var_310 = 0xff32ff32
                                    void var_184
                                    sub_140acc920(&var_184, &var_310)
                                    zmm6 = *rsi_5
                                    zmm4_1 = *(rsi_5 + 0xc)
                                    zmm1 = *(rsi_5 + 0x14)
                                    zmm3 = rsi_5[1].d
                                    zmm4_1[0] = zmm4_1[0] f+ zmm6[0]
                                    zmm2 = *(rsi_5 + 8)
                                    zmm6[0] = zmm6[0] f- zmm4_1[0]
                                    zmm5_1 = *(rsi_5 + 4)
                                    uint32_t zmm0_2[0x4] = zmm1
                                    zmm0_2[0] = zmm0_2[0] f+ zmm2
                                    var_348 = 0
                                    zmm3[0] = zmm3[0] f+ zmm5_1.d
                                    var_350 = zmm14.d
                                    zmm5_1.d = zmm5_1.d f- zmm3[0]
                                    var_358 = zmm14.d
                                    char var_1a0_1 = 1
                                    uint32_t var_188_1 = zmm0_2[0]
                                    r9_2.b = 1
                                    int64_t var_1b8 = (_mm_unpacklo_ps(zmm6, zmm5_1.q)).q
                                    float var_1b0_1 = zmm2 f- zmm1.d
                                    int64_t var_1ac_1 = (_mm_unpacklo_ps(zmm4_1, zmm3[0].q)).q
                                    uint32_t var_1a4_1 = var_188_1
                                    zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_14229ae30(rax_2, 
                                        &var_1b8, &var_184, r9_2.b, var_358, var_350, var_348)
                                    rsi_1 = var_32c_1
                                    zmm6 = zx.o(0)
                            
                            if (var_2cc != 0)
                                zmm6 = sub_1413de930((zx.q(mods.dp.d(sx.q(rax_7), rax_6)) << 4) + 8
                                    + rdi_2)
                            
                            rax_48 = var_337_1
                        else
                            int32_t var_158 = rbx_3
                            void var_150
                            void** r14_4 = &var_150
                            int32_t rbx_4 = (rdi_2 + 1).d
                            int64_t i
                            
                            for (i = 3; i != 0; )
                                int128_t var_278 = zx.o(0)
                                i -= 1
                                int64_t** rax_34 = j_sub_140a82f30(0x14)
                                r14_4[1] = rax_34
                                *rax_34 = nullptr
                                rax_34[1] = 0
                                rax_34[2].d = rbx_4
                                *r14_4 = &rax_34[2]
                                
                                if (rax_34 != &var_278)
                                    int64_t* rdi_3 = *rax_34
                                    *rax_34 = var_278.q
                                    var_278.q = 0
                                    
                                    if (rdi_3 != 0)
                                        rdi_3[1].d -= 1
                                        
                                        if (rdi_3[1].d == rbx_4)
                                            char rax_36
                                            
                                            if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                                                rax_36 = sub_1405949a0()
                                            
                                            if (rdi_3[2].b != 0
                                                    || (data_143f0f1d0 == 0 && rax_36 != 0))
                                                (**rdi_3)(rdi_3, zx.q(rbx_4))
                                            else
                                                bool z_1
                                                
                                                if (0 == *(rdi_3 + 0xc))
                                                    *(rdi_3 + 0xc) = rbx_4
                                                    z_1 = true
                                                else
                                                    *(rdi_3 + 0xc)
                                                    z_1 = false
                                                
                                                if (z_1)
                                                    int32_t rax_38 = sub_140a20af0()
                                                    uint64_t rdx_12 = zx.q(rax_38)
                                                    void* const rax_39
                                                    
                                                    if (rax_38 != 0)
                                                        rax_39 = *((rdx_12 u>> 0xe << 3) +
                                                            &data_143cf0bf8)
                                                            + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                                                    else
                                                        rax_39 = nullptr
                                                    
                                                    *(rax_39 + 8) = rdi_3
                                                    sub_1405a42f0(&data_143f02390, rdx_12.d)
                                
                                rax_34[1] = var_278:8.q
                                int64_t* rcx_29 = var_278:8.q
                                
                                if (rcx_29 != 0 && var_278.q != 0)
                                    (*(*rcx_29 + 0x10))(rcx_29, &var_278)
                                    var_278:8.q = 0
                                
                                sub_14081c9d0(&var_278)
                                r14_4 = &r14_4[2]
                            
                            int64_t var_114_1 = -1
                            int64_t var_10c_1 = 0
                            int64_t var_104_1 = 0
                            int32_t var_fc_1 = var_318_1
                            int16_t var_f8_1 = 0
                            int16_t var_f5_1 = 0
                            int64_t var_120 = 0
                            char var_f6_1 = 0
                            int32_t var_118_1 = 0
                            int32_t var_264
                            sub_141435830(var_238, &var_264, &var_158, nullptr)
                            int64_t* r14_5 = &var_120
                            rbx_3 = var_230_1
                            r12_1 = nullptr
                            rdi_2 = sx.q(var_264) * 0x70 + *var_238
                            uint64_t i_2 = zx.q((i + 3).d)
                            uint64_t i_1
                            
                            do
                                r14_5 -= 0x10
                                zmm6 = sub_1413de930(r14_5)
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                            rax_48 = var_337_1
                            rsi_1 = var_2a4_1
                            r14_1 = var_2b4
                            r15_1.b = rax_48 ^ 1
                            r13_4 = var_2b8
                            var_32c_1 = rsi_1
                            var_314 = r14_1
                        
                        if (rdi_2 != 0)
                            int32_t r10_4
                            
                            if (r15 == 0 || rax_48 == 0)
                                r10_4 = rax_7
                            else
                                if (var_32f_1 == 0)
                                    zmm1 = zmm6
                                else
                                    char rdx_24 = rdi_2[0x18].b
                                    char rcx_44 = rdx_24
                                    
                                    if ((rdx_24 & 0x3f) == 0
                                            && rax_7 - rdi_2[0x12] u> data_1439b6dbc)
                                        rcx_44 = ((rcx_44 ^ data_1439b6dc0.b) & 0x3f) ^ rdx_24
                                        rdi_2[0x18].b = rcx_44
                                    
                                    char rdx_25 = rcx_44 & 0x3f
                                    
                                    if (rdx_25 != 0)
                                        rdi_2[0x18].b = (((rcx_44 - 1) ^ rcx_44) & 0x3f) ^ rcx_44
                                    
                                    if (rdx_25 == 0)
                                        zmm1 = zmm6
                                    else
                                        zmm1 = _mm_cvtps_pd(data_143ed57ac.q)
                                
                                char rdx_27 = var_338_1
                                int64_t* rcx_46
                                
                                if (rdx_27 == 0)
                                    rcx_46 = sx.q(rsi_1) * 0x1c + *(rcx + 0xe28)
                                else
                                    rcx_46 = sx.q(var_318_1) * 0x1c + *var_250_1
                                
                                zmm0_1.q = _mm_cvtps_pd(data_143ed57b0.q).q f+ zmm1.q
                                zmm3 = _mm_cvtpd_ps(zmm0_1)
                                zmm0_1 = zx.o(*rcx_46)
                                zmm7 = zmm3
                                zmm8 = zmm3
                                zmm7[0] = zmm7[0] f+ *(rcx_46 + 0xc)
                                zmm8[0] = zmm8[0] f+ rcx_46[2].d
                                zmm6 = zmm3
                                zmm6[0] = zmm6[0] f+ *(rcx_46 + 0x14)
                                zmm3[0] = zmm3[0] f+ rcx_46[3].d
                                uint64_t var_298 = zmm0_1.q
                                zmm9 = var_298.d
                                int32_t var_290_1 = rcx_46[1].d
                                zmm1.d = zmm9.d f- zmm10.d
                                uint32_t var_28c = zmm7[0]
                                zmm10 = var_298:4.d
                                uint32_t var_288_1 = zmm8[0]
                                zmm2 = zmm10.d f- zmm11.d
                                uint32_t var_284_1 = zmm6[0]
                                zmm11 = var_290_1
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0_1.d = zmm11.d f- var_258_1
                                uint32_t var_280_1 = zmm3[0]
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                
                                if (zmm2 * zmm2 f+ zmm1.d f+ zmm0_1.d f< var_25c)
                                label_141436e30:
                                    r12_1.b = 0
                                    r15_1.b = 1
                                label_141436b66:
                                    zmm11 = var_320_1
                                    zmm10 = var_31c_1
                                    r10_4 = rax_7
                                else
                                    int64_t* r9_4 = var_300
                                    float (* rax_76)[0x4]
                                    
                                    if (r9_4[0x1a2].b == 0)
                                        bool c_1
                                        
                                        if (zmm13.d f> *(r9_4 + 0x2bc))
                                            zmm3[0] f- 1048576f
                                            c_1 = zmm3[0] f< 1048576f
                                        else
                                            float var_168[0x4]
                                            rax_76 = sub_1422f9c00(r9_4, &var_168, &var_298)
                                            r9_4 = var_300
                                            zmm11 = var_290_1
                                            zmm1.d = var_280_1.d f* r9_4[0x55].d
                                            rdx_27 = var_338_1
                                            zmm10 = var_298:4.d
                                            zmm9 = var_298.d
                                            zmm0_1.d = (*rax_76)[2].d f- zmm1.d
                                            zmm0_1.d f- zmm13.d
                                            c_1 = zmm0_1.d f< zmm13.d
                                        
                                        rax_76.b = c_1
                                    else
                                        zmm3 = *(r9_4 + 0xd24)
                                        zmm5_1 = r9_4[0x1a4].d
                                        zmm4_1 = zmm3
                                        zmm2 = r9_4[0x1a5].d
                                        zmm0_1 = zmm5_1
                                        zmm5_1.d = zmm5_1.d f* zmm7[0]
                                        zmm4_1[0] = zmm4_1[0] f* zmm10.d
                                        zmm5_1 = _mm_and_ps(zmm5_1, zmm15)
                                        zmm0_1.d = zmm0_1.d f* zmm9.d
                                        zmm3[0] = zmm3[0] f* zmm8[0]
                                        zmm4_1[0] = zmm4_1[0] f+ zmm0_1.d
                                        zmm1.d = zmm11.d f* zmm2
                                        zmm3 = _mm_and_ps(zmm3, zmm15)
                                        zmm6[0] = zmm6[0] f* zmm2
                                        zmm5_1.d = zmm5_1.d f+ zmm3[0]
                                        zmm4_1[0] = zmm4_1[0] f+ zmm1.d
                                        zmm5_1.d = zmm5_1.d f+ _mm_and_ps(zmm6, zmm15)[0]
                                        zmm4_1[0] = zmm4_1[0] f- *(r9_4 + 0xd2c)
                                        rax_76.b = (zmm5_1 ^ data_142d3f780).d f> zmm4_1[0]
                                    
                                    if (rax_76.b == 0)
                                        goto label_141436e30
                                    
                                    r10_4 = rax_7
                                    rdi_2[0x11] = r10_4
                                    
                                    if (rax_4 != 0)
                                        rdi_2[0x13] = sub_141415ca0(rbx + 0x138, &var_298, &var_28c)
                                        goto label_141436b66
                                    
                                    char r8_12
                                    
                                    if (rdx_27 == 0 && (rdx_5 & 4) != 0)
                                        if (r12_1.b == 0)
                                            if (r15_1.b == 0)
                                                goto label_141436a7a
                                            
                                            uint64_t rcx_50 = zx.q(data_143ecf150)
                                            
                                            if (rcx_50.d u>= 0xdf3)
                                                rcx_50 = 0
                                            
                                            data_143ecf150 = rcx_50.d
                                            zmm2 = (&data_143ecf154)[rcx_50]
                                            bool cond:12_1 = data_1439c7a14 == 0
                                            data_143ecf150 = rcx_50.d + 1
                                            
                                            if (cond:12_1)
                                                zmm0_1.d = zmm12.d f- rdi_2[0x14]
                                                rax_76.b = zmm0_1.d f> zmm2 * 0.125f * zmm0
                                            else
                                                zmm1 = (*data_143f5b298)[0x23d]
                                                zmm0_1.d = rdi_2[0x16].d f/ zmm1.d
                                                zmm0_1.d = _mm_max_ss(zmm0_1.d, zmm13.d).d f* zmm2
                                                rax_76.b = zmm1.d f> zmm0_1.d
                                            
                                            goto label_141436a7c
                                        
                                        rsi_1.b = 1
                                        r8_12 = 1
                                    label_141436a8a:
                                        bool cond:10_1 = data_1439c7a10 s>= 0x7fffffff
                                        zmm9.d = zmm9.d f+ r9_4[0xc0].d
                                        zmm10.d = zmm10.d f+ *(r9_4 + 0x604)
                                        zmm11.d = zmm11.d f+ r9_4[0xc1].d
                                        var_2e8.d = zmm9.d
                                        var_2e8:4.d = zmm10.d
                                        int32_t var_2e0_1 = zmm11.d
                                        uint64_t var_228 = var_28c.q
                                        
                                        if (cond:10_1)
                                            if (rsi_1.b == 0)
                                                var_328 |= 2
                                            else
                                            label_141436ce4:
                                                var_328 |= 1
                                            
                                            int32_t* var_1e8
                                            int64_t* rdx_36 = &var_1e8
                                            void* const rcx_64 = 0x5008
                                            int32_t* var_1d8
                                            
                                            if (r8_12 != 0)
                                                rdx_36 = &var_1d8
                                            
                                            if (r8_12 == 0)
                                                rcx_64 = 0x4fe0
                                            
                                            var_358.q = arg2
                                            int64_t* rax_95 = sub_1414168c0(rcx_64 + r9_4, rdx_36, 
                                                &var_2e8, &var_228, var_358)
                                            var_350.b = *(arg1 + 0x22)
                                            var_358.b = rsi_1.b
                                            sub_141460f30(rdi_2, rax_7, rax_95, rax_6, var_358.b, 
                                                var_350.b)
                                            int32_t rcx_69 = var_328
                                            
                                            if ((rcx_69.b & 2) != 0)
                                                int32_t* rax_96 = var_1e8
                                                rcx_69 &= 0xfffffffd
                                                var_328 = rcx_69
                                                int64_t* var_1e0
                                                
                                                if (rax_96 != 0)
                                                    int32_t temp14_1 = *rax_96
                                                    *rax_96 -= 1
                                                    
                                                    if (temp14_1 == 1)
                                                        int64_t* rcx_70 = var_1e0[1]
                                                        
                                                        if (rcx_70 != 0 && *var_1e0 != 0)
                                                            (*(*rcx_70 + 0x10))(rcx_70, var_1e0)
                                                            var_1e0[1] = 0
                                                        
                                                        sub_14081c9d0(var_1e0)
                                                        j_sub_140a74f90(var_1e0)
                                                        rcx_69 = var_328
                                                
                                                var_1e0 = nullptr
                                                var_1e8 = nullptr
                                            
                                            if ((rcx_69.b & 1) != 0)
                                                int32_t* rax_98 = var_1d8
                                                var_328 = rcx_69 & 0xfffffffe
                                                int64_t* var_1d0
                                                
                                                if (rax_98 != 0)
                                                    int32_t temp15_1 = *rax_98
                                                    *rax_98 -= 1
                                                    
                                                    if (temp15_1 == 1)
                                                        int64_t* rcx_74 = var_1d0[1]
                                                        
                                                        if (rcx_74 != 0 && *var_1d0 != 0)
                                                            (*(*rcx_74 + 0x10))(rcx_74, var_1d0)
                                                            var_1d0[1] = 0
                                                        
                                                        sub_14081c9d0(var_1d0)
                                                        j_sub_140a74f90(var_1d0)
                                                
                                                var_1d0 = nullptr
                                                var_1d8 = nullptr
                                        else
                                            if (rsi_1.b != 0)
                                                goto label_141436ce4
                                            
                                            int32_t rax_79 = sub_141459570(rdi_2)
                                            int32_t var_1ec_1 = var_318_1
                                            int64_t rsi_7 = sx.q(rcx_5[1].d)
                                            int32_t rcx_53 = (rsi_7 + 1).d
                                            rcx_5[1].d = rcx_53
                                            
                                            if (rcx_53 s> *(rcx_5 + 0xc))
                                                sub_1405c4ec0(rcx_5)
                                            
                                            int64_t rdx_30 = rsi_7 * 5
                                            int64_t rcx_56 = *rcx_5
                                            *(rcx_56 + (rdx_30 << 3)) = rbx_3.q
                                            *(rcx_56 + (rdx_30 << 3) + 8) = var_2e8
                                            *(rcx_56 + (rdx_30 << 3) + 0x10) = var_2e0_1
                                            *(rcx_56 + (rdx_30 << 3) + 0x14) = var_228
                                            *(rcx_56 + (rdx_30 << 3) + 0x20) = rax_79
                                            r14_1 = var_314
                                            *(rcx_56 + (rdx_30 << 3) + 0x1c) = var_284_1
                                        
                                        rsi_1 = var_32c_1
                                        goto label_141436b66
                                    
                                label_141436a7a:
                                    rax_76.b = 1
                                label_141436a7c:
                                    r8_12 = 0
                                    rsi_1.b = 0
                                    
                                    if (rax_76.b != 0)
                                        goto label_141436a8a
                                    
                                    zmm11 = var_320_1
                                    zmm10 = var_31c_1
                                    rsi_1 = var_32c_1
                            
                            rdi_2[0x15] = zmm12.d
                            
                            if (r12_1.b == 0 && r15_1.b != 0)
                                rdi_2[0x14] = zmm12.d
                            
                            rdi_2[0x18].b &= 0x3f
                            char rcx_57 = ((r12_1.b << 6 | rdi_2[0x18].b) & 0x7f) | r15_1.b << 7
                            rdi_2[0x12] = r10_4
                            rdi_2[0x18].b = rcx_57
                        
                        rcx_9 = zx.q(var_338_1)
                        r8_3 = var_2f0_1
                        
                        if (rcx_9.b != 0)
                            int64_t rdi_5 = sx.q(r8_3[1].d)
                            int32_t rax_86 = (rdi_5 + 1).d
                            r8_3[1].d = rax_86
                            
                            if (rax_86 s> *(r8_3 + 0xc))
                                sub_140679a80(r8_3)
                                r8_3 = var_2f0_1
                            
                            *(rdi_5 + *r8_3) = r12_1.b
                            char rcx_59 = 0
                            char temp11_1 = r12_1.b
                            
                            if (temp11_1 != 0)
                                rcx_59 = var_336_1
                            
                            var_336_1 = rcx_59
                            
                            if (temp11_1 != 0 || r15_1.b == 0)
                                var_32d_1 = 0
                            
                            rcx_9 = zx.q(var_338_1)
                            r12_1 = var_240
                            rdi = var_300
                        else if (r12_1.b != 0)
                            r12_1 = var_240
                            int64_t rcx_77 = sx.q(r13_4)
                            void* rdx_40 = r12_1
                            void* rax_100 = *(r12_1 + 0x10)
                            
                            if (rax_100 != 0)
                                rdx_40 = rax_100
                            
                            *(rdx_40 + (rcx_77 << 2)) &= not.d(r14_1)
                            rcx_9 = zx.q(var_338_1)
                            rdi = var_300
                        else if (r15_1.b == 0)
                            r12_1 = var_240
                            rdi = var_300
                        else
                            rdi = var_300
                            void* rcx_78 = &rdi[0x2bb]
                            void* rax_103 = *(rcx_78 + 0x10)
                            r12_1 = &rdi[0x2b7]
                            
                            if (rax_103 != 0)
                                rcx_78 = rax_103
                            
                            int64_t rax_104 = sx.q(r13_4)
                            *(rcx_78 + (rax_104 << 2)) |= r14_1
                            rcx_9 = zx.q(var_338_1)
                        
                        zmm6 = zx.o(0)
                        r15_1 = var_238
                        r9_2 = var_318_1 + 1
                        r10_2 = var_337_1
                        var_318_1 = r9_2
                    while (r9_2 s< var_2f8_1)
                    
                    r11_1 = rcx
                
                if (rcx_9.b != 0)
                    int32_t rdx_32 = r8_3[1].d
                    
                    if (rdx_32 s> 0)
                        var_358 = rdx_32 - rax_20
                        int64_t* rcx_62 = *(*(*(r11_1 + 0xdb8) + (sx.q(rsi_1) << 3)) + 8)
                        (*(*rcx_62 + 0x68))(rcx_62, rdi)
                    
                    if (var_336_1 != 0)
                        goto label_1414361b9
                    
                    if (var_32d_1 != 0)
                        void* rcx_63 = &rdi[0x2bb]
                        void* rax_91 = *(rcx_63 + 0x10)
                        
                        if (rax_91 != 0)
                            rcx_63 = rax_91
                        
                        int64_t rax_92 = sx.q(r13_4)
                        *(rcx_63 + (rax_92 << 2)) |= r14_1
            else
                int64_t* rcx_11 = *(*(*(r11_1 + 0xdb8) + (rbx_2 << 3)) + 8)
                void* rax_23
                rax_23, rcx_9 = (*(*rcx_11 + 0x60))(rcx_11, rdi)
                var_250_1 = rax_23
                rcx_9.b = 1
                var_338_1 = 1
                int32_t rax_24 = *(rax_23 + 8)
                var_2f8_1 = rax_24
                
                if (rax_24 != 0)
                    r8_3 = var_2f0_1
                    
                    if (rax_24 s> *(r8_3 + 0xc))
                        sub_1405c5510(r8_3, rax_24)
                        r8_3 = var_2f0_1
                        rcx_9 = zx.q(var_338_1)
                    
                    r11_1 = rcx
                    r10_2 = var_337_1
                    goto label_141436206
                
            label_1414361b9:
                void* rax_25 = *(r12_1 + 0x10)
                void* rdx_8 = r12_1
                int64_t rcx_12 = sx.q(r13_4)
                
                if (rax_25 != 0)
                    rdx_8 = rax_25
                
                *(rdx_8 + (rcx_12 << 2)) &= not.d(r14_1)
            
            var_2a8 &= not.d(r14_1)
            sub_14059bdd0(&var_2b8)
            rsi_1 = var_2a4_1
            rdx_4 = var_308 + 1
            var_308 = rdx_4
            var_32c_1 = rsi_1
            
            if (rsi_1 s>= *(var_2b0 + 0x18))
                break
            
            r14_1 = var_2b4
            r13_4 = var_2b8
            var_314 = r14_1
        
        result = arg1
        result[9].d = 0

__security_check_cookie(rax_1 ^ &var_378)
return result
