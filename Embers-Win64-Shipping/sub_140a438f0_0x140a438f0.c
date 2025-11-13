// 函数: sub_140a438f0
// 地址: 0x140a438f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (arg2[1].d != 0)
    int64_t* rax_1 = *arg2
    int16_t* rcx
    
    if (rax_1[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *rax_1
    
    sub_140b2ab20(rcx, u"delay=", &arg_8)
else
    arg_8 = 0x1e

sub_140a2fe90(sub_140b18f30(), *(arg1 + 0x30))
int64_t* result = sub_140a2fe90(sub_140b18f30(), *(arg1 + 0x38))
int32_t rcx_3 = arg_8
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0

if (rcx_3 != 0)
    int32_t rax_4
    
    if (rcx_3 s>= 0xa)
        rax_4 = 0x12c
        
        if (rcx_3 s< 0x12c)
            rax_4 = rcx_3
    else
        rax_4 = 0xa
    
    arg_8 = rax_4
    void arg_10
    int64_t* rax_6 = sub_140a208a0(sub_140b18f30(), &arg_10, arg1 + 0x10, zx.o(0))
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(arg_8))
    *(arg1 + 0x30) = *rax_6
    result = sub_140a208a0(sub_140b18f30(), &arg_10, arg1 + 0x20, zmm6_1)
    *(arg1 + 0x38) = *result

return result
