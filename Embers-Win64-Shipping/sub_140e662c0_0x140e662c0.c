// 函数: sub_140e662c0
// 地址: 0x140e662c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_468
int64_t rax_1 = __security_cookie ^ &var_468
int32_t r12 = 0
int32_t var_448 = 0
int64_t var_380
_vfprintf_p_l(&var_380, u"Ctrl", u"FInputChord")
int64_t var_398
_vfprintf_p_l(&var_398, &data_142e7afd0, u"FInputChord")
int64_t var_3b0
_vfprintf_p_l(&var_3b0, &data_142ed9968, u"FInputChord")
int64_t var_3c8
_vfprintf_p_l(&var_3c8, u"Shift", u"FInputChord")
int64_t var_418
int64_t* var_408
int64_t* rax_3
int32_t rsi

if (*arg1 == data_143e202b8)
    sub_1405d9400()
    int64_t rdx = data_143cd6fd8
    int64_t* rax_4 = data_143cd6fe0
    var_418 = rdx
    int64_t var_410 = rdx
    var_408 = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    rsi = 2
    int32_t var_400_1 = data_143cd6fe8
    rax_3 = &var_410
else
    void var_278
    rax_3 = _vfprintf_p_l(&var_278, &data_142e5c1c0, u"FInputChord")
    rsi = 1
    var_418 = *rax_3

int64_t* r14 = rax_3[1]

if (r14 != 0)
    r14[1].d += 1

int32_t rax_6 = rax_3[2].d

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_408 != 0)
        var_408[1].d -= 1
        
        if (var_408[1].d == 1)
            (**var_408)(var_408)
            int32_t rax_9 = *(var_408 + 0xc)
            *(var_408 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*var_408 + 8))(var_408, 1)

int64_t* var_270

if ((rsi.b & 1) != 0 && var_270 != 0)
    var_270[1].d -= 1
    
    if (var_270[1].d == 1)
        (**var_270)(var_270)
        int32_t rax_13 = *(var_270 + 0xc)
        *(var_270 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*var_270 + 8))(var_270, 1)

bool cond:0 = (arg1[3].b & 2) == 0
int64_t var_218
__builtin_memset(&var_218, 0, 0x2c)
int32_t var_1ec = 0x80
int32_t var_1e8 = 0xffffffff
int32_t var_1e4 = 0
int64_t var_1d8 = 0
int32_t var_1d0 = 0
int64_t* var_378

if (not(cond:0))
    int64_t var_1b8_1 = var_380
    int32_t var_1c8 = 4
    
    if (var_378 != 0)
        var_378[1].d += 1
    
    r12 = 1
    int32_t var_370
    int32_t var_1a8_1 = var_370
    char var_1a0_1 = 1
    int64_t var_2c8
    sub_140a2e390(&var_2c8, u"Mod%d", 1)
    int64_t* var_2d8 = &var_2c8
    int32_t* var_2d0_1 = &var_1c8
    void var_3f8
    sub_140b91dc0(&var_218, &var_3f8, &var_2d8, nullptr)
    int64_t rcx_13 = var_2c8
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (var_1a0_1 != 0)
        char var_1a0_2 = 0
        
        if (var_378 != 0)
            var_378[1].d -= 1
            
            if (var_378[1].d == 1)
                (**var_378)(var_378)
                int32_t rax_20 = *(var_378 + 0xc)
                *(var_378 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_378 + 8))(var_378, 1)

int64_t* var_390

if ((arg1[3].b & 8) != 0)
    int64_t var_188_1 = var_398
    int32_t var_198 = 4
    
    if (var_390 != 0)
        var_390[1].d += 1
    
    r12 += 1
    int32_t var_388
    int32_t var_178_1 = var_388
    char var_170_1 = 1
    int64_t var_2a8
    sub_140a2e390(&var_2a8, u"Mod%d", zx.q(r12))
    int64_t* var_2b8 = &var_2a8
    int32_t* var_2b0_1 = &var_198
    void var_3f4
    sub_140b91dc0(&var_218, &var_3f4, &var_2b8, nullptr)
    int64_t rcx_18 = var_2a8
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (var_170_1 != 0)
        char var_170_2 = 0
        
        if (var_390 != 0)
            var_390[1].d -= 1
            
            if (var_390[1].d == 1)
                (**var_390)(var_390)
                int32_t rax_27 = *(var_390 + 0xc)
                *(var_390 + 0xc) -= 1
                
                if (rax_27 == 1)
                    (*(*var_390 + 8))(var_390, 1)

int64_t* var_3a8

