// 函数: sub_1417c81e0
// 地址: 0x1417c81e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int64_t* r13 = arg2
int32_t r14 = 0
int64_t* rcx = *arg1
int64_t var_258 = 0
int32_t var_250 = 0
int32_t var_22c = 0x80
int64_t var_248
__builtin_memset(&var_248, 0, 0x1c)
int32_t var_228 = 0xffffffff
int32_t var_224 = 0
int64_t var_218 = 0
int32_t var_210 = 0
int64_t var_2a8 = 0
int32_t var_2a0 = 0
int32_t var_27c = 0x80
int64_t var_298
__builtin_memset(&var_298, 0, 0x1c)
int32_t var_278 = 0xffffffff
int32_t var_274 = 0
int64_t var_268 = 0
int32_t var_260 = 0
int64_t var_208
__builtin_memset(&var_208, 0, 0x2c)
int32_t var_1dc = 0x80
int32_t var_1d8 = 0xffffffff
int32_t var_1d4 = 0
int64_t var_1c8 = 0
int32_t var_1c0 = 0
int64_t var_1b8
__builtin_memset(&var_1b8, 0, 0x2c)
int32_t var_18c = 0x80
int32_t var_188 = 0xffffffff
int32_t var_184 = 0
int64_t var_178 = 0
int32_t var_170 = 0
int64_t rax_2 = *rcx
char* var_328 = arg2
int64_t var_2e0 = 0
int32_t var_310 = 0
int32_t var_350
int64_t* var_348
char*** var_308
char** var_300

