// 函数: sub_140ae06f0
// 地址: 0x140ae06f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t var_38 = 0
int16_t arg_18 = 0
int16_t result_1 = 0
int16_t rcx = 0
char rsi = arg2[5].b & 1

if (rsi == 0)
    arg5.o = *arg1
    arg4.o = 0x43360b61
    arg5.d = arg5.d f* 182.044449f
    arg5.d = arg5.d f+ arg5.d
    arg5.d = arg5.d f+ 0.5f
    int32_t rcx_1 = int.d(arg5.d)
    arg5.o = arg1[1]
    arg5.d = arg5.d f* 182.044449f
    rcx = (rcx_1 s>> 1).w
    var_38 = rcx
    arg5.d = arg5.d f+ arg5.d
    arg5.d = arg5.d f+ 0.5f
    int32_t rax_1 = int.d(arg5.d)
    arg5.o = arg1[2]
    arg5.d = arg5.d f* 182.044449f
    arg_18 = (rax_1 s>> 1).w
    arg5.d = arg5.d f+ arg5.d
    arg5.d = arg5.d f+ 0.5f
    result_1 = (int.d(arg5.d) s>> 1).w

int64_t rax_5 = *arg2
bool arg_10 = rcx != 0
(*(rax_5 + 0x158))(arg2, &arg_10, 1, arg4)

if (arg_10 == 0)
    var_38 = 0
else
    int64_t* rcx_3 = arg2[1]
    int16_t* rdx_1 = *rcx_3
    
    if (&rdx_1[1] u> rcx_3[1])
        int16_t* rdx_2 = &var_38
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_2, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 2)
    else
        var_38 = *rdx_1
        *rcx_3 += 2

int64_t rax_9 = *arg2
arg_10 = arg_18 != 0
(*(rax_9 + 0x158))(arg2, &arg_10, 1)

if (arg_10 == 0)
    arg_18 = 0
else
    int64_t* rcx_6 = arg2[1]
    int16_t* rdx_4 = *rcx_6
    
    if (&rdx_4[1] u> rcx_6[1])
        int16_t* rdx_5 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54000(arg2, rdx_5, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 2)
    else
        arg_18 = *rdx_4
        *rcx_6 += 2

int64_t rax_13 = *arg2
arg_10 = result_1 != 0
uint32_t result = (*(rax_13 + 0x158))(arg2, &arg_10, 1)

if (arg_10 == 0)
    result_1 = 0
else
    int64_t* rcx_9 = arg2[1]
    int16_t* rdx_7 = *rcx_9
    
    if (&rdx_7[1] u> rcx_9[1])
        int16_t* rdx_8 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54000(arg2, rdx_8, arg5)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_8, 2)
    else
        result = zx.d(*rdx_7)
        result_1 = result.w
        *rcx_9 += 2

if (rsi != 0)
    uint32_t rax_17 = zx.d(arg_18)
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(var_38)).d f* 0.00549316406f
    *arg1 = zmm0.d
    result = zx.d(result_1)
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_17))
    arg5.o = zx.o(result)
    arg5.o = _mm_cvtepi32_ps(arg5.o)
    zmm0.d = zmm0.d f* 0.00549316406f
    arg5.d = arg5.d f* 0.00549316406f
    arg1[1] = zmm0.d
    arg1[2] = arg5.d

return result
