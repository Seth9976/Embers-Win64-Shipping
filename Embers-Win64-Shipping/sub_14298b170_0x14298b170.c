// 函数: sub_14298b170
// 地址: 0x14298b170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct Imf_2_3::IStream::Imf_2_3::StdIFStream::VTable** result = arg1
struct Imf_2_3::IStream::VTable** var_58 = arg1
char rbp = 0
int32_t var_68 = 0
sub_14297aaa0(arg1, arg2)
*result = &Imf_2_3::StdIFStream::`vftable'{for `Imf_2_3::IStream'}
void** rax_2 = j_sub_140a82f30(0x110)
void** rdi = rax_2
void** var_50 = rax_2
void* var_40

if (rax_2 == 0)
    rdi = nullptr
else
    int16_t* rax_3 = sub_14298b590(&var_40, arg2)
    int16_t* r14_1 = rax_3
    int32_t var_68_1 = 1
    
    if (*(rax_3 + 0x18) u>= 8)
        r14_1 = *rax_3
    
    *rdi = &data_1437020a0
    std::ios::ios<char, struct std::char_traits<char> >(&rdi[0x16])
    rbp = 3
    int32_t var_68_2 = 3
    std::istream::istream<char, struct std::char_traits<char> >(rdi, &rdi[2], 0)
    *(sx.q(*(*rdi + 4)) + rdi) = &std::ifstream::`vftable'
    int64_t rcx_4 = sx.q(*(*rdi + 4))
    *(rcx_4 + rdi - 4) = (rcx_4 - 0xb0).d
    void* var_48_1 = &rdi[2]
    std::streambuf::streambuf<char, struct std::char_traits<char> >()
    rdi[2] = &std::filebuf::`vftable'{for `std::streambuf'}
    *(rdi + 0x8c) = 0
    *(rdi + 0x81) = 0
    std::streambuf::_Init()
    rdi[0x12] = 0
    *(rdi + 0x84) = data_14401b790
    rdi[0xf] = 0
    
    if (sub_14298b9b0(&rdi[2], r14_1, 0x21, 0x40) == 0)
        std::ios::setstate(sx.q(*(*rdi + 4)) + rdi, 2, 0)

result[5] = rdi
int64_t var_28

if ((rbp & 1) != 0 && var_28 u>= 8)
    void* rcx_8 = var_40
    void* rax_9 = rcx_8
    
    if ((var_28 << 1) + 2 u>= 0x1000)
        rcx_8 = *(rcx_8 - 8)
        
        if (rax_9 - rcx_8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_8)
    rdi = result[5]

result[6].b = 1
void* rcx_10 = sx.q(*(*rdi + 4)) + rdi

if ((*(rcx_10 + 0x10) & 6) == 0)
    __security_check_cookie(rax_1 ^ &var_88)
    return result

int64_t r8 = *rcx_10
(*r8)(rcx_10, 1, r8)
sub_142c9cdd0()
noreturn
