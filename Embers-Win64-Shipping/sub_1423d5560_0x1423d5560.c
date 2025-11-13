// 函数: sub_1423d5560
// 地址: 0x1423d5560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
int64_t* var_550 = arg3
char rdi = arg3.b
int64_t* var_558 = arg1
int64_t* r12 = arg1
uint64_t var_520 = arg2
void* rax_2
int64_t rax_3
void* rdx

if (arg2 != 0)
    rax_2 = sub_142452380()
    rdx = *(arg2 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

int32_t var_580
int64_t var_56c
uint64_t var_518_1
uint64_t rcx_7

if (arg2 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rcx_7 = nullptr
    var_518_1 = nullptr
else
    int32_t var_57c_1 = 1
    int32_t var_570_1 = 0xffffffff
    int32_t r14_1 = *(arg2 + 0x1c8)
    void* var_578_1 = arg2 + 0x1b0
    int32_t rcx_1 = 0
    var_580 = 0
    int32_t r8_1 = 0
    var_56c = 0
    
    if (r14_1 != 0)
        void* rax_5 = *(arg2 + 0x1c0)
        void* r9_1 = arg2 + 0x1b0
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r14_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1423d566a:
            int32_t rax_12 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_57c_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_56c.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r14_1)
                var_56c.d = r14_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_1)
                r8_1 += 0x20
                rcx_1 += 1
                var_56c:4.d = r8_1
                var_580 = rcx_1
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_570_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1423d566a
            
            var_56c.d = r14_1
    
    int32_t rdx_5 = *(arg2 + 0x1c8)
    double zmm2[0x2] = var_570_1.o
    var_56c.d = rdx_5
    double var_3d8_1[0x2] = zmm2
    int32_t r9_2 = 0xffffffff << (rdx_5 & 0x1f).b
    int32_t var_570_2 = r9_2
    int128_t var_3e8_1 = var_580.o
    int32_t r9_4 = rdx_5 & 0xffffffe0
    int32_t r8_4 = rdx_5 s>> 5
    int64_t var_4d0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int128_t var_4f0 = (arg2 + 0x1a0).o
    int128_t var_4e0_1 = var_3e8_1
    
    if (rdx_5 != r14_1)
        void* rax_17 = *(arg2 + 0x1c0)
        void* r10_1 = arg2 + 0x1b0
        
        if (rax_17 != 0)
            r10_1 = rax_17
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r14_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r9_2
        
        if (rdx_9 != 0)
        label_1423d5767:
            int32_t rax_23 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
            int32_t r11_1
            
            if (rax_23 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_56c.d = r9_4 - r11_1 + 0x1f
            
            if (r9_4 - r11_1 + 0x1f s> r14_1)
                var_56c.d = r14_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_4 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_570_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1423d5767
            
            var_56c.d = r14_1
    
    while (true)
        int32_t rax_16
        
        if (var_4e0_1:0xc.d != (var_570_2.q u>> 0x20).d || var_4e0_1.q != arg2 + 0x1b0)
            rax_16.b = 0
        else
            rax_16.b = 1
        
        if (rax_16.b == 0 || var_4f0.q != arg2 + 0x1a0)
            rax_16.b = 1
        else
            rax_16.b = 0
        
        rcx_7 = arg2
        var_518_1 = rcx_7
        
        if (rax_16.b == 0)
            break
        
        var_4e0_1:8.d &= not.d(var_4f0:0xc.d)
        sub_14059bdd0(&var_4f0:8)
    
    r12 = arg1

void* var_510 = nullptr
int64_t* var_538 = nullptr
char rax_26 = arg3:4.b

if (rcx_7 != 0 && rax_26 != 0)
    void* r14_5 = *(rcx_7 + 0x10)
    void var_3f8
    int64_t rbx_2 = *sub_140b58170(&var_3f8, "RootComponent", 1)
    int64_t* r14_6
    
    if (rbx_2 != 0)
        var_580.q = r14_5
        int64_t* rax_28
        
        if (r14_5 == 0)
            rax_28 = nullptr
        else
            rax_28 = *(r14_5 + 0x50)
        
        int32_t var_570_3 = 0xffffffff
        var_56c.w = 0x101
        var_56c:2.b = 0
        sub_141ac6940(&var_580)
        r14_6 = rax_28
        var_538 = r14_6
    
    if (rbx_2 == 0 || r14_6 == 0)
    label_1423d58a0:
        var_538 = nullptr
    else
        while (true)
            int64_t rax_29 = r14_6[5]
            int64_t var_598_1 = rax_29
            
            if (rax_29 == rbx_2)
                if (r14_6 != 0)
                    void* rax_54 = (*(*r14_6 + 0x140))(r14_6, sx.q(*(r14_6 + 0x4c)) + var_518_1)
                    var_510 = rax_54
                    void* rax_55
                    int64_t rax_56
                    void* rdx_17
                    
                    if (rax_54 != 0)
                        rax_55 = sub_1425881f0()
                        rdx_17 = *(rax_54 + 0x10)
                        rax_56 = sx.q(*(rax_55 + 0x38))
                    
                    if (rax_54 == 0 || rax_56.d s> *(rdx_17 + 0x38)
                            || *(*(rdx_17 + 0x30) + (rax_56 << 3)) != rax_55 + 0x30)
                        var_510 = nullptr
                
                break
            
            int64_t* rax_30 = r14_6[4]
            sub_141ac6940(&var_580)
            r14_6 = rax_30
            var_538 = r14_6
            
            if (r14_6 == 0)
                goto label_1423d58a0

int32_t i_3 = 0
int64_t* result_1 = nullptr
int64_t* result_2 = nullptr
int32_t var_55c = 0
int32_t i_2 = 0
int32_t var_524 = 0
int64_t var_378
__builtin_memset(&var_378, 0, 0x2c)
int32_t var_34c = 0x80
int32_t var_348 = 0xffffffff
int32_t var_344 = 0
int64_t var_338 = 0
int32_t var_330 = 0
int64_t* var_5a0 = nullptr
void** var_4c8
memset(&var_4c8, 0, 0x90)
sub_140b4c2a0(&var_4c8)
int64_t var_438 = 0
var_4c8 = &data_142d6ad48
int64_t var_418
int64_t* var_430 = &var_418
int64_t* var_428 = var_5a0
sub_140b552b0(&var_4c8, 1)
var_4c8[0x1b](&var_4c8, 0)
char var_49e
char r8_5 = var_49e & 0xf7
char var_49f
char rdx_11 = var_49f & 0xbf
char var_49e_1 = r8_5
char var_49f_1 = rdx_11
var_4c8 = &data_14305cfc8
void* rcx_16 = r12[2]

if (rcx_16 != 0)
    while ((*(rcx_16 + 0xcc) & 0x80) == 0)
        rcx_16 = *(rcx_16 + 0x40)
        
        if (rcx_16 == 0)
            break

void* rax_33 = *(arg2 + 0x10)

if (rax_33 != 0)
    while ((*(rax_33 + 0xcc) & 0x80) == 0)
        rax_33 = *(rax_33 + 0x40)
        
        if (rax_33 == 0)
            break

int32_t var_41c = 0
var_418 = 0
var_4c8 = &data_1433428e0
char var_408 = arg3:5.b
char rax_35 = 0

if (arg3:1.b == 0)
    rax_35 = -0x80

int32_t var_410 = 0
uint32_t rax_36 = zx.d(arg3:3.b)
char temp2 = rax_36.b
rax_36.b = neg.b(rax_36.b)
char var_49f_2 = (rdx_11 & 0x3f) | rax_35 | 0x40
char var_49e_2 = r8_5 | 8
int32_t rax_38 = sbb.d(rax_36, rax_36, temp2 != 0) & 0x8000000
int32_t var_498
int32_t var_498_1 = var_498 | rax_38
int32_t var_5c4 = rax_38
(*(*r12 + 0xa0))(r12, &var_4c8)
void** var_5b8 = nullptr
int32_t var_5b0 = 0
sub_140d3ccc0(r12, &var_5b8, 1, 0, 0)
int32_t rax_40 = var_5b0
int32_t rbx_3 = 0

if (rax_40 s> 0)
    int64_t* r14_7 = nullptr
    
    do
        void* r15_1 = *(r14_7 + var_5b8)
        
        if (sub_140d23cf0(r15_1) == 0 && (1 & (*(r15_1 + 8) u>> 0x12).b) == 0)
            int32_t rax_45 = var_5b0
            int32_t r8_9 = rax_45 - rbx_3 - 1
            
            if (r8_9 s>= 1)
                r8_9 = 1
            
            if (r8_9 != 0)
                void** rcx_20 = var_5b8
                memcpy(&rcx_20[sx.q(rbx_3)], &rcx_20[sx.q(rax_45 - r8_9)], r8_9 << 3)
                rax_45 = var_5b0
            
            var_5b0 = rax_45 - 1
            sub_1405c53d0(&var_5b8)
            rbx_3 -= 1
            r14_7 -= 8
        
        rax_40 = var_5b0
        rbx_3 += 1
        r14_7 = &r14_7[1]
    while (rbx_3 s< rax_40)

void** rcx_23 = var_5b8
void** var_500 = rcx_23
void* rax_51 = &rcx_23[sx.q(rax_40)]
int32_t var_548
int64_t* var_540
void** var_328
char var_2ff
char var_2fe
int64_t* var_290
bool var_288

if (rcx_23 != rax_51)
    var_5a0 = nullptr
    int32_t i_4 = 0
    int64_t* rbx_4 = var_5a0
    
    do
        int64_t* r13_2 = *rcx_23
        var_5a0 = r13_2
        int64_t* rax_52 = j_sub_140a82f30(0x18)
        int64_t* r12_2 = rax_52
        
        if (rax_52 == 0)
            r12_2 = nullptr
        else
            __builtin_memset(rax_52, 0, 0x18)
        
        int64_t i_5 = sx.q(i_4)
        i_4 = (i_5 + 1).d
        
        if (i_4 s> var_55c)
            sub_140638870(&result_2)
            var_55c = var_524
            result_1 = result_2
        
        result_1[i_5] = r12_2
        r12_2[2] = r13_2
        int64_t* rax_60 = sub_140d21e10(r13_2, &var_580, arg1)
        sub_140a696e0(&var_378, &var_548)
        *var_540 = 0
        *var_540 = *rax_60
        *rax_60 = 0
        var_540[1].d = rax_60[1].d
        *(var_540 + 0xc) = *(rax_60 + 0xc)
        rax_60[1] = 0
        var_540[2].d = i_4 - 1
        var_540[3].d = 0xffffffff
        int32_t rax_61 = var_540[1].d
        int16_t* rdx_21
        
        if (rax_61 == 0)
            rdx_21 = &data_142d40450
        else
            rdx_21 = *var_540
        
        int32_t rcx_33 = rax_61 - 1
        
        if (rax_61 == 0)
            rcx_33 = 0
        
        sub_14062c400(&var_378, &i_3, sub_1405969c0(rcx_33, rdx_21), var_540, var_548, nullptr)
        int64_t rcx_36 = var_580.q
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        memset(&var_328, 0, 0x90)
        sub_140b4c2a0(&var_328)
        int64_t var_298_1 = 0
        var_290 = r12_2
        var_328 = &data_142d6ad48
        var_288.q = rbx_4
        sub_140b552b0(&var_328, 1)
        var_328[0x1b](&var_328, 0)
        int64_t* rcx_41 = var_5a0
        var_2fe |= 8
        var_328 = &data_14305cfc8
        var_2ff = (var_2ff & 0x3f) | rax_35 | 0x40
        int32_t var_2f8 = var_2f8 | var_5c4
        (*(*rcx_41 + 0xa0))(rcx_41, &var_328)
        sub_140b4cb40(&var_328)
        rcx_23 = &var_500[1]
        var_500 = rcx_23
    while (rcx_23 != rax_51)
    
    rcx_23 = var_5b8
    i_3 = i_4
    rdi = var_550.b
    i_2 = i_3

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t var_3c8
__builtin_memset(&var_3c8, 0, 0x2c)
int32_t var_39c = 0x80
int32_t var_398 = 0xffffffff
int32_t var_394 = 0
int64_t var_388 = 0
int32_t var_380 = 0
sub_1423ccae0(&var_3c8, &var_558, &var_520)
uint64_t r15_3 = var_520
void* rax_67 = sub_140d209c0(r15_3)
void* rax_68 = sub_140d209c0(var_558)
sub_140598750(&var_3c8, &var_548)
uint32_t rdx_28 = (rax_68 u>> 4).d
char* var_5d0_2 = nullptr
*var_540 = rax_68
int32_t r8_17 = (0x9e3779b9 - rdx_28) ^ rdx_28 << 8
var_540[1] = rax_67
var_540[2].d = 0xffffffff
int32_t rcx_50 = neg.d(rdx_28 + r8_17) ^ r8_17 u>> 0xd
int32_t rdx_31 = (rdx_28 - rcx_50 - r8_17) ^ rcx_50 u>> 0xc
int32_t r8_20 = (r8_17 - rdx_31 - rcx_50) ^ rdx_31 << 0x10
int32_t rcx_53 = (rcx_50 - rdx_31 - r8_20) ^ r8_20 u>> 5
int32_t rdx_34 = (rdx_31 - rcx_53 - r8_20) ^ rcx_53 u>> 3
int32_t r8_23 = (r8_20 - rdx_34 - rcx_53) ^ rdx_34 << 0xa
sub_140864e40(&var_3c8, &var_5c4, r8_23 u>> 0xf ^ (rcx_53 - (rdx_34 + r8_23)), var_540, var_548, 
    var_5d0_2)

if (arg3:2.b != 0)
    int64_t r14_10 = *(r15_3 + 0x10)
    int64_t rbx_7 = var_558[2]
    sub_140598750(&var_3c8, &var_548)
    char* var_5d0_3 = nullptr
    uint32_t rdx_38 = (rbx_7 u>> 4).d
    int32_t r8_27 = (0x9e3779b9 - rdx_38) ^ rdx_38 << 8
    *var_540 = rbx_7
    var_540[1] = r14_10
    var_540[2].d = 0xffffffff
    int32_t rcx_59 = neg.d(rdx_38 + r8_27) ^ r8_27 u>> 0xd
    int32_t rdx_41 = (rdx_38 - rcx_59 - r8_27) ^ rcx_59 u>> 0xc
    int32_t r8_30 = (r8_27 - rdx_41 - rcx_59) ^ rdx_41 << 0x10
    int32_t rcx_62 = (rcx_59 - rdx_41 - r8_30) ^ r8_30 u>> 5
    int32_t rdx_44 = (rdx_41 - rcx_62 - r8_30) ^ rcx_62 u>> 3
    int32_t r8_33 = (r8_30 - rdx_44 - rcx_62) ^ rdx_44 << 0xa
    sub_140864e40(&var_3c8, &var_5c4, r8_33 u>> 0xf ^ (rcx_62 - (rdx_44 + r8_33)), var_540, 
        var_548, var_5d0_3)

int64_t* rbx_8 = *(r15_3 + 0x10)
int64_t r14_11 = rbx_8[0x23]

if (r14_11 == 0)
    (*(*rbx_8 + 0x390))(rbx_8)
    r14_11 = rbx_8[0x23]

int64_t* rbx_9 = var_558[2]
int64_t* rax_104 = rbx_9[0x23]
var_550 = rax_104
int64_t* rbx_10

if (rax_104 != 0)
    rbx_10 = var_550
else
    (*(*rbx_9 + 0x390))(rbx_9)
    rbx_10 = rbx_9[0x23]

sub_140598750(&var_3c8, &var_548)
char* var_5d0_4 = nullptr
uint32_t rcx_69 = (rbx_10 u>> 4).d
int32_t r12_4 = (0x9e3779b9 - rcx_69) ^ rcx_69 << 8
*var_540 = rbx_10
var_540[1] = r14_11
var_540[2].d = 0xffffffff
int32_t r8_38 = neg.d(r12_4 + rcx_69) ^ r12_4 u>> 0xd
int32_t rcx_72 = (rcx_69 - r8_38 - r12_4) ^ r8_38 u>> 0xc
int32_t r12_7 = (r12_4 - rcx_72 - r8_38) ^ rcx_72 << 0x10
int32_t r8_41 = (r8_38 - rcx_72 - r12_7) ^ r12_7 u>> 5
int32_t rcx_75 = (rcx_72 - r8_41 - r12_7) ^ r8_41 u>> 3
int32_t r12_10 = (r12_7 - rcx_75 - r8_41) ^ rcx_75 << 0xa
sub_140864e40(&var_3c8, &var_5c4, (r8_41 - rcx_75 - r12_10) ^ r12_10 u>> 0xf, var_540, var_548, 
    var_5d0_4)
int64_t var_590 = 0
int64_t var_588 = 0
var_5b8 = nullptr
int32_t var_5b0_1 = 0
void var_560
sub_1423d0be0(&var_560, r15_3, &var_590)
int32_t rax_121 = var_588.d
int32_t var_5a8_3 = 0

if (rax_121 s> 0)
    int64_t* r12_12 = nullptr
    int32_t rbx_13
    
    do
        int64_t* r14_12 = *(r12_12 + var_590)
        var_5a0 = r14_12
        sub_14062d5f0(&var_378, &var_5c4, sub_140d21e10(r14_12, &var_580, r15_3))
        int64_t rax_124 = sx.q(var_5c4)
        int64_t rcx_81
        int32_t* rbx_11
        
        if (rax_124.d != 0xffffffff)
            rcx_81 = rax_124 << 5
            rbx_11 = rcx_81 + var_378 + 0x10
        
        if (rax_124.d == 0xffffffff || rcx_81 == neg.q(var_378))
            rbx_11 = nullptr
        
        int64_t rcx_83 = var_580.q
        
        if (rcx_83 != 0)
            sub_140a74f90(rcx_83)
        
        if (rbx_11 == 0)
            void* rax_129 = r14_12[4]
            
            if (rax_129 != 0)
                while (rax_129 != r15_3)
                    rax_129 = *(rax_129 + 0x20)
                    
                    if (rax_129 == 0)
                        break
        else
            sub_1423ccae0(&var_3c8, result_1[sx.q(*rbx_11)] + 0x10, &var_5a0)
            
            if (rdi != 0)
                int64_t* rcx_85 = *(var_558[2] + 0x40)
                
                if (rcx_85 != 0)
                    int64_t* rax_128 = sub_140bdd980(rcx_85, var_5a0[3])
                    var_550 = rax_128
                    
                    if (rax_128 != 0)
                        sub_1423ccae0(&var_3c8, &var_550, &var_5a0)
        
        r12_12 = &r12_12[1]
        rax_121 = var_588.d
        rbx_13 = var_5a8_3 + 1
        var_5a8_3 = rbx_13
    while (rbx_13 s< rax_121)
    i_2 = i_3

if (var_410 s> 0)
    memset(&var_328, 0, 0x90)
    sub_140b4c2a0(&var_328)
    int64_t var_298_2 = 0
    var_328 = &data_14305cdc0
    var_290 = &var_418
    sub_140b55290(&var_328, 1)
    var_328[0x1b](&var_328, 0)
    var_2ff |= 0x40
    var_2fe |= 8
    var_288 = rcx_16 == rax_33
    var_328 = &data_143342ae8
    int32_t var_284_1 = 0
    (*(*r15_3 + 0xa0))(r15_3, &var_328)
    sub_140b4cb40(&var_328)
    rax_121 = var_588.d

int32_t r14_13 = 0

if (rax_121 s> 0)
    int64_t** r12_13 = nullptr
    
    do
        int64_t* rdi_1 = *(r12_13 + var_590)
        sub_14062d5f0(&var_378, &var_5c4, sub_140d21e10(rdi_1, &var_580, r15_3))
        int64_t rax_135 = sx.q(var_5c4)
        int64_t rcx_96
        int32_t* rbx_14
        
        if (rax_135.d != 0xffffffff)
            rcx_96 = rax_135 << 5
            rbx_14 = rcx_96 + var_378 + 0x10
        
        if (rax_135.d == 0xffffffff || rcx_96 == neg.q(var_378))
            rbx_14 = nullptr
        
        int64_t rcx_98 = var_580.q
        
        if (rcx_98 != 0)
            sub_140a74f90(rcx_98)
        
        if (rbx_14 != 0)
            int64_t* rbx_15 = result_1[sx.q(*rbx_14)]
            memset(&var_328, 0, 0x90)
            sub_140b4c2a0(&var_328)
            int64_t var_298_3 = 0
            var_290 = rbx_15
            var_328 = &data_14305cdc0
            sub_140b55290(&var_328, 1)
            var_328[0x1b](&var_328, 0)
            var_2fe |= 8
            var_2ff |= 0x40
            (*(*rdi_1 + 0xa0))(rdi_1, &var_328)
            sub_142086f10(rbx_15[2], rdi_1, &var_3c8, &var_5b8)
            sub_140b4cb40(&var_328)
        
        rax_121 = var_588.d
        r14_13 += 1
        r12_13 = &r12_13[1]
    while (r14_13 s< rax_121)
    
    i_2 = i_3

int64_t rbx_16 = sx.q(var_5b0_1)

if (rbx_16.d != 0)
    int32_t rdx_63 = rbx_16.d + rax_121
    
    if (rdx_63 s> var_588:4.d)
        sub_1405c5570(&var_590, rdx_63)
        rax_121 = var_588.d
    
    memcpy(var_590 + (sx.q(rax_121) << 3), var_5b8, (rbx_16 << 3).d)
    var_588.d += rbx_16.d

void** rcx_109 = var_5b8

if (rcx_109 != 0)
    sub_140a74f90(rcx_109)

int64_t* rdi_2 = var_558
sub_142086f10(rdi_2, r15_3, &var_3c8, &var_590)
int32_t var_5d8_5 = 0x20000000
var_550 = &var_3c8
int64_t** var_540_1 = &var_550
var_548.q = sub_1423d3db0
sub_140d3bfe0(rdi_2, &var_548, 1, 0, var_5d8_5)

if (arg3:7.b != 0)
    void* rax_140 = sub_140d21d80(r15_3)
    var_5d8_5.b = 0
    void** var_1b8
    sub_1423ce580(&var_1b8, r15_3, &var_3c8, rax_140, var_5d8_5.b)
    int32_t i = 0
    
    if (var_588.d s> 0)
        int64_t* rdi_3 = nullptr
        
        do
            int64_t rbx_17 = *(rdi_3 + var_590)
            sub_140b4c2a0(&var_328)
            var_2ff &= 0xbf
            int64_t* var_1d0_1 = &var_3c8
            __builtin_memset(&var_288, 0, 0x2c)
            var_2fe = (var_2fe & 0xfd) | 0x64
            int32_t var_25c_1 = 0x80
            int32_t var_258_1 = 0xffffffff
            int32_t var_254_1 = 0
            int64_t var_248_1 = 0
            int32_t var_240_1 = 0
            int64_t var_238
            __builtin_memset(&var_238, 0, 0x3c)
            int32_t var_1fc_1 = 0x80
            int32_t var_1f8_1 = 0xffffffff
            int32_t var_1f4_1 = 0
            int64_t var_1e8_1 = 0
            int32_t var_1e0_1 = 0
            int64_t var_298_4 = rbx_17
            var_290.d = 0
            char var_1d8_1 = 0
            var_328 = &data_143342cf0
            void* var_1c8_1 = rax_140
            sub_1423ef760(&var_328)
            sub_1423cfdb0(&var_328)
            i += 1
            rdi_3 = &rdi_3[1]
        while (i s< var_588.d)
        
        r15_3 = var_520
        i_2 = i_3
        rdi_2 = var_558
    
    sub_1423cfdb0(&var_1b8)

if (var_518_1 != 0 && rax_26 != 0)
    if (var_538 != 0)
        (*(*var_538 + 0x148))(var_538, sx.q(*(var_538 + 0x4c)) + var_518_1, var_510)
    
    sub_141dd5990(var_518_1)

int64_t rbx_19 = data_143f5b520
int64_t rcx_120

if (data_143de5480 == 0)
    rcx_120 = 0
else
    rcx_120.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_19 + (rcx_120 << 2)) != 0)
    int64_t* rax_145 = sub_140d21830(rdi_2, &var_580, 0, 0)
    void** rbx_20 = &data_142d40450
    int16_t* const r8_59
    
    if (rax_145[1].d == 0)
        r8_59 = &data_142d40450
    else
        r8_59 = *rax_145
    
    sub_140a2e390(&var_5b8, u"CopyPropertiesForUnrelatedObjects: Old (%s)", r8_59)
    void** rcx_123 = &data_142d40450
    
    if (var_5b0_1 != 0)
        rcx_123 = var_5b8
    
    sub_14240b870(rcx_123, rdi_2)
    void** rcx_124 = var_5b8
    
    if (rcx_124 != 0)
        sub_140a74f90(rcx_124)
    
    int64_t rcx_125 = var_580.q
    
    if (rcx_125 != 0)
        sub_140a74f90(rcx_125)
    
    int64_t* rax_146 = sub_140d21830(r15_3, &var_580, 0, 0)
    int16_t* const r8_60
    
    if (rax_146[1].d == 0)
        r8_60 = &data_142d40450
    else
        r8_60 = *rax_146
    
    sub_140a2e390(&var_5b8, u"CopyPropertiesForUnrelatedObjects: New (%s)", r8_60)
    
    if (var_5b0_1 != 0)
        rbx_20 = var_5b8
    
    sub_14240b870(rbx_20, r15_3)
    void** rcx_129 = var_5b8
    
    if (rcx_129 != 0)
        sub_140a74f90(rcx_129)
    
    int64_t rcx_130 = var_580.q
    
    if (rcx_130 != 0)
        sub_140a74f90(rcx_130)