if ((arg1[3].b & 4) != 0)
    int64_t var_158_1 = var_3b0
    int32_t var_168 = 4
    
    if (var_3a8 != 0)
        var_3a8[1].d += 1
    
    r12 += 1
    int32_t var_3a0
    int32_t var_148_1 = var_3a0
    char var_140_1 = 1
    int64_t var_288
    sub_140a2e390(&var_288, u"Mod%d", zx.q(r12))
    int64_t* var_298 = &var_288
    int32_t* var_290_1 = &var_168
    void var_3f0
    sub_140b91dc0(&var_218, &var_3f0, &var_298, nullptr)
    int64_t rcx_23 = var_288
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    if (var_140_1 != 0)
        char var_140_2 = 0
        
        if (var_3a8 != 0)
            var_3a8[1].d -= 1
            
            if (var_3a8[1].d == 1)
                (**var_3a8)(var_3a8)
                int32_t rax_34 = *(var_3a8 + 0xc)
                *(var_3a8 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*var_3a8 + 8))(var_3a8, 1)

int64_t* var_3c0

if ((arg1[3].b & 1) != 0)
    int64_t var_68_1 = var_3c8
    int32_t var_78 = 4
    
    if (var_3c0 != 0)
        var_3c0[1].d += 1
    
    r12 += 1
    int32_t var_3b8
    int32_t var_58_1 = var_3b8
    char var_50_1 = 1
    int64_t var_358
    sub_140a2e390(&var_358, u"Mod%d", zx.q(r12))
    int64_t* var_368 = &var_358
    int32_t* var_360_1 = &var_78
    void var_3ec
    sub_140b91dc0(&var_218, &var_3ec, &var_368, nullptr)
    int64_t rcx_28 = var_358
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    if (var_50_1 != 0)
        char var_50_2 = 0
        
        if (var_3c0 != 0)
            var_3c0[1].d -= 1
            
            if (var_3c0[1].d == 1)
                (**var_3c0)(var_3c0)
                int32_t rax_41 = *(var_3c0 + 0xc)
                *(var_3c0 + 0xc) -= 1
                
                if (rax_41 == 1)
                    (*(*var_3c0 + 8))(var_3c0, 1)

int32_t i = 1
TEB* gsbase
void* r13 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)

