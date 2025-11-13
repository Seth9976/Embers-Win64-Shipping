// 函数: sub_1429962d0
// 地址: 0x1429962d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Imf_2_3::DwaCompressor::LossyDctDecoderBase::VTable** arg_8 = arg1
int64_t var_28 = -2
struct 
    Imf_2_3::DwaCompressor::LossyDctDecoderBase::Imf_2_3::DwaCompressor::LossyDctDecoderCsc::VTable*
    * result = arg1
*arg1 = &Imf_2_3::DwaCompressor::LossyDctDecoderBase::`vftable'
arg1[1].b = 0
*(result + 0xc) = 0
result[3] = arg5
result[4] = arg6
result[5] = arg7
result[6].d = arg8
*(result + 0x34) = arg9
__builtin_memset(&result[7], 0, 0x48)
void* const rax_5 = &data_143554a40

if (result[5] != 0)
    rax_5 = result[5]

result[5] = rax_5
result[1].b = data_143fed230
*result = &Imf_2_3::DwaCompressor::LossyDctDecoderCsc::`vftable'{for `Imf_2_3::DwaCompressor::LossyDctDecoderBase'}
int64_t* rax_7 = result[8]

if (result[9] == rax_7)
    sub_142991990(&result[7], rax_7, arg2)
else
    sub_1429959f0(rax_7, arg2)
    result[8] = &result[8][3]

int64_t* rax_8 = result[8]

if (result[9] == rax_8)
    sub_142991990(&result[7], rax_8, arg3)
else
    sub_1429959f0(rax_8, arg3)
    result[8] = &result[8][3]

int64_t* rax_9 = result[8]

if (result[9] == rax_9)
    sub_142991990(&result[7], rax_9, arg4)
else
    sub_1429959f0(rax_9, arg4)
    result[8] = &result[8][3]

int32_t* rdx_5 = result[0xb]
int32_t arg_50

if (result[0xc] == rdx_5)
    sub_142991b90(&result[0xa], rdx_5, &arg_50)
else
    *rdx_5 = arg_50
    result[0xb] = &result[0xb]->__offset(0x0).q + 4
int32_t* rdx_6 = result[0xb]
int32_t arg_58

if (result[0xc] == rdx_6)
    sub_142991b90(&result[0xa], rdx_6, &arg_58)
else
    *rdx_6 = arg_58
    result[0xb] = &result[0xb]->__offset(0x0).q + 4
int32_t* rdx_7 = result[0xb]
int32_t arg_60

if (result[0xc] == rdx_7)
    sub_142991b90(&result[0xa], rdx_7, &arg_60)
else
    *rdx_7 = arg_60
    result[0xb] = &result[0xb]->__offset(0x0).q + 4
return result
