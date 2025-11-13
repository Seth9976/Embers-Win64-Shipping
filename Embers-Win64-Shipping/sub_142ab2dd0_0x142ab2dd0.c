// 函数: sub_142ab2dd0
// 地址: 0x142ab2dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = arg2
*(arg1 + 0x15) = 1
*(arg1 + 0x20) = 0

if (((arg2 u>> 0x34).d & 0x7ff) - 0x3ff s<= 0x34)
    int64_t rdx_1 = int.q(arg2)
    double zmm0 = float.d(rdx_1)
    zmm0 - arg2
    
    if (not(is_unordered.q(zmm0, arg2)) && not(zmm0 != arg2))
        return sub_142ab2f00(arg1, rdx_1) __tailcall

int32_t rbx =
    int.d(_mm_cvtepi32_pd(zx.q(0x34 - (((arg2 u>> 0x34).d & 0x7ff) - 0x3ff))) / 3.3219280948900001)

if (rbx s< 0)
    int32_t rcx_1 = rbx
    
    if (rbx s<= 0xffffffea)
        uint64_t i_2 = zx.q((0xffffffea - rbx) u/ 0x16 + 1)
        rcx_1 = ((0xffffffea - rbx) u/ 0x16 + 1) * 0x16 + rbx
        uint64_t i
        
        do
            arg2 = arg2 / 1e+22
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg2 = arg2 / *(&data_143ccaf60 - (sx.q(rcx_1) << 3))
else
    int32_t rdx_3 = rbx
    
    if (rbx s>= 0x16)
        uint64_t i_3 = zx.q(rbx u/ 0x16)
        rdx_3 = rbx u% 0x16
        uint64_t i_1
        
        do
            arg2 = arg2 * 1e+22
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    arg2 = arg2 f* *(&data_143ccaf60 + (sx.q(rdx_3) << 3))

double result = round(arg2)
int64_t rdx_10 = int.q(arg2)

if (rdx_10 != 0)
    result = sub_142ab2f00(arg1, rdx_10)
    *(arg1 + 0xc) -= rbx

return result
