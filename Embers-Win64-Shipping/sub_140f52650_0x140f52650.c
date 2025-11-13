// 函数: sub_140f52650
// 地址: 0x140f52650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rbx = *(arg4 + 0x48)
int64_t rax_2 = *(arg4 + 0x38)

if (rbx != 0)
    rbx[1].d += 1

void* rax_3

if (rax_2 == data_143e1e008)
    rax_3 = arg1[0x9f]

int64_t r14

if (rax_2 == data_143e1e008 && (0.999899983f f> *(rax_3 + 0x2d4) || *(rax_3 + 0x2dc) != 0))
    r14.b = 1
else
    r14.b = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t var_168

if (r14.b != 0)
    int64_t* rbx_1 = arg1[0x9b]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_168 = arg1[0x9a]
    int64_t* var_160_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    float var_158
    sub_140e10810(arg1, &var_158, arg3, &var_168)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_5 = arg1[0x9a]
    
    if ((*(*rcx_5 + 0x1d0))(rcx_5) != 0)
        float var_12c
        float zmm5_1 = *(arg4 + 0x18) - var_12c
        int32_t var_128
        int128_t zmm6
        zmm6.d = (*(arg4 + 0x1c)).d f- var_128
        float var_13c
        float var_138
        float var_134
        float var_130
        float zmm2
        
        if (*(arg1 + 0x51c) != 0)
            zmm2 = 1f / (var_13c * var_130 - var_138 * var_134)
            zmm6.d = zmm6.d f* var_13c * zmm2
            zmm5_1 = zmm6.d - zmm5_1 * var_138 * zmm2
        else
            zmm2 = 1f / (var_13c * var_130 - var_138 * var_134)
            zmm6.d = zmm6.d f* var_134 * zmm2
            zmm5_1 = zmm5_1 * var_130 * zmm2 f- zmm6.d
        arg1[0xa3].d = zmm5_1
        arg1[0x9e].b = 1
    else if (arg1[0xa2].d != 0)
        int64_t* rcx_6 = arg1[0xa1]
        
        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
            float zmm0
            float var_154
            
            if (*(arg1 + 0x51c) != 0)
                zmm0 = var_154
            else
                zmm0 = var_158
            arg1[0x9e].b = 1
            arg1[0xa3].d = zmm0 * 0.5f
            sub_140f449e0(arg1, arg3, arg4)

if (arg1[0x9e].b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rdx_2 = arg1[2]
    int64_t r8_2 = 0
    int64_t* rbx_2 = rdx_2
    
    if (rdx_2 != 0)
        int32_t rax_13 = rdx_2[1].d
        
        if (rax_13 != 0)
            rdx_2[1].d = rax_13 + 1
            rax_13.b = 1
            rbx_2 = arg1[2]
        
        if (rax_13.b == 0)
            rdx_2 = nullptr
        
        if (rdx_2 != 0)
            r8_2 = arg1[1]
    
    int64_t* var_160_2 = rdx_2
    int64_t rdx_3 = 0
    var_168 = r8_2
    
    if (rbx_2 != 0)
        int32_t rax_14 = rbx_2[1].d
        
        if (rax_14 != 0)
            rbx_2[1].d = rax_14 + 1
            rax_14.b = 1
        
        if (rax_14.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rdx_3 = arg1[1]
    
    int32_t var_64
    int32_t var_64_1 = var_64 & 0xffffff00
    char var_118 = 1
    int64_t var_110_1 = 0
    int64_t var_108_1 = 0
    char var_f8_1 = 0
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    int64_t* var_d8_1 = (zx.o(0)).q
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x60)
    int32_t var_68_1 = 0x20702
    int64_t var_e0_1 = rdx_3
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        
        if (var_d8_1 != 0)
            int32_t temp5_1 = *(var_d8_1 + 0xc)
            *(var_d8_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_d8_1 + 8))(var_d8_1, 1)
        
        var_d8_1 = rbx_2
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_140596b00(arg2, sub_140dbdce0(&var_118, &var_168, *(arg1 + 0x522), 0))
    sub_140597700(&var_118)

__security_check_cookie(rax_1 ^ &var_188)
return arg2
