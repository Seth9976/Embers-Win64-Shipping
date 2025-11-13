// 函数: sub_1420aac20
// 地址: 0x1420aac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = arg3[2]
int64_t rdi = arg1[0xa3]
uint32_t var_18[0x4] = zmm0
int64_t rsi = sx.q(arg2)
char result

if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
    result = 0
else if (_mm_and_ps(var_18[1], 0x7fffffff)[0] f> 9.99999975e-05f)
    result = 0
else if (_mm_and_ps(var_18[2], 0x7fffffff)[0] f> 9.99999975e-05f)
    result = 0
else
    result = 1

int64_t (* rcx)(int64_t* arg1, int64_t* arg2) = *(rdi + (rsi << 3))

if (result != 0)
    if (rcx != 0)
        sub_142225820(rcx, 0)
        void* rcx_1 = *(rdi + (rsi << 3))
        
        if (rcx_1 != 0)
            sub_14204b6c0(rcx_1, 1)
        
        result = 0
        *(rdi + (rsi << 3)) = 0
    
    return result

if (rcx == 0)
    int32_t* rax = j_sub_140a82f30(0x130)
    
    if (rax != 0)
        rax = sub_14220ad50(rax)
    
    *(rdi + (rsi << 3)) = rax
    return sub_142096f00(arg1, rsi.d, rax)

sub_1422214a0(rcx, arg3, arg4)
float zmm1_1[0x4] = arg3[2]
void* rcx_2 = *(rdi + (rsi << 3))
float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
var_18[0] = zmm1_1[0]
var_18[2] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
var_18[1] = temp0_3[0]
return sub_142226370(rcx_2, &var_18, 0)
