// 函数: sub_140b39220
// 地址: 0x140b39220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int16_t* r12 = arg2

while (arg1[0x13] s< arg1[0x12])
    sub_140b39a60(arg1)

int16_t* var_170 = nullptr
int32_t var_168 = 0
sub_1405947f0(&var_170, 7)
int32_t rsi = var_168 + 7

if (rsi s> 0)
    sub_140594770(&var_170)

int16_t* r14 = var_170
sub_1405a7220(r14, 7, "EVENTS", 7, 0x3f)
char var_178

if (arg1[0xc].b == 0)
    var_178 = 0x2c
    sub_140b45b50(&arg1[0xa], &var_178, 1)

arg1[0xc].b = 0
int16_t* const rdx_2 = &data_142d40450

if (rsi != 0)
    rdx_2 = r14

void var_d8
sub_1408f2b40(&var_d8, rdx_2)
int64_t var_50
int32_t var_48
sub_140b45b50(&arg1[0xa], var_50, zx.q(var_48))
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t* rsi_1 = arg1[0x15]
int64_t rbx_1 = 0
uint64_t r14_2 = sx.q(arg1[0x16].d) << 3 u>> 3

if (rsi_1 u> &rsi_1[arg1[0x16]])
    r14_2 = 0

if (r14_2 != 0)
    do
        void* r15_1 = *rsi_1
        
        if (arg1[0xc].b == 0)
            var_178 = 0x2c
            sub_140b45b50(&arg1[0xa], &var_178, 1)
        
        arg1[0xc].b = 0
        sub_140b4b280(&arg1[0xa], r15_1 + 8)
        rsi_1 = &rsi_1[1]
        rbx_1 += 1
    while (rbx_1 != r14_2)

var_178 = 0xa
sub_140b45b50(&arg1[0xa], &var_178, 1)
arg1[0xc].b = 1
var_170 = nullptr
int32_t var_168_1 = 0
sub_1405947f0(&var_170, 2)
int32_t rax_6 = var_168_1 + 2
var_168_1 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_170)

UnDecorator::getReferenceType(var_170, &(*U"RGBXYZF10|")[7], 4)
int64_t* var_160 = nullptr
int32_t var_158 = 0
sub_1405947f0(&var_160, 0x12)
int32_t rax_7 = var_158 + 0x12
var_158 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_160)

UnDecorator::getReferenceType(var_160, u"HasHeaderRowAtEnd", 0x24)
sub_140b4b0a0(&arg1[0xa], &var_160, &var_170)
int64_t* rcx_19 = var_160

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int16_t* rcx_20 = var_170

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int32_t r11 = *(r12 + 0x28)
void* r15_2 = &r12[8]
var_160 = nullptr
int32_t rcx_21 = 0
int32_t var_150 = 0
int32_t r8_2 = 0
int32_t var_14c = 1
void* var_148 = r15_2
int32_t var_140 = 0xffffffff
int64_t var_13c = 0

