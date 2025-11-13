// 函数: sub_14214a010
// 地址: 0x14214a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x26] == arg1[0x45] && (*(*arg1 + 0x568))() != 0)
    void* result = arg1[0x45]
    float zmm0[0x4] = *(result + 0x1e0)
    float temp0_1[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
    temp0_1[0] = temp0_1[0] f* *(result + 0x424)
    *arg2 = temp0_1[0]
    zmm0 = *(result + 0x1e8)
    zmm0[0] = zmm0[0] f* *(result + 0x420)
    *arg3 = zmm0[0]
    return result

return sub_141dcbec0(arg1, arg2, arg3) __tailcall
