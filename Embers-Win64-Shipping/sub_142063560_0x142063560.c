// 函数: sub_142063560
// 地址: 0x142063560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int32_t arg_10 = zmm0.d
int128_t zmm12 = zmm0
zmm0 = *(arg3 + 4)
int128_t zmm11 = zmm0
float arg_18 = zmm0.d
zmm0 = *(arg3 + 8)
float arg_20 = zmm0.d
int128_t zmm14 = *arg1
int128_t zmm13 = *(arg1 + 8)
int128_t zmm9
zmm9.d = (*arg2).d f- zmm14.d
int128_t zmm15 = *(arg1 + 4)
int128_t zmm3
zmm3.d = (*(arg2 + 8)).d f- zmm13.d
int128_t zmm5
zmm5.d = (*(arg2 + 4)).d f- zmm15.d
int128_t zmm10
zmm10.d = (*arg4).d f- zmm14.d
int128_t zmm4
zmm4.d = (*(arg4 + 8)).d f- zmm13.d
zmm12.d = zmm12.d f- zmm14.d
int128_t zmm6
zmm6.d = zmm0.d f- zmm13.d
zmm11.d = zmm11.d f- zmm15.d
int128_t zmm7
zmm7.d = zmm3.d f* zmm10.d
int128_t zmm8
zmm8.d = (*(arg4 + 4)).d f- zmm15.d
zmm0.d = zmm9.d f* zmm4.d
float zmm1 = zmm12.d f* zmm3.d
zmm7.d = zmm7.d f- zmm0.d
zmm12.d = zmm12.d f* zmm5.d
zmm0.d = zmm9.d f* zmm6.d
zmm1 = zmm1 f- zmm0.d
zmm0.d = zmm3.d f* zmm8.d
zmm3.d = zmm3.d f* zmm11.d
zmm7.d = zmm7.d f* zmm1
float zmm2 = zmm5.d f* zmm4.d f- zmm0.d
zmm0.d = zmm5.d f* zmm10.d
zmm1 = zmm9.d f* zmm8.d
zmm7.d = zmm7.d f+ zmm2 * (zmm5.d f* zmm6.d f- zmm3.d)
zmm9.d = zmm9.d f* zmm11.d
zmm9.d = zmm9.d f- zmm12.d
zmm7.d = zmm7.d f+ (zmm1 f- zmm0.d) f* zmm9.d
zmm7.d = zmm7.d f+ arg5
void* const* result

if (zmm7.d u>= 0x80000000)
    result.b = 0
else
    zmm1 = *(arg2 + 4)
    zmm2 = *(arg2 + 8)
    zmm11.d = zmm15.d f- zmm1
    zmm7.d = (*(arg3 + 4)).d f- zmm1
    zmm0 = *arg2
    zmm4.d = (*(arg3 + 8)).d f- zmm2
    zmm10.d = (*arg3).d f- zmm0.d
    zmm12.d = zmm14.d f- zmm0.d
    zmm6.d = (*(arg4 + 4)).d f- zmm1
    zmm9.d = (*arg4).d f- zmm0.d
    zmm3.d = (*(arg4 + 8)).d f- zmm2
    zmm5.d = zmm13.d f- zmm2
    zmm0.d = zmm4.d f* zmm6.d
    zmm8.d = zmm7.d f* zmm3.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm2 = zmm4.d f* zmm9.d
    zmm0 = zmm4
    zmm4.d = zmm4.d f* zmm12.d
    zmm0.d = zmm0.d f* zmm11.d
    zmm1 = zmm7.d f* zmm5.d f- zmm0.d
    zmm0.d = zmm10.d f* zmm3.d
    zmm8.d = zmm8.d f* zmm1
    zmm2 = zmm2 f- zmm0.d
    zmm0.d = zmm10.d f* zmm5.d
    zmm1 = zmm10.d f* zmm6.d
    zmm4.d = zmm4.d f- zmm0.d
    zmm10.d = zmm10.d f* zmm11.d
    zmm0 = zmm7
    zmm7.d = zmm7.d f* zmm12.d
    zmm0.d = zmm0.d f* zmm9.d
    zmm10.d = zmm10.d f- zmm7.d
    zmm8.d = zmm8.d f+ zmm2 f* zmm4.d
    zmm1 = (zmm1 f- zmm0.d) f* zmm10.d
    zmm10 = arg5
    zmm8.d = zmm8.d f+ zmm1
    zmm8.d = zmm8.d f+ zmm10.d
    
    if (zmm8.d u>= 0x80000000)
        result.b = 0
    else
        zmm15.d = zmm15.d f- arg_18
        zmm0 = arg_10
        zmm13.d = zmm13.d f- arg_20
        zmm14.d = zmm14.d f- zmm0.d
        zmm8.d = (*(arg4 + 4)).d f- arg_18
        zmm9.d = (*(arg4 + 8)).d f- arg_20
        zmm4.d = (*arg2).d f- zmm0.d
        zmm7.d = (*arg4).d f- zmm0.d
        zmm5.d = (*(arg2 + 4)).d f- arg_18
        zmm6.d = (*(arg2 + 8)).d f- arg_20
        zmm0.d = zmm13.d f* zmm8.d
        zmm3.d = zmm15.d f* zmm9.d
        zmm3.d = zmm3.d f- zmm0.d
        zmm2 = zmm13.d f* zmm7.d
        zmm0 = zmm13
        zmm13.d = zmm13.d f* zmm4.d
        zmm0.d = zmm0.d f* zmm5.d
        zmm1 = zmm15.d f* zmm6.d f- zmm0.d
        zmm0.d = zmm14.d f* zmm9.d
        zmm3.d = zmm3.d f* zmm1
        zmm2 = zmm2 f- zmm0.d
        zmm0.d = zmm14.d f* zmm6.d
        zmm1 = zmm14.d f* zmm8.d
        zmm13.d = zmm13.d f- zmm0.d
        zmm14.d = zmm14.d f* zmm5.d
        zmm0 = zmm15
        zmm15.d = zmm15.d f* zmm4.d
        zmm0.d = zmm0.d f* zmm7.d
        zmm14.d = zmm14.d f- zmm15.d
        zmm3.d = zmm3.d f+ zmm2 f* zmm13.d
        zmm3.d = zmm3.d f+ (zmm1 f- zmm0.d) f* zmm14.d
        zmm3.d = zmm3.d f+ zmm10.d
        
        if (zmm3.d u>= 0x80000000)
            result.b = 0
        else
            result.b = 1

return result
