// 函数: sub_141436f50
// 地址: 0x141436f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* rcx = *arg1
int64_t* rax_2 = arg1[2]
int64_t* rdi = arg1[1]
char rsi = arg1[4].b
int32_t r14 = arg1[3].d
*(rcx + 8)
uint64_t r12 = rdi[1]
int32_t rax_3 = *(arg1 + 0x1c)
char rax_4 = *(arg1 + 0x21)
int64_t* var_2b8 = rdi
int32_t var_2e4 = r14
float zmm0 = *(data_143f5b298 + 0x8f0)
uint64_t var_1d8 = r12
int32_t rax_6 = sub_14141f720()
int32_t rax_7 = *(r12 + 0x214)
char var_2a4 = 1
uint128_t zmm12 = *(*rdi + 0x38)
void* rcx_3 = r12 + 0x138
int32_t var_2a8 = rax_6
void* rax_8

if (sub_142391f10(rdi).b == 0 || *(rdi + 0xd72) != 0 || *(rdi[0x2b5] + 0x4c1) == 0)
    rax_8.b = 0
else
    rax_8.b = 1
    uint32_t rcx_6
    rcx_6.b = (*(rdi + 0x497c) u>> 4).b | rsi
    rcx_6.b &= 1
    var_2a4.d = rcx_6
    var_2a8 = rax_6 * 2

int64_t* r15 = arg1[5]
uint128_t zmm14 = zx.o(0)
uint64_t* rsi_1 = arg1[6]
uint64_t* rbx_1 = arg1[7]
*(arg1 + 0x22) = rax_8.b
int64_t* r13_1 = arg1[8]
int64_t* var_1e0 = r15
char var_2f4_1

if (not(data_143ed57ac.d f<= 0f) && data_1439b6dc0 s> 0)
    var_2f4_1 = 1

if (data_143ed57ac.d f<= 0f || data_1439b6dc0 s<= 0 || data_1439b6dbc s<= 0)
    var_2f4_1 = 0

uint128_t zmm0_1 = data_143ed57b4
int32_t rax_9 = *(rdi + 0x614)
zmm0_1.d = zmm0_1.d f* zmm0_1.d
int32_t rax_10 = rax_3
int32_t var_220 = zmm0_1.d
uint64_t var_260 = *(rdi + 0x60c)

if (rax_10 s> *(r15 + 0xc))
    sub_1405fdf40(r15, rax_10)
    rax_10 = rax_3

if (rax_10 s> *(rsi_1 + 0xc))
    sub_1405c5570(rsi_1, rax_10)
    rax_10 = rax_3

if (rax_10 s> *(rbx_1 + 0xc))
    sub_1405a51b0(rbx_1, rax_10)
    rax_10 = rax_3

if (rax_10 s> *(r13_1 + 0xc))
    sub_1405c5660(r13_1, rax_10)

void* rdx_5 = &rdi[0x2b7]
int32_t var_26c = r14
int32_t rbx_2 = *(rdx_5 + 0x18)
int32_t var_2cc = 0
char rcx_13 = r14.b & 0x1f
int32_t r13_3 = r14 s>> 5
int32_t rsi_2 = 1 << rcx_13
int32_t r11 = 0xffffffff << rcx_13
int32_t r8_1 = r14 & 0xffffffe0
int32_t var_280 = r13_3
int32_t var_2e8 = rsi_2
int32_t var_27c = rsi_2
int32_t var_270 = r11
int32_t var_268 = r8_1
int64_t* result

if (r14 == rbx_2)
    result = arg1
    result[9].d = 0
