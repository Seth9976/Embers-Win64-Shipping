// 函数: sub_1408b9380
// 地址: 0x1408b9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
arg1[1].b = 0
*arg1 = &data_142d44d70

if (data_143de5432 == 0)
    void* rcx = data_143e1a338
    
    if (rcx == 0)
        void* rax_2 = sub_140cde0b0()
        sub_140d19010(rax_2, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t var_198_1 = 0
        void* rax_4 = sub_140d2dfc0(sub_140baa6d0(), rax_2, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_4
        int32_t rax_5 = *(rax_4 + 0xc)
        void* const rax_12
        
        if (rax_5 s>= data_143e1d9b4)
            rax_12 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_5)
            uint32_t rdx_3 = zx.d(temp1_1)
            int32_t rax_7 = temp2_1 + rdx_3
            rax_12 =
                *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_3) * 0x18
        
        *(rax_12 + 8) |= 0x40000000
        rcx = data_143e1a338
    
    sub_140b9aa70(rcx, arg1)
    arg1[1].b = 1

*arg1 = &data_142e04850
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1408c37b0(&arg1[2], 0)

int64_t rdi = sx.q(arg1[3].d)
int32_t var_140 = 0
int32_t var_130 = 0
int64_t var_178
__builtin_memset(&var_178, 0, 0x2c)
int32_t rax_13 = (rdi + 1).d
int32_t var_14c = 0x80
int32_t var_148 = 0xffffffff
int32_t var_144 = 0
int64_t var_138 = 0
arg1[3].d = rax_13

if (rax_13 s> *(arg1 + 0x1c))
    sub_1408c36a0(&arg1[2])

int64_t* rdi_3 = &arg1[2][rdi * 0xa]
__builtin_memset(rdi_3, 0, 0x2c)
*(rdi_3 + 0x2c) = 0x80
rdi_3[6].d = 0xffffffff
*(rdi_3 + 0x34) = 0
rdi_3[8] = 0
rdi_3[9].d = 0
sub_1408babe0(rdi_3, &var_178)

if (var_138 == 0)
    rdi_3[7].d = var_140

int64_t rcx_10 = rdi_3[8]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

rdi_3[8] = var_138
rdi_3[9].d = var_130
var_130 = 0
int64_t var_138_1 = 0
int64_t var_170
var_170.d = 0
int32_t var_148_1 = 0xffffffff
int32_t var_144_1 = 0
int128_t* rcx_12
int128_t var_168
int128_t* var_158

if (var_14c u> 0x80)
    int32_t var_14c_1 = 0x80
    sub_1405a4410(&var_168, 0)
    rcx_12 = var_158
else
    rcx_12 = var_158
    int128_t* r9_1 = &var_168
    int32_t var_150
    uint32_t rax_18 = (var_150 + 0x1f) u>> 5
    
    if (rcx_12 != 0)
        r9_1 = rcx_12
    
    if (rax_18 u> 8)
        memset(r9_1, 0, zx.q(rax_18) << 2)
        rcx_12 = var_158
    else if (rax_18 != 0)
        memset(r9_1, 0, zx.q(rax_18) << 2)
        rcx_12 = var_158

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_16 = var_178

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rdi_4 = sx.q(arg1[3].d)
int32_t var_f0 = 0
int32_t var_e0 = 0
int64_t var_128
__builtin_memset(&var_128, 0, 0x2c)
int32_t rax_19 = (rdi_4 + 1).d
int32_t var_fc = 0x80
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
int64_t var_e8 = 0
arg1[3].d = rax_19

if (rax_19 s> *(arg1 + 0x1c))
    sub_1408c36a0(&arg1[2])

int64_t* rdi_7 = &arg1[2][rdi_4 * 0xa]
__builtin_memset(rdi_7, 0, 0x2c)
*(rdi_7 + 0x2c) = 0x80
rdi_7[6].d = 0xffffffff
*(rdi_7 + 0x34) = 0
rdi_7[8] = 0
rdi_7[9].d = 0
sub_1408babe0(rdi_7, &var_128)

if (var_e8 == 0)
    rdi_7[7].d = var_f0

int64_t rcx_19 = rdi_7[8]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

rdi_7[8] = var_e8
rdi_7[9].d = var_e0
var_e0 = 0
int64_t var_e8_1 = 0
int64_t var_120
var_120.d = 0
int32_t var_f8_1 = 0xffffffff
int32_t var_f4_1 = 0
int128_t* rcx_21
int128_t var_118
int128_t* var_108

if (var_fc u> 0x80)
    int32_t var_fc_1 = 0x80
    sub_1405a4410(&var_118, 0)
    rcx_21 = var_108
else
    rcx_21 = var_108
    int128_t* r9_2 = &var_118
    int32_t var_100
    uint32_t rax_24 = (var_100 + 0x1f) u>> 5
    
    if (rcx_21 != 0)
        r9_2 = rcx_21
    
    if (rax_24 u> 8)
        memset(r9_2, 0, zx.q(rax_24) << 2)
        rcx_21 = var_108
    else if (rax_24 != 0)
        memset(r9_2, 0, zx.q(rax_24) << 2)
        rcx_21 = var_108

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_25 = var_128

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rdi_8 = sx.q(arg1[3].d)
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x2c)
int32_t rax_25 = (rdi_8 + 1).d
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int32_t var_a4
__builtin_memset(&var_a4, 0, 0x1c)
arg1[3].d = rax_25

if (rax_25 s> *(arg1 + 0x1c))
    sub_1408c36a0(&arg1[2])

sub_1408b8da0(&arg1[2][rdi_8 * 0xa], &var_d8)
int64_t var_90
var_90.d = 0
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

int64_t var_d0
var_d0.d = 0
int32_t var_a8_1 = 0xffffffff
int32_t var_a4_1 = 0
int128_t var_c8
sub_14059a8e0(&var_c8, 0)
int64_t var_b8

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t rcx_34 = var_d8

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t rdi_9 = sx.q(arg1[3].d)
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t rax_26 = (rdi_9 + 1).d
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54
__builtin_memset(&var_54, 0, 0x1c)
arg1[3].d = rax_26

if (rax_26 s> *(arg1 + 0x1c))
    sub_1408c36a0(&arg1[2])

sub_1408b8da0(&arg1[2][rdi_9 * 0xa], &var_88)
int64_t var_40
var_40.d = 0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int128_t var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_43 = var_88

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

void var_190

if (&arg1[4] != &var_190)
    int32_t i_1 = arg1[5].d
    void* rcx_44 = arg1[4]
    
    if (i_1 != 0)
        int64_t* rdi_10 = rcx_44 + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_10
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_29 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_29 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_10 = &rdi_10[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_44 = arg1[4]
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    arg1[4] = 0
    arg1[5] = 0

__security_check_cookie(rax_1 ^ &var_1e8)
return arg1
