// 函数: sub_140f49cc0
// 地址: 0x140f49cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx
int64_t* var_10 = rbx
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t rax_2 = *arg3
int128_t zmm6 = arg6
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_158
int64_t var_150

if (rax_2 != 0)
    rbx = arg3[1]
    var_150 = rax_2
    int64_t* var_148_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_140e47250(&var_e8, &var_158, &var_150, nullptr)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
int32_t var_104 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
sub_140e10640(arg1, arg2, &var_e8, &var_138)
int64_t rax_5 = *arg3
int128_t* rdi_1

if (rax_5 != 0)
    rbx = arg3[1]
    var_150 = rax_5
    int64_t* var_148_2 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    sub_140e109c0(&var_138, &var_158, &var_150)
    int64_t rax_6 = sx.q(var_158)
    void* const rax_9
    
    if (rax_6.d == 0xffffffff)
        rax_9 = nullptr
    else
        rax_9 = rax_6 * 0x60 + var_138
    
    rdi_1 = rax_9 + 0x10
    
    if (rax_9 == 0)
        rdi_1 = nullptr
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if (rax_5 == 0 || rdi_1 == 0)
    rbx.b = 0
else
    int128_t zmm1_1 = data_143dbb1f0:4.d
    int128_t zmm4_1
    zmm4_1.d = zmm1_1.d f* *(rdi_1 + 0x24)
    zmm1_1.d = zmm1_1.d f* *(rdi_1 + 0x28)
    int128_t zmm2
    int128_t zmm3
    int128_t zmm5_1
    int128_t zmm7
    int128_t zmm8
    int128_t zmm9
    int128_t zmm10
    int128_t zmm11
    
    if (arg5 == 1)
        zmm2 = data_143dbb1f0.d
        zmm10 = *(arg2 + 0x1c)
        zmm9 = arg2[2].d
        zmm11 = *(arg2 + 0x24)
        zmm7.d = zmm10.d f* *(arg2 + 0x28)
        zmm4_1.d = zmm4_1.d f+ zmm2.d f* *(rdi_1 + 0x1c)
        zmm2.d = zmm2.d f* rdi_1[2].d
        zmm5_1 = *(arg2 + 0x2c)
        zmm2.d = zmm2.d f+ zmm1_1.d
        zmm4_1.d = zmm4_1.d f+ *(rdi_1 + 0x2c)
        zmm2.d = zmm2.d f+ rdi_1[3].d
        zmm7.d = zmm7.d f- zmm9.d f* zmm11.d
        zmm8.d = 1f f/ zmm7.d
        zmm9.d = zmm9.d f* zmm8.d
        zmm11.d = zmm11.d f* zmm8.d
        zmm10.d = zmm10.d f* zmm8.d
        
        if (arg1[0x83].d != 1)
            zmm2.d = zmm2.d f- arg2[3].d
            zmm5_1.d = zmm5_1.d f* zmm8.d
            zmm3.d = zmm4_1.d f/ zmm7.d
            zmm2.d = zmm2.d f* zmm11.d
            zmm3.d = zmm3.d f- zmm5_1.d
            zmm3.d = zmm3.d f* *(arg2 + 0x28)
            zmm3.d = zmm3.d f- zmm2.d
        else
            zmm3.d = (arg2[3].d ^ data_142d3f780).d f+ zmm2.d
            zmm1_1.d = (zmm5_1 ^ data_142d3f780).d f+ zmm4_1.d
            zmm3.d = zmm3.d f* zmm10.d
            zmm1_1.d = zmm1_1.d f* zmm9.d
            zmm3.d = zmm3.d f- zmm1_1.d
        
        goto label_140f4a1b7
    
    float zmm0_1
    
    if (arg5 == 2)
        zmm5_1 = data_143dbb1f0.d
        zmm7 = *(arg2 + 0x1c)
        zmm0_1 = zmm5_1.d f* *(rdi_1 + 0x1c)
        zmm5_1.d = zmm5_1.d f* rdi_1[2].d
        zmm6 = arg2[2].d
        zmm4_1.d = zmm4_1.d f+ zmm0_1
        zmm9 = *(arg2 + 0x28)
        zmm10 = *(arg2 + 0x24)
        zmm5_1.d = zmm5_1.d f+ zmm1_1.d
        zmm4_1.d = zmm4_1.d f+ *(rdi_1 + 0x2c)
        zmm5_1.d = zmm5_1.d f+ rdi_1[3].d
        zmm1_1.d = zmm7.d f* zmm9.d
        zmm11.d = (*rdi_1).d f* 0.5f
        zmm1_1.d = zmm1_1.d f- zmm6.d f* zmm10.d
        zmm3.d = (*(rdi_1 + 4)).d f* 0.5f
        zmm2.d = 1f f/ zmm1_1.d
        zmm9.d = zmm9.d f* zmm2.d
        zmm6.d = zmm6.d f* zmm2.d
        zmm10.d = zmm10.d f* zmm2.d
        zmm7.d = zmm7.d f* zmm2.d
        
        if (arg1[0x83].d != 1)
            zmm5_1.d = zmm5_1.d f- arg2[3].d
            zmm4_1.d = zmm4_1.d f- *(arg2 + 0x2c)
            zmm5_1.d = zmm5_1.d f* zmm10.d
            zmm4_1.d = zmm4_1.d f* zmm9.d
            zmm3.d = zmm11.d f- zmm5_1.d
            zmm3.d = zmm3.d f+ zmm4_1.d
            zmm3.d = zmm3.d f- *arg2 * 0.5f
        else
            zmm4_1.d = zmm4_1.d f+ (*(arg2 + 0x2c) ^ data_142d3f780).d
            zmm1_1.d = (arg2[3].d ^ data_142d3f780).d f+ zmm5_1.d
            zmm4_1.d = zmm4_1.d f* zmm6.d
            zmm1_1.d = zmm1_1.d f* zmm7.d
            zmm3.d = zmm3.d f- zmm4_1.d
            zmm3.d = zmm3.d f+ zmm1_1.d
            zmm3.d = zmm3.d f- *(arg2 + 4) * 0.5f
        
        goto label_140f4a1be
    
    int32_t temp4_1 = arg1[0x83].d
    zmm3 = data_143dbb1f0.d
    zmm9 = *(arg2 + 0x1c)
    zmm0_1 = zmm3.d f* *(rdi_1 + 0x1c)
    zmm3.d = zmm3.d f* rdi_1[2].d
    zmm7 = arg2[2].d
    zmm4_1.d = zmm4_1.d f+ zmm0_1
    zmm5_1 = *(arg2 + 0x28)
    zmm8 = *(arg2 + 0x24)
    zmm3.d = zmm3.d f+ zmm1_1.d
    zmm10 = *(arg2 + 0x2c)
    zmm11 = arg2[3].d
    zmm4_1.d = zmm4_1.d f+ *(rdi_1 + 0x2c)
    zmm1_1.d = zmm9.d f* zmm5_1.d
    zmm3.d = zmm3.d f+ rdi_1[3].d
    zmm1_1.d = zmm1_1.d f- zmm7.d f* zmm8.d
    zmm2.d = 1f f/ zmm1_1.d
    zmm5_1.d = zmm5_1.d f* zmm2.d
    zmm7.d = zmm7.d f* zmm2.d
    zmm8.d = zmm8.d f* zmm2.d
    zmm9.d = zmm9.d f* zmm2.d
    
    if (temp4_1 != 1)
        zmm3.d = zmm3.d f- zmm11.d
        zmm4_1.d = zmm4_1.d f- zmm10.d
        zmm4_1.d = zmm4_1.d f* zmm5_1.d
        zmm3.d = zmm4_1.d f- zmm3.d f* zmm8.d
    else
        zmm3.d = zmm3.d f+ (zmm11 ^ data_142d3f780).d
        zmm4_1.d = zmm4_1.d f+ (zmm10 ^ data_142d3f780).d
        zmm3.d = zmm3.d f* zmm9.d
        zmm4_1.d = zmm4_1.d f* zmm7.d
        zmm3.d = zmm3.d f- zmm4_1.d
    
    int128_t* rax_15 = rdi_1 + 4
    zmm2.d = (*arg2).d f- zmm6.d
    
    if (temp4_1 != 1)
        rax_15 = rdi_1
    
    zmm0_1 = *(arg2 + 4) f- zmm6.d
    zmm1_1.d = (*rax_15).d f+ zmm3.d
    
    if (temp4_1 != 1)
        zmm0_1 = zmm2.d
    
    if (zmm3.d f< zmm6.d)
        goto label_140f4a1b7
    
    if (not(zmm1_1.d f<= zmm0_1))
        zmm3.d = zmm1_1.d f- (zmm0_1 f- zmm6.d)
    label_140f4a1b7:
        zmm3.d = zmm3.d f- zmm6.d
    label_140f4a1be:
        
        if (not(zmm3.d f== 0f))
            arg1[0x72].d = *(arg1[0x73] + 0x2a8)
            sub_140f5ca10(arg1, arg2, zmm3, 1, arg4)
    
    rbx.b = 1

int32_t var_f0_1 = 0

if (var_f8 != 0)
    sub_140a74f90(var_f8)

sub_140f43fa0(&var_138, 0)
int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_11 = var_138

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140a720d0(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_15 = var_e8

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_188)
return zx.q(rbx.b)
