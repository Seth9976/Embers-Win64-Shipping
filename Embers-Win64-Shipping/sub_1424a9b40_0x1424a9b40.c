// 函数: sub_1424a9b40
// 地址: 0x1424a9b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg2[5].b & 2
uint32_t rdx = zx.d(arg4)
int32_t* rsi = arg3
uint128_t zmm0
int32_t var_38
int32_t var_34
int32_t var_30
uint64_t var_28
int32_t arg_20
int32_t rbx_2
int32_t zmm1

if (rdx == 1)
    if (rcx != 0)
        int32_t rax_17 = arg3[1].d
        var_28 = *arg3
        int32_t var_20_3 = rax_17
        return sub_1424a6610(&var_28, arg2)
    
    int64_t rax_18 = *arg2
    arg_20 = 0
    (*(rax_18 + 0x160))(arg2, &arg_20, 0x1b)
    char rax_19 = arg_20.b
    var_30 = 0
    var_34 = 0
    var_38 = 0
    rbx_2 = 1 << (rax_19 + 1)
    int32_t r14_3 = 1 << (rax_19 + 2)
    (*(*arg2 + 0x160))(arg2, &var_30, zx.q(r14_3))
    (*(*arg2 + 0x160))(arg2, &var_34, zx.q(r14_3))
    (*(*arg2 + 0x160))(arg2, &var_38, zx.q(r14_3))
    zmm1 = 0x3dcccccd
label_1424a9da5:
    int32_t rax_25 = var_34
    zmm0.d = _mm_cvtepi32_ps(zx.o(var_30 - rbx_2)).d f* zmm1
    *rsi = zmm0.d
    int32_t rax_27 = var_38
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_25 - rbx_2)).d f* zmm1
    rsi[1] = zmm0.d
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_27 - rbx_2)).d f* zmm1
else
    if (rdx == 2)
        if (rcx != 0)
            int32_t rax_11 = arg3[1].d
            var_28 = *arg3
            int32_t var_20_2 = rax_11
            return sub_1424a6910(&var_28, arg2)
        
        int64_t rax_12 = *arg2
        arg_20 = 0
        (*(rax_12 + 0x160))(arg2, &arg_20, 0x1e)
        char rax_13 = arg_20.b
        var_30 = 0
        var_34 = 0
        var_38 = 0
        rbx_2 = 1 << (rax_13 + 1)
        int32_t r14_2 = 1 << (rax_13 + 2)
        (*(*arg2 + 0x160))(arg2, &var_30, zx.q(r14_2))
        (*(*arg2 + 0x160))(arg2, &var_34, zx.q(r14_2))
        (*(*arg2 + 0x160))(arg2, &var_38, zx.q(r14_2))
        zmm1 = 0x3c23d70a
        goto label_1424a9da5
    
    if (rcx != 0)
        int32_t rax = arg3[1].d
        var_28 = *arg3
        int32_t var_20_1 = rax
        return sub_1424a6330(&var_28, arg2)
    
    int64_t rax_1 = *arg2
    arg_20 = 0
    (*(rax_1 + 0x160))(arg2, &arg_20, 0x18)
    char rax_2 = arg_20.b
    var_38 = 0
    var_34 = 0
    var_30 = 0
    int32_t rbx_1 = 1 << (rax_2 + 1)
    int32_t r14_1 = 1 << (rax_2 + 2)
    (*(*arg2 + 0x160))(arg2, &var_38, zx.q(r14_1))
    (*(*arg2 + 0x160))(arg2, &var_34, zx.q(r14_1))
    (*(*arg2 + 0x160))(arg2, &var_30, zx.q(r14_1))
    int32_t rax_8 = var_34
    *rsi = _mm_cvtepi32_ps(zx.o(var_38 - rbx_1)).d
    int32_t rax_10 = var_30
    rsi[1] = _mm_cvtepi32_ps(zx.o(rax_8 - rbx_1)).d
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_10 - rbx_1))
rsi[2] = zmm0.d
int32_t result
result.b = 1
return result
