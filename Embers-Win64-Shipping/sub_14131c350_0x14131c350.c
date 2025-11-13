// 函数: sub_14131c350
// 地址: 0x14131c350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
int64_t* var_2e8 = arg4
char var_384
char* var_370 = &var_384
void*** (* var_378)() = j_sub_140597fc0
char var_268 = 0
int64_t* r14 = arg4
var_384 = 0
int64_t* rax_3 = sub_140a756e0(&var_378, &data_143958018) + 0x10
int64_t* var_228 = rax_3
int64_t rcx_1 = *rax_3
int64_t rcx_2 = rax_3[2]
char var_210 = 0
int64_t result_1 = rax_3[3]
rax_3[3] = &var_228
int64_t* rax_4 = var_228
rax_4[4].d += 1
void var_198
sub_141385550(&var_198, arg2, r14)
void var_338
void var_168
float zmm0 = sub_1412ff950(&var_338, arg2, &var_168, r14)
int32_t rax_5 = r14[0x2a4].d
int64_t var_248 = 0
int32_t var_240 = 0
int64_t var_1f8 = 0
int32_t var_1f0 = 0
void*** var_278 = nullptr
int32_t var_270 = 0

if (rax_5 == 2)
    void* rbx_1 = r14[1]
    
    if (rbx_1 != 0)
        int64_t* rcx_5 = *(rbx_1 + 0xbb0)
        int64_t* rdi_1 = *(rbx_1 + 0xbb8)
        *(rbx_1 + 0xbb8) = rcx_5
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x30))()
        
        if (rdi_1 != 0)
            (*(*rdi_1 + 0x38))(rdi_1)
        
        int64_t* rcx_7 = *(rbx_1 + 0xbc0)
        int64_t* rdi_2 = *(rbx_1 + 0xbc8)
        *(rbx_1 + 0xbc8) = rcx_7
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x30))()
        
        if (rdi_2 != 0)
            (*(*rdi_2 + 0x38))(rdi_2)

int64_t* rcx_9 = *(*r14 + 0x18)
void var_1a8
(*(*rcx_9 + 0x18))(rcx_9, &var_1a8)
int32_t r12_1 = r14[0x2b4].d - r14[0x2b3].d
int32_t rdi_4 = *(r14 + 0x15a4) - *(r14 + 0x159c)
uint128_t var_2f8 = *(r14 + 0x1598)
int32_t var_25c = rdi_4
int64_t rbx_2 = data_143ec4fdc
char var_383_1

if (rbx_2.d == r12_1)
    var_383_1 = 0

if (rbx_2.d != r12_1 || (rbx_2 u>> 0x20).d != rdi_4)
    var_383_1 = 1

int64_t* rcx_11 = *(*r14 + 0x18)
(*(*rcx_11 + 0x20))(rcx_11)
int32_t rax_16
int64_t rdx_3

if (not(zmm0 != 1f) && *(r14 + 0xd72) != 0)
    rax_16 = sub_1422e5a30(r14)
    
    if (rax_16 != 0xb && rax_16 != 0x1e)
        rdx_3 = sx.q(rax_16) * 5

if (zmm0 != 1f || *(r14 + 0xd72) == 0 || (rax_16 != 0xb && rax_16 != 0x1e && (
        *(&data_143f025f0 + (rdx_3 << 2)) != data_143f025b8
        || (*((rdx_3 << 2) + &data_143f025fc) & 1) == 0)))
    var_384 = 0
else
    var_384 = 1

TEB* gsbase
void*** (* r12_2)() = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void*** (* var_200)() = r12_2

if (data_143eb9250 s> *(r12_2 + 0x14))
    _Init_thread_header(&data_143eb9250)
    
    if (data_143eb9250 == 0xffffffff)
        int64_t* rcx_237 = data_143db18d0
        
        if (rcx_237 == 0)
            sub_140a53c40()
            rcx_237 = data_143db18d0
        
        int64_t r8_59
        r8_59.b = 1
        int64_t* rax_309 = (*(*rcx_237 + 0xb0))(rcx_237, u"r.Mobile.TonemapperFilm", r8_59)
        int64_t rax_310
        
        if (rax_309 == 0)
            rax_310 = 0
        else
            int64_t rdx_115 = *rax_309
            rax_310 = (*(rdx_115 + 0x58))(rax_309, rdx_115)
        
        data_143eb9248 = rax_310
        _Init_thread_footer(&data_143eb9250)

char var_381_1
void* var_328

if (*(var_328 + 0x1548) != 1)
    var_381_1 = 0
else if (sub_1422eb710() == 0 || data_1439c7a69 == 0)
    var_381_1 = 0
else
    void* rax_22 = data_143eb9248
    
    if (rax_22 == 0)
        var_381_1 = 0
    else
        var_381_1 = 1
        
        if (*(rax_22 + 4) == 0)
            var_381_1 = 0

int32_t rax_23 = sub_141312a10(r14)
int32_t r13 = rax_23
char rax_24 = sub_14135d220(r14)
char rsi_1 = rax_24
void* rax_25

if (data_143eb9260 s> *(r12_2 + 0x14))
    int64_t r8_60
    rax_25, r8_60 = _Init_thread_header(&data_143eb9260)
    
    if (data_143eb9260 == 0xffffffff)
        int64_t* rcx_239 = data_143db18d0
        
        if (rcx_239 == 0)
            sub_140a53c40()
            rcx_239 = data_143db18d0
        
        r8_60.b = 1
        int64_t* rax_312 = (*(*rcx_239 + 0xb0))(rcx_239, u"r.MobileMSAA", r8_60)
        int64_t rax_313
        
        if (rax_312 == 0)
            rax_313 = 0
        else
            int64_t rdx_116 = *rax_312
            rax_313 = (*(rdx_116 + 0x58))(rax_312, rdx_116)
        
        data_143eb9258 = rax_313
        _Init_thread_footer(&data_143eb9260)

if (data_143f0f1b5 == 0)
    rax_25.b = 0
else
    int32_t rax_26 = sub_1422e5a30(r14)
    int64_t rdx_4
    
    if (rax_26 != 0xb && rax_26 != 0x1e)
        rdx_4 = sx.q(rax_26) * 5
    
    if (rax_26 != 0xb && rax_26 != 0x1e && (*(&data_143f025f0 + (rdx_4 << 2)) != data_143f025b8
            || (*((rdx_4 << 2) + &data_143f025fc) & 1) == 0))
        rax_25.b = 0
    else
        rax_25 = data_143eb9258
        
        if (rax_25 == 0 || *(rax_25 + 4) s<= 1)
            rax_25.b = 0
        else
            rax_25.b = 1

char var_3a6 = rax_25.b
int64_t var_238 = 0
int32_t var_230 = 0
char var_385

if (sub_141356ed0(r14) f<= 0f)
    r12_2.b = 0
    var_385 = 0
else
    r12_2.b = 1
    
    if ((r14[0x1c0].b & 1) == 0 || *(var_328 + 0x1548) s< 1)
        var_385 = 1
    else
        var_385 = 0

char var_3c8
char var_3c0
int128_t* var_3b8
void**** var_3b0
char var_3a7
void*** var_398
int128_t var_368
void*** (* var_358)()
void*** var_348
int32_t var_340
int64_t* var_330
int128_t var_310
int128_t var_2c8
int128_t var_288
int64_t (* var_128)(int64_t arg1, int64_t* arg2, int64_t* arg3)
int32_t var_118
int32_t var_108
int64_t var_f8

