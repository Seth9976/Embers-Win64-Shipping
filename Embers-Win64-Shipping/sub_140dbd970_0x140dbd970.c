// 函数: sub_140dbd970
// 地址: 0x140dbd970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
result.b = 0

if ((*arg3).d f!= arg1[0x16].d || not((*(arg3 + 4)).d f== *(arg1 + 0xb4)))
    int64_t zmm1 = *arg3
    arg1[0x16] = zmm1
    zmm1.d = zmm1.d f/ data_1439ae6a0
    zmm1.d = zmm1.d f+ zmm1.d
    int64_t zmm0
    zmm0.d = -0.5f f- zmm1.d
    int32_t rcx = int.d(zmm0.d)
    zmm0.d = (*(arg1 + 0xb4)).d f/ data_1439ae6a4
    int32_t rcx_2 = neg.d(rcx s>> 1)
    arg1[0x13].d = rcx_2
    zmm0.d = zmm0.d f+ zmm0.d
    int32_t rax_2 = neg.d(int.d(-0.5f f- zmm0.d) s>> 1)
    *(arg1 + 0x9c) = rax_2
    int32_t rdi_2 = rax_2 * rcx_2
    sub_140dbbaa0(&arg1[0x11], rdi_2)
    sub_140dbdab0(&arg1[0x11], rdi_2, 1)
    sub_1408d84f0(arg1)
    sub_140dbbd00(&arg1[0xa])
    result.b = 1

arg1[0x14] = *arg2
arg1[0x15] = *arg4
return result
