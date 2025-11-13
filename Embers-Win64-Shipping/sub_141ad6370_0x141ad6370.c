// 函数: sub_141ad6370
// 地址: 0x141ad6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi
int64_t* arg_20 = rsi
sub_141e1eab0(sub_141e23160(arg1), arg2)
uint32_t rcx_1 = zx.d(*(arg1 + 0x30))
*(arg1 + 0xc0) = 0

if (rcx_1 == 0)
    *(arg1 + 0xc0) =
        sub_141e3b510(arg1 + 0x38, sub_141e3b530(arg1 + 0x90, *(arg1 + 0x34), arg2[3].d))
else if (rcx_1 == 1)
    *(arg1 + 0xc0) = sub_141e3b430(arg1 + 0x40, *(arg1 + 0x31) & 1, arg2[3].d)
else if (rcx_1 == 2)
    rsi = *(*arg2 + 0xa0)
    
    if (rsi != 0)
        void* rax_2 = sub_14245f6d0()
        void* rcx_3 = rsi[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            arg2[3].d
            uint32_t zmm0_2[0x4]
            float zmm6_2[0x4]
            zmm0_2, zmm6_2 = sub_141e01880(rsi, *(arg1 + 0x88))
            *(arg1 + 0xc0) = sub_141e3b530(arg1 + 0x90, zmm0_2, zmm6_2)

uint32_t zmm1_1[0x4] = *(arg1 + 0xc0)
uint32_t zmm0_1 = (zx.o(0)).d

if (not(zmm1_1[0] f< zmm0_1))
    zmm0_1 = _mm_min_ss(zmm1_1[0], 0x3f800000)[0]

zmm0_1 f- 0.999989986f
char rax_5 = *(arg1 + 0x31)
*(arg1 + 0xc0) = zmm0_1
rsi.b = zmm0_1 f< 0.999989986f
int64_t rbp
rbp.b = zmm0_1 f> 9.99999975e-06f

if ((rax_5 & 8) != 0)
    void arg_8
    
    if (rsi.b != 0 && (rax_5 & 2) == 0)
        sub_140dd5b90(&arg_8, *arg2)
        sub_141e29640(arg1 + 0x10, &arg_8)
    
    if (rbp.b != 0 && (*(arg1 + 0x31) & 4) == 0)
        sub_140dd5b90(&arg_8, *arg2)
        sub_141e29640(arg1 + 0x20, &arg_8)

rsi.b *= 2
rbp.b <<= 2
rsi.b |= *(arg1 + 0x31) & 0xfd
int64_t* rdx_8 = arg2
rsi.b &= 0xfb
rsi.b |= rbp.b
*(arg1 + 0x31) = rsi.b
void* rcx_16

if ((rsi.b & 4) == 0)
    rcx_16 = arg1 + 0x10
else if ((rsi.b & 2) == 0)
    rcx_16 = arg1 + 0x20
else
    float zmm6_1 = 1f f- *(arg1 + 0xc0)
    void var_38
    public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
        &var_38, rdx_8)
    float var_28_1 = zmm6_1 f* arg2[2].d
    uint32_t var_24_1 = *(arg2 + 0x14)
    uint32_t var_20_1 = arg2[3].d[0]
    int64_t var_30_1 = arg2[1]
    sub_141e32270(arg1 + 0x10, &var_38)
    zmm6_1 = *(arg1 + 0xc0)
    public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
        &var_38, arg2)
    rcx_16 = arg1 + 0x20
    rdx_8 = &var_38
    float var_28_2 = zmm6_1 f* arg2[2].d
    int32_t var_24_2 = *(arg2 + 0x14)
    uint32_t var_20_2 = arg2[3].d[0]
    int64_t var_30_2 = arg2[1]

return sub_141e32270(rcx_16, rdx_8)
