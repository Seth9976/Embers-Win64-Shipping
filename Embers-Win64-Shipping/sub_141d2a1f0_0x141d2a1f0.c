// 函数: sub_141d2a1f0
// 地址: 0x141d2a1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
void*** rbx
float var_a0

if (arg10 != 0)
    if (arg10 != 1)
        if (arg10 != 3)
            int64_t rcx_10 = *(arg1 + 8)
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            return nullptr
        
        char var_a8 = *arg1
        char var_a7_1 = arg1[1]
        sub_140596d10(&var_a0, &arg1[8])
        void*** rax_13 = sub_141d2a5a0(&var_a8, arg2, arg3, arg4, arg6, arg7, arg8, arg9)
        int64_t rcx_9 = *(arg1 + 8)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        return rax_13
    
    void*** rax_5 = j_sub_140a82f30(0x20)
    rbx = rax_5
    
    if (rax_5 == 0)
        rbx = nullptr
    else
        var_a0 = 0f
        sub_1417048d0(rax_5, 3, 0)
        rbx[2] = _mm_unpacklo_ps(zx.o(0), 0)
        int64_t zmm0_2
        zmm0_2.d = arg8.d f* 0.00999999978f
        *rbx = &data_142fc46f0
        rbx[3].d = var_a0
        *(rbx + 0x1c) = (1f f- zmm0_2.d) * arg5
        float rax_6
        
        if (arg9 != 1)
            rax_6 = sub_1405e66c0(rbx)
        else
            rax_6.b = 6
        
        *(rbx + 9) = rax_6.b
        
        if (arg9 == 1 && sub_1405e66c0(rbx) == 6)
            *(rbx + 0xa) = 0
else
    zmm6 = *(arg4 + 0xc)
    int128_t zmm4 = *(arg4 + 0x14)
    float zmm7[0x4] = arg4[1].d
    float zmm9[0x4] = *arg4
    int128_t zmm2
    zmm2.d = zmm6.d f- zmm9[0]
    int128_t zmm10 = *(arg4 + 4)
    zmm9[0] = zmm9[0] f+ zmm6.d
    zmm7[0] = zmm7[0] f- zmm10.d
    float zmm11[0x4] = *(arg4 + 8)
    zmm10.d = zmm10.d f+ zmm7[0]
    zmm4.d = zmm4.d f- zmm11[0]
    zmm11[0] = zmm11[0] f+ *(arg4 + 0x14)
    int128_t zmm12 = zmm2
    zmm2.d = zmm2.d f* arg8
    int128_t zmm14 = zmm4
    zmm7[0] = zmm7[0] * arg8
    zmm4.d = zmm4.d f* arg8
    zmm12.d = zmm12.d f* 0.5f
    zmm4.d = zmm4.d f* 0.00499999989f
    zmm2.d = zmm2.d f* 0.00499999989f
    zmm7[0] = zmm7[0] * 0.5f
    zmm7[0] = zmm7[0] * 0.00499999989f
    zmm12.d = zmm12.d f- zmm2.d
    zmm14.d = zmm14.d f* 0.5f
    zmm7[0] = zmm7[0] - zmm7[0]
    zmm9[0] = zmm9[0] * 0.5f
    zmm14.d = zmm14.d f- zmm4.d
    zmm10.d = zmm10.d f* 0.5f
    zmm11[0] = zmm11[0] * 0.5f
    void*** rax_1 = j_sub_140a82f30(0x28)
    rbx = rax_1
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        zmm11[0] = zmm11[0] f+ zmm14.d
        zmm11[0] = zmm11[0] f- zmm14.d
        zmm9[0] = zmm9[0] f+ zmm12.d
        zmm6.d = zmm10.d f+ zmm7[0]
        zmm9[0] = zmm9[0] f- zmm12.d
        var_a0 = zmm11[0]
        zmm10.d = zmm10.d f- zmm7[0]
        float var_b0_1 = zmm11[0]
        sub_1417048d0(rax_1, 3, 1)
        *rbx = &data_142fc4870
        rbx[2] = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
        float temp0_2[0x4] = _mm_unpacklo_ps(zmm9, zmm6.q)
        rbx[3].d = var_b0_1
        float rax_3 = var_a0
        *(rbx + 0x1c) = temp0_2.q
        *(rbx + 0x24) = rax_3
        
        if (arg9 != 1)
            rax_3 = sub_1405e66c0(rbx)
        else
            rax_3.b = 6
        
        *(rbx + 9) = rax_3.b
        
        if (arg9 == 1 && sub_1405e66c0(rbx) == 6)
            *(rbx + 0xa) = 0
int64_t rcx_3 = *(arg1 + 8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return rbx
