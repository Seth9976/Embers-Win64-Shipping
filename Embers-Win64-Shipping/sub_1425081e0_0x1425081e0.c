// 函数: sub_1425081e0
// 地址: 0x1425081e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_18
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int32_t zmm4 = arg_10
int64_t rbp
rbp.b = rax_4 != 0
*(arg2 + 0x20) = rbp + rax_4
uint32_t zmm2[0x4] = *rdi
uint32_t zmm1[0x4] = *(rdi + 4)
zmm2[0] = zmm2[0] f- zmm1[0]
uint32_t result[0x4] = _mm_and_ps(zmm2, 0x7fffffff)

if (result[0] f> zmm4)
    *arg3 = 0
else
    result = *(rdi + 8)
    zmm2[0] = zmm2[0] f- result[0]
    
    if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> zmm4)
        *arg3 = 0
    else
        zmm1[0] = zmm1[0] f- result[0]
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> zmm4)
            *arg3 = 0
        else
            *arg3 = 1

return result
