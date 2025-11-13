// 函数: sub_14190e2d0
// 地址: 0x14190e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t rdi = 0
int64_t var_150 = 0
int64_t var_148 = 0
int32_t var_158 = 0
data_143effa50(0x821d, &var_158)

if (var_158 s> 0)
    do
        char* rax_2 = data_143f00190(0x1f03, zx.q(rdi))
        sub_140a20ba0(&var_150, &data_142d404d4, 1)
        void var_138
        sub_1405eb940(&var_138, rax_2)
        int64_t r8_1 = -1
        int64_t var_30
        
        do
            r8_1 += 1
        while (*(var_30 + (r8_1 << 1)) != 0)
        
        sub_140a20ba0(&var_150, var_30, r8_1.d)
        int64_t var_38
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
        
        rdi += 1
    while (rdi s< var_158)

data_143eff9e8(0xbd0)
data_143effa08(0x8db9)
int32_t result = sub_140a23cf0(&var_150, u"GL_ARB_seamless_cube_map", 1, 0, 0xffffffff)

if (result != 0xffffffff)
    result = data_143effa08(0x884f)

if (data_1439c74d4 != 0)
    result = sub_140a23cf0(&var_150, u"GL_ARB_clip_control", 1, 0, 0xffffffff)
    
    if (result != 0xffffffff && data_143eff5c7 == 0)
        data_143efbce0 = 1
        result = data_143f00210(0x8ca2, 0x935f)

int64_t rcx_7 = var_150

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_188)
return result
