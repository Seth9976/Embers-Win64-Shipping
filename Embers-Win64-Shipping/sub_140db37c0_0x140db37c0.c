// 函数: sub_140db37c0
// 地址: 0x140db37c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140dbe040(arg1)
int64_t* rbx

if (result.b == 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    void* rax = sub_140d99610(arg1)
    void*** rbx_1
    
    if ((*(rax + 0x50) & 1) == 0)
        rbx_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rbx_1[3]
        
        if (rax_2 u> *(arg1 + 0x20))
            sub_140b0e3d0(arg1 + 0x18, 0x20)
            rbx_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
            rax_2 = &rbx_1[3]
        
        *(arg1 + 0x18) = rax_2
        goto label_140db387e
    
    void*** rax_1 = j_sub_140a82f30(0x18)
    rbx_1 = rax_1
    
    if (rax_1 != 0)
    label_140db387e:
        *rbx_1 = &data_142ec2868
        rbx_1[1] = 0
        rbx_1[2] = 0
    else
        rbx_1 = nullptr
    
    *rax = rbx_1
    rbx_1[1] = *arg3
    void* rbp_1 = arg3[1]
    int64_t* rcx_1 = rbx_1[2]
    
    if (rbp_1 != rcx_1)
        if (rbp_1 != 0)
            *(rbp_1 + 0xc) += 1
            rcx_1 = rbx_1[2]
        
        if (rcx_1 != 0)
            int32_t rax_4 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rbx_1[2] = rbp_1
    
    int128_t zmm0_1 = data_142d8c9b0
    zmm6 = zx.o(0)
    *(rax + 8) = zmm0_1
    *(rax + 0x20) = 0
    int128_t var_54_1 = zmm0_1
    *(rax + 0x48) = 0x3f800000
    *(rax + 0x28) = 0
    zmm0_1 = _mm_unpacklo_ps(zx.o(0), zmm6.q)
    *(rax + 0x18) = zmm0_1.q
    int64_t rax_6 = sx.q(*(arg1 + 0xb0))
    int64_t var_44_1 = zmm0_1.q
    int32_t rdx
    
    if (rax_6.d s<= 0)
        rdx = -1
    else
        rdx = *(*(arg1 + 0xa8) + (rax_6 << 2) - 4)
    
    *(rax + 0x40) = rdx
    *(rax + 0x30) = arg2
    *(rax + 0x4d) = 0x900
    int64_t* rcx_3 = *(data_143e20d08 + 0x20)
    result = (*(*rcx_3 + 0x148))(rcx_3)
    zmm0_1 = data_142d8c9b0
    *(rax + 8) = zmm0_1
    *(rax + 0x4c) = result.b
    int128_t var_88_1 = zmm0_1
    *(rax + 0x4f) = 0
    zmm0_1 = _mm_unpacklo_ps(zx.o(0), zmm6.q)
    *(rax + 0x18) = zmm0_1.q
    rbx = arg3[1]
    int64_t var_78_1 = zmm0_1.q
    
    if (rbx != 0)
        goto label_140db39a7
else
    rbx = arg3[1]
    
    if (rbx != 0)
    label_140db39a7:
        result = rbx[1].d
        rbx[1].d -= 1
        
        if (result == 1)
            result = (**rbx)(rbx)
            int32_t rdi_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*rbx + 8))(rbx, zx.q(rdi_1))
return result
