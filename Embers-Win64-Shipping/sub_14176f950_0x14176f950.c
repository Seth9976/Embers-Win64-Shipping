// 函数: sub_14176f950
// 地址: 0x14176f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1[6][0].q
int32_t rcx = *(arg2 + 4)
int64_t* arg_8 = r14

if (rcx s<= 0)
    int128_t zmm7 = (*arg1)[0x36]
    
    if (not(zmm7.d f== 1f))
        float zmm0[0x4] = *arg2
        int128_t zmm6
        zmm6.d = 1f f- zmm7.d
        int32_t r8 = *(arg2 + 8)
        int32_t r9_1 = 1
        int32_t rdx = *(arg2 + 0xc)
        
        if (rcx s>= 1)
            r9_1 = rcx
        
        int32_t rcx_1 = arg2[1].d
        int64_t rax_1 = *(arg2 + 0x18)
        zmm6.d = zmm6.d f* zmm0[0]
        zmm0[0] = zmm0[0] f* zmm7.d
        int32_t var_58 = zmm6.d
        int32_t var_54_1 = r9_1
        float var_78 = zmm0[0]
        int32_t var_74_1 = r9_1
        int32_t var_70_1 = r8
        int32_t var_50_1 = r8
        int32_t var_68_1 = rcx_1
        int32_t var_48_1 = rcx_1
        int32_t var_6c_1 = rdx
        int64_t var_60_1 = rax_1
        int32_t var_4c_1 = rdx
        int64_t var_40_1 = rax_1
        int64_t rdi_1 = sx.q(r14[1].d) * 3
        int64_t rbx_1 = *(*r14 + 0x28)
        int64_t* rax_4 = sub_141746340(&arg_8)
        zmm0 = rax_4[1].d
        zmm0[0] = zmm0[0] f- *(rbx_1 + (rdi_1 << 2) + 8)
        float zmm4[0x4] = *rax_4
        zmm4[0] = zmm4[0] f- *(rbx_1 + (rdi_1 << 2))
        int64_t zmm2
        zmm2.d = (*(rax_4 + 4)).d f- *(rbx_1 + (rdi_1 << 2) + 4)
        zmm0[0] = zmm0[0] f* zmm7.d
        zmm4[0] = zmm4[0] f* zmm7.d
        zmm0[0] = zmm0[0] f+ *(rbx_1 + (rdi_1 << 2) + 8)
        zmm2.d = zmm2.d f* zmm7.d
        zmm4[0] = zmm4[0] f+ *(rbx_1 + (rdi_1 << 2))
        zmm2.d = zmm2.d f+ *(rbx_1 + (rdi_1 << 2) + 4)
        float var_80_1 = zmm0[0]
        *rax_4 = (_mm_unpacklo_ps(zmm4, zmm2)).q
        rax_4[1].d = var_80_1
        float zmm6_1[0x4] = sub_14175d130(arg1, &var_78, arg3)
        char rdx_2 = *(r14 + 0xc)
        int64_t* rcx_5 = nullptr
        int64_t* rax_6 = nullptr
        
        if (rdx_2 u>= 1)
            rax_6 = r14
        
        int32_t* rbx_2
        
        if (rax_6 == 0)
            rbx_2 = &data_1439b8e08
        else
            if (rdx_2 u>= 1)
                rcx_5 = r14
            
            rbx_2 = *(*rcx_5 + 0x1b8) + sx.q(rcx_5[1].d) * 0xc
        
        int32_t* rax_9 = sub_141746340(&arg_8)
        zmm6_1[0] = zmm6_1[0] f* *rbx_2
        int64_t zmm1_1
        zmm1_1.d = zmm6_1[0].q.d f* rbx_2[1]
        zmm6_1[0] = zmm6_1[0] f+ *rax_9
        zmm6_1[0] = zmm6_1[0] f* rbx_2[2]
        zmm1_1.d = zmm1_1.d f+ rax_9[1]
        zmm6_1[0] = zmm6_1[0] f+ rax_9[2]
        *rax_9 = (_mm_unpacklo_ps(zmm6_1, zmm1_1)).q
        rax_9[2] = zmm6_1[0]
        return sub_14175d130(arg1, &var_58, arg3)

return sub_14175d130(arg1, arg2, arg3)
