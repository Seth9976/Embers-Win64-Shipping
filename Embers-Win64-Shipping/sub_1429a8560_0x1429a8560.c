// 函数: sub_1429a8560
// 地址: 0x1429a8560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
struct Imf_2_3::GenericInputFile::Imf_2_3::ScanLineInputFile::VTable** var_90 = arg1
*arg1 = &Imf_2_3::ScanLineInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
int64_t* buffer1_1 = sub_142983a40(arg2)
int64_t* buffer2 = &data_143cc6c80

if (data_143cc6c98 u>= 0x10)
    buffer2 = data_143cc6c80

int64_t* buffer1 = buffer1_1

if (buffer1_1[3] u>= 0x10)
    buffer1 = *buffer1_1

uint64_t count = buffer1_1[2]

if (count == data_143cc6c90 && memcmp(buffer1, buffer2, count) == 0)
    struct _Mtx_internal_imp_t* rax_3 = j_sub_140a82f30(0x150)
    struct _Mtx_internal_imp_t* var_88 = rax_3
    
    if (rax_3 != 0)
        rax_3 = sub_1429a83e0(rax_3, arg2[3].d)
    
    arg1[1] = rax_3
    void* rax_4 = arg2[5]
    arg1[2] = rax_4
    int64_t* rcx_2 = *(rax_4 + 0x50)
    *(arg1[1] + 0x12c) = (*(*rcx_2 + 8))(rcx_2)
    arg1[1][0xd].__offset(0x0).d = arg2[4].d
    sub_1429aa9d0(arg1, arg2)
    sub_1429a8ba0(&arg1[1][0x13], &arg2[6])
    arg1[1][0x25].__offset(0x0).d = *(arg2 + 0x1c)
    arg1[1][0x16].__offset(0x0).b = 1
    __security_check_cookie(rax_1 ^ &var_b8)
    return arg1

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_14297d3f0(&exceptionObject, "Can't build a ScanLineInputFile from a type-mismatched part.")
_CxxThrowException(&exceptionObject, &data_143946538)
noreturn
