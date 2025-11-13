// 函数: sub_142bff350
// 地址: 0x142bff350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdi = *arg1
int128_t* const rbx = &data_14369a5d0
int128_t* const rax = &data_14369a5d0

if (rdi != 0)
    rax = rdi

int128_t* const r9 = &data_14369a5d0

if (*(rax + 0x18) u>= 8)
    r9 = rax[1].q

uint16_t result

if (zx.w(*r9) * 0x100 != neg.w(zx.w(*(r9 + 1))))
    int32_t arg_8 = 0
    int32_t var_38 = 0
    uint32_t var_34 = 0
    int32_t* rax_3 = sub_142bfea00(sub_142bfd400(arg1, arg2), arg3, rdi, 0x706e6720, &arg_8, 
        &var_38, arg1[1].d, &var_34)
    
    if (rax_3[6] u>= 0x1d)
        rbx = *(rax_3 + 0x10)
    
    *arg4 = arg_8
    arg4[1] = var_38
    arg4[2] = (((((zx.d(rbx[1].b) << 8) + zx.d(*(rbx + 0x11))) << 8) + zx.d(*(rbx + 0x12))) << 8)
        + zx.d(*(rbx + 0x13))
    uint64_t rbx_1 = zx.q(var_34)
    arg4[3] = (((((zx.d(*(rbx + 0x14)) << 8) + zx.d(*(rbx + 0x15))) << 8) + zx.d(*(rbx + 0x16)))
        << 8) + zx.d(*(rbx + 0x17))
    
    if (rbx_1.d != 0)
        void* rcx_16 = *(arg2 + 0x18)
        uint32_t rax_12 = *(rcx_16 + 0x2c)
        
        if (rax_12 == 0)
            rax_12 = sub_142bf7870(rcx_16)
        
        int128_t zmm6
        zmm6.q = float.d(zx.q(rax_12))
        zmm6.q = zmm6.q f/ float.d(rbx_1)
        double _X = _mm_cvtepi32_pd(zx.q(*arg4)).q f* zmm6.q
        round(_X)
        int32_t rax_14 = int.d(_X)
        _X = _mm_cvtepi32_pd(zx.q(arg4[1])).q
        *arg4 = rax_14
        _X = _X f* zmm6.q
        round(_X)
        int32_t rax_15 = int.d(_X)
        _X = _mm_cvtepi32_pd(zx.q(arg4[2])).q
        arg4[1] = rax_15
        _X = _X f* zmm6.q
        round(_X)
        int32_t rax_16 = int.d(_X)
        _X = _mm_cvtepi32_pd(zx.q(arg4[3])).q
        arg4[2] = rax_16
        _X = _X f* zmm6.q
        round(_X)
        arg4[3] = int.d(_X)
    
    sub_142c09b70(rax_3)
    result.b = rbx_1.d != 0
else
    result.b = 0

return result
