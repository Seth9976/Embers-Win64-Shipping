// 函数: sub_141beaee0
// 地址: 0x141beaee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_141beee70(arg1)
int32_t rcx
rcx.b = sub_140b5b8a0(arg1[0x25].d, 0) == 0
int64_t* var_1b8
int64_t var_1a0
int64_t rcx_5
int64_t* rdx_3
int32_t r15

if ((*(arg1 + 0x12c) != 0 | rcx.b) == 0)
label_141beaf8a:
    int64_t* rax_6 = arg1[0x22]
    rcx_5 = arg1[0x21]
    int64_t var_1c0 = rcx_5
    var_1b8 = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    rdx_3 = &var_1c0
    int32_t var_1b0_1 = arg1[0x23].d
    r15 = 2
    char var_1a8_1 = 1
    var_1a0 = 0
    int32_t var_198_1 = 0
else
    void* rax_1 = sub_140d3c6e0(&arg1[0x24])
    
    if (rax_1 == 0)
        goto label_141beaf8a
    
    if (sub_140d1fd20(rax_1, arg1[0x25]) == 0)
        goto label_141beaf8a
    
    int64_t var_278 = arg1[0x25]
    void var_a0
    int64_t* rax_5 = sub_141b70480(&var_a0, sub_140d3c6e0(&arg1[0x24]), &var_278)
    rdx_3 = rax_5
    r15 = 1
    rcx_5 = *rax_5

int64_t var_d0 = rcx_5
int64_t* rax_8 = rdx_3[1]

if (rax_8 != 0)
    rax_8[1].d += 1

int32_t var_c0 = rdx_3[2].d
char var_b8 = rdx_3[3].b
int64_t var_b0 = 0
int32_t var_a8 = 0
sub_1407473e0(&var_b0, &rdx_3[4])

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    sub_140745b20(&var_1a0)
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rax_13 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_1b8 + 8))(var_1b8, 1)

if ((r15.b & 1) != 0)
    r15 &= 0xfffffffe
    void var_80
    sub_140745b20(&var_80)
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t rax_17 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*var_98 + 8))(var_98, 1)

int32_t rcx_14
rcx_14.b = sub_140b5b8a0(arg1[0x129].d, 0) == 0
int64_t* var_188
int64_t var_170
int64_t rcx_19
int64_t* rdx_7
int32_t r14

if ((*(arg1 + 0x94c) != 0 | rcx_14.b) == 0)
label_141beb135:
    int64_t* rax_25 = arg1[0x126]
    rcx_19 = arg1[0x125]
    int64_t var_190 = rcx_19
    var_188 = rax_25
    
    if (rax_25 != 0)
        rax_25[1].d += 1
    
    rdx_7 = &var_190
    int32_t var_180_1 = arg1[0x127].d
    r14 = 8
    char var_178_1 = 1
    var_170 = 0
    int32_t var_168_1 = 0
else
    void* rax_20 = sub_140d3c6e0(&arg1[0x128])
    
    if (rax_20 == 0)
        goto label_141beb135
    
    if (sub_140d1fd20(rax_20, arg1[0x129]) == 0)
        goto label_141beb135
    
    int64_t var_270 = arg1[0x129]
    void var_70
    int64_t* rax_24 = sub_141b70480(&var_70, sub_140d3c6e0(&arg1[0x128]), &var_270)
    rdx_7 = rax_24
    r14 = 4
    rcx_19 = *rax_24

int64_t var_100 = rcx_19
int32_t r14_1 = r14 | r15
int64_t* rax_27 = rdx_7[1]

if (rax_27 != 0)
    rax_27[1].d += 1

int32_t var_f0 = rdx_7[2].d
char var_e8 = rdx_7[3].b
int64_t var_e0 = 0
int32_t var_d8 = 0
sub_1407473e0(&var_e0, &rdx_7[4])

if ((r14_1.b & 8) != 0)
    r14_1 &= 0xfffffff7
    sub_140745b20(&var_170)
    
    if (var_188 != 0)
        var_188[1].d -= 1
        
        if (var_188[1].d == 1)
            (**var_188)(var_188)
            int32_t rax_32 = *(var_188 + 0xc)
            *(var_188 + 0xc) -= 1
            
            if (rax_32 == 1)
                (*(*var_188 + 8))(var_188, 1)

if ((r14_1.b & 4) != 0)
    void var_50
    sub_140745b20(&var_50)
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t rax_36 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (rax_36 == 1)
                (*(*var_68 + 8))(var_68, 1)

