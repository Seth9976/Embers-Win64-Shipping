// 函数: sub_141743d50
// 地址: 0x141743d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm13 = arg1[3]
int128_t zmm14 = arg1[4]
int64_t r9 = sx.q(*arg1) * 3
int128_t zmm11
zmm11.d = (*(arg2 + (r9 << 2) + 4)).d f- *(arg3 + (r9 << 2) + 4)
int128_t zmm6
zmm6.d = (*(arg2 + (r9 << 2) + 8)).d f- *(arg3 + (r9 << 2) + 8)
int128_t zmm8
zmm8.d = (*(arg2 + (r9 << 2))).d f- *(arg3 + (r9 << 2))
int128_t zmm15 = arg1[5]
zmm11.d = zmm11.d f- zmm14.d
int64_t rcx = sx.q(arg1[1]) * 3
zmm6.d = zmm6.d f- zmm15.d
zmm8.d = zmm8.d f- zmm13.d
int128_t zmm7
zmm7.d = (*(arg2 + (rcx << 2))).d f- *(arg3 + (rcx << 2))
int128_t zmm12
zmm12.d = (*(arg2 + (rcx << 2) + 4)).d f- *(arg3 + (rcx << 2) + 4)
int128_t zmm10
zmm10.d = (*(arg2 + (rcx << 2) + 8)).d f- *(arg3 + (rcx << 2) + 8)
int64_t rcx_1 = sx.q(arg1[2]) * 3
zmm12.d = zmm12.d f- zmm14.d
int128_t zmm3
zmm3.d = (*(arg2 + (rcx_1 << 2) + 8)).d f- *(arg3 + (rcx_1 << 2) + 8)
zmm10.d = zmm10.d f- zmm15.d
float zmm4 = *(arg2 + (rcx_1 << 2) + 4) f- *(arg3 + (rcx_1 << 2) + 4) f- zmm14.d
zmm7.d = zmm7.d f- zmm13.d
zmm3.d = zmm3.d f- zmm15.d
float zmm5 = *(arg2 + (rcx_1 << 2)) f- *(arg3 + (rcx_1 << 2)) f- zmm13.d
int128_t zmm9
zmm9.d = zmm3.d f* zmm11.d
zmm9.d = zmm9.d f- zmm4 f* zmm6.d
zmm9.d = zmm9.d f* zmm13.d
float zmm0 = zmm3.d f* zmm12.d
zmm9.d = zmm9.d f+ (zmm5 f* zmm6.d - zmm3.d f* zmm8.d) f* zmm14.d
zmm3.d = zmm3.d f* zmm7.d
zmm9.d = zmm9.d f+ (zmm4 f* zmm8.d - zmm5 f* zmm11.d) f* zmm15.d
zmm3.d = zmm3.d f- zmm5 f* zmm10.d
zmm3.d = zmm3.d f* zmm14.d
zmm9.d f- 0f
bool cond:1 = zmm9.d f<= 0f
float zmm1 =
    (zmm4 f* zmm10.d - zmm0) f* zmm13.d f+ zmm3.d + (zmm5 f* zmm12.d - zmm4 f* zmm7.d) f* zmm15.d

if (zmm9.d f>= 0f)
    goto label_141743f08

int64_t result

if (zmm1 > 0f)
    result.b = 0
else
    cond:1 = zmm9.d f<= 0f
label_141743f08:
    
    if (cond:1 || not(zmm1 < 0f))
        zmm9.d f- 0f
        bool cond:3_1 = zmm9.d f<= 0f
        zmm0 = zmm7.d f* zmm6.d
        zmm6.d = zmm6.d f* zmm12.d
        zmm1 = zmm8.d f* zmm10.d - zmm0
        zmm7.d = zmm7.d f* zmm11.d
        zmm8.d = zmm8.d f* zmm12.d
        zmm7.d = zmm7.d f- zmm8.d
        zmm6.d = zmm6.d f- zmm11.d f* zmm10.d
        zmm7.d = zmm7.d f* zmm15.d
        zmm6.d = zmm6.d f* zmm13.d
        zmm1 = zmm1 f* zmm14.d f+ zmm6.d f+ zmm7.d
        
        if (zmm9.d f>= 0f)
            goto label_141743f6a
        
        if (zmm1 > 0f)
            result.b = 0
        else
            cond:3_1 = zmm9.d f<= 0f
        label_141743f6a:
            
            if (cond:3_1 || zmm1 >= 0f)
                result.b = 1
            else
                result.b = 0
    else
        result.b = 0

return result
