// 函数: sub_141f38c70
// 地址: 0x141f38c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2
int64_t* i = arg1

if (arg2 != 0)
    void* r15_1 = arg1[0x14]
    
    if (r15_1 != 0)
        int64_t* r14_1 = nullptr
        uint64_t var_58
        uint64_t arg_18
        
        if (arg1 != *(r15_1 + 0x130))
            int64_t* r13_1 = arg1[0x18]
            
            if (r13_1 != 0)
                int64_t* rdx_8 = r13_1[0x1a]
                int64_t* rbx_3 = rdx_8
                void* rcx_13 = &rdx_8[sx.q(r13_1[0x1b].d)]
                int32_t rbx_4
                
                if (rdx_8 == rcx_13)
                label_141f38f12:
                    rbx_4 = -1
                else
                    while (*rbx_3 != i)
                        rbx_3 = &rbx_3[1]
                        
                        if (rbx_3 == rcx_13)
                            goto label_141f38f12
                    
                    rbx_4 = ((rbx_3 - rdx_8) s>> 3).d
                
                (*(*i + 0x400))(i, &data_143a2de54)
                int64_t rax_18 = sx.q(i[0x1b].d)
                
                if (rax_18.d s> 0)
                    int64_t** rdi_2 = i[0x1a]
                    void* r12_1 = &rdi_2[rax_18]
                    
                    if (rdi_2 != r12_1)
                        do
                            int64_t* rcx_15 = *rdi_2
                            
                            if (rcx_15 != 0 && (*(*rcx_15 + 0xf0))(rcx_15) == 0)
                                r14_1 = *rdi_2
                                goto label_141f38f87
                            
                            rdi_2 = &rdi_2[1]
                        while (rdi_2 != r12_1)
                        
                        rdi_2 = i[0x1a]
                    
                    int64_t* rax_21 = *rdi_2
                    
                    if (rax_21 != 0)
                        r14_1 = rax_21
                    label_141f38f87:
                        int64_t* arg_20 = r14_1
                        
                        if (r14_1 != 0)
                            arg_18 = 0
                            sub_141f32b40(r14_1, r13_1, &data_143a2de48, 0)
                            sub_1409d7d20(&r13_1[0x1a], &arg_20)
                            int32_t rdi_3 = r13_1[0x1b].d
                            int32_t r14_3
                            
                            if (rbx_4 s>= 0)
                                r14_3 = rdi_3
                                
                                if (rbx_4 s< rdi_3)
                                    r14_3 = rbx_4
                            else
                                r14_3 = 0
                            
                            r13_1[0x1b].d = rdi_3 + 1
                            
                            if (rdi_3 + 1 s> *(r13_1 + 0xdc))
                                sub_1405a4d70(&r13_1[0x1a])
                            
                            int64_t rbx_6 = sx.q(r14_3)
                            int64_t rdx_12 = r13_1[0x1a] + (rbx_6 << 3)
                            arg3 = memmove(rdx_12 + 8, rdx_12, (rdi_3 - r14_3) << 3)
                            r14_1 = arg_20
                            *(r13_1[0x1a] + (rbx_6 << 3)) = r14_1
        else
            int64_t* rbx_1 = arg1[0x1a]
            void* r14_2 = &rbx_1[sx.q(arg1[0x1b].d)]
            
            if (rbx_1 == r14_2)
            label_141f38d28:
                (*(*i + 0x138))(i, 0, i[4], 0x14)
                uint64_t rbx_2 = data_143f3b4a8
                int32_t rcx_2
                rcx_2.b = rbx_2:4.d == 0
                
                if ((rcx_2.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
                    sub_140d19010(r15_1, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                r14_1 = sub_140d2dfc0(sub_1425881f0(), r15_1, rbx_2, 8, 0, 0, 0, 0, 0)
                *(r14_1 + 0x14f) = *(i + 0x14f)
                float zmm1_1[0x4] = *(i + 0x1c0)
                uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(i + 0x180), zmm1_1, 4))
                float var_68[0x4] = zmm1_1
                
                if (temp0_2 != 0)
                    *(i + 0x180) = zmm1_1
                    int32_t* rax_10 = sub_140adf5d0(&var_68, &var_58)
                    i[0x32] = *rax_10
                    i[0x33].d = rax_10[2]
                
                zmm1_1 = *(i + 0x1d0)
                int32_t rax_12 = i[0x33].d
                var_58 = i[0x32]
                uint128_t zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_78 = zmm1_1[0]
                float var_70_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                int32_t var_74_1 = zmm0.d
                int32_t var_50_1 = rax_12
                
                if (r14_1[0x18] != 0)
                    var_68[0].q = var_78.q
                    var_68[2] = var_70_1
                    sub_141f49fa0(r14_1, &var_68, sub_140ade170(&var_58, &var_78), 0, 0, 0)
                else
                    var_68[0].q = i[0x32]
                    zmm0 = zx.o(var_78.q)
                    var_68[2] = rax_12
                    var_58 = zmm0.q
                    float var_50_2 = var_70_1
                    sub_141f48a10(r14_1, &var_58, &var_68, 0, 0, 0)
                
                sub_141dba0e0(r15_1, r14_1)
                arg3 = sub_141ef1390(r14_1)
                sub_141dd9010(r15_1, r14_1)
            else
                while (true)
                    int64_t* rdi_1 = *rbx_1
                    
                    if (rdi_1 != 0 && (*(*rdi_1 + 0xf0))(rdi_1) == 0 && rdi_1[0x14] == r15_1)
                        r14_1 = *rbx_1
                        sub_141dd9010(r15_1, r14_1)
                        break
                    
                    rbx_1 = &rbx_1[1]
                    
                    if (rbx_1 == r14_2)
                        goto label_141f38d28
        
        int64_t rbx_7 = sx.q(i[0x1b].d)
        int64_t** r13_2 = nullptr
        int64_t rdi_5 = i[0x1a]
        var_58 = 0
        int32_t var_50_3 = rbx_7.d
        
        if (rbx_7.d != 0)
            sub_1405c4a00(&var_58, rbx_7.d, 0)
            r13_2 = var_58
            arg3 = memcpy(r13_2, rdi_5, (rbx_7 << 3).d)
            rbx_7 = zx.q(var_50_3)
        
        int64_t r15_3 = 0
        int64_t** rdi_6 = r13_2
        void* rcx_23 = &r13_2[sx.q(rbx_7.d)]
        uint64_t r12_5 = (rcx_23 - r13_2 + 7) u>> 3
        
        if (r13_2 u> rcx_23)
            r12_5 = 0
        
        if (r12_5 != 0)
            do
                int64_t* rbx_8 = *rdi_6
                
                if (rbx_8 != 0)
                    (*(*rbx_8 + 0x400))(rbx_8, &data_143a2de54)
                    
                    if (rbx_8 != r14_1)
                        arg_18 = 0
                        arg3 = sub_141f32b40(rbx_8, r14_1, &data_143a2de48, 0)
                
                rdi_6 = &rdi_6[1]
                r15_3 += 1
            while (r15_3 != r12_5)
            
            i = arg1
        
        if (r13_2 != 0)
            arg3 = sub_140a74f90(r13_2)

return sub_141edf1c0(i, arg3) __tailcall