do
    int64_t* rbx_8
    
    if (i s<= r12)
        int64_t var_c8_1 = var_418
        int32_t var_d8 = 4
        
        if (r14 != 0)
            r14[1].d += 1
        
        int32_t var_b8_1 = rax_6
        char var_b0_1 = 1
        int64_t var_2f8
        sub_140a2e390(&var_2f8, u"Appender%d", zx.q(i))
        int64_t* var_308 = &var_2f8
        int32_t* var_300_1 = &var_d8
        void var_3e0
        sub_140b91dc0(&var_218, &var_3e0, &var_308, nullptr)
        int64_t rcx_42 = var_2f8
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        if (var_b0_1 != 0)
            rbx_8 = r14
            char var_b0_2 = 0
        label_140e66af0:
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t rax_60 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (rax_60 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
    else
        int32_t* rsi_1 = 0x14 + *r13
        
        if (data_143cd6ff0 s> *rsi_1)
            _Init_thread_header(&data_143cd6ff0)
            
            if (data_143cd6ff0 == 0xffffffff)
                sub_140a96080(&data_143cd6fd8)
                atexit(sub_142cb0d20)
                _Init_thread_footer(&data_143cd6ff0)
        
        int64_t var_128_1 = data_143cd6fd8
        int64_t* rax_46 = data_143cd6fe0
        int32_t var_138 = 4
        
        if (rax_46 != 0)
            rax_46[1].d += 1
        
        int32_t var_118_1 = data_143cd6fe8
        char var_110_1 = 1
        int64_t var_338
        sub_140a2e390(&var_338, u"Mod%d", zx.q(i))
        int64_t* var_348 = &var_338
        int32_t* var_340_1 = &var_138
        void var_3e8
        sub_140b91dc0(&var_218, &var_3e8, &var_348, nullptr)
        int64_t rcx_34 = var_338
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        if (var_110_1 != 0)
            char var_110_2 = 0
            
            if (rax_46 != 0)
                rax_46[1].d -= 1
                
                if (rax_46[1].d == 1)
                    (**rax_46)(rax_46)
                    int32_t rax_50 = *(rax_46 + 0xc)
                    *(rax_46 + 0xc) -= 1
                    
                    if (rax_50 == 1)
                        (*(*rax_46 + 8))(rax_46, 1)
        
        if (data_143cd6ff0 s> *rsi_1)
            _Init_thread_header(&data_143cd6ff0)
            
            if (data_143cd6ff0 == 0xffffffff)
                sub_140a96080(&data_143cd6fd8)
                atexit(sub_142cb0d20)
                _Init_thread_footer(&data_143cd6ff0)
        
        int64_t var_f8_1 = data_143cd6fd8
        int64_t* rax_54 = data_143cd6fe0
        int32_t var_108 = 4
        
        if (rax_54 != 0)
            rax_54[1].d += 1
        
        int32_t var_e8_1 = data_143cd6fe8
        char var_e0_1 = 1
        int64_t var_318
        sub_140a2e390(&var_318, u"Appender%d", zx.q(i))
        int64_t* var_328 = &var_318
        int32_t* var_320_1 = &var_108
        void var_3e4
        sub_140b91dc0(&var_218, &var_3e4, &var_328, nullptr)
        int64_t rcx_39 = var_318
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        if (var_e0_1 != 0)
            rbx_8 = rax_54
            char var_e0_2 = 0
            goto label_140e66af0
    i += 1
while (i s<= 4)

int64_t var_430
sub_140a96170(&var_430)
int64_t* var_428
int32_t var_420

if (sub_140d6df00(arg1) != 0 && sub_140d6dea0(arg1) == 0)
    void var_260
    int64_t* rax_64 = sub_140d44c30(arg1, &var_260, 1)
    int64_t rcx_49 = var_430
    var_430 = *rax_64
    *rax_64 = rcx_49
    int64_t* rcx_50 = var_428
    var_428 = rax_64[1]
    rax_64[1] = rcx_50
    var_420 = rax_64[2].d
    int64_t* var_258
    
    if (var_258 != 0)
        var_258[1].d -= 1
        
        if (var_258[1].d == 1)
            (**var_258)(var_258)
            int32_t rax_70 = *(var_258 + 0xc)
            *(var_258 + 0xc) -= 1
            
            if (rax_70 == 1)
                (*(*var_258 + 8))(var_258, 1)

int64_t var_98 = var_430
int32_t var_a8 = 4

if (var_428 != 0)
    var_428[1].d += 1

int32_t var_88 = var_420
char var_80 = 1
int64_t var_440 = 0
int32_t var_438 = 0
sub_1405947f0(&var_440, 4)
int32_t rax_75 = var_438 + 4
var_438 = rax_75

if (rax_75 s> 0)
    sub_140594770(&var_440)

UnDecorator::getReferenceType(var_440, &data_142e62f50, 8)
int64_t* var_2e8 = &var_440
int32_t* var_2e0 = &var_a8
void var_3dc
sub_140b91dc0(&var_218, &var_3dc, &var_2e8, nullptr)
int64_t rcx_57 = var_440

if (rcx_57 != 0)
    sub_140a74f90(rcx_57)

if (var_80 != 0)
    char var_80_1 = 0
    
    if (var_428 != 0)
        var_428[1].d -= 1
        
        if (var_428[1].d == 1)
            (**var_428)(var_428)
            int32_t rax_78 = *(var_428 + 0xc)
            *(var_428 + 0xc) -= 1
            
            if (rax_78 == 1)
                (*(*var_428 + 8))(var_428, 1)

if (var_428 != 0)
    var_428[1].d -= 1
    
    if (var_428[1].d == 1)
        (**var_428)(var_428)
        int32_t rax_82 = *(var_428 + 0xc)
        *(var_428 + 0xc) -= 1
        
        if (rax_82 == 1)
            (*(*var_428 + 8))(var_428, 1)

void var_248
char* var_230
sub_140aaca20(arg2, 
    sub_140a96390(&var_230, 
        _vfprintf_p_l(&var_248, 
            {Mod1}{Appender1}{Mod2}{Appender2}{Mod3}{Appender3}{Mod4}{Appender4}{Key}", 
        FInputChord")), &var_218)
int64_t* var_240

if (var_240 != 0)
    var_240[1].d -= 1
    
    if (var_240[1].d == 1)
        (**var_240)(var_240)
        int32_t rax_88 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (rax_88 == 1)
            (*(*var_240 + 8))(var_240, 1)

int32_t var_1d0_1 = 0

if (var_1d8 != 0)
    sub_140a74f90(var_1d8)

sub_140acd610(&var_218)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t rax_92 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (rax_92 == 1)
            (*(*r14 + 8))(r14, 1)

if (var_3c0 != 0)
    var_3c0[1].d -= 1
    
    if (var_3c0[1].d == 1)
        (**var_3c0)(var_3c0)
        int32_t rax_96 = *(var_3c0 + 0xc)
        *(var_3c0 + 0xc) -= 1
        
        if (rax_96 == 1)
            (*(*var_3c0 + 8))(var_3c0, 1)

if (var_3a8 != 0)
    var_3a8[1].d -= 1
    
    if (var_3a8[1].d == 1)
        (**var_3a8)(var_3a8)
        int32_t rax_100 = *(var_3a8 + 0xc)
        *(var_3a8 + 0xc) -= 1
        
        if (rax_100 == 1)
            (*(*var_3a8 + 8))(var_3a8, 1)

if (var_390 != 0)
    var_390[1].d -= 1
    
    if (var_390[1].d == 1)
        (**var_390)(var_390)
        int32_t rax_104 = *(var_390 + 0xc)
        *(var_390 + 0xc) -= 1
        
        if (rax_104 == 1)
            (*(*var_390 + 8))(var_390, 1)

if (var_378 != 0)
    var_378[1].d -= 1
    
    if (var_378[1].d == 1)
        (**var_378)(var_378)
        int32_t rdi_1 = *(var_378 + 0xc)
        *(var_378 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_18 = *var_378
            (*(r8_18 + 8))(var_378, zx.q(rdi_1), r8_18)

__security_check_cookie(rax_1 ^ &var_468)
return arg2
