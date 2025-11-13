// 函数: sub_141911680
// 地址: 0x141911680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
data_143efbce8 = 1
data_1439c7494 = 0
data_143effa50(0x8872, &data_1439c7494)
data_1439c749c = 0
data_143efbce8 = 1
data_143effa50(0x8b4c, &data_1439c749c)
data_1439c7498 = 0
data_143efbce8 = 1
data_143effa50(0x8b4d, &data_1439c7498)
int32_t rdx = data_1439c7498
data_143efbce8 = 0
int32_t rax_5

if (rdx s< 0x30)
    int32_t rax_2 = data_1439c7494
    data_1439c74a4 = 0
    data_1439c74a8 = 0
    
    if (rax_2 s> 0x10)
        rax_2 = 0x10
    
    data_1439c7494 = rax_2
    int32_t rax_3 = data_1439c749c
    
    if (rax_3 s> 8)
        rax_3 = 8
    
    data_1439c749c = rax_3
    int32_t rax_4 = data_1439c74a0
    
    if (rax_4 s> 8)
        rax_4 = 8
    
    data_1439c74a0 = rax_4
    rax_5 = 0x20
    goto label_1419117f6

int64_t rax_6 = sx.q(data_143f0f1a0)

if ((rax_6.d u<= 0x1e && test_bit(0x6562c800, rax_6.d))
        || (*(&data_143f025fc + rax_6 * 0x14) & 1) != 0)
    int32_t rax_7 = data_1439c7494
    
    if (rax_7 s> 0x10)
        rax_7 = 0x10
    
    data_1439c7494 = rax_7
    int32_t rax_8 = data_1439c749c
    
    if (rax_8 s> 8)
        rax_8 = 8
    
    data_1439c749c = rax_8
    int32_t rax_9 = data_1439c74a0
    
    if (rax_9 s> 8)
        rax_9 = 8
    
    data_1439c74a0 = rax_9
    int32_t rax_10 = data_1439c74a4
    
    if (rax_10 s> 8)
        rax_10 = 8
    
    data_1439c74a4 = rax_10
    int32_t rax_11 = data_1439c74a8
    
    if (rax_11 s> 8)
        rax_11 = 8
    
    data_1439c74a8 = rax_11
    rax_5 = 0x30
label_1419117f6:
    
    if (rdx s> rax_5)
        rdx = rax_5
    
    data_1439c7498 = rdx

int32_t var_158_1 = 0xffffffff
data_143efbce1 = sub_140a23cf0(arg1, GL_KHR_texture_compression_astc_ldr", 1, 0, 0xffffffff)
    != 0xffffffff
int32_t var_158_2 = 0xffffffff
data_143efbce2 = sub_140a23cf0(arg1, u"GL_ARB_copy_image", 1, 0, var_158_1) != 0xffffffff
int32_t var_158_3 = 0xffffffff
data_143efbce3 = sub_140a23cf0(arg1, u"GL_ARB_seamless_cube_map", 1, 0, var_158_2) != 0xffffffff
int32_t var_158_4 = 0xffffffff
data_143efbce5 = sub_140a23cf0(arg1, GL_EXT_texture_filter_anisotropic", 1, 0, var_158_3)
    != 0xffffffff
data_143efbce6 = sub_140a23cf0(arg1, u"GL_ARB_draw_buffers_blend", 1, 0, var_158_4) != 0xffffffff
void var_138
sub_1405eb940(&var_138, data_143effa60(0x1f00))
int32_t rdx_2 = 0
int32_t var_140 = 0
int32_t rcx_7 = 0
int32_t var_13c = 0
int16_t* var_148 = nullptr
int16_t* var_30

if (var_30 != 0 && *var_30 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_30[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_148, rbx_1.d + 1)
        rcx_7 = var_13c
        rdx_2 = var_140
    
    int32_t rax_18 = rdx_2 + rbx_1.d + 1
    var_140 = rax_18
    
    if (rax_18 s> rcx_7)
        sub_140594770(&var_148)
    
    UnDecorator::getReferenceType(var_148, var_30, (rbx_1.d + 1) * 2)

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int32_t var_158_5 = 0xffffffff
int32_t rax_19
int64_t r8_3
rax_19, r8_3 = sub_140a23cf0(&var_148, u"ATI ", 1, 0, var_158_5)

if (rax_19 == 0xffffffff)
    var_158_5 = 0xffffffff
    int32_t rax_20
    rax_20, r8_3 = sub_140a23cf0(&var_148, u"Intel ", 1, 0, var_158_5)
    int32_t rax_21
    
    if (rax_20 == 0xffffffff)
        int16_t* const rcx_14 = &data_142d40450
        
        if (var_140 != 0)
            rcx_14 = var_148
        
        rax_21, r8_3 = sub_140a54510(rcx_14, u"Intel")
    
    if (rax_20 != 0xffffffff || rax_21 == 0)
        data_143f0f1b0 = 0x8086
        data_143efbce7 = 1
    else
        var_158_5 = 0xffffffff
        int32_t rax_22
        rax_22, r8_3 = sub_140a23cf0(&var_148, u"NVIDIA ", 1, 0, var_158_5)
        
        if (rax_22 == 0xffffffff)
            var_158_5 = 0xffffffff
            int32_t rax_23
            rax_23, r8_3 = sub_140a23cf0(&var_148, u"ImgTec", 1, 0, var_158_5)
            
            if (rax_23 == 0xffffffff)
                var_158_5 = 0xffffffff
                int32_t rax_24
                rax_24, r8_3 = sub_140a23cf0(&var_148, &data_142ff5b40, 1, 0, var_158_5)
                
                if (rax_24 == 0xffffffff)
                    var_158_5 = 0xffffffff
                    int32_t rax_25
                    rax_25, r8_3 = sub_140a23cf0(&var_148, u"Qualcomm", 1, 0, var_158_5)
                    
                    if (rax_25 != 0xffffffff)
                        data_143f0f1b0 = 0x5143
                else
                    data_143f0f1b0 = 0x13b5
            else
                data_143f0f1b0 = 0x1010
        else
            data_143f0f1b0 = 0x10de
else
    data_143f0f1b0 = 0x1002
    data_143efbce7 = 1

int64_t* rcx_19 = data_143db18d0

if (rcx_19 == 0)
    sub_140a53c40()
    rcx_19 = data_143db18d0

r8_3.b = 1
int64_t* rax_27 = (*(*rcx_19 + 0xb0))(rcx_19, u"OpenGL.UseStagingBuffer", r8_3)

if (rax_27 != 0)
    int64_t r9_1 = *rax_27
    (*(r9_1 + 0x80))(rax_27, &(*U"RGBXYZF10|")[8], 0x8000000, r9_1, var_158_5)

char result = sub_1419767f0()
int32_t rcx_21 = data_1439c74f0

if (result != 0)
    rcx_21 = 0

data_1439c74f0 = rcx_21
int16_t* rcx_22 = var_148

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_178)
return result