sub_140f16820(arg1[0x143], &arg1[0x26])
sub_140f17c10(arg1[0x143], &var_d0)
sub_140f15a80(arg1[0x143], &var_100)
void* rcx_31 = arg1[0x143]
char var_160 = arg1[0x13a].b
char var_15f = 1
int64_t var_158 = 0
int32_t var_150 = 0
sub_140f15cc0(rcx_31, &var_160)
void* rcx_32 = arg1[0x143]
char var_148 = *(arg1 + 0x9d1)
char var_147 = 1
int64_t var_140 = 0
int32_t var_138 = 0
sub_140f15bc0(rcx_32, &var_148)
void* rcx_33 = arg1[0x143]
int32_t var_268 = *(arg1 + 0x9d4)
char var_264 = 1
int64_t var_260 = 0
int32_t var_258 = 0
sub_140f16450(rcx_33, &var_268)
sub_140745b20(&var_260)
void* rcx_35 = arg1[0x143]
char var_250 = arg1[0x13d].b
char var_24f = 1
int64_t var_248 = 0
int32_t var_240 = 0
sub_140f15aa0(rcx_35, &var_250)
sub_140745b20(&var_248)
void* rcx_37 = arg1[0x143]
char var_238 = *(arg1 + 0x9e9)
char var_237 = 1
int64_t var_230 = 0
int32_t var_228 = 0
sub_140f16750(rcx_37, &var_238)
sub_140745b20(&var_230)
void* rcx_39 = arg1[0x143]
char var_220 = *(arg1 + 0x9ea)
char var_21f = 1
int64_t var_218 = 0
int32_t var_210 = 0
sub_140f16570(rcx_39, &var_220)
sub_140745b20(&var_218)
void* rcx_41 = arg1[0x143]
char var_208 = *(arg1 + 0x9eb)
char var_207 = 1
int64_t var_200 = 0
int32_t var_1f8 = 0
sub_140f15450(rcx_41, &var_208)
sub_140745b20(&var_200)
char var_1f0 = *(arg1 + 0x9ec)
char var_1ef = 1
int64_t var_1e8 = 0
int32_t var_1e0 = 0
sub_140f16720(arg1[0x143], &var_1f0)
sub_140745b20(&var_1e8)
void* rcx_45 = arg1[0x143]
char var_130 = *(arg1 + 0x9ed)
char var_12f = 1
int64_t var_128 = 0
int32_t var_120 = 0
sub_140f152f0(rcx_45, &var_130)
void* rcx_46 = arg1[0x143]
char var_118 = *(arg1 + 0x9f1)
char var_117 = 1
int64_t var_110 = 0
int32_t var_108 = 0
sub_140f18190(rcx_46, &var_118)
void* rcx_47 = arg1[0x143]
uint32_t var_1d8 = zx.d(*(arg1 + 0x9f2))
char var_1d4 = 1
int64_t var_1d0 = 0
int32_t var_1c8 = 0
sub_140f15d80(rcx_47, &var_1d8)
sub_140745b20(&var_1d0)
void* rbx_5 = arg1[0x143]
int32_t* rdx_23

if ((*(arg1 + 0x9f3) & 1) == 0)
    char arg_19 = 0
    void arg_18
    rdx_23 = &arg_18
else
    rdx_23 = &arg_8
    arg_8.b = *(arg1 + 0x9f4)
    arg_8:1.b = 1

sub_140f17d10(rbx_5, rdx_23)
char* rdx_24

if ((*(arg1 + 0x9f3) & 2) == 0)
    char arg_21 = 0
    void arg_20
    rdx_24 = &arg_20
else
    char arg_10
    rdx_24 = &arg_10
    arg_10 = *(arg1 + 0x9f5)
    char arg_11 = 1

sub_140f17c80(rbx_5, rdx_24)
sub_140745b20(&var_e0)

if (rax_27 != 0)
    rax_27[1].d -= 1
    
    if (rax_27[1].d == 1)
        (**rax_27)(rax_27)
        int32_t rax_52 = *(rax_27 + 0xc)
        *(rax_27 + 0xc) -= 1
        
        if (rax_52 == 1)
            (*(*rax_27 + 8))(rax_27, 1)

int32_t result = sub_140745b20(&var_b0)

if (rax_8 != 0)
    result = rax_8[1].d
    rax_8[1].d -= 1
    
    if (result == 1)
        result = (**rax_8)(rax_8)
        int32_t rsi_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rax_8 + 8))(rax_8, zx.q(rsi_1))

return result
