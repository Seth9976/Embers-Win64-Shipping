// 函数: sub_142171010
// 地址: 0x142171010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* arg_10 = arg2
int64_t* rsi = arg2
void* rbx = arg1

if ((arg2[6].b & 2) == 0)
    if (arg2[7].d != 0xffffffff)
        goto label_142171125
    
    if (arg11 != 0)
        if ((arg2[0x12].b & 4) == 0)
            *(arg1 + 0x418) += 1
            sub_141dbba80(rsi[0xe], arg1)
            result = sub_141f97be0(rsi)
        label_142171125:
            
            if (*(rsi + 0x34) != 0xffffffff)
                void var_2e8
                sub_141f79e30(&var_2e8, rsi, 0)
                void* rdi_2 = arg7
                char var_1f8
                char rax_2 = var_1f8
                
                if ((*(rdi_2 + 0xb0) & 0x80) != 0)
                    rax_2 |= 0x20
                    var_1f8 = rax_2
                
                char var_2bf
                
                if ((var_2bf & 1) == 0)
                    uint64_t r14_1 = 0
                    int32_t i_5 = 0
                    uint64_t var_3c8 = 0
                    int32_t var_3bc_1 = 0
                    
                    if (arg10 == 0)
                        int64_t* i_2 = *(rdi_2 + 0x50)
                        void* var_3b8 = rdi_2
                        int32_t var_3a8_1 = 0xffffffff
                        int16_t var_3a4_1 = 0x101
                        char var_3a2_1 = 0
                        sub_1406328d0(&var_3b8)
                        int64_t* i = i_2
                        
                        if (i != 0)
                            int32_t rsi_1 = 0
                            
                            do
                                int64_t r8_3 = i[8]
                                
                                if ((zx.q(r8_3.d) & 0x480) != 0x80)
                                    break
                                
                                if (test_bit(r8_3, 8) && arg9 != 0)
                                    int64_t* rax_11 = arg9
                                    
                                    if (*arg9 != i)
                                        do
                                            rax_11 = rax_11[2]
                                        while (*rax_11 != i)
                                    
                                    int64_t rdx_9 = rax_11[1]
                                    void* rcx_22 = sx.q(*(i + 0x4c)) + arg8
                                    
                                    if (rcx_22 != rdx_9)
                                        if (not(test_bit(r8_3, 0x1e)))
                                            (*(*i + 0xb0))(i, rcx_22, rdx_9, zx.q(i[7].d))
                                        else
                                            memcpy(rcx_22, rdx_9, *(i + 0x3c) * i[7].d)
                                    
                                    int64_t i_6 = sx.q(i_5)
                                    i_5 = (i_6 + 1).d
                                    
                                    if (i_5 s> rsi_1)
                                        sub_1405a4d70(&var_3c8)
                                        r14_1 = var_3c8
                                        rsi_1 = var_3bc_1
                                    
                                    *(r14_1 + (i_6 << 3)) = i
                                
                                int64_t* i_3 = i[4]
                                sub_1406328d0(&var_3b8)
                                i = i_3
                            while (i != 0)
                            
                            rsi = arg_10
                            rdi_2 = arg7
                        
                        rbx = arg1
                    
                    if (data_143f3d174 == 1)
                        int64_t var_390 = *(rdi_2 + 0x18)
                        int64_t var_368
                        sub_140b63b70(&var_390, &var_368)
                        sub_140a23cf0(&var_368, u"ServerUpdateCamera", 1, 0, 0xffffffff)
                        int64_t rcx_28 = var_368
                        
                        if (rcx_28 != 0)
                            sub_140a74f90(rcx_28)
                        
                        int64_t var_388 = *(rdi_2 + 0x18)
                        int64_t var_358
                        sub_140b63b70(&var_388, &var_358)
                        sub_140a23cf0(&var_358, u"ClientAckGoodMove", 1, 0, 0xffffffff)
                        int64_t rcx_31 = var_358
                        
                        if (rcx_31 != 0)
                            sub_140a74f90(rcx_31)
                        
                        int64_t var_380 = *(rdi_2 + 0x18)
                        int64_t var_348
                        sub_140b63b70(&var_380, &var_348)
                        sub_140a23cf0(&var_348, u"ServerMove", 1, 0, 0xffffffff)
                        int64_t rcx_34 = var_348
                        
                        if (rcx_34 != 0)
                            sub_140a74f90(rcx_34)
                    
                    int64_t var_230
                    void var_1c8
                    sub_140bd5b60(&var_1c8, var_230, 0)
                    void* var_338
                    int512_t zmm0_1
                    int512_t zmm1_2
                    zmm0_1, zmm1_2 = sub_1421685b0(rbx, &var_338, rdi_2)
                    sub_1422d0010(var_338, zmm1_2, rsi, &var_1c8, zmm0_1, arg8)
                    char var_19f
                    
                    if ((var_19f & 1) == 0)
                        int64_t* rax_19 = sub_141f8a780(rsi, arg5)
                        
                        if (arg12 != 0)
                            if (arg12 == 1 || arg12 != 2)
                                goto label_14217151e
                            
                            goto label_14217165d
                        
                        int64_t* var_3e8_3
                        void* var_3e0_1
                        char r12_2
                        
                        if ((var_1f8 & 0x20) != 0 || (*(rdi_2 + 0xb0) & 0x4000) == 0)
                        label_14217151e:
                            sub_141f910f0(rsi, arg5)
                            void var_108
                            sub_140bd5b60(&var_108, var_230, 0)
                            var_3e0_1 = &var_1c8
                            sub_141fa07b0(rsi, &var_108, arg3, arg4, rax_19, var_3e0_1, 0)
                            var_3e8_3 = &var_108
                            sub_141fa06a0(rsi, arg5, &var_2e8, 0, var_3e8_3)
                            int64_t var_78
                            
                            if (var_78 != 0)
                                sub_140a74f90(var_78)
                            
                            sub_140b4cb40(&var_108)
                            r12_2 = 0
                        else
                        label_14217165d:
                            var_3e0_1 = &var_1c8
                            var_3e8_3 = rax_19
                            sub_141fa07b0(rsi, &var_2e8, arg3, arg4, var_3e8_3, var_3e0_1, 0)
                            r12_2 = 1
                        
                        if (i_5 s> 0)
                            uint64_t i_4 = zx.q(i_5)
                            uint64_t rbx_6 = r14_1
                            uint64_t i_1
                            
                            do
                                int64_t* rcx_45 = *rbx_6
                                
                                if ((not.b((rcx_45[8] u>> 0x24).b) & 1) != 0)
                                    (*(*rcx_45 + 0xe8))(rcx_45, sx.q(*(rcx_45 + 0x4c)) + arg8)
                                
                                rbx_6 += 8
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                            rdi_2 = arg7
                        
                        if ((var_2bf & 1) == 0 && (rsi[6].b & 2) == 0)
                            if (r12_2 == 0)
                                int64_t r9_5
                                r9_5.b = 1
                                void var_328
                                (*(*rsi + 0x2c8))(rsi, &var_328, &var_2e8, r9_5, var_3e8_3, 
                                    var_3e0_1, 0)
                            else
                                sub_141f924d0(rsi, arg5, rdi_2, &var_2e8)
                    
                    if (((*(arg6 + 0xa4) u>> 1).b & 1) != 0)
                        (*(*arg6 + 0x2a8))(arg6, 0)
                    
                    int64_t* var_330
                    
                    if (var_330 != 0)
                        var_330[1].d -= 1
                        
                        if (var_330[1].d == 1)
                            (**var_330)(var_330)
                            int32_t temp3_1 = *(var_330 + 0xc)
                            *(var_330 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*var_330 + 8))(var_330, 1)
                    
                    int64_t var_138
                    
                    if (var_138 != 0)
                        sub_140a74f90(var_138)
                    
                    sub_140b4cb40(&var_1c8)
                    
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                else if ((rax_2 & 0x20) != 0)
                    void var_300
                    int64_t* rax_3
                    int512_t zmm1_1
                    rax_3, zmm1_1 =
                        _vfprintf_p_l(&var_300, Outgoing reliable buffer overflow", NetworkErrors")
                    int64_t* rax_4 = sub_140ac6680(rax_3)
                    uint64_t var_3a0 = 0
                    int32_t rbx_2 = rax_4[1].d
                    int64_t rdi_3 = *rax_4
                    int32_t var_398_1 = rbx_2
                    
                    if (rbx_2 != 0)
                        sub_1405a4c70(&var_3a0, rbx_2, 0)
                        memcpy(var_3a0, rdi_3, rbx_2 * 2)
                    else
                        int32_t var_394_1 = 0
                    
                    int64_t* var_2f8
                    
                    if (var_2f8 != 0)
                        var_2f8[1].d -= 1
                        
                        if (var_2f8[1].d == 1)
                            (**var_2f8)(var_2f8)
                            int32_t r12_1 = *(var_2f8 + 0xc)
                            *(var_2f8 + 0xc) -= 1
                            
                            if (r12_1 == 1)
                                (*(*var_2f8 + 8))(var_2f8, zx.q(r12_1))
                    
                    sub_140947d60(arg6, &var_3a0, zmm1_1)
                    int64_t rdx_8
                    rdx_8.b = 1
                    (*(*arg6 + 0x2a8))(arg6, rdx_8)
                    sub_14213f9e0(arg6)
                    uint64_t rcx_19 = var_3a0
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                
                return sub_141f7bb50(&var_2e8)
        else
            int64_t var_320
            int64_t* rax = sub_140d21830(arg5, &var_320, 0, 0)
            int16_t* const rbx_1 = &data_142d40450
            
            if (rax[1].d != 0)
                *rax
            
            arg_10 = *(arg7 + 0x18)
            int16_t* var_378
            sub_140b63b70(&arg_10, &var_378)
            int32_t var_370
            
            if (var_370 != 0)
                rbx_1 = var_378
            
            int64_t var_310
            result = sub_140a2e390(&var_310, 
                Attempt to replicate function '%s' on Actor '%s' while it is in the middle of variable 
                    replication!", rbx_1)
            int16_t* rcx_4 = var_378
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = var_320
            
            if (rcx_5 != 0)
                result = sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = var_310
            
            if (rcx_6 != 0)
                return sub_140a74f90(rcx_6)

return result
