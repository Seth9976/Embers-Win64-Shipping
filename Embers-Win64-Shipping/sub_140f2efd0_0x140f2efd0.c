// 函数: sub_140f2efd0
// 地址: 0x140f2efd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x2b8)
void arg_8
void* rdx = &arg_8
void* r8 = *(rcx[2] + 0x10)
void* rbx_1 = *(rcx[1] + 0x10)
void* rdi = *(*rcx + 0x10)
void var_48
void arg_20
int128_t zmm6
int128_t zmm7

if (*(arg1 + 0x2e0) != 0)
    zmm7 = *sub_140e13cf0(r8, rdx)
    zmm6 = *sub_140e13cf0(rbx_1, &arg_20)
    int32_t zmm0_1 = *sub_140e13cf0(rdi, &var_48)
    int32_t rax_9 = *(arg1 + 0x2d8)
    int32_t temp0_2 = _mm_max_ss(zmm0_1, zmm6.d)
    arg2[1] = rax_9
    *arg2 = _mm_max_ss(temp0_2, zmm7.d)
else
    zmm7 = *(sub_140e13cf0(r8, rdx) + 4)
    zmm6 = *(sub_140e13cf0(rbx_1, &arg_20) + 4)
    int32_t zmm0 = *(sub_140e13cf0(rdi, &var_48) + 4)
    int32_t rax_5 = *(arg1 + 0x2d8)
    int32_t temp0 = _mm_max_ss(zmm0, zmm6.d)
    *arg2 = rax_5
    arg2[1] = _mm_max_ss(temp0, zmm7.d)
return arg2
