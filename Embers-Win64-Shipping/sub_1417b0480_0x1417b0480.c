// 函数: sub_1417b0480
// 地址: 0x1417b0480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2

if (arg3 == 0xffffffff)
    arg2[1].d = 0x3f800000
    *arg2 = 0
    return result

int64_t rax = sx.q(arg3)
float zmm2[0x4]
float zmm3
float zmm5[0x4]
int128_t zmm6
int128_t zmm7
int128_t zmm8

if (*(arg1 + 0x70) == 0)
    int64_t r10_2 = *(arg1 + 0x38)
    int64_t rdx_1 = rax * 3
    int64_t rcx_1 = *(arg1 + 0x60)
    uint64_t r9_1 = zx.q(*(rcx_1 + (rdx_1 << 1))) * 3
    uint64_t r8_2 = zx.q(*(rcx_1 + (rdx_1 << 1) + 2)) * 3
    zmm8.d = (*(r10_2 + (r8_2 << 2))).d f- *(r10_2 + (r9_1 << 2))
    zmm7.d = (*(r10_2 + (r8_2 << 2) + 4)).d f- *(r10_2 + (r9_1 << 2) + 4)
    zmm3 = *(r10_2 + (r8_2 << 2) + 8) f- *(r10_2 + (r9_1 << 2) + 8)
    uint64_t rcx_2 = zx.q(*(rcx_1 + (rdx_1 << 1) + 4)) * 3
    zmm5 = *(r10_2 + (rcx_2 << 2) + 4)
    zmm2 = *(r10_2 + (rcx_2 << 2) + 8)
    zmm6.d = (*(r10_2 + (rcx_2 << 2))).d f- *(r10_2 + (r9_1 << 2))
    zmm5[0] = zmm5[0] f- *(r10_2 + (r9_1 << 2) + 4)
    zmm2[0] = zmm2[0] f- *(r10_2 + (r9_1 << 2) + 8)
else
    int64_t r10_1 = *(arg1 + 0x38)
    int64_t r9 = rax * 3
    int64_t r8 = *(arg1 + 0x50)
    int64_t rdx = sx.q(*(r8 + (r9 << 2))) * 3
    int64_t rcx = sx.q(*(r8 + (r9 << 2) + 4)) * 3
    zmm8.d = (*(r10_1 + (rcx << 2))).d f- *(r10_1 + (rdx << 2))
    zmm7.d = (*(r10_1 + (rcx << 2) + 4)).d f- *(r10_1 + (rdx << 2) + 4)
    zmm3 = *(r10_1 + (rcx << 2) + 8) f- *(r10_1 + (rdx << 2) + 8)
    int64_t r8_1 = sx.q(*(r8 + (r9 << 2) + 8)) * 3
    zmm5 = *(r10_1 + (r8_1 << 2) + 4)
    zmm2 = *(r10_1 + (r8_1 << 2) + 8)
    zmm6.d = (*(r10_1 + (r8_1 << 2))).d f- *(r10_1 + (rdx << 2))
    zmm5[0] = zmm5[0] f- *(r10_1 + (rdx << 2) + 4)
    zmm2[0] = zmm2[0] f- *(r10_1 + (rdx << 2) + 8)

zmm5[0] = zmm5[0] * zmm3
zmm2[0] = zmm2[0] f* zmm7.d
int64_t zmm1
zmm1.d = zmm6.q.d f* zmm3
zmm2[0] = zmm2[0] - zmm5[0]
zmm2[0] = zmm2[0] f* zmm8.d
zmm5[0] = zmm5[0] f* zmm8.d
zmm1.d = zmm1.d f- zmm2[0]
zmm6.d = zmm6.d f* zmm7.d
zmm5[0] = zmm5[0] f- zmm6.d
*result = (_mm_unpacklo_ps(zmm2, zmm1)).q
result[1].d = zmm5[0]
sub_141750780(result)
return result
