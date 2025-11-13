// 函数: sub_142977fc0
// 地址: 0x142977fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::RgbaInputFile::VTable** arg_8 = arg1
int64_t var_28 = -2
*arg1 = &Imf_2_3::RgbaInputFile::`vftable'
struct Imf_2_3::GenericInputFile::Imf_2_3::InputFile::VTable** rax = j_sub_140a82f30(0x10)
struct Imf_2_3::GenericInputFile::Imf_2_3::InputFile::VTable** arg_20 = rax
struct _Mtx_internal_imp_t* rsi = nullptr
struct Imf_2_3::GenericInputFile::Imf_2_3::InputFile::VTable** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_142987ae0(rax, arg2, arg3)

arg1[1] = rax_1
arg1[2] = 0
arg1[5] = 0
arg1[6] = 0xf
arg1[3].b = 0
sub_14058ad40(&arg1[3], &data_1437020ab, 0)
int32_t rax_4 = sub_142978cd0(sub_14297e970(sub_142988800(arg1[1])), &arg1[3])

if ((rax_4.b & 0x30) != 0)
    struct Imf_2_3::GenericInputFile::Imf_2_3::InputFile::VTable** rax_5 = j_sub_140a82f30(0x1b0)
    arg_20 = rax_5
    
    if (rax_5 != 0)
        rsi = sub_142977b00(rax_5, arg1[1], rax_4)
    
    arg1[2] = rsi

return arg1
