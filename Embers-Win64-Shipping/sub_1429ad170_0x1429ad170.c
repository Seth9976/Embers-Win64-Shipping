// 函数: sub_1429ad170
// 地址: 0x1429ad170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* buffer1_1 = sub_142983a40(arg2)
int64_t* buffer2 = &data_143cc6d20
int64_t* buffer1 = buffer1_1

if (data_143cc6d38 u>= 0x10)
    buffer2 = data_143cc6d20

if (buffer1_1[3] u>= 0x10)
    buffer1 = *buffer1_1

uint64_t count = buffer1_1[2]

if (count == data_143cc6d30 && memcmp(buffer1, buffer2, count) == 0)
    *(*(arg1 + 8) + 0x158) = arg2[5]
    sub_14297d930(*(arg1 + 8) + 0x50, arg2)
    *(*(arg1 + 8) + 0x78) = arg2[4].d
    *(*(arg1 + 8) + 0x118) = *(arg2 + 0x1c)
    int64_t* rcx_7 = *(*(*(arg1 + 8) + 0x158) + 0x50)
    *(*(arg1 + 8) + 0x150) = (*(*rcx_7 + 8))(rcx_7)
    sub_1429accd0(arg1)
    void var_90
    int64_t* rax_9 = sub_1429abf30(&var_90, &arg2[6])
    void* rcx_11 = *(arg1 + 8)
    sub_1429beba0(rcx_11 + 0xc0, rax_9, rcx_11 + 0xe8)
    int64_t* rcx_14 = *(*(*(arg1 + 8) + 0x158) + 0x50)
    int64_t result = (*(*rcx_14 + 0x20))(rcx_14)
    *(*(*(arg1 + 8) + 0x158) + 0x58) = result
    __security_check_cookie(rax_1 ^ &var_b8)
    return result

struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
sub_14297d3f0(&exceptionObject, "Can't build a TiledInputFile from a type-mismatched part.")
_CxxThrowException(&exceptionObject, &data_143946538)
noreturn
