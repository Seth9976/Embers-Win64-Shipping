// 函数: sub_142676730
// 地址: 0x142676730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_8 = 0

if (*(arg1 + 0x4a8) != 0)
    uint32_t zmm0[0x4] = *arg2
    zmm0[0] = zmm0[0] f- *arg3
    int512_t zmm3
    zmm3.o = 0x7fffffff
    uint32_t zmm2[0x4] = *(arg2 + 4)
    uint32_t zmm1[0x4] = *(arg2 + 8)
    zmm2[0] = zmm2[0] f- arg3[1]
    zmm1[0] = zmm1[0] f- arg3[2]
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
    label_1426767d1:
        void*** rax_1 = j_sub_140a82f30(0x148)
        void*** rdi_1
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_142642140(rax_1)
        
        void*** rax_3
        void* r9
        rax_3, r9 = j_sub_140a82f30(0x18)
        
        if (rax_3 == 0)
            rax_3 = nullptr
        else
            rax_3[1].d = 1
            *rax_3 = &data_142d42ea8
            *(rax_3 + 0xc) = 1
            rax_3[2] = rdi_1
        
        rdi_1[0x28].d &= 0xfffffff7
        rdi_1[0x28].d |= 0x10
        int64_t* rsi_1 = arg6[1]
        void* r14_1 = *arg6
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        int64_t* rdi_2
        
        if (r14_1 == 0)
            rdi_2 = *(arg1 + 0x340)
            r14_1 = *(arg1 + 0x338)
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            rbx = 1
        else
            rdi_2 = arg6
        
        if ((rbx.b & 1) != 0 && rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                r9 = (**rdi_2)(rdi_2)
                int32_t rax_9 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_9 == 1)
                    r9 = (*(*rdi_2 + 8))(rdi_2, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                r9 = (**rsi_1)(rsi_1)
                int32_t rax_13 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (rax_13 == 1)
                    r9 = (*(*rsi_1 + 8))(rsi_1, 1)
        
        zmm3.o = 0x7f7fffff
        int64_t var_58_1 = arg7
        int32_t rax_17 = sub_142681b90(*(arg1 + 0x4a8), arg2, arg3, r9, rdi_1, r14_1)
        rbx = rax_17
        
        if (rax_17 == 3)
        label_142676966:
            float zmm0_1
            
            if ((rdi_1[0x28].b & 4) == 0)
                zmm0_1 = sub_14265a140(rdi_1, 0)
            else
                zmm0_1 = sub_14265bca0(rdi_1, 0)
            
            *arg4 = zmm0_1
            (*rdi_1)[6](rdi_1, 0)
            *arg5 = zmm0_1
        else if (rax_17 == 2 && ((rdi_1[0x13].d u>> 2).b & 1) != 0)
            goto label_142676966
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t temp2_1 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_3)[1](rax_3, 1)
    else
        if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_1426767d1
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_1426767d1
        
        *arg4 = 0
        rbx = 3

int64_t* rdi_5 = arg6[1]

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t rbp_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, zx.q(rbp_1))

return zx.q(rbx)
