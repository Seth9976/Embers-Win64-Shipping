// 函数: sub_140908440
// 地址: 0x140908440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char rbx = 0
int32_t var_f8 = 0
struct Imf_2_3::RgbaInputFile::VTable** rax_2 = j_sub_140a82f30(0x38)
struct Imf_2_3::RgbaInputFile::VTable** var_e8 = rax_2
struct Imf_2_3::RgbaInputFile::VTable** rax_3

if (rax_2 == 0)
    rax_3 = nullptr
else
    int16_t* rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    void var_d8
    sub_1408f2b40(&var_d8, rdx)
    rbx = 3
    int32_t var_f8_1 = 3
    char* var_50
    rax_3 = sub_1429780a0(rax_2, var_50, zx.d(arg3))

*arg1 = rax_3
int64_t var_58

if ((rbx & 1) != 0 && var_58 != 0)
    sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_118)
return arg1