if ((*(*r14 + 0x28) & 1) != 0)
    int32_t rax_29 = sub_1422e57b0()
    char r13_1 = r14[0xa1a].b
    rax_29.b = rax_29 == 2
    var_3a7 = r13_1
    float temp0_1 = r14[0x1ff].d
    0f - temp0_1
    bool rdi_5 = 0f < temp0_1
    bool var_387_1 = rdi_5
    char var_388_1
    
    if (rsi_1 != 0 && rax_23 == 1)
        var_388_1 = rax_23.b
    
    if (rsi_1 == 0 || rax_23 != 1 || not(*(r14 + 0x111c) f> r14[0x223].d))
        var_388_1 = 0
    
    char var_386_1
    
    if (rsi_1 == 0 || rax_23 != 0 || *(r14 + 0x111c) f<= r14[0x223].d)
        var_386_1 = 0
    else
        var_386_1 = 1
    
    if (rax_29.b != 0 && sub_1422eb710() != 0)
        char var_3a8
        
        if (sub_141270fa0(r14) != 0)
            var_3a8 = 0
            char* var_370_1 = &var_3a8
            var_378 = j_sub_140597fc0
            int64_t* rax_33 =
                sub_14081d830(0xc8, sub_140a756e0(&var_378, &data_143958018) + 0x10, 1, 0)
            int64_t* rdi_6 = rax_33
            
            if (rax_33 == 0)
                rdi_6 = nullptr
            else
                rax_33[1].d = 0
                rdi_6[2] = 0
                rdi_6[3].d = 0
                rdi_6[4] = 1
                __builtin_memset(&rdi_6[5], 0, 0x18)
                *(rdi_6 + 0x4c) = 0
                *(rdi_6 + 0x54) = 0
                rdi_6[0xb].w = 0
                *(rdi_6 + 0x6a) = 0
                rdi_6[8] = 1
                rdi_6[9].w = 1
                rdi_6[0xc] = u"UnknownTexture"
                rdi_6[0xd].w = 1
                rdi_6[0xe] = 0
                rdi_6[0xf].d = 0
                __builtin_memset(&rdi_6[0x10], 0, 0x38)
                *rdi_6 = &data_142f5c6c0
                rdi_6[0x17] = rbx_2
                rdi_6[0x18] = arg3
            
            int64_t r15_1 = sx.q(var_330[1].d)
            int32_t rax_34 = (r15_1 + 1).d
            var_330[1].d = rax_34
            
            if (rax_34 s> *(var_330 + 0xc))
                sub_1405a4d70(var_330)
            
            *(*var_330 + (r15_1 << 3)) = rdi_6
            (*(*rdi_6 + 0x18))(rdi_6, 0, &var_310)
            var_288.q = rdi_6
            var_370 = &var_3a8
            var_378 = j_sub_140597fc0
            var_288:8.d = 0
            var_3a8 = 0
            void*** (* rax_37)() =
                sub_14081d830(0xd0, sub_140a756e0(&var_378, &data_143958018) + 0x10, 1, 0)
            void*** (* rdi_7)() = rax_37
            
            if (rax_37 == 0)
                rdi_7 = nullptr
            else
                *(rax_37 + 8) = 0
                *(rax_37 + 0x10) = 0
                *(rax_37 + 0x18) = 0
                *(rax_37 + 0x20) = 0
                *(rax_37 + 0x28) = 0
                *(rax_37 + 0x30) = 1
                __builtin_memset(rax_37 + 0x38, 0, 0x18)
                *(rax_37 + 0x50) = 1
                *(rax_37 + 0x58) = 1
                *(rax_37 + 0x5c) = 0
                *(rax_37 + 0x64) = 0
                *(rax_37 + 0x68) = 0
                *(rdi_7 + 0x70) = u"UnknownTexture"
                *(rdi_7 + 0x78) = 1
                *(rdi_7 + 0x7a) = 0
                *(rdi_7 + 0x80) = 0
                *(rdi_7 + 0x88) = 0
                __builtin_memset(rdi_7 + 0x90, 0, 0x38)
                *rdi_7 = &data_142f5c7a0
                *(rdi_7 + 0xc8) = rbx_2
            
            int64_t r15_2 = sx.q(var_330[1].d)
            int32_t rax_38 = (r15_2 + 1).d
            var_330[1].d = rax_38
            
            if (rax_38 s> *(var_330 + 0xc))
                sub_1405a4d70(var_330)
            
            *(*var_330 + (r15_2 << 3)) = rdi_7
            (*(*rdi_7 + 0x18))(rdi_7, 0, &var_310)
            (*(*rdi_7 + 0x18))(rdi_7, 1, &var_288)
            var_378 = rdi_7
            rdi_5 = var_387_1
            var_370.d = 0
            var_310 = var_378.o
        
        var_378 = nullptr
        var_370.d = 0
        int128_t zmm0_3 = var_378.o
        void**** var_3b0_1 = &var_398
        var_378 = nullptr
        var_370.d = 0
        int128_t* var_3b8_1 = &var_368
        var_398.o = zmm0_3
        zmm0_3 = var_378.o
        var_378 = nullptr
        var_370.d = 0
        var_368 = zmm0_3
        zmm0_3 = var_378.o
        var_378 = nullptr
        var_370.d = 0
        var_3c0.q = &var_288
        var_288 = zmm0_3
        var_378.o = var_378.o
        var_3c8.q = &var_378
        int128_t* rax_41 =
            sub_14134b610(&var_2c8, &var_338, 2, &var_3a6, var_3c8, var_3c0, var_3b8_1, var_3b0_1)
        var_378 = nullptr
        var_370.d = 0
        var_3b0 = &var_398
        var_310 = *rax_41
        var_3b8 = &var_368
        int128_t zmm0_4 = var_378.o
        var_378 = nullptr
        var_370.d = 0
        var_398.o = zmm0_4
        zmm0_4 = var_378.o
        var_378 = nullptr
        var_370.d = 0
        var_368 = zmm0_4
        zmm0_4 = var_378.o
        var_378 = nullptr
        var_370.d = 0
        var_3c0.q = &var_288
        var_288 = zmm0_4
        var_378.o = var_378.o
        var_3c8.q = &var_378
        int128_t* rax_42
        int128_t zmm7_1
        rax_42, zmm7_1 =
            sub_14134b610(&var_2c8, &var_338, 1, &var_3a6, var_3c8, var_3c0, var_3b8, var_3b0)
        char rcx_34 = var_386_1
        char rdx_11 = var_388_1
        var_310 = *rax_42
        
        if ((rcx_34 | rdx_11 | rdi_5 | r13_1 | r12_2.b) != 0)
            if (r13_1 != 0 || r12_2.b != 0)
                void* rax_44 = sub_14139d290(&var_310)
                var_3a8 = 0
                int32_t r15_4 = *(rax_44 + 0x2c)
                char* var_350_1 = &var_3a8
                var_358 = j_sub_140597fc0
                void*** rax_46 =
                    sub_14081d830(0x150, sub_140a756e0(&var_358, &data_143958018) + 0x10, 1, 0)
                void*** rdi_8 = rax_46
                
                if (rax_46 == 0)
                    rdi_8 = nullptr
                else
                    char rdx_13 = var_3a6
                    rax_46[1].d = 0
                    *rdi_8 = &data_142f5bf58
                    void* rax_47 = &rdi_8[4]
                    rdi_8[2] = 0
                    rdi_8[3].d = 0
                    int64_t i_3 = 2
                    int64_t i
                    
                    do
                        *rax_47 = 1
                        __builtin_memset(rax_47 + 8, 0, 0x18)
                        *(rax_47 + 0x20) = 1
                        *(rax_47 + 0x28) = 1
                        *(rax_47 + 0x2c) = 0
                        *(rax_47 + 0x34) = 0
                        *(rax_47 + 0x38) = 0
                        *(rax_47 + 0x40) = u"UnknownTexture"
                        *(rax_47 + 0x48) = 1
                        *(rax_47 + 0x4a) = 0
                        *(rax_47 + 0x50) = 0
                        *(rax_47 + 0x58) = 0
                        rax_47 += 0x60
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    __builtin_memset(&rdi_8[0x1c], 0, 0x60)
                    *rdi_8 = &data_142f5bff0
                    rdi_8[0x28] = rbx_2
                    rdi_8[0x29].b = r13_1
                    *(rdi_8 + 0x149) = r12_2.b
                    *(rdi_8 + 0x14a) = r15_4 == 0x1a
                    *(rdi_8 + 0x14b) = rdx_13
                
                int64_t rsi_5 = sx.q(var_330[1].d)
                int32_t rax_48 = (rsi_5 + 1).d
                var_330[1].d = rax_48
                
                if (rax_48 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (rsi_5 << 3)) = rdi_8
                (*rdi_8)[3](rdi_8, 0, &var_310)
                var_278 = rdi_8
                int32_t var_270_1 = 0
                var_278.o = var_278.o
                
                if (r15_4 != 0x1a)
                    var_358 = rdi_8
                    var_350_1.d = 1
                    var_310 = var_358.o
                
                if (var_3a6 == 0)
                    var_3a6 = 0
                else
                    var_3a6 = 1
                    
                    if (r13_1 != 0)
                        var_3a6 = 0
                
                rdi_5 = var_387_1
                rdx_11 = var_388_1
                rcx_34 = var_386_1
            
            char rsi_7 = var_385
            void*** var_258 = nullptr
            int32_t var_250_1 = 0
            void*** var_298 = nullptr
            int32_t var_290_1 = 0
            var_348 = nullptr
            var_340 = 0
            
            if (r13_1 != 0 || rsi_7 != 0 || rdi_5 != 0)
                char r15_3
                
                if (rdx_11 != 0 || rcx_34 != 0)
                label_14131cd98:
                    r15_3 = 1
                else
                    r15_3 = 0
                
                var_3a8 = 0
                char* var_350_2 = &var_3a8
                var_358 = j_sub_140597fc0
                void*** rax_51 =
                    sub_14081d830(0x1f0, sub_140a756e0(&var_358, &data_143958018) + 0x10, 1, 0)
                void*** rbx_4 = rax_51
                
                if (rax_51 == 0)
                    rbx_4 = rax_51
                else
                    char rdx_16 = var_3a6
                    rax_51[1].d = 0
                    *rbx_4 = &data_142f5ba00
                    void* rax_52 = &rbx_4[6]
                    rbx_4[2] = 0
                    rbx_4[3].d = 0
                    int64_t i_4 = 3
                    rbx_4[4] = 0
                    rbx_4[5].d = 0
                    int64_t i_1
                    
                    do
                        *rax_52 = 1
                        __builtin_memset(rax_52 + 8, 0, 0x18)
                        *(rax_52 + 0x20) = 1
                        *(rax_52 + 0x28) = 1
                        *(rax_52 + 0x2c) = 0
                        *(rax_52 + 0x34) = 0
                        *(rax_52 + 0x38) = 0
                        *(rax_52 + 0x40) = u"UnknownTexture"
                        *(rax_52 + 0x48) = 1
                        *(rax_52 + 0x4a) = 0
                        *(rax_52 + 0x50) = 0
                        *(rax_52 + 0x58) = 0
                        rax_52 += 0x60
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                    __builtin_memset(&rbx_4[0x2a], 0, 0x88)
                    *rbx_4 = &data_142f5ba98
                    rbx_4[0x3d].b = var_383_1
                    *(rbx_4 + 0x1d8) = zmm7_1
                    *(rbx_4 + 0x1e9) = rdi_5
                    *(rbx_4 + 0x1ea) = r13_1
                    *(rbx_4 + 0x1eb) = rsi_7
                    *(rbx_4 + 0x1ec) = r15_3
                    *(rbx_4 + 0x1ed) = rdx_16
                
                int64_t rsi_6 = sx.q(var_330[1].d)
                int32_t rax_54 = (rsi_6 + 1).d
                var_330[1].d = rax_54
                
                if (rax_54 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (rsi_6 << 3)) = rbx_4
                (*rbx_4)[3](rbx_4, 0, &var_310)
                (*rbx_4)[3](rbx_4, 1, &var_278)
                rsi_7 = var_385
                
                if (sub_14135d3f0(var_387_1, r13_1, rsi_7, r15_3) == 0 || var_387_1 != 0)
                    var_258 = rbx_4
                    int32_t var_250_2 = 0
                    var_258.o = var_258.o
                    
                    if (r13_1 == 0 && rsi_7 == 0)
                        goto label_14131d13f
                    
                    var_298 = rbx_4
                    int32_t var_290_3 = 1
                    int128_t zmm0_7 = var_298.o
                    var_340 = 2
                    var_348 = rbx_4
                    var_298.o = zmm0_7
                    var_348.o = var_348.o
                else if (r13_1 != 0 || rsi_7 != 0)
                    var_298 = rbx_4
                    int32_t var_290_2 = 0
                    var_298.o = var_298.o
                label_14131d13f:
                    var_348 = rbx_4
                    var_340 = 1
                    var_348.o = var_348.o
                else
                    var_348 = rbx_4
                    var_340 = 0
                    var_348.o = var_348.o
            else if (rdx_11 != 0 || rcx_34 != 0)
                goto label_14131cd98
            
            int128_t zmm2_1
            int128_t zmm3_1
            
            if (r12_2.b != 0)
                var_3a8 = 0
                
                if (rsi_7 == 0)
                    char* var_390_1 = &var_3a8
                    var_398 = j_sub_140597fc0
                    void*** rax_84
                    int128_t zmm6_1
                    rax_84, zmm6_1 =
                        sub_14081d830(0xc0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                    void*** rax_85
                    
                    if (rax_84 == 0)
                        rax_85 = nullptr
                    else
                        rax_85 = sub_141346640(rax_84, &data_1439b70c8)
                    
                    var_368.q = sub_14107ee00(var_330, rax_85)
                    var_368:8.d = 0
                    
                    if ((*(*r14 + 0x28) & 0x4000) != 0)
                        float zmm0_12 = *(data_143eb4e80 + 4)
                        zmm3_1 = *(var_328 + 0x1270)
                        zmm2_1 = _mm_min_ss((*(var_328 + 0x1274)).d, zmm0_12)
                        void* rax_90 = data_143eb4e68
                        zmm3_1 = _mm_min_ss(zmm3_1.d, zmm0_12)
                        zmm0_12 = *(rax_90 + 4)
                        
                        if (zmm2_1.d f>= 0.00999999978f || not(zmm3_1.d f< zmm0_12))
                            bool cond:8_1 = zmm2_1.d f>= 0.00999999978f
                            var_398 = nullptr
                            var_2c8.q = &var_338
                            var_2c8:8.q = &var_368
                            void**** var_2b8_1 = &var_278
                            var_390_1.d = 0
                            bool rax_91 = zmm3_1.d f>= zmm0_12
                            
                            if (cond:8_1 != 0)
                                if (rax_91 == 0)
                                    zmm3_1 = zmm6_1
                                
                                goto label_14131d5ef
                            
                            if (rax_91 != 0)
                            label_14131d5ef:
                                
                                if (cond:8_1 == 0)
                                    zmm2_1 = zmm6_1
                                
                                sub_141301820(&var_2c8, &var_398, zmm2_1, zmm3_1)
                else
                    var_368:8.q = &var_3a8
                    var_368.q = j_sub_140597fc0
                    int64_t* rax_59 =
                        sub_14081d830(0xc0, sub_140a756e0(&var_368, &data_143958018) + 0x10, 1, 0)
                    int32_t r12_3 = var_2f8:0xc.d
                    int64_t* rbx_5 = rax_59
                    int32_t r15_5 = var_2f8:8.d
                    int32_t r13_2 = (var_2f8:4.q).d
                    
                    if (rax_59 == 0)
                        rbx_5 = rax_59
                    else
                        rax_59[1].d = 0
                        var_358.d = r15_5 - var_2f8.d
                        var_358:4.d = r12_3 - r13_2
                        rbx_5[2] = 0
                        rbx_5[3].d = 0
                        rbx_5[4] = 1
                        __builtin_memset(&rbx_5[5], 0, 0x18)
                        *(rbx_5 + 0x4c) = 0
                        *(rbx_5 + 0x54) = 0
                        rbx_5[0xb].w = 0
                        *(rbx_5 + 0x6a) = 0
                        rbx_5[8] = 1
                        rbx_5[9].w = 1
                        rbx_5[0xc] = u"UnknownTexture"
                        rbx_5[0xd].w = 1
                        rbx_5[0xe] = 0
                        rbx_5[0xf].d = 0
                        __builtin_memset(&rbx_5[0x10], 0, 0x38)
                        *rbx_5 = &data_142f5bb30
                        rbx_5[0x17] = var_358
                    
                    int64_t rsi_8 = sx.q(var_330[1].d)
                    int32_t rax_61 = (rsi_8 + 1).d
                    var_330[1].d = rax_61
                    
                    if (rax_61 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (rsi_8 << 3)) = rbx_5
                    (*(*rbx_5 + 0x18))(rbx_5, 0, &var_298)
                    var_368.q = rbx_5
                    var_368:8.d = 0
                    var_368:8.q = &var_3a8
                    var_368.q = j_sub_140597fc0
                    var_398.o = var_368
                    var_3a8 = 0
                    void*** rax_64 =
                        sub_14081d830(0xf0, sub_140a756e0(&var_368, &data_143958018) + 0x10, 1, 0)
                    void*** rbx_6 = rax_64
                    
                    if (rax_64 == 0)
                        rbx_6 = nullptr
                    else
                        sub_1412ff650(rax_64)
                        *rbx_6 = &data_142f5bc60
                        rbx_6[0x1d].b = var_383_1
                        *(rbx_6 + 0xd8) = zmm7_1
                    
                    int64_t rsi_9 = sx.q(var_330[1].d)
                    int32_t rax_66 = (rsi_9 + 1).d
                    var_330[1].d = rax_66
                    
                    if (rax_66 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (rsi_9 << 3)) = rbx_6
                    (*rbx_6)[3](rbx_6, 0, &var_310)
                    (*rbx_6)[3](rbx_6, 1, &var_398)
                    (*rbx_6)[3](rbx_6, 2, &var_278)
                    var_368.q = rbx_6
                    var_368:8.d = 0
                    var_368:8.q = &var_3a8
                    var_368.q = j_sub_140597fc0
                    var_2c8 = var_368
                    var_3a8 = 0
                    int64_t* rax_71 =
                        sub_14081d830(0xd0, sub_140a756e0(&var_368, &data_143958018) + 0x10, 1, 0)
                    int64_t* rbx_7 = rax_71
                    
                    if (rax_71 == 0)
                        rbx_7 = nullptr
                    else
                        rax_71[1].d = 0
                        rax_71[2] = 0
                        rax_71[3].d = 0
                        int32_t rcx_61 = r15_5 - var_2f8.d
                        rax_71[4] = 0
                        rax_71[5].d = 0
                        rax_71[6] = 1
                        __builtin_memset(&rax_71[7], 0, 0x18)
                        rax_71[0xa] = 1
                        rax_71[0xb].w = 1
                        *(rax_71 + 0x5c) = 0
                        *(rax_71 + 0x64) = 0
                        rax_71[0xd].w = 0
                        rbx_7[0xe] = u"UnknownTexture"
                        rbx_7[0xf].w = 1
                        *(rbx_7 + 0x7a) = 0
                        rbx_7[0x10] = 0
                        rbx_7[0x11].d = 0
                        __builtin_memset(&rbx_7[0x12], 0, 0x38)
                        *rbx_7 = &data_142f5bcf8
                        var_358.d = rcx_61
                        var_358:4.d = r12_3 - r13_2
                        rbx_7[0x19] = var_358
                    
                    int64_t rsi_10 = sx.q(var_330[1].d)
                    int32_t rax_73 = (rsi_10 + 1).d
                    var_330[1].d = rax_73
                    
                    if (rax_73 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (rsi_10 << 3)) = rbx_7
                    (*(*rbx_7 + 0x18))(rbx_7, 0, &var_2c8)
                    (*(*rbx_7 + 0x18))(rbx_7, 1, &var_398)
                    var_368.q = rbx_7
                    var_368:8.d = 0
                    var_1f8.o = var_368
                    
                    if (var_381_1 != 0)
                        var_3a8 = 0
                        var_368:8.q = &var_3a8
                        var_368.q = j_sub_140597fc0
                        void*** rax_77 = sub_14081d830(0xe0, 
                            sub_140a756e0(&var_368, &data_143958018) + 0x10, 1, 0)
                        void*** rbx_8 = rax_77
                        
                        if (rax_77 == 0)
                            rbx_8 = nullptr
                        else
                            var_358.d = r15_5 - var_2f8.d
                            var_358:4.d = r12_3 - r13_2
                            sub_1412ff650(rax_77)
                            *rbx_8 = &data_142f5bd90
                            rbx_8[0x1b] = var_358
                        
                        int64_t rsi_11 = sx.q(var_330[1].d)
                        int32_t rax_79 = (rsi_11 + 1).d
                        var_330[1].d = rax_79
                        
                        if (rax_79 s> *(var_330 + 0xc))
                            sub_1405a4d70(var_330)
                        
                        *(*var_330 + (rsi_11 << 3)) = rbx_8
                        (*rbx_8)[3](rbx_8, 0, &var_310)
                        (*rbx_8)[3](rbx_8, 1, &var_1f8)
                        (*rbx_8)[3](rbx_8, 2, &var_278)
                        var_398 = rbx_8
                        int64_t var_390
                        var_390.d = 0
                        var_310 = var_398.o
            
            bool r13_5 = var_387_1
            void*** (* rdi_15)() = r12_1.q
            var_128 = nullptr
            int64_t var_120
            var_120.d = 0
            var_118.q = 0
            int32_t var_110_1 = 0
            var_108.q = 0
            int16_t var_100
            var_100.d = 0
            var_f8 = 0
            int16_t var_f0
            var_f0.d = 0
            int64_t var_1b8 = 0
            int32_t var_1b0_1 = 0
            int64_t var_1e8 = 0
            int32_t var_1e0_1 = 0
            var_378 = nullptr
            var_370.d = 0
            
            if (r13_5 != 0)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r12_1)
                var_2f8.q = rdi_15
                int32_t var_2d8_1 = 0xffffffff
                var_2f8.d = (temp4_1 + (temp3_1 & 3)) s>> 2
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(var_2f8:4.d)
                var_2f8:4.d = (temp6_1 + (temp5_1 & 3)) s>> 2
                void*** (* rbx_9)() = var_2f8.q
                int64_t r12_5 = 0
                var_358 = rbx_9
                var_2f8.d = var_358.d
                
                while (true)
                    var_3a8 = 0
                    char* var_390_2 = &var_3a8
                    var_398 = j_sub_140597fc0
                    int64_t* rax_102 =
                        sub_14081d830(0xc8, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                    int64_t* rsi_12 = rax_102
                    
                    if (rax_102 == 0)
                        rsi_12 = nullptr
                    else
                        rax_102[1].d = 0
                        rax_102[2] = 0
                        rax_102[3].d = 0
                        rax_102[4] = 1
                        __builtin_memset(&rax_102[5], 0, 0x18)
                        rax_102[8] = 1
                        rax_102[9].w = 1
                        *(rax_102 + 0x4c) = 0
                        *(rax_102 + 0x54) = 0
                        rax_102[0xb].w = 0
                        rsi_12[0xc] = u"UnknownTexture"
                        rsi_12[0xd].w = 1
                        *(rsi_12 + 0x6a) = 0
                        rsi_12[0xe] = 0
                        rsi_12[0xf].d = 0
                        __builtin_memset(&rsi_12[0x10], 0, 0x38)
                        *rsi_12 = &data_142f5be28
                        rsi_12[0x17] = rbx_9
                        rsi_12[0x18].d = 0x4028f5c3
                    
                    int64_t r13_3 = sx.q(var_330[1].d)
                    int32_t rax_103 = (r13_3 + 1).d
                    var_330[1].d = rax_103
                    
                    if (rax_103 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (r13_3 << 3)) = rsi_12
                    void**** r8_18
                    uint64_t r15_8
                    
                    if (r12_5 != 0)
                        r15_8 = sx.q(var_2d8_1)
                        r8_18 = &(&var_128)[r15_8 * 2]
                    else
                        r15_8 = zx.q(var_2d8_1)
                        r8_18 = &var_258
                    
                    (*(*rsi_12 + 0x18))(rsi_12, 0, r8_18)
                    int64_t rax_108 = r12_5 * 2
                    var_368.q = rsi_12
                    var_368:8.d = 0
                    r12_5 += 1
                    var_2d8_1 = r15_8.d + 1
                    *(&var_128 + (rax_108 << 3)) = var_368
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(var_2f8.d + 1)
                    int32_t rax_113 = (temp8_1 - temp7_1) s>> 1
                    var_2f8.d = rax_113
                    var_358.d = rax_113
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q((rbx_9 u>> 0x20).d + 1)
                    var_358:4.d = (temp10_1 - temp9_1) s>> 1
                    
                    if (r12_5 s>= 4)
                        break
                    
                    rbx_9 = var_358
                
                r14 = var_2e8
                char* var_390_3 = &var_3a8
                var_2f8:0xc.d = 0
                int32_t var_2dc_1 = 0
                zmm2_1 = r14[0x1ff].d
                var_3a8 = 0
                int128_t zmm0_13
                zmm0_13.d = zmm2_1.d f* *(var_328 + 0x104c)
                var_398 = j_sub_140597fc0
                var_2f8.d = zmm0_13.d
                zmm0_13.d = zmm2_1.d f* *(var_328 + 0x1054)
                var_2f8:4.d = zmm2_1.d f* *(var_328 + 0x1050)
                float zmm1_1 = zmm2_1.d f* *(var_328 + 0x105c)
                var_2f8:8.d = zmm0_13.d
                zmm0_13.d = zmm2_1.d f* *(var_328 + 0x1060)
                zmm2_1.d = zmm2_1.d f* *(var_328 + 0x1064)
                var_2e8:4.d = zmm0_13.d
                var_2e8.d = zmm1_1
                int32_t var_2e0_1 = zmm2_1.d
                void*** rax_119 =
                    sub_14081d830(0x100, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                rdi_15 = r12_1.q
                void*** rax_128
                
                if (rax_119 == 0)
                    rax_128 = nullptr
                else
                    var_358 = rdi_15
                    int32_t temp11_1
                    int32_t temp12_1
                    temp11_1:temp12_1 = sx.q(r12_1)
                    int64_t zmm0_14 = _mm_unpacklo_ps(0x3fa8f5c3, 0x3fa8f5c3).q
                    var_358.d = (temp12_1 + (temp11_1 & 0x1f)) s>> 5
                    int32_t temp13_1
                    int32_t temp14_1
                    temp13_1:temp14_1 = sx.q(var_358:4.d)
                    var_358:4.d = (temp14_1 + (temp13_1 & 0x1f)) s>> 5
                    var_3c8.q = &var_2e8
                    rax_128 = sub_1412ffae0(rax_119, var_358, zmm0_14, &var_2f8, var_3c8)
                
                int64_t* rax_129 = sub_14107ee00(var_330, rax_128)
                int64_t r9_5 = *rax_129
                (*(r9_5 + 0x18))(rax_129, 0, &var_108, r9_5, var_3c8)
                int64_t r9_6 = *rax_129
                (*(r9_6 + 0x18))(rax_129, 1, &var_f8, r9_6)
                zmm2_1 = r14[0x1ff].d
                var_398 = rax_129
                var_390_3.d = 0
                var_1b8.o = var_398.o
                int128_t zmm0_15
                zmm0_15.d = zmm2_1.d f* *(var_328 + 0x103c)
                char* var_390_4 = &var_3a8
                float zmm1_2 = *(var_328 + 0x1040) f* zmm2_1.d
                int32_t var_2dc_2 = 0
                zmm3_1.d = (*(var_328 + 0x1044)).d f* zmm2_1.d
                var_3a8 = 0
                var_2e8.d = zmm0_15.d
                var_2c8 = data_142e6da00
                var_2e8:4.d = zmm1_2
                int32_t var_2e0_2 = zmm3_1.d
                var_398 = j_sub_140597fc0
                void*** rax_131
                float zmm6_2[0x4]
                rax_131, zmm6_2 =
                    sub_14081d830(0x100, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                void*** rax_140
                
                if (rax_131 == 0)
                    rax_140 = nullptr
                else
                    var_358 = rdi_15
                    int32_t temp15_1
                    int32_t temp16_1
                    temp15_1:temp16_1 = sx.q(r12_1)
                    int64_t r8_22 = _mm_unpacklo_ps(zmm6_2, zmm6_2[0].q)[0].q
                    var_358.d = (temp16_1 + (temp15_1 & 0xf)) s>> 4
                    int32_t temp17_1
                    int32_t temp18_1
                    temp17_1:temp18_1 = sx.q(var_358:4.d)
                    var_358:4.d = (temp18_1 + (temp17_1 & 0xf)) s>> 4
                    var_3c8.q = &var_2c8
                    rax_140 = sub_1412ffae0(rax_131, var_358, r8_22, &var_2e8, var_3c8)
                
                int64_t* rax_141 = sub_14107ee00(var_330, rax_140)
                int64_t r9_8 = *rax_141
                (*(r9_8 + 0x18))(rax_141, 0, &var_118, r9_8, var_3c8)
                int64_t r9_9 = *rax_141
                (*(r9_9 + 0x18))(rax_141, 1, &var_1b8, r9_9)
                zmm3_1 = r14[0x1ff].d
                var_398 = rax_141
                var_390_4.d = 0
                var_1e8.o = var_398.o
                int128_t zmm0_17
                zmm0_17.d = zmm3_1.d f* *(var_328 + 0x102c)
                char* var_390_5 = &var_3a8
                float zmm4_1 = *(var_328 + 0x1034)
                zmm0_17.d = zmm0_17.d f* 0.5f
                int32_t var_2dc_3 = 0
                zmm2_1.d = (*(var_328 + 0x1030)).d f* zmm3_1.d
                var_3a8 = 0
                var_398 = j_sub_140597fc0
                zmm2_1.d = zmm2_1.d f* 0.5f
                var_2e8.d = zmm0_17.d
                var_2c8 = data_142e6da00
                var_2e8:4.d = zmm2_1.d
                float var_2e0_3 = zmm4_1 f* zmm3_1.d * 0.5f
                void*** rax_143
                float zmm6_3[0x4]
                rax_143, zmm6_3 =
                    sub_14081d830(0x100, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                void*** rax_152
                
                if (rax_143 == 0)
                    rax_152 = nullptr
                else
                    var_358 = rdi_15
                    int32_t temp19_1
                    int32_t temp20_1
                    temp19_1:temp20_1 = sx.q(r12_1)
                    int64_t r8_25 = _mm_unpacklo_ps(zmm6_3, zmm6_3[0].q)[0].q
                    var_358.d = (temp20_1 + (temp19_1 & 7)) s>> 3
                    int32_t temp21_1
                    int32_t temp22_1
                    temp21_1:temp22_1 = sx.q(var_358:4.d)
                    var_358:4.d = (temp22_1 + (temp21_1 & 7)) s>> 3
                    var_3c8.q = &var_2c8
                    rax_152 = sub_1412ffae0(rax_143, var_358, r8_25, &var_2e8, var_3c8)
                
                int64_t* rax_153 = sub_14107ee00(var_330, rax_152)
                int64_t r9_11 = *rax_153
                (*(r9_11 + 0x18))(rax_153, 0, &var_128, r9_11, var_3c8)
                int64_t r9_12 = *rax_153
                (*(r9_12 + 0x18))(rax_153, 1, &var_1e8, r9_12)
                r13_5 = var_387_1
                var_398 = rax_153
                var_390_5.d = 0
                var_378.o = var_398.o
            
            char rax_162 = var_388_1
            int64_t var_1d8 = 0
            int32_t var_1d0_1 = 0
            int64_t var_1c8 = 0
            int32_t var_1c0_1 = 0
            
            if (rax_162 != 0)
                var_3a8 = 0
                char* var_390_6 = &var_3a8
                var_398 = j_sub_140597fc0
                void*** rax_155 =
                    sub_14081d830(0xb8, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                void*** rbx_14 = rax_155
                
                if (rax_155 == 0)
                    rbx_14 = nullptr
                else
                    memset(&rax_155[1], 0, 0xb0)
                    sub_1412ff510(rbx_14)
                    *rbx_14 = &data_142f5c380
                
                int64_t r15_11 = sx.q(var_330[1].d)
                int32_t rax_156 = (r15_11 + 1).d
                var_330[1].d = rax_156
                
                if (rax_156 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (r15_11 << 3)) = rbx_14
                (*rbx_14)[3](rbx_14, 0, &var_348)
                var_398 = rbx_14
                var_390_6.d = 0
                var_1d8.o = var_398.o
                rax_162 = var_388_1
            else if (var_386_1 != 0)
                var_3a8 = 0
                char* var_390_7 = &var_3a8
                var_398 = j_sub_140597fc0
                void*** rax_159 =
                    sub_14081d830(0xb8, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                void*** rbx_15 = rax_159
                
                if (rax_159 == 0)
                    rbx_15 = nullptr
                else
                    memset(&rax_159[1], 0, 0xb0)
                    sub_1412ff510(rbx_15)
                    *rbx_15 = &data_142f5c4b0
                
                int64_t r15_12 = sx.q(var_330[1].d)
                int32_t rax_160 = (r15_12 + 1).d
                var_330[1].d = rax_160
                
                if (rax_160 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (r15_12 << 3)) = rbx_15
                (*rbx_15)[3](rbx_15, 0, &var_348)
                var_398 = rbx_15
                var_390_7.d = 0
                var_1c8.o = var_398.o
                rax_162 = var_388_1
            
            if (rax_24 != 0)
                var_3a8 = 0
                char* var_390_8 = &var_3a8
                var_398 = j_sub_140597fc0
                void**** rcx_109 = &var_398
                
                if (rax_162 == 0)
                    void*** rax_168 =
                        sub_14081d830(0xb8, sub_140a756e0(rcx_109, &data_143958018) + 0x10, 1, 0)
                    void*** rbx_17 = rax_168
                    
                    if (rax_168 == 0)
                        rbx_17 = nullptr
                    else
                        memset(&rax_168[1], 0, 0xb0)
                        sub_1412ff510(rbx_17)
                        *rbx_17 = &data_142f5c548
                    
                    int64_t r15_14 = sx.q(var_330[1].d)
                    int32_t rax_169 = (r15_14 + 1).d
                    var_330[1].d = rax_169
                    
                    if (rax_169 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (r15_14 << 3)) = rbx_17
                    (*rbx_17)[3](rbx_17, 0, &var_1c8)
                    var_398 = rbx_17
                    var_390_8.d = 0
                    var_238.o = var_398.o
                else
                    void*** rax_164 =
                        sub_14081d830(0xb8, sub_140a756e0(rcx_109, &data_143958018) + 0x10, 1, 0)
                    void*** rbx_16 = rax_164
                    
                    if (rax_164 == 0)
                        rbx_16 = nullptr
                    else
                        memset(&rax_164[1], 0, 0xb0)
                        sub_1412ff510(rbx_16)
                        *rbx_16 = &data_142f5c418
                    
                    int64_t r15_13 = sx.q(var_330[1].d)
                    int32_t rax_165 = (r15_13 + 1).d
                    var_330[1].d = rax_165
                    
                    if (rax_165 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (r15_13 << 3)) = rbx_16
                    (*rbx_16)[3](rbx_16, 0, &var_1d8)
                    var_398 = rbx_16
                    var_390_8.d = 0
                    var_238.o = var_398.o
            
            char r12_6 = var_3a7
            var_288.q = 0
            var_288:8.d = 0
            
            if (r12_6 != 0)
                var_3a7 = 0
                char* var_390_9 = &var_3a7
                var_398 = j_sub_140597fc0
                void*** rax_172 =
                    sub_14081d830(0xc0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                void*** rbx_18 = rax_172
                
                if (rax_172 == 0)
                    rbx_18 = nullptr
                else
                    sub_1412ff510(rax_172)
                    rbx_18[0x17] = rdi_15
                    *rbx_18 = &data_142f5c088
                
                int64_t r15_15 = sx.q(var_330[1].d)
                int32_t rax_173 = (r15_15 + 1).d
                var_330[1].d = rax_173
                
                if (rax_173 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (r15_15 << 3)) = rbx_18
                (*rbx_18)[3](rbx_18, 0, &var_298)
                var_398 = rbx_18
                var_390_9.d = 0
                int128_t zmm0_24 = var_398.o
                char* var_390_10 = &var_3a7
                var_398 = j_sub_140597fc0
                var_2c8 = zmm0_24
                var_3a7 = 0
                void*** rax_176 =
                    sub_14081d830(0xc0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                void*** rbx_19 = rax_176
                
                if (rax_176 == 0)
                    rbx_19 = nullptr
                else
                    sub_1412ff510(rax_176)
                    rbx_19[0x17] = rdi_15
                    *rbx_19 = &data_142f5c120
                
                int64_t r15_16 = sx.q(var_330[1].d)
                int32_t rax_177 = (r15_16 + 1).d
                var_330[1].d = rax_177
                
                if (rax_177 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (r15_16 << 3)) = rbx_19
                (*rbx_19)[3](rbx_19, 0, &var_2c8)
                var_398 = rbx_19
                var_390_10.d = 0
                var_288 = var_398.o
            
            if ((r13_5 | r12_6) != 0)
                var_3a7 = 0
                char* var_390_11 = &var_3a7
                var_398 = j_sub_140597fc0
                int64_t* rax_181 =
                    sub_14081d830(0xe0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                int64_t* rbx_20 = rax_181
                
                if (rax_181 == 0)
                    rbx_20 = nullptr
                else
                    sub_1412ff650(rax_181)
                    rbx_20[0x1b] = rdi_15
                    *rbx_20 = &data_142f5c1b8
                
                int64_t r15_17 = sx.q(var_330[1].d)
                int32_t rax_182 = (r15_17 + 1).d
                var_330[1].d = rax_182
                
                if (rax_182 s> *(var_330 + 0xc))
                    sub_1405a4d70(var_330)
                
                *(*var_330 + (r15_17 << 3)) = rbx_20
                
                if (r12_6 != 0)
                    (*(*rbx_20 + 0x18))(rbx_20, 0, &var_288)
                
                if (r13_5 != 0)
                    (*(*rbx_20 + 0x18))(rbx_20, 1, &var_258)
                    (*(*rbx_20 + 0x18))(rbx_20, 2, &var_378)
                
                var_398 = rbx_20
                var_390_11.d = 0
                int128_t zmm0_26 = var_398.o
                var_2c8 = zmm0_26
                var_248.o = zmm0_26
                
                if (rax_5 == 2 && (r13_5 != 0 || r12_6 != 0))
                    void* rax_186 = r14[1]
                    
                    if (rax_186 != 0 && *(rax_186 + 0xbb8) != 0)
                        var_3a7 = 0
                        char* var_390_12 = &var_3a7
                        var_398 = j_sub_140597fc0
                        void*** rax_188 = sub_14081d830(0xc0, 
                            sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                        void*** rax_189
                        
                        if (rax_188 == 0)
                            rax_189 = nullptr
                        else
                            rax_189 = sub_141346640(rax_188, rax_186 + 0xbb8)
                        
                        var_398 = sub_14107ee00(var_330, rax_189)
                        var_390_12.d = 0
                        zmm0_26 = var_398.o
                    
                    var_368 = zmm0_26
                    char* var_390_13 = &var_3a7
                    var_3a7 = 0
                    var_398 = j_sub_140597fc0
                    void*** rax_192 =
                        sub_14081d830(0xd0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
                    void*** rbx_22 = rax_192
                    
                    if (rax_192 == 0)
                        rbx_22 = nullptr
                    else
                        sub_1412ff5b0(rax_192)
                        rbx_22[0x19] = rdi_15
                        *rbx_22 = &data_142f5c250
                    
                    int64_t rsi_21 = sx.q(var_330[1].d)
                    int32_t rax_193 = (rsi_21 + 1).d
                    var_330[1].d = rax_193
                    
                    if (rax_193 s> *(var_330 + 0xc))
                        sub_1405a4d70(var_330)
                    
                    *(*var_330 + (rsi_21 << 3)) = rbx_22
                    (*rbx_22)[3](rbx_22, 0, &var_2c8)
                    (*rbx_22)[3](rbx_22, 1, &var_368)
                    var_398 = rbx_22
                    var_390_13.d = 0
                    var_248.o = var_398.o
    
    if (sub_141271080(var_328) != 0)
        var_3a7 = 0
        char* var_390_14 = &var_3a7
        var_398 = j_sub_140597fc0
        void*** rax_198 = sub_14081d830(0xb8, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
        void*** rbx_23 = rax_198
        
        if (rax_198 == 0)
            rbx_23 = nullptr
        else
            memset(&rax_198[1], 0, 0xb0)
            sub_1412ff510(rbx_23)
            *rbx_23 = &data_142f5c5e0
        
        int64_t rsi_22 = sx.q(var_330[1].d)
        int32_t rax_199 = (rsi_22 + 1).d
        var_330[1].d = rax_199
        
        if (rax_199 s> *(var_330 + 0xc))
            sub_1405a4d70(var_330)
        
        *(*var_330 + (rsi_22 << 3)) = rbx_23
        (*rbx_23)[3](rbx_23, 0, &var_310)
        var_398 = rbx_23
        var_390_14.d = 0
        var_310 = var_398.o
    
    r13 = rax_23
    rsi_1 = rax_24

if (data_143eb9270 s> *(var_200 + 0x14))
    _Init_thread_header(&data_143eb9270)
    
    if (data_143eb9270 == 0xffffffff)
        int64_t* rcx_241 = data_143db18d0
        
        if (rcx_241 == 0)
            sub_140a53c40()
            rcx_241 = data_143db18d0
        
        int64_t r8_61
        r8_61.b = 1
        int64_t* rax_315 = (*(*rcx_241 + 0xb0))(rcx_241, u"r.MobileTonemapperUpscale", r8_61)
        int64_t rax_307
        
        if (rax_315 == 0)
            rax_307 = 0
        else
            int64_t rdx_117 = *rax_315
            rax_307 = (*(rdx_117 + 0x58))(rax_315, rdx_117)
        
        data_143eb9268 = rax_307
        _Init_thread_footer(&data_143eb9270)

void* rax_203 = data_143eb9268

if (rax_203 == 0 || *(rax_203 + 4) == 0)
    r12_2.b = 1
else
    r12_2.b = 0

char* var_390_15
int64_t* rbx_25
void* r15_18

if (var_381_1 == 0)
    var_3a7 = 0
    var_390_15 = &var_3a7
    var_398 = j_sub_140597fc0
    void*** rax_212 = sub_14081d830(0x110, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
    
    if (rax_212 == 0)
        rbx_25 = nullptr
    else
        rbx_25 = sub_141346800(rax_212, var_328, var_383_1, var_384, rsi_1, var_3a6)
    
    int64_t rsi_23 = sx.q(var_330[1].d)
    int32_t rax_214 = (rsi_23 + 1).d
    var_330[1].d = rax_214
    
    if (rax_214 s> *(var_330 + 0xc))
        sub_1405a4d70(var_330)
    
    *(*var_330 + (rsi_23 << 3)) = rbx_25
    (*(*rbx_25 + 0x18))(rbx_25, 0, &var_310)
    
    if (var_248 != 0)
        (*(*rbx_25 + 0x18))(rbx_25, 1, &var_248)
    else
        var_3a7 = 0
        var_390_15 = &var_3a7
        var_398 = j_sub_140597fc0
        void*** rax_218 = sub_14081d830(0xc0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
        void*** rax_219
        
        if (rax_218 == 0)
            rax_219 = nullptr
        else
            rax_219 = sub_141346640(rax_218, &data_1439b70d0)
        
        var_368.q = sub_14107ee00(var_330, rax_219)
        var_368:8.d = 0
        (*(*rbx_25 + 0x18))(rbx_25, 1, &var_368)
    
    (*(*rbx_25 + 0x18))(rbx_25, 2, &var_1f8)
    (*(*rbx_25 + 0x18))(rbx_25, 3, &var_238)
    (*(*rbx_25 + 0x18))(rbx_25, 4, &var_278)
    var_398 = rbx_25
    r15_18 = &rbx_25[0x1f]
    var_390_15.d = 0
    var_310 = var_398.o
    *r15_18 = 0
else
    char rdi_18 = var_3a6
    var_378 = nullptr
    var_370.d = 0
    
    if (sub_142391c60(var_328) != 0)
        var_378.o = *sub_141305470(&var_2c8, var_330)
    
    void* rbx_24
    
    if (r13 u> 2 || *(var_328 + 0x1548) s< 1 || var_238 == 0)
        rbx_24.b = 0
    else
        rbx_24.b = 1
    
    var_3a7 = 0
    var_390_15 = &var_3a7
    var_398 = j_sub_140597fc0
    void*** rax_207 = sub_14081d830(0xf0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
    void*** rax_208
    
    if (rax_207 == 0)
        rax_208 = nullptr
    else
        var_3c0 = var_385
        var_3c8 = rdi_18
        rax_208 = sub_141346700(rax_207, 0, rbx_24.b, 0, var_3c8, var_3c0)
    
    int64_t* rax_209 = sub_14107ee00(var_330, rax_208)
    rbx_25 = rax_209
    int64_t r9_13 = *rax_209
    (*(r9_13 + 0x18))(rax_209, 0, &var_310, r9_13, var_3c8, var_3c0, var_3b8, var_3b0)
    int64_t r9_14 = *rbx_25
    (*(r9_14 + 0x18))(rbx_25, 1, &var_248, r9_14)
    int64_t r9_15 = *rbx_25
    (*(r9_15 + 0x18))(rbx_25, 2, &var_238, r9_15)
    (*(*rbx_25 + 0x18))(rbx_25, 3, &var_378)
    var_368.q = rbx_25
    r15_18 = rbx_25 + 0xe9
    var_368:8.d = 0
    var_310 = var_368
    *r15_18 = 0

sub_141367610(rbx_25)
void* rax_226 = *r14
var_3a6 = 0

if ((*(rax_226 + 0x28) & 1) != 0)
    if (sub_1422eb710() != 0)
        var_398 = nullptr
        var_390_15.d = 0
        int128_t zmm0_30 = var_398.o
        int128_t* var_3b0_2 = &var_2c8
        var_398 = nullptr
        var_390_15.d = 0
        int128_t* var_3b8_2 = &var_368
        var_2c8 = zmm0_30
        zmm0_30 = var_398.o
        var_398 = nullptr
        var_390_15.d = 0
        var_368 = zmm0_30
        zmm0_30 = var_398.o
        var_398 = nullptr
        var_390_15.d = 0
        var_3c0.q = &var_378
        var_378.o = zmm0_30
        var_398.o = var_398.o
        var_3c8.q = &var_398
        var_310 =
            *sub_14134b610(&var_288, &var_338, 0, &var_3a6, var_3c8, var_3c0, var_3b8_2, var_3b0_2)
    
    sub_141367610(var_310.q)
    
    if (rax_5 == 2)
        void* rax_229 = r14[1]
        var_368 = var_310
        
        if (rax_229 != 0 && *(rax_229 + 0xbc8) != 0)
            var_3a7 = 0
            char* var_390_16 = &var_3a7
            var_398 = j_sub_140597fc0
            void*** rax_231 =
                sub_14081d830(0xc0, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
            void*** rax_232
            
            if (rax_231 == 0)
                rax_232 = nullptr
            else
                rax_232 = sub_141346640(rax_231, rax_229 + 0xbc8)
            
            var_398 = sub_14107ee00(var_330, rax_232)
            var_390_16.d = 0
            var_368 = var_398.o
        
        var_3a7 = 0
        char* var_390_17 = &var_3a7
        var_398 = j_sub_140597fc0
        void*** rax_235 = sub_14081d830(0xc8, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
        void*** rdi_21 = rax_235
        
        if (rax_235 == 0)
            rdi_21 = nullptr
        else
            memset(&rax_235[1], 0, 0xc0)
            sub_1412ff5b0(rdi_21)
            *rdi_21 = &data_142f5c2e8
        
        int64_t r13_6 = sx.q(var_330[1].d)
        int32_t rax_236 = (r13_6 + 1).d
        var_330[1].d = rax_236
        
        if (rax_236 s> *(var_330 + 0xc))
            sub_1405a4d70(var_330)
        
        *(*var_330 + (r13_6 << 3)) = rdi_21
        (*rdi_21)[3](rdi_21, 0, &var_310)
        (*rdi_21)[3](rdi_21, 1, &var_368)
        var_398 = rdi_21
        var_390_17.d = 0
        var_310 = var_398.o

if (sub_14135d1d0(r14) != 0)
    sub_141348f70(&var_338)

if (r14[0x4b].d != r14[0x2b3].d || *(r14 + 0x25c) != *(r14 + 0x159c) || r14[0x4c].d != r14[0x2b4].d
        || *(r14 + 0x264) != *(r14 + 0x15a4))
    if (r12_2.b != 0 || var_310.q != rbx_25)
        var_3c8.d = 1
        var_2c8 = var_310
        var_310 = *sub_14138da70(&var_398, var_330, &var_2c8, 1, var_3c8)
    else if (r15_18 != 0)
        *r15_18 = 1

void* rcx_196 = *r14

if ((*(rcx_196 + 0x2c) & 0x30000) == 0x30000)
    char* var_390_18 = &var_3a7
    var_2c8 = var_310
    var_398 = j_sub_140597fc0
    var_3a7 = 0
    void*** rax_249 = sub_14081d830(0x100, sub_140a756e0(&var_398, &data_143958018) + 0x10, 1, 0)
    void*** rax_250
    char rdi_22
    
    if (rax_249 == 0)
        rdi_22 = var_268
        rax_250 = nullptr
    else
        var_118.q = 0
        var_108.q = &data_142d42d18
        var_128 = sub_14130ebe0
        rax_250 = sub_1412ff430(rax_249, &var_128)
        rdi_22 = 1
    
    int64_t* rax_251 = sub_14107ee00(var_330, rax_250)
    
    if ((rdi_22 & 1) != 0 && var_128 != 0)
        int32_t* rdx_102 = var_118.q
        int32_t* rcx_194 = &var_108
        
        if (rdx_102 != 0)
            rcx_194 = rdx_102
        
        int64_t rdx_103 = *rcx_194
        (*(rdx_103 + 0x10))(rcx_194, rdx_103)
    
    (*(*rax_251 + 0x18))(rax_251, 0, &var_2c8)
    rcx_196 = *r14
    var_398 = rax_251
    var_390_18.d = 0
    var_310 = var_398.o

var_358 = nullptr
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x18)
int128_t var_80
__builtin_memset(&var_80, 0, 0x20)
int64_t var_b8 = 0
int32_t var_b0 = 0
int32_t var_ac = 1
int64_t var_90 = 0
int32_t var_88 = 0
int32_t var_84 = 1
int64_t* rcx_197 = *(rcx_196 + 0x18)
sub_1408c8cf0(&var_d8, *(*(*rcx_197 + 8))(rcx_197))
int64_t* rcx_199 = *(*r14 + 0x18)
void** rax_257 = (*(*rcx_199 + 8))(rcx_199)
sub_1408c8cf0(&var_d8:8, *rax_257)
void* rax_258 = *r14
var_128 = 1
int64_t var_120_1 = 0
var_118 = 0
int32_t var_10c = 0
var_108 = 1
int16_t var_104 = 0
int16_t var_100_1 = 1
var_f8 = 0
int16_t var_f0_1 = 0
int16_t var_e0 = 1
char var_de = 0
int64_t* rcx_201 = *(rax_258 + 0x18)
int64_t rax_260 = (*(*rcx_201 + 8))(rcx_201)
int64_t* rcx_203 = *(*r14 + 0x18)
int64_t r8_56 = *rcx_203
int32_t var_114
int32_t rax_266

if (*rax_260 == 0)
    int32_t* rax_267 = (*(r8_56 + 0x18))(rcx_203, &var_200, r8_56)
    var_114 = *rax_267
    rax_266 = rax_267[1]
else
    var_114 = *(*(*(r8_56 + 8))(rcx_203) + 0x60)
    int64_t* rcx_205 = *(*r14 + 0x18)
    rax_266 = *(*(*(*rcx_205 + 8))(rcx_205) + 0x64)

var_f8:4.d |= 9
int32_t var_fc = 2
wchar16 const* const var_e8 = u"OverriddenRenderTarget"
int16_t var_102 = 1
sub_14199c8a0(&data_1439c9260, &var_128, &var_358, &var_d8)
var_348.o = var_310
sub_1410ebe80(sub_14139d290(&var_348) + 0x50, var_358)
int128_t* rax_269 = sub_14139d290(&var_348)
void*** rbx_28 = var_348
*rax_269 = var_128.o
rax_269[1].d = var_118
*(rax_269 + 0x14) = var_114
*(rax_269 + 0x18) = rax_266
*(rax_269 + 0x1c) = var_10c
rax_269[2].d = var_108
*(rax_269 + 0x24) = var_104.b
*(rax_269 + 0x25) = var_104:1.b
*(rax_269 + 0x26) = var_102
*(rax_269 + 0x28) = var_100_1
*(rax_269 + 0x2c) = var_fc
rax_269[3].d = var_f8.d
*(rax_269 + 0x34) = var_f8:4.d
*(rax_269 + 0x38) = var_f0_1.b
*(rax_269 + 0x39) = var_f0_1:1.b
rax_269[4].q = var_e8
*(rax_269 + 0x48) = var_e0.b
*(rax_269 + 0x49) = var_e0:1.b
*(rax_269 + 0x4a) = var_de

if ((*rbx_28)[6](rbx_28) != 0)
    char i_2
    
    do
        var_348.o = *(*rbx_28)[2](rbx_28, 0)
        sub_1410ebe80(sub_14139d290(&var_348) + 0x50, var_358)
        int128_t* rax_288 = sub_14139d290(&var_348)
        rbx_28 = var_348
        *rax_288 = var_128.o
        rax_288[1].d = var_118
        *(rax_288 + 0x14) = var_114
        *(rax_288 + 0x18) = rax_266
        *(rax_288 + 0x1c) = var_10c
        rax_288[2].d = var_108
        *(rax_288 + 0x24) = var_104.b
        *(rax_288 + 0x25) = var_104:1.b
        *(rax_288 + 0x26) = var_102
        *(rax_288 + 0x28) = var_100_1
        *(rax_288 + 0x2c) = var_fc
        rax_288[3].d = var_f8.d
        *(rax_288 + 0x34) = var_f8:4.d
        *(rax_288 + 0x38) = var_f0_1.b
        *(rax_288 + 0x39) = var_f0_1:1.b
        rax_288[4].q = var_e8
        *(rax_288 + 0x48) = var_e0.b
        *(rax_288 + 0x49) = var_e0:1.b
        *(rax_288 + 0x4a) = var_de
        i_2 = (*rbx_28)[6](rbx_28)
    while (i_2 != 0)

void** rbx_29 = var_310.q
var_348 = nullptr
var_340.q = 1
sub_1405a4d70(&var_348)
*var_348 = rbx_29
sub_1413a1370(&var_198, &var_348)
void*** rcx_229 = var_348

if (rcx_229 != 0)
    sub_140a74f90(rcx_229)

sub_1413001f0(&var_d8)
void*** (* rcx_231)() = var_358

if (rcx_231 != 0)
    (*(*rcx_231 + 0x38))(rcx_231)

int64_t result = sub_141386800(&var_198)

if (var_210 == 0)
    int64_t* rax_305 = var_228
    char var_210_1 = 1
    rax_305[4].d -= 1
    int64_t* rcx_233 = var_228
    
    if (rcx_2 != rcx_233[2])
        sub_140b16b40(rcx_233, rcx_2)
        rcx_233 = var_228
    
    *rcx_233 = rcx_1
    result = result_1
    var_228[3] = result

sub_141367610(0)
__security_check_cookie(rax_1 ^ &var_3e8)
return result