else
    void* rax_11 = *(rdx_5 + 0x10)
    void* r9_1 = rdx_5
    int32_t r14_1 = rbx_2
    int32_t var_2e4_1 = rbx_2
    
    if (rax_11 != 0)
        r9_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_2 - 1)
    int32_t rdx_9 = *(r9_1 + (sx.q(r13_3) << 2)) & r11
    int32_t var_26c_1
    
    if (rdx_9 != 0)
    label_1414371fa:
        rsi_2 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rsi_2)
        var_2e8 = rsi_2
        int32_t var_1a0_1 = temp0_1
        var_27c = rsi_2
        int32_t rax_16
        
        if (rsi_2 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_1
        
        int32_t rax_17 = r8_1 - rax_16 + 0x1f
        
        if (rax_17 s> rbx_2)
            rax_17 = rbx_2
        
        r14_1 = rax_17
        var_2e4_1 = rax_17
        var_26c_1 = rax_17
    else
        while (true)
            int64_t rcx_15 = sx.q(r13_3)
            r8_1 += 0x20
            r13_3 += 1
            int32_t var_268_1 = r8_1
            var_280 = r13_3
            
            if (rcx_15.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_26c_1 = rbx_2
                break
            
            rdx_9 = *(r9_1 + (rcx_15 << 2) + 4)
            var_270 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_1414371fa
    
    int32_t r9_2 = 0
    
    if (r14_1 s>= rbx_2)
        result = arg1
        result[9].d = 0
    else
        uint32_t zmm6[0x4] = zx.o(0)
        uint32_t zmm7[0x4]
        uint32_t var_48_1[0x4] = zmm7
        uint32_t zmm8[0x4]
        uint32_t var_58_1[0x4] = zmm8
        uint128_t zmm9
        uint128_t var_68_1 = zmm9
        uint128_t zmm10 = var_260.d
        uint128_t zmm11 = var_260:4.d
        int128_t zmm13 = 0x3f800000
        uint32_t zmm15[0x4] = 0x7fffffff
        int32_t var_2d4_1 = zmm11.d
        int32_t var_230_1 = rax_9.d
        int32_t var_2d0_1 = zmm10.d
        
        while (r9_2 s< rax_3)
            int32_t rcx_17 = r15[1].d
            void* r11_1 = rcx
            int32_t rcx_18 = *(r15 + 0xc)
            void* var_228_1 = nullptr
            int64_t rbx_3 = sx.q(r14_1)
            int64_t* r8_3 = arg1[0xa]
            int32_t var_2c4_1 = 1
            char rcx_19 = 0
            char var_2f8_1 = 0
            char rax_19 = *(rbx_3 + *(r11_1 + 0xe18))
            int32_t rdx_11 = r8_3[1].d
            char r10_1 = rax_19 & 1
            char var_2f7_1 = r10_1
            int64_t* var_2c0_1 = r8_3
            
            if ((rax_19 & 0x10) == 0 || data_1439b6db4 == 0 || (*(rdi + 0x497c) & 0x20) != 0)
            label_1414373c9:
                char var_2f2_1 = 1
                char var_2f6_1 = 1
                int32_t rbx_4 = *(*(r11_1 + 0xe38) + (rbx_3 << 2))
                int32_t r9_3 = 0
                int32_t var_234_1 = rbx_4
                int32_t var_2dc_1 = 0
                int32_t var_318
                
                if (var_2c4_1 s> 0)
                    do
                        int32_t var_1cc_1 = r9_3
                        int32_t* rdi_2
                        
                        if (*(r12 + 0x1250) == *(r12 + 0x127c))
                        label_141437484:
                            rdi_2 = nullptr
                        else
                            void* r8_4 = r12 + 0x1280
                            void* rdx_16 = *(r8_4 + 8)
                            
                            if (rdx_16 != 0)
                                r8_4 = rdx_16
                            
                            int32_t rax_32 = *(r8_4 + (((rbx_4.q u>> 0x34 ^ sx.q(rbx_4))
                                & (sx.q(*(r12 + 0x1290)) - 1)) << 2))
                            
                            if (rax_32 == 0xffffffff)
                            label_141437484_1:
                                rdi_2 = nullptr
                            else
                                while (true)
                                    rdi_2 = sx.q(rax_32) * 0x70 + *(r12 + 0x1248)
                                    int32_t rdx_17 = *rdi_2
                                    int32_t var_1c4_1 = rdi_2[0x17]
                                    
                                    if (rdx_17 == rbx_4 && (rdx_17.q u>> 0x20).d == r9_3)
                                        break
                                    
                                    rax_32 = rdi_2[0x1a]
                                    
                                    if (rax_32 == 0xffffffff)
                                        goto label_141437484_2
                                
                                if (rax_32 == 0xffffffff)
                                label_141437484_2:
                                    rdi_2 = nullptr
                        
                        r12.b = 0
                        r15.b = 0
                        char rax_70
                        int32_t rsi_7
                        uint128_t zmm1
                        float zmm2
                        uint32_t zmm3[0x4]
                        uint32_t zmm4_1[0x4]
                        int64_t zmm5_1
                        
                        if (rdi_2 != 0)
                            int32_t rax_49 = *(var_2b8 + 0x497c)
                            
                            if ((rax_49.b & 0x10) != 0)
                                r15.b = (rax_49 u>> 5).b & 1
                            else if (r10_1 == 0)
                                r15.b = 1
                            else
                                int32_t var_310
                                char var_308
                                
                                if (rax_4 == 0)
                                    var_260 = 0
                                    char var_2f5
                                    var_318.q = &var_2f5
                                    var_2f5 = 0
                                    int64_t rax_52
                                    rax_52, r9_3 =
                                        sub_1414559e0(rdi_2, rax_7, rax_6, var_2a8, var_318)
                                    
                                    if (rax_52 == 0)
                                        void* rcx_49 = data_143f5b298
                                        
                                        if (rax_6 s> 1 || data_1439c7a10 s< 0x7fffffff)
                                            uint8_t rax_56 = rdi_2[0x18].b
                                            r12.b = rax_56 u>> 6
                                            r12.b &= 1
                                            r15 = zx.q(rax_56 u>> 7)
                                        else
                                            r15.b = 1
                                            zmm0_1.d = rdi_2[0x14].d f+ *(rcx_49 + 0x8f0)
                                            r12.b = zmm12.d f> zmm0_1.d
                                        
                                        int32_t rax_57
                                        
                                        if (r12.b == 0)
                                            rax_57 = *(rcx_49 + 0x8f4)
                                        else
                                            rax_57 = 0
                                        
                                        rdi_2[0x16] = rax_57
                                    else
                                        int64_t* rcx_48 = data_143f0f180
                                        r9_3.b = 1
                                        char rax_53
                                        rax_53, r9_3 = (*(*rcx_48 + 0x328))(rcx_48, rax_52, 
                                            &var_260, r9_3, 0xffffffff, var_310, var_308)
                                        
                                        if (rax_53 != 0)
                                            uint32_t rax_54 = var_260.d
                                            r12.b = rax_54 == 0
                                            
                                            if (rax_54 == 0)
                                                rdi_2[0x16] = zmm14.d
                                                r15.b = var_2f5 == 0
                                            else
                                                zmm0_1.d = float.s(zx.q(rax_54))
                                                zmm0_1.d = zmm0_1.d f* var_2b8[0xa12].d
                                                rdi_2[0x16] = zmm0_1.d
                                                r15.b = var_2f5 == 0
                                else if (sub_141421750(rcx_3, rdi_2[0x11]) != 0)
                                    char rax_51
                                    rax_51, r9_3 = sub_141421760(rcx_3, rdi_2[0x13])
                                    r15.b = 1
                                    r12.b = rax_51 == 0
                                
                                if (data_143ed57a0 != 0 && rax_2 != 0 && r12.b != 0)
                                    int128_t* rsi_11
                                    
                                    if (var_2f8_1 == 0)
                                        rsi_11 = sx.q(r14_1) * 0x1c + *(rcx + 0xe28)
                                    else
                                        rsi_11 = sx.q(var_2dc_1) * 0x1c + *var_228_1
                                    
                                    int32_t var_2d8 = 0xff32ff32
                                    void var_168
                                    sub_140acc920(&var_168, &var_2d8)
                                    zmm6 = *rsi_11
                                    zmm4_1 = *(rsi_11 + 0xc)
                                    zmm1 = *(rsi_11 + 0x14)
                                    zmm3 = rsi_11[1].d
                                    zmm4_1[0] = zmm4_1[0] f+ zmm6[0]
                                    zmm2 = *(rsi_11 + 8)
                                    zmm6[0] = zmm6[0] f- zmm4_1[0]
                                    zmm5_1 = *(rsi_11 + 4)
                                    float zmm0_2[0x4] = zmm1
                                    zmm0_2[0] = zmm0_2[0] + zmm2
                                    var_308 = 0
                                    zmm3[0] = zmm3[0] f+ zmm5_1.d
                                    var_310 = zmm14.d
                                    zmm5_1.d = zmm5_1.d f- zmm3[0]
                                    var_318 = zmm14.d
                                    char var_184_1 = 1
                                    float var_16c_1 = zmm0_2[0]
                                    r9_3.b = 1
                                    int64_t var_19c = (_mm_unpacklo_ps(zmm6, zmm5_1)).q
                                    float var_194_1 = zmm2 f- zmm1.d
                                    int64_t var_190_1 = (_mm_unpacklo_ps(zmm4_1, zmm3[0].q)).q
                                    float var_188_1 = var_16c_1
                                    zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_14229ae30(rax_2, 
                                        &var_19c, &var_168, r9_3.b, var_318, var_310, var_308)
                                    zmm6 = zx.o(0)
                            
                            rsi_7 = rax_7
                            
                            if (var_2a4 != 0)
                                int64_t* rax_66 =
                                    *(((zx.q(mods.dp.d(sx.q(rsi_7), rax_6)) + 1) << 4) + rdi_2)
                                
                                if (rax_66 != 0 && *rax_66 != 0)
                                    int64_t rsi_13 = sx.q(rsi_1[1].d)
                                    int32_t rax_68 = (rsi_13 + 1).d
                                    rsi_1[1].d = rax_68
                                    
                                    if (rax_68 s> *(rsi_1 + 0xc))
                                        sub_1405a4d70(rsi_1)
                                    
                                    rsi_7 = rax_7
                                    *(*rsi_1 + (rsi_13 << 3)) = rdi_2
                            
                            rax_70 = var_2f7_1
                        else
                            if (rcx_17 s< rcx_18)
                                int32_t var_148 = rbx_4
                                void var_140
                                void* r14_2 = &var_140
                                int32_t rbx_5 = (rdi_2 + 1).d
                                
                                for (int64_t i = 3; i != 0; )
                                    int128_t var_248 = zx.o(0)
                                    i -= 1
                                    int64_t* rax_34 = j_sub_140a82f30(0x14)
                                    int64_t** rsi_5 = rax_34
                                    *(r14_2 + 8) = rax_34
                                    *rax_34 = 0
                                    rax_34[1] = 0
                                    rax_34[2].d = rbx_5
                                    *r14_2 = &rax_34[2]
                                    
                                    if (rsi_5 != &var_248)
                                        int64_t* rdi_3 = *rsi_5
                                        *rsi_5 = var_248.q
                                        var_248.q = 0
                                        
                                        if (rdi_3 != 0)
                                            rdi_3[1].d -= 1
                                            
                                            if (rdi_3[1].d == rbx_5)
                                                char rax_36
                                                
                                                if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                                                    rax_36 = sub_1405949a0()
                                                
                                                if (rdi_3[2].b != 0
                                                        || (data_143f0f1d0 == 0 && rax_36 != 0))
                                                    (**rdi_3)(rdi_3, zx.q(rbx_5))
                                                else
                                                    bool z_1
                                                    
                                                    if (0 == *(rdi_3 + 0xc))
                                                        *(rdi_3 + 0xc) = rbx_5
                                                        z_1 = true
                                                    else
                                                        *(rdi_3 + 0xc)
                                                        z_1 = false
                                                    
                                                    if (z_1)
                                                        int32_t rax_38 = sub_140a20af0()
                                                        uint64_t rdx_18 = zx.q(rax_38)
                                                        void* const rax_39
                                                        
                                                        if (rax_38 != 0)
                                                            rax_39 = *((rdx_18 u>> 0xe << 3) +
                                                                &data_143cf0bf8)
                                                                + (zx.q(rdx_18.d) & 0x3fff) * 0x18
                                                        else
                                                            rax_39 = nullptr
                                                        
                                                        *(rax_39 + 8) = rdi_3
                                                        sub_1405a42f0(&data_143f02390, rdx_18.d)
                                    
                                    rsi_5[1] = var_248:8.q
                                    int64_t* rcx_39 = var_248:8.q
                                    
                                    if (rcx_39 != 0 && var_248.q != 0)
                                        (*(*rcx_39 + 0x10))(rcx_39, &var_248)
                                        var_248:8.q = 0
                                    
                                    sub_14081c9d0(&var_248)
                                    r14_2 += 0x10
                                
                                r12 = nullptr
                                rbx_4 = var_234_1
                                int32_t var_ec_1 = var_2dc_1
                                int64_t rdi_4 = sx.q(var_1e0[1].d)
                                int64_t var_104_1 = -1
                                int64_t var_fc_1 = 0
                                int64_t var_f4_1 = 0
                                int32_t rax_47 = (rdi_4 + 1).d
                                int16_t var_e8_1 = 0
                                int16_t var_e5_1 = 0
                                int64_t var_110 = 0
                                char var_e6_1 = 0
                                int32_t var_108_1 = 0
                                var_1e0[1].d = rax_47
                                
                                if (rax_47 s> *(var_1e0 + 0xc))
                                    sub_1405fde00(var_1e0)
                                
                                int64_t rdi_5 = rdi_4 * 0x68
                                sub_1414419b0(*var_1e0 + rdi_5, &var_148)
                                rdi_2 = rdi_5 + *var_1e0
                                int64_t* r14_3 = &var_110
                                int64_t i_2 = 3
                                int64_t i_1
                                
                                do
                                    r14_3 -= 0x10
                                    zmm6 = sub_1413de930(r14_3)
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                                r14_1 = var_26c_1
                                r13_3 = var_280
                                var_2e4_1 = r14_1
                                var_2e8 = var_27c
                            
                            rax_70 = var_2f7_1
                            rsi_7 = rax_7
                            r15.b = rax_70 ^ 1
                        
                        if (rdi_2 != 0)
                            int32_t r14_4
                            
                            if (rsi == 0 || rax_70 == 0)
                                r14_4 = rax_7
                            else
                                if (var_2f4_1 == 0)
                                    zmm1 = zmm6
                                else
                                    char rdx_32 = rdi_2[0x18].b
                                    char rcx_57 = rdx_32
                                    
                                    if ((rdx_32 & 0x3f) == 0
                                            && rsi_7 - rdi_2[0x12] u> data_1439b6dbc)
                                        rcx_57 = ((rcx_57 ^ data_1439b6dc0.b) & 0x3f) ^ rdx_32
                                        rdi_2[0x18].b = rcx_57
                                    
                                    char rdx_33 = rcx_57 & 0x3f
                                    
                                    if (rdx_33 != 0)
                                        rdi_2[0x18].b = (((rcx_57 - 1) ^ rcx_57) & 0x3f) ^ rcx_57
                                    
                                    if (rdx_33 == 0)
                                        zmm1 = zmm6
                                    else
                                        zmm1 = _mm_cvtps_pd(data_143ed57ac.q)
                                
                                char rdx_35 = var_2f8_1
                                int64_t* rcx_59
                                
                                if (rdx_35 == 0)
                                    rcx_59 = sx.q(r14_1) * 0x1c + *(rcx + 0xe28)
                                else
                                    rcx_59 = sx.q(var_2dc_1) * 0x1c + *var_228_1
                                
                                zmm0_1.q = _mm_cvtps_pd(data_143ed57b0.q).q f+ zmm1.q
                                zmm3 = _mm_cvtpd_ps(zmm0_1)
                                zmm0_1 = zx.o(*rcx_59)
                                zmm6 = zmm3
                                zmm7 = zmm3
                                zmm6[0] = zmm6[0] f+ *(rcx_59 + 0xc)
                                zmm7[0] = zmm7[0] f+ rcx_59[2].d
                                zmm8 = zmm3
                                zmm8[0] = zmm8[0] f+ *(rcx_59 + 0x14)
                                zmm3[0] = zmm3[0] f+ rcx_59[3].d
                                uint64_t var_2a0 = zmm0_1.q
                                zmm9 = var_2a0.d
                                int32_t var_298_1 = rcx_59[1].d
                                zmm1.d = zmm9.d f- zmm10.d
                                uint32_t var_294_1 = zmm6[0]
                                zmm10 = var_2a0:4.d
                                uint32_t var_290_1 = zmm7[0]
                                zmm2 = zmm10.d f- zmm11.d
                                uint32_t var_28c_1 = zmm8[0]
                                zmm11 = var_298_1
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0_1.d = zmm11.d f- var_230_1
                                uint32_t var_288_1 = zmm3[0]
                                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                
                                if (zmm2 * zmm2 f+ zmm1.d f+ zmm0_1.d f< var_220)
                                label_141437d75:
                                    r12.b = 0
                                    r15.b = 1
                                label_141437d7b:
                                    zmm11 = var_2d4_1
                                    zmm10 = var_2d0_1
                                    r14_4 = rax_7
                                else
                                    float (* rax_78)[0x4]
                                    
                                    if (var_2b8[0x1a2].b == 0)
                                        bool c_1
                                        
                                        if (zmm13.d f> *(var_2b8 + 0x2bc))
                                            zmm3[0] f- 1048576f
                                            c_1 = zmm3[0] f< 1048576f
                                        else
                                            float var_158[0x4]
                                            rax_78 = sub_1422f9c00(var_2b8, &var_158, &var_2a0)
                                            zmm1.d = var_288_1.d f* var_2b8[0x55].d
                                            rdx_35 = var_2f8_1
                                            zmm11 = var_298_1
                                            zmm10 = var_2a0:4.d
                                            zmm0_1.d = (*rax_78)[2].d f- zmm1.d
                                            zmm9 = var_2a0.d
                                            zmm0_1.d f- zmm13.d
                                            c_1 = zmm0_1.d f< zmm13.d
                                        
                                        rax_78.b = c_1
                                    else
                                        zmm3 = *(var_2b8 + 0xd24)
                                        zmm2 = var_2b8[0x1a4].d
                                        zmm4_1 = var_2b8[0x1a5].d
                                        zmm6[0] = zmm6[0] f* zmm2
                                        zmm5_1.d = zmm9.q.d f* zmm2
                                        zmm6 = _mm_and_ps(zmm6, zmm15)
                                        zmm0_1.d = zmm10.d f* zmm3[0]
                                        zmm7[0] = zmm7[0] f* zmm3[0]
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm1.d = zmm11.d f* zmm4_1[0]
                                        zmm7 = _mm_and_ps(zmm7, zmm15)
                                        zmm8[0] = zmm8[0] f* zmm4_1[0]
                                        zmm6[0] = zmm6[0] f+ zmm7[0]
                                        zmm5_1.d = zmm5_1.d f+ zmm1.d
                                        zmm8 = _mm_and_ps(zmm8, zmm15)
                                        zmm6[0] = zmm6[0] f+ zmm8[0]
                                        zmm5_1.d = zmm5_1.d f- *(var_2b8 + 0xd2c)
                                        rax_78.b = (zmm6 ^ data_142d3f780)[0] f> zmm5_1.d
                                    
                                    if (rax_78.b == 0)
                                        goto label_141437d75
                                    
                                    r14_4 = rax_7
                                    rdi_2[0x11] = r14_4
                                    
                                    if (rax_4 == 0)
                                        if (rdx_35 != 0 || (rax_19 & 4) == 0)
                                            r14_4.b = 0
                                        label_141437cde:
                                            int64_t* rcx_68 = r13_1
                                            zmm9.d = zmm9.d f+ var_2b8[0xc0].d
                                            zmm10.d = zmm10.d f+ *(var_2b8 + 0x604)
                                            zmm11.d = zmm11.d f+ var_2b8[0xc1].d
                                            int64_t rsi_17 = sx.q(rcx_68[1].d)
                                            int32_t rax_85 = (rsi_17 + 1).d
                                            int32_t var_210_1 = zmm9.d
                                            int32_t var_20c_1 = zmm10.d
                                            int32_t var_208_1 = zmm11.d
                                            uint64_t var_1c0_1 = var_294_1.q
                                            rcx_68[1].d = rax_85
                                            
                                            if (rax_85 s> *(rcx_68 + 0xc))
                                                sub_1405c4ec0(rcx_68)
                                                rcx_68 = r13_1
                                            
                                            int64_t rcx_69 = *rcx_68
                                            int64_t rdx_38 = rsi_17 * 5
                                            *(rcx_69 + (rdx_38 << 3)) = rdi_2
                                            *(rcx_69 + (rdx_38 << 3) + 8) = var_210_1.q
                                            *(rcx_69 + (rdx_38 << 3) + 0x10) = var_208_1
                                            *(rcx_69 + (rdx_38 << 3) + 0x14) = var_1c0_1
                                            *(rcx_69 + (rdx_38 << 3) + 0x1c) = var_28c_1
                                            *(rcx_69 + (rdx_38 << 3) + 0x20) = r14_4.b
                                        else
                                            if (r12.b != 0)
                                                r14_4.b = 1
                                                goto label_141437cde
                                            
                                            r14_4.b = 0
                                            
                                            if (r15.b == 0)
                                                goto label_141437cde
                                            
                                            uint64_t rcx_66 = zx.q(data_143ecf150)
                                            
                                            if (rcx_66.d u>= 0xdf3)
                                                rcx_66 = 0
                                            
                                            data_143ecf150 = rcx_66.d
                                            zmm2 = (&data_143ecf154)[rcx_66]
                                            bool cond:13_1 = data_1439c7a14 == 0
                                            data_143ecf150 = rcx_66.d + 1
                                            bool cond:14_1
                                            
                                            if (cond:13_1)
                                                zmm0_1.d = zmm12.d f- rdi_2[0x14]
                                                cond:14_1 = zmm0_1.d f> zmm2 * 0.125f * zmm0
                                            else
                                                zmm1 = *(data_143f5b298 + 0x8f4)
                                                zmm0_1.d = rdi_2[0x16].d f/ zmm1.d
                                                zmm0_1.d = _mm_max_ss(zmm0_1.d, zmm13.d).d f* zmm2
                                                cond:14_1 = zmm1.d f> zmm0_1.d
                                            
                                            uint64_t rax_83
                                            rax_83.b = cond:14_1
                                            
                                            if (rax_83.b != 0)
                                                goto label_141437cde
                                        
                                        goto label_141437d7b
                                    
                                    int64_t rsi_16 = sx.q(rbx_1[1].d)
                                    int32_t rax_79 = (rsi_16 + 1).d
                                    rbx_1[1].d = rax_79
                                    
                                    if (rax_79 s> *(rbx_1 + 0xc))
                                        sub_1405c4e40(rbx_1)
                                    
                                    zmm11 = var_2d4_1
                                    zmm10 = var_2d0_1
                                    int64_t rcx_65 = (rsi_16 << 5) + *rbx_1
                                    *rcx_65 = rdi_2
                                    *(rcx_65 + 8) = var_2a0
                                    *(rcx_65 + 0x10) = var_298_1
                                    *(rcx_65 + 0x14) = var_294_1.q
                                    *(rcx_65 + 0x1c) = var_28c_1
                            
                            rdi_2[0x15] = zmm12.d
                            
                            if (r12.b == 0 && r15.b != 0)
                                rdi_2[0x14] = zmm12.d
                            
                            rdi_2[0x18].b &= 0x3f
                            char rcx_70 = ((r12.b << 6 | rdi_2[0x18].b) & 0x7f) | r15.b << 7
                            rdi_2[0x12] = r14_4
                            rdi_2[0x18].b = rcx_70
                        
                        rcx_19 = var_2f8_1
                        r8_3 = var_2c0_1
                        
                        if (rcx_19 != 0)
                            char* rdi_6 = sx.q(r8_3[1].d)
                            int32_t rax_89 = (&rdi_6[1]).d
                            r8_3[1].d = rax_89
                            
                            if (rax_89 s> *(r8_3 + 0xc))
                                sub_140679a80(r8_3)
                                r8_3 = var_2c0_1
                            
                            rdi_6[*r8_3] = r12.b
                            char rcx_72 = 0
                            char temp10_1 = r12.b
                            
                            if (temp10_1 != 0)
                                rcx_72 = var_2f6_1
                            
                            var_2f6_1 = rcx_72
                            
                            if (temp10_1 != 0 || r15.b == 0)
                                var_2f2_1 = 0
                            
                            rcx_19 = var_2f8_1
                            rsi_2 = var_2e8
                            rdi = var_2b8
                        else if (r12.b != 0)
                            rsi_2 = var_2e8
                            void* rdx_43 = rdx_5
                            void* rax_97 = *(rdx_5 + 0x10)
                            int64_t rcx_79 = sx.q(r13_3)
                            
                            if (rax_97 != 0)
                                rdx_43 = rax_97
                            
                            *(rdx_43 + (rcx_79 << 2)) &= not.d(rsi_2)
                            rcx_19 = var_2f8_1
                            rdi = var_2b8
                        else if (r15.b == 0)
                            rsi_2 = var_2e8
                            rdi = var_2b8
                        else
                            rdi = var_2b8
                            rsi_2 = var_2e8
                            void* rcx_80 = &rdi[0x2bb]
                            void* rax_100 = *(rcx_80 + 0x10)
                            
                            if (rax_100 != 0)
                                rcx_80 = rax_100
                            
                            int64_t rax_101 = sx.q(r13_3)
                            *(rcx_80 + (rax_101 << 2)) |= rsi_2
                            rcx_19 = var_2f8_1
                        
                        zmm6 = zx.o(0)
                        r14_1 = var_2e4_1
                        r9_3 = var_2dc_1 + 1
                        r12 = var_1d8
                        r10_1 = var_2f7_1
                        var_2dc_1 = r9_3
                    while (r9_3 s< var_2c4_1)
                    
                    r15 = var_1e0
                    r11_1 = rcx
                
                if (rcx_19 != 0)
                    int32_t rdx_40 = r8_3[1].d
                    
                    if (rdx_40 s> 0)
                        var_318 = rdx_40 - rdx_11
                        int64_t* rcx_75 = *(*(*(r11_1 + 0xdb8) + (sx.q(r14_1) << 3)) + 8)
                        (*(*rcx_75 + 0x68))(rcx_75, rdi)
                    
                    if (var_2f6_1 != 0)
                        goto label_141437375
                    
                    if (var_2f2_1 != 0)
                        void* rcx_76 = &rdi[0x2bb]
                        void* rax_94 = *(rcx_76 + 0x10)
                        
                        if (rax_94 != 0)
                            rcx_76 = rax_94
                        
                        int64_t rax_95 = sx.q(r13_3)
                        *(rcx_76 + (rax_95 << 2)) |= rsi_2
            else
                int64_t* rcx_21 = *(*(*(r11_1 + 0xdb8) + (rbx_3 << 3)) + 8)
                void* rax_22 = (*(*rcx_21 + 0x60))(rcx_21, rdi)
                var_228_1 = rax_22
                rcx_19 = 1
                var_2f8_1 = 1
                int32_t rax_23 = *(rax_22 + 8)
                var_2c4_1 = rax_23
                
                if (rax_23 != 0)
                    r8_3 = var_2c0_1
                    
                    if (rax_23 s> *(r8_3 + 0xc))
                        sub_1405c5510(r8_3, rax_23)
                        r8_3 = var_2c0_1
                        rcx_19 = var_2f8_1
                    
                    r11_1 = rcx
                    r10_1 = var_2f7_1
                    goto label_1414373c9
                
            label_141437375:
                void* rax_24 = rdi[0x2b9]
                void* rdx_14 = &rdi[0x2b7]
                int64_t rcx_22 = sx.q(r13_3)
                
                if (rax_24 != 0)
                    rdx_14 = rax_24
                
                *(rdx_14 + (rcx_22 << 2)) &= not.d(rsi_2)
            
            var_270 &= not.d(rsi_2)
            sub_14059bdd0(&var_280)
            r14_1 = var_26c_1
            r9_2 = var_2cc + 1
            var_2cc = r9_2
            var_2e4_1 = r14_1
            
            if (r14_1 s>= *(rdx_5 + 0x18))
                break
            
            rsi_2 = var_27c
            r13_3 = var_280
            var_2e8 = rsi_2
        
        result = arg1
        result[9].d = 0

__security_check_cookie(rax_1 ^ &var_338)
return result