if ((*(rax_2 + 0x38))(rcx) s> 0)
    int32_t rax_19
    
    do
        int64_t* rcx_1 = *arg1
        int64_t* rax_5 = (*(*rcx_1 + 0x40))(rcx_1, zx.q(r14))
        int64_t rdx_1 = *rax_5
        void var_168
        sub_1405eb940(&var_168, (*(rdx_1 + 8))(rax_5, rdx_1))
        int32_t rdx_3 = 0
        int32_t var_318_1 = 0
        int32_t rcx_4 = 0
        int32_t var_314_1 = 0
        int64_t var_320 = 0
        int16_t* var_60
        
        if (var_60 != 0 && *var_60 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (var_60[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_320, rbx_1.d + 1)
                rcx_4 = var_314_1
                rdx_3 = var_318_1
            
            int32_t rax_7 = rdx_3 + rbx_1.d + 1
            int32_t var_318_2 = rax_7
            
            if (rax_7 s> rcx_4)
                sub_140594770(&var_320)
            
            UnDecorator::getReferenceType(var_320, var_60, (rbx_1.d + 1) * 2)
        
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int32_t var_2f8
        sub_140926e00(&var_208, &var_2f8, &var_320)
        int64_t rax_8 = sx.q(var_2f8)
        int64_t* rbx_4
        
        if (rax_8.d == 0xffffffff)
        label_1417c8447:
            sub_14098dfb0(&var_208, &var_350)
            int64_t* rbx_5 = var_348
            sub_140596d10(rbx_5, &var_320)
            rbx_5[2] = 0
            rbx_5[3] = 0
            rbx_5[4].d = 0xffffffff
            int32_t rax_10 = rbx_5[1].d
            int16_t* rdx_10
            
            if (rax_10 == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *rbx_5
            
            int32_t rcx_12 = rax_10 - 1
            
            if (rax_10 == 0)
                rcx_12 = 0
            
            sub_1405d2a60(&var_208, &var_300, sub_1405969c0(rcx_12, rdx_10), rbx_5, var_350, 
                nullptr)
            int32_t var_2f4
            sub_140926e00(&var_208, &var_2f4, &var_320)
            int64_t rax_12 = sx.q(var_2f4)
            void* rbx_6
            
            if (rax_12.d != 0xffffffff)
                rbx_6 = var_208 + rax_12 * 0x28
            
            if (rax_12.d == 0xffffffff || rbx_6 == 0)
                rbx_4 = nullptr
            else
                rbx_4 = rbx_6 + 0x10
        else
            void* rbx_3 = var_208 + rax_8 * 0x28
            
            if (rbx_3 == 0)
                goto label_1417c8447
            
            rbx_4 = rbx_3 + 0x10
            
            if (rbx_3 == -0x10)
                goto label_1417c8447
        
        int64_t rdi_2 = sx.q(rbx_4[1].d)
        int32_t rax_14 = (rdi_2 + 1).d
        rbx_4[1].d = rax_14
        
        if (rax_14 s> *(rbx_4 + 0xc))
            sub_1405a4d70(rbx_4)
        
        *(*rbx_4 + (rdi_2 << 3)) = rax_5
        sub_1405ba560(&arg1[1], &var_308, rax_5)
        int64_t rax_16 = sx.q(var_308.d)
        
        if (rax_16.d != 0xffffffff)
            int64_t rcx_19 = rax_16 << 5
            
            if (rcx_19 != neg.q(arg1[1]))
                int64_t* rbx_7 = rcx_19 + arg1[1] + 8
                
                if (rbx_7 != 0)
                    int64_t** var_2f0 = nullptr
                    int64_t var_2e8_1 = 1
                    sub_1405a4d70(&var_2f0)
                    *var_2f0 = rax_5
                    sub_1417c65c0(&var_1b8, rbx_7, &var_2f0)
                    int64_t** rcx_23 = var_2f0
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_320
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int64_t* rcx_25 = *arg1
        r14 += 1
        rax_19 = (*(*rcx_25 + 0x38))(rcx_25)
    while (r14 s< rax_19)
    r13 = var_328

sub_1417c9da0(&var_208, &var_258, &var_2e0, &var_310)
sub_1417c9da0(&var_1b8, &var_2a8, &var_328, &var_300)
sub_140b1f640(r13, &data_142d40450)
sub_140b1f640(r13, u"Shared Resources:")
sub_140b1f640(r13, &data_142d40450)
char var_358
var_328 = &var_358
var_300 = &var_328

if (var_250 - var_224 s> 0)
    sub_1417c7e40(&var_258)
    char r8_10 = var_358
    int64_t rcx_32 = var_258
    var_308 = &var_300
    sub_1417c6ca0(rcx_32, var_250 - var_224, r8_10)

sub_1405d3260(&var_258)
var_328 = &var_358
var_300 = &var_328

if (var_2a0 - var_274 s> 0)
    sub_1417c7e40(&var_2a8)
    char r8_11 = var_358
    int64_t rcx_35 = var_2a8
    var_308 = &var_300
    sub_1417c6ca0(rcx_35, var_2a0 - var_274, r8_11)

sub_1405d3260(&var_2a8)
int32_t var_368_2 = var_310
sub_140b1f700(r13, u"%-10d %s (%d)", var_2e0)
var_348 = &var_248
int32_t rax_25 = 0
int32_t var_33c = 0
int32_t rcx_38 = 0
var_350 = 0
int32_t r8_13 = 0
int32_t var_34c = 1
int32_t var_340 = 0xffffffff
int32_t var_338 = 0
int32_t var_230

if (var_230 != 0)
    int64_t* r9_5 = &var_248
    int64_t* var_238
    
    if (var_238 != 0)
        r9_5 = var_238
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_230 - 1)
    int32_t rdx_26 = *r9_5
    
    if (rdx_26 != 0)
    label_1417c877b:
        int32_t rax_33 = neg.d(rdx_26) & rdx_26
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_33)
        int32_t var_34c_1 = rax_33
        int32_t rax_34
        
        if (rax_33 == 0)
            rax_34 = 0x20
        else
            rax_34 = 0x1f - temp0_2
        
        rax_25 = r8_13 - rax_34 + 0x1f
        
        if (rax_25 s> var_230)
            rax_25 = var_230
    else
        while (true)
            int64_t rdx_27 = sx.q(rcx_38)
            r8_13 += 0x20
            rcx_38 += 1
            var_338 = r8_13
            var_350 = rcx_38
            
            if (rdx_27.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                rax_25 = var_230
                break
            
            rdx_26 = *(r9_5 + (rdx_27 << 2) + 4)
            var_340 = 0xffffffff
            
            if (rdx_26 != 0)
                goto label_1417c877b
    
    int32_t var_33c_1 = rax_25

double zmm2[0x2] = var_340.o
int128_t var_2d0 = var_350.o
double var_2c0[0x2] = zmm2
int64_t var_330 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_350.o = (&var_258).o
var_340.o = var_2d0
int32_t i_2

if (rax_25 s< var_230)
    int32_t i = i_2
    
    do
        int64_t rdx_28 = sx.q(i) * 5
        int64_t rcx_40 = *var_350.q
        
        if (*(rcx_40 + (rdx_28 << 3) + 8) != 0)
            *(rcx_40 + (rdx_28 << 3))
        
        var_368_2.q = *(rcx_40 + (rdx_28 << 3) + 0x18)
        sub_140b1f700(r13, u"%-10d %s (%d)", *(rcx_40 + (rdx_28 << 3) + 0x10))
        var_338 &= not.d(var_348:4.d)
        sub_14059bdd0(&var_348)
        i = i_2
    while (i s< *(var_340.q + 0x18))

sub_140b1f640(r13, u"Detailed:")
var_348 = &var_298
int32_t rax_41 = 0
int32_t var_33c_2 = 0
int32_t rcx_44 = 0
var_350 = 0
int32_t r8_16 = 0
int32_t var_34c_2 = 1
int32_t var_340_1 = 0xffffffff
int32_t var_338_1 = 0
int32_t var_280

if (var_280 != 0)
    int64_t* r9_8 = &var_298
    int64_t* var_288
    
    if (var_288 != 0)
        r9_8 = var_288
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(var_280 - 1)
    int32_t rdx_31 = *r9_8
    
    if (rdx_31 != 0)
    label_1417c88eb:
        int32_t rax_49 = neg.d(rdx_31) & rdx_31
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_49)
        int32_t var_34c_3 = rax_49
        int32_t rbx_8
        
        if (rax_49 == 0)
            rbx_8 = 0x20
        else
            rbx_8 = 0x1f - temp0_4
        
        rax_41 = r8_16 - rbx_8 + 0x1f
        
        if (rax_41 s> var_280)
            rax_41 = var_280
    else
        while (true)
            int64_t rdx_32 = sx.q(rcx_44)
            r8_16 += 0x20
            rcx_44 += 1
            var_338_1 = r8_16
            var_350 = rcx_44
            
            if (rdx_32.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                rax_41 = var_280
                break
            
            rdx_31 = *(r9_8 + (rdx_32 << 2) + 4)
            var_340_1 = 0xffffffff
            
            if (rdx_31 != 0)
                goto label_1417c88eb
    
    int32_t var_33c_3 = rax_41

zmm2 = var_340_1.o
int128_t var_2d0_1 = var_350.o
double var_2c0_1[0x2] = zmm2
int64_t var_330_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_350.o = (&var_2a8).o
var_340_1.o = var_2d0_1

if (rax_41 s< var_280)
    int32_t i_1 = i_2
    
    do
        int64_t rdx_33 = sx.q(i_1) * 5
        int64_t rcx_46 = *var_350.q
        
        if (*(rcx_46 + (rdx_33 << 3) + 8) != 0)
            *(rcx_46 + (rdx_33 << 3))
        
        var_368_2.q = *(rcx_46 + (rdx_33 << 3) + 0x18)
        sub_140b1f700(r13, u"%-10d %s (%d)", *(rcx_46 + (rdx_33 << 3) + 0x10))
        var_338_1 &= not.d(var_348:4.d)
        sub_14059bdd0(&var_348)
        i_1 = i_2
    while (i_1 s< *(var_340_1.q + 0x18))

int32_t var_170_1 = 0

if (var_178 != 0)
    sub_140a74f90(var_178)

sub_14094b8e0(&var_1b8)
int32_t var_1c0_1 = 0

if (var_1c8 != 0)
    sub_140a74f90(var_1c8)

sub_14094b8e0(&var_208)
int32_t var_260_1 = 0

if (var_268 != 0)
    sub_140a74f90(var_268)

sub_1417c7800(&var_2a8)
int32_t var_210_1 = 0

if (var_218 != 0)
    sub_140a74f90(var_218)

void* result = sub_1417c7800(&var_258)
__security_check_cookie(rax_1 ^ &var_388)
return result
