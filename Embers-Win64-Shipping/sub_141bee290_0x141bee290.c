// 函数: sub_141bee290
// 地址: 0x141bee290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
sub_141beee70(arg1)
void var_b8
(*(*arg1 + 0x2d0))(arg1, &var_b8)
int32_t rcx_1
rcx_1.b = sub_140b5b8a0(arg1[0x30].d, 0) == 0
int64_t* var_168
int64_t var_158
int128_t* rdx_3
int32_t rsi

if ((*(arg1 + 0x184) != 0 | rcx_1.b) == 0)
label_141bee35e:
    char var_178_1 = arg1[0x2c].b
    int64_t var_170_1 = arg1[0x2d]
    int64_t* rax_9 = arg1[0x2e]
    var_168 = rax_9
    int128_t var_188 = *(arg1 + 0x150)
    
    if (rax_9 != 0)
        rax_9[1].d += 1
    
    char var_160_1 = 1
    rdx_3 = &var_188
    var_158 = 0
    rsi = 2
    int32_t var_150_1 = 0
else
    void* rax_2 = sub_140d3c6e0(&arg1[0x2f])
    
    if (rax_2 == 0)
        goto label_141bee35e
    
    if (sub_140d1fd20(rax_2, arg1[0x30]) == 0)
        goto label_141bee35e
    
    arg_8.q = arg1[0x30]
    void var_60
    rdx_3 = sub_141b70370(&var_60, sub_140d3c6e0(&arg1[0x2f]), &arg_8)
    rsi = 1

int128_t var_1c8 = *rdx_3
char var_1b8 = rdx_3[1].b
int64_t var_1b0 = *(rdx_3 + 0x18)
int64_t* rax_12 = rdx_3[2].q

if (rax_12 != 0)
    rax_12[1].d += 1

char var_1a0 = *(rdx_3 + 0x28)
int64_t var_198 = 0
int32_t var_190 = 0
sub_1407473e0(&var_198, &rdx_3[3])

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_140745b20(&var_158)
    
    if (var_168 != 0)
        var_168[1].d -= 1
        
        if (var_168[1].d == 1)
            (**var_168)(var_168)
            int32_t temp3_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_168 + 8))(var_168, 1)

if ((rsi.b & 1) != 0)
    rsi &= 0xfffffffe
    void var_30
    sub_140745b20(&var_30)
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp4_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_40 + 8))(var_40, 1)

int32_t rcx_13
rcx_13.b = sub_140b5b8a0(arg1[0x50].d, 0) == 0
int64_t var_130
int128_t* rdx_7
char rdi_3

if ((*(arg1 + 0x284) != 0 | rcx_13.b) == 0)
label_141bee4d9:
    int128_t zmm0_2 = *(arg1 + 0x268)
    char var_138_1 = 1
    int128_t var_148
    rdx_7 = &var_148
    var_130 = 0
    rdi_3 = 8
    var_148 = zmm0_2
    int32_t var_128_1 = 0
else
    void* rax_19 = sub_140d3c6e0(&arg1[0x4f])
    
    if (rax_19 == 0)
        goto label_141bee4d9
    
    if (sub_140d1fd20(rax_19, arg1[0x50]) == 0)
        goto label_141bee4d9
    
    int64_t arg_10 = arg1[0x50]
    void var_88
    rdx_7 = sub_141b700f0(&var_88, sub_140d3c6e0(&arg1[0x4f]), &arg_10)
    rdi_3 = 4

char rdi_4 = rdi_3 | rsi.b
int128_t var_1f0 = *rdx_7
char var_1e0 = rdx_7[1].b
int64_t var_1d8 = 0
int32_t var_1d0 = 0
sub_1407473e0(&var_1d8, rdx_7 + 0x18)

if ((rdi_4 & 8) != 0)
    sub_140745b20(&var_130)

void var_70

if ((rdi_4 & 4) != 0)
    sub_140745b20(&var_70)
int64_t* rcx_21 = arg1[0x52]

if (rcx_21 != 0)
    sub_140f8d430(rcx_21, &var_b8)
    int128_t zmm0_3 = *(arg1 + 0x198)
    int64_t var_120 = arg1[0x31]
    int64_t var_118_1 = arg1[0x32]
    int64_t var_f0_1 = arg1[0x37]
    int64_t* rax_28 = arg1[0x38]
    int128_t var_110_1 = zmm0_3
    int128_t var_100_1 = *(arg1 + 0x1a8)
    
    if (rax_28 != 0)
        rax_28[1].d += 1
    
    int64_t* rcx_22 = arg1[0x52]
    int64_t var_e0_1 = arg1[0x39]
    int32_t var_d8_1 = arg1[0x3a].d
    char var_d4_1 = *(arg1 + 0x1d4)
    char var_d0_1 = 1
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    sub_140f8bb00(rcx_22, &var_120)
    sub_140745b20(&var_c8)
    
    if (rax_28 != 0)
        rax_28[1].d -= 1
        
        if (rax_28[1].d == 1)
            (**rax_28)(rax_28)
            int32_t temp8_1 = *(rax_28 + 0xc)
            *(rax_28 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rax_28 + 8))(rax_28, 1)
    
    int64_t* rcx_26 = arg1[0x52]
    void* var_210 = &arg1[0x3b]
    char var_208_1 = 1
    int64_t var_200 = 0
    int32_t var_1f8_1 = 0
    sub_140f8cda0(rcx_26, &var_210)
    sub_140745b20(&var_200)
    sub_140f8a450(arg1[0x52], &var_1c8)
    int32_t zmm1_2 = *(arg1 + 0x264)
    int64_t* rcx_29 = arg1[0x52]
    int32_t var_230 = arg1[0x4c].d
    int32_t var_22c_1 = zmm1_2
    char var_228_1 = 1
    int64_t var_220 = 0
    int32_t var_218_1 = 0
    sub_140f8cd10(rcx_29, &var_230)
    sub_140745b20(&var_220)
    sub_140f8cc90(arg1[0x52], &var_1f0)
    int64_t* rcx_32 = arg1[0x52]
    int32_t var_248 = arg1[0x51].d
    char var_244_1 = 1
    int64_t var_240 = 0
    int32_t var_238_1 = 0
    sub_140f8c670(rcx_32, &var_248)
    sub_140745b20(&var_240)
    sub_141b78da0(arg1, arg1[0x52])

sub_140745b20(&var_1d8)
sub_140745b20(&var_198)

if (rax_12 != 0)
    rax_12[1].d -= 1
    
    if (rax_12[1].d == 1)
        (**rax_12)(rax_12)
        int32_t temp6_1 = *(rax_12 + 0xc)
        *(rax_12 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rax_12 + 8))(rax_12, 1)

void var_98
int32_t result = sub_140745b20(&var_98)
int64_t* var_b0

if (var_b0 != 0)
    result = var_b0[1].d
    var_b0[1].d -= 1
    
    if (result == 1)
        result = (**var_b0)(var_b0)
        int32_t rdi_6 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rdi_6 == 1)
            return (*(*var_b0 + 8))(var_b0, zx.q(rdi_6))

return result
