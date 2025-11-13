// 函数: sub_14208aa70
// 地址: 0x14208aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rdi = arg3
int64_t var_160 = arg3
void* var_148 = arg1
int64_t* var_178
int64_t rbx = *sub_140b58260(&var_178, u"AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_3 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_3
var_178 = (*(rdx_1 + 0x48))(rax_3, rdx_1)
int64_t* r12 = nullptr
int64_t* var_170 = nullptr
int32_t i_2 = 0
int32_t r13 = 0
int32_t var_164 = 0
void* var_188 = nullptr
int32_t var_180 = 0
int32_t rdx_2 = sub_140bb3810(&var_188)
void* r14 = var_188
int64_t rbx_1 = sx.q(var_180)
void* rax_7 = (rbx_1 << 4) + r14
int64_t var_198

if (r14 != rax_7)
    do
        int32_t rbx_2 = *(r14 + 8)
        var_198 = 0
        int64_t rsi_1 = *r14
        sub_1405a4c70(&var_198, sbb.d(rdx_2, rdx_2, rbx_2 != 0) + 6 + rbx_2, 0)
        memcpy(var_198, rsi_1, rbx_2 * 2)
        rdx_2 = sub_140a2cf70(&var_198, u"L10N", 4)
        int64_t i_3 = sx.q(i_2)
        i_2 = (i_3 + 1).d
        
        if (i_2 s> r13)
            rdx_2 = sub_1405a4f90(&var_170)
            r13 = var_164
            r12 = var_170
        
        int64_t* rcx_9 = &r12[i_3 * 2]
        *rcx_9 = 0
        *rcx_9 = var_198
        var_198 = 0
        rcx_9[1].d = rbx_2
        int32_t var_18c
        *(rcx_9 + 0xc) = var_18c
        int64_t rcx_10 = var_198
        int32_t var_190_1
        var_190_1.q = 0
        
        if (rcx_10 != 0)
            rdx_2 = sub_140a74f90(rcx_10)
        
        r14 += 0x10
    while (r14 != rax_7)
    
    rbx_1 = zx.q(var_180)
    r14 = var_188
    rdi = var_160

if (rbx_1.d != 0)
    int32_t i
    
    do
        int64_t rcx_11 = *r14
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        r14 += 0x10
        i = rbx_1.d
        rbx_1 = zx.q(rbx_1.d - 1)
    while (i != 1)
    r14 = var_188

if (r14 != 0)
    sub_140a74f90(r14)

int32_t rcx_13 = 0
void* r14_3 = &r12[sx.q(i_2) * 2]
int64_t var_138
__builtin_memset(&var_138, 0, 0x6c)
int32_t rsi_2 = 0
int64_t* rbx_3 = r12
int32_t var_cc = 0x80
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
uint64_t var_a8 = 0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x24)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int16_t var_57 = 0
char var_58 = 1
int64_t var_128

if (r12 != r14_3)
    do
        int16_t* rdx_8
        
        if (rbx_3[1].d == 0)
            rdx_8 = &data_142d40450
        else
            rdx_8 = *rbx_3
        
        sub_140b58260(&var_160, rdx_8, 1)
        int64_t var_120_1
        int64_t rsi_3 = sx.q(var_120_1.d)
        int32_t rax_13 = (rsi_3 + 1).d
        var_120_1.d = rax_13
        
        if (rax_13 s> var_120_1:4.d)
            sub_1405a4d70(&var_128)
        
        rbx_3 = &rbx_3[2]
        *(var_128 + (rsi_3 << 3)) = var_160
    while (rbx_3 != r14_3)
    
    int32_t var_fc
    rcx_13 = var_fc
    int32_t var_100
    rsi_2 = var_100

var_57:1.b = 0
int32_t var_100_1 = rsi_2 + 1
int64_t var_108

if (rsi_2 + 1 s> rcx_13)
    sub_1405a4d70(&var_108)

*(var_108 + (sx.q(rsi_2) << 3)) = rdi
int64_t* rcx_19 = var_178
var_57.b = 0
void* var_158 = nullptr
int32_t var_150 = 0
(*(*rcx_19 + 0x40))(rcx_19, &var_138, &var_158)
void* rbx_4 = var_158
void* rdi_4 = sx.q(var_150) * 0x50 + rbx_4

if (rbx_4 != rdi_4)
    void* rsi_4 = var_148
    var_170 = &var_178
    int32_t var_168
    var_168.q = &arg_10
    
    do
        int64_t* rax_20 = sub_140baad50(&var_188, sub_140b63b70(rbx_4 + 8, &var_148))
        int16_t* rdx_14
        
        if (rax_20[1].d == 0)
            rdx_14 = &data_142d40450
        else
            rdx_14 = *rax_20
        
        sub_140b58260(&var_178, rdx_14, 1)
        void* rcx_23 = var_188
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        void* rcx_24 = var_148
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        sub_140a5c490(rsi_4 + 0x60, &var_198, &var_170, nullptr)
        rbx_4 += 0x50
    while (rbx_4 != rdi_4)

sub_141c94120(&var_158)
int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

var_a0.d = 0
int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
int64_t var_98
sub_14059a8e0(&var_98, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

uint64_t rcx_31 = var_a8

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int32_t var_b0_1 = 0

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t var_f8
int64_t result = sub_14098e2c0(&var_f8, 0)
int64_t var_d8

if (var_d8 != 0)
    result = sub_140a74f90(var_d8)

int64_t rcx_35 = var_f8

if (rcx_35 != 0)
    result = sub_140a74f90(rcx_35)

int64_t rcx_36 = var_108

if (rcx_36 != 0)
    result = sub_140a74f90(rcx_36)

int64_t var_118

if (var_118 != 0)
    result = sub_140a74f90(var_118)

int64_t rcx_38 = var_128

if (rcx_38 != 0)
    result = sub_140a74f90(rcx_38)

int64_t rcx_39 = var_138

if (rcx_39 != 0)
    result = sub_140a74f90(rcx_39)

int64_t* rbx_5 = r12

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_40 = *rbx_5
        
        if (rcx_40 != 0)
            result = sub_140a74f90(rcx_40)
        
        rbx_5 = &rbx_5[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