if (r11 != 0)
    void* rax_8 = *(r15_2 + 0x10)
    void* r9_1 = r15_2
    
    if (rax_8 != 0)
        r9_1 = rax_8
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_12 = *r9_1
    
    if (rdx_12 != 0)
    label_140b3952b:
        int32_t rax_15 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_14c_1 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        var_13c.d = r8_2 - rax_16 + 0x1f
        
        if (r8_2 - rax_16 + 0x1f s> r11)
            var_13c.d = r11
    else
        while (true)
            int64_t rdx_13 = sx.q(rcx_21)
            r8_2 += 0x20
            rcx_21 += 1
            var_13c:4.d = r8_2
            var_150 = rcx_21
            
            if (rdx_13.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
            var_140 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_140b3952b
        
        var_13c.d = r11

int32_t rdx_14 = *(r12 + 0x28)
int16_t* var_130 = r12
double zmm2[0x2] = var_140.o
int128_t var_128 = var_150.o
int32_t r14_3 = 0xffffffff << (rdx_14.b & 0x1f)
int128_t zmm0 = var_130.o
int32_t r8_5 = rdx_14 s>> 5
int32_t r9_3 = rdx_14 & 0xffffffe0
double var_118[0x2] = zmm2
int64_t var_e0 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t zmm1 = var_128
var_128:8.d = r14_3
var_128:0xc.d = rdx_14
int128_t var_100 = zmm0
int128_t var_f0 = zmm1

if (rdx_14 != r11)
    void* rax_18 = *(r15_2 + 0x10)
    void* r10_1 = r15_2
    
    if (rax_18 != 0)
        r10_1 = rax_18
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_18 = *(r10_1 + (sx.q(r8_5) << 2)) & r14_3
    
    if (rdx_18 != 0)
    label_140b39602:
        int32_t rax_25 = neg.d(rdx_18) & rdx_18
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_25)
        int32_t rbx_2
        
        if (rax_25 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_4
        
        var_128:0xc.d = r9_3 - rbx_2 + 0x1f
        
        if (r9_3 - rbx_2 + 0x1f s> r11)
            var_128:0xc.d = r11
    else
        while (true)
            int64_t rcx_26 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_26.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_18 = *(r10_1 + (rcx_26 << 2) + 4)
            var_128:8.d = 0xffffffff
            
            if (rdx_18 != 0)
                goto label_140b39602
        
        var_128:0xc.d = r11

while (true)
    int64_t result = sx.q(var_f0:0xc.d)
    int64_t* rdx_19 = var_100.q
    
    if (result.d == (var_128:8.q u>> 0x20).d && var_f0.q == r15_2 && rdx_19 == r12)
        int64_t* r15_4 = var_160
        
        if (r15_4 != 0)
            result = sub_140b4b0a0(&arg1[0xa], r15_4, &r15_4[2])
        
        __security_check_cookie(rax_1 ^ &var_1a8)
        return result
    
    int64_t rcx_28 = result * 5
    int64_t rax_27 = *rdx_19
    int64_t* r12_1 = rax_27 + (rcx_28 << 3)
    int16_t* rcx_29
    
    if (*(rax_27 + (rcx_28 << 3) + 8) == 0)
        rcx_29 = &data_142d40450
    else
        rcx_29 = *r12_1
    
    if (sub_140a54570(rcx_29, "Commandline") != 0)
        int16_t* const r8_6
        
        if (r12_1[1].d == 0)
            r8_6 = &data_142d40450
        else
            r8_6 = *r12_1
        
        sub_140a2e390(&var_130, u"[%s]", r8_6)
        int16_t* rsi_2 = &data_142d40450
        
        if (var_128.d != 0)
            rsi_2 = var_130
        
        int16_t* r14_4 = nullptr
        int32_t r15_3 = 0
        var_170 = nullptr
        int32_t rax_29 = 0
        int64_t var_168_2 = 0
        
        if (rsi_2 != 0 && *rsi_2 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (rsi_2[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_170, rbx_3.d + 1)
                rax_29 = var_168_2:4.d
                r15_3 = var_168_2.d
                r14_4 = var_170
            
            r15_3 += rbx_3.d + 1
            var_168_2.d = r15_3
            
            if (r15_3 s> rax_29)
                sub_140594770(&var_170)
                r15_3 = var_168_2.d
                r14_4 = var_170
            
            UnDecorator::getReferenceType(r14_4, rsi_2, (rbx_3.d + 1) * 2)
        
        if (arg1[0xc].b == 0)
            var_178 = 0x2c
            sub_140b45b50(&arg1[0xa], &var_178, 1)
        
        arg1[0xc].b = 0
        int16_t* rdx_24 = &data_142d40450
        
        if (r15_3 != 0)
            rdx_24 = r14_4
        
        sub_1408f2b40(&var_d8, rdx_24)
        sub_140b45b50(&arg1[0xa], var_50, zx.q(var_48))
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
        
        int16_t* rcx_39 = var_130
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        if (arg1[0xc].b == 0)
            var_178 = 0x2c
            sub_140b45b50(&arg1[0xa], &var_178, 1)
        
        arg1[0xc].b = 0
        sub_140b4b280(&arg1[0xa], &r12_1[2])
    else
        var_160 = r12_1
    
    var_f0:8.d &= not.d(var_100:0xc.d)
    sub_14059bdd0(&var_100:8)
    r15_2 = var_148
    r12 = arg2