if (arg3:6.b != 0)
    int64_t* rcx_131 = data_143f5b298
    
    if (rcx_131 != 0)
        (*(*rcx_131 + 0x380))(rcx_131, &var_3c8)

int64_t rcx_132 = var_590

if (rcx_132 != 0)
    sub_140a74f90(rcx_132)

sub_1405ae080(&var_3c8)
int64_t rcx_134 = var_418

if (rcx_134 != 0)
    sub_140a74f90(rcx_134)

sub_140b4cb40(&var_4c8)
int32_t var_330_1 = 0

if (var_338 != 0)
    sub_140a74f90(var_338)

sub_14062cb70(&var_378, 0)
int64_t var_358

if (var_358 != 0)
    sub_140a74f90(var_358)

int64_t rcx_139 = var_378

if (rcx_139 != 0)
    sub_140a74f90(rcx_139)

int64_t* result = result_1
int64_t* result_3 = result

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rbx_21 = *result_3
        
        if (rbx_21 != 0)
            int64_t rcx_140 = *rbx_21
            
            if (rcx_140 != 0)
                sub_140a74f90(rcx_140)
            
            j_sub_140a74f90(rbx_21)
        
        result_3 = &result_3[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = result_1

int32_t var_528_2 = 0

if (var_55c != 0)
    sub_140638c50(&result_2, 0)
    result = result_2

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_5f8)
return result
