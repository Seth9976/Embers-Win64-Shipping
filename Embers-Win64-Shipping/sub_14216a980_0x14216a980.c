// 函数: sub_14216a980
// 地址: 0x14216a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_6c = 0
int32_t arg_28
int32_t r15 = arg_28
char r13 = 0

if (r15 s<= 0x10)
    int64_t rax_1 = *arg3
    int32_t var_78 = 0
    (*(rax_1 + 0x168))(arg3, &var_78)
    
    if ((*(arg3 + 0x29) & 1) != 0)
        *arg4 = 0
        *arg2 = var_78
    else
        int32_t rax_2 = var_78
        
        if (rax_2 == 0)
            *arg4 = 0
            *arg2 = var_78
        else
            if (rax_2 != 1)
                int64_t r9 = *arg1
                *arg4 = (*(r9 + 0x2c0))(arg1, &var_78, zx.q(*(arg1[0x62] + 0x152)), r9)
            
            arg_28.b = 0
            
            if (var_78 == 1 || *(arg1[0x62] + 0x152) != 0)
                int64_t* rcx_2 = arg3[1]
                char* rdx_2 = *rcx_2
                
                if (&rdx_2[1] u> rcx_2[1])
                    (*(*arg3 + 0x150))(arg3, &arg_28, 1)
                else
                    arg_28.b = *rdx_2
                    *rcx_2 += 1
                
                if ((*(arg3 + 0x29) & 1) == 0)
                    goto label_14216aa7b
                
                *arg4 = 0
                *arg2 = var_78
            else
            label_14216aa7b:
                void* rcx_4 = arg1[0x62]
                
                if (*(rcx_4 + 0x152) != 0 && var_78 u> 0)
                    arg5 = sub_141f77ab0(rcx_4 + 0xa8, &var_6c, &var_78, nullptr)
                
                if ((arg_28.b & 1) == 0)
                    if (*arg4 == 0)
                        sub_14217bcd0(arg1[0x62], &var_78)
                    
                    *arg2 = var_78
                else
                    void* var_68 = nullptr
                    int32_t var_70
                    sub_14216a980(arg1, &var_70, arg3, &var_68, r15 + 1)
                    int16_t* var_60 = nullptr
                    int32_t var_58_1 = 0
                    int32_t var_74 = 0
                    int64_t r9_2
                    int512_t zmm1
                    r9_2, zmm1 = sub_140a1d9d0(arg3, &var_60, arg5)
                    
                    if ((arg_28.b & 4) != 0)
                        int64_t* rcx_8 = arg3[1]
                        int32_t* rdx_7 = *rcx_8
                        
                        if (&rdx_7[1] u> rcx_8[1])
                            int32_t* rdx_8 = &var_74
                            
                            if ((*(arg3 + 0x29) & 0x20) != 0)
                                sub_140b54070(arg3, rdx_8, zmm1)
                            else
                                (*(*arg3 + 0x150))(arg3, rdx_8, 4)
                        else
                            var_74 = *rdx_7
                            *rcx_8 += 4
                    
                    int32_t rax_41 = var_78
                    
                    if ((rax_41.b & 1) == 0 || var_70 u> 0)
                        r15.b = 0
                    else
                        r15.b = 1
                    
                    if ((*(arg3 + 0x29) & 1) == 0)
                        int64_t* rcx_10 = data_143f5b298
                        r9_2.b = 1
                        (*(*rcx_10 + 0x400))(rcx_10, *(arg1[0x26] + 0x58), &var_60, r9_2)
                        
                        if (var_78 == 1)
                            if (r15.b == 0 && var_70 u> 0 && var_68 == 0)
                                *arg4 = 0
                                *arg2 = 1
                                goto label_14216aeaf
                            
                            int16_t* const r12_1 = &data_142d40450
                            int16_t* const rbx_1 = &data_142d40450
                            
                            if (var_58_1 != 0)
                                rbx_1 = var_60
                            
                            void* rax_15 = sub_140d2ee50(sub_140d41340(), var_68, rbx_1, 0)
                            *arg4 = rax_15
                            
                            if (rax_15 == 0)
                                if (r15.b != 0)
                                    int16_t* const rdx_12 = &data_142d40450
                                    
                                    if (var_58_1 != 0)
                                        rdx_12 = var_60
                                    
                                    rax_15 = sub_140d23fd0(nullptr, rdx_12, 0, nullptr, 0)
                                    *arg4 = rax_15
                                
                                if (rax_15 == 0)
                                    goto label_14216aeaa
                                
                                goto label_14216abfd
                            
                        label_14216abfd:
                            int32_t rax_16 = *(rax_15 + 0xc)
                            void* const rax_22
                            
                            if (rax_16 s>= data_143e1d9b4)
                                rax_22 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_16)
                                uint32_t rdx_14 = zx.d(temp0_1)
                                int32_t rax_18 = temp1_1 + rdx_14
                                rax_22 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_18.w) - rdx_14) * 0x18
                            
                            if (((*(rax_22 + 8) u>> 0x1d).b & 1) != 0)
                                *arg4 = 0
                                goto label_14216aeaa
                            
                            int64_t var_50
                            
                            if (var_74 != 0 && *(arg1[0x62] + 0x150) == 1)
                                int64_t rbx_2 = data_143f4d178
                                int64_t rcx_16
                                
                                if (data_143de5480 == 0)
                                    rcx_16 = 0
                                else
                                    rcx_16.b = GetCurrentThreadId() != data_143de5470
                                
                                if (*(rbx_2 + (rcx_16 << 2)) != 0)
                                    goto label_14216ad5c
                                
                                int32_t rax_27 = sub_142168a70(arg1[0x62], *arg4)
                                
                                if (rax_27 == var_74)
                                    goto label_14216ad5c
                                
                                void* rcx_18 = var_68
                                int64_t var_40
                                
                                if (rcx_18 != 0)
                                    r13 = 8
                                    int64_t* rax_28 = sub_140d21e10(rcx_18, &var_40, 0)
                                    
                                    if (rax_28[1].d != 0)
                                        *rax_28
                                
                                if (var_58_1 != 0)
                                    r12_1 = var_60
                                
                                char var_90 = var_74.b
                                int32_t var_98_2 = rax_27
                                sub_140a2e390(&var_50, 
                                    UPackageMapClient::InternalLoadObject: Default object package "
                                "network checksum mismatch! PathNa", r12_1)
                                
                                if ((r13 & 8) != 0)
                                    int64_t rcx_20 = var_40
                                    
                                    if (rcx_20 != 0)
                                        sub_140a74f90(rcx_20)
                                
                                *arg4 = 0
                                sub_142161140(*(arg1[0x62] + 0x148), 0xa, &var_50)
                                int64_t rcx_23 = var_50
                                *arg2 = var_78
                                
                                if (rcx_23 != 0)
                                    sub_140a74f90(rcx_23)
                                
                                goto label_14216aeaf
                            
                        label_14216ad5c:
                            void* rax_31
                            int64_t rax_32
                            void* rdx_18
                            void* rbx_4
                            
                            if (r15.b != 0)
                                rbx_4 = *arg4
                                
                                if (rbx_4 != 0)
                                    rax_31 = sub_140cddea0()
                                    rdx_18 = *(rbx_4 + 0x10)
                                    rax_32 = sx.q(*(rax_31 + 0x38))
                            
                            if (r15.b != 0 && (rbx_4 == 0 || rax_32.d s> *(rdx_18 + 0x38)
                                    || *(*(rdx_18 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30))
                                *arg4 = 0
                                goto label_14216aeaa
                            
                            int32_t* rax_34 = sub_1421693f0(arg1[0x62], &var_6c, *arg4, nullptr)
                            void* rbx_5 = *arg4
                            var_78 = *rax_34
                            int512_t zmm1_1 = sub_1421693f0(arg1[0x62], &var_6c, rbx_5, nullptr)
                            int32_t rax_35 = var_6c
                            
                            if (rax_35 != 1 && arg1[0x26] != 0)
                                void* rcx_28 = arg1[0x60]
                                
                                if (rcx_28 != 0)
                                    for (int32_t* i = *(rcx_28 + 0xf8); 
                                            i != &i[sx.q(*(rcx_28 + 0x100))]; i = &i[1])
                                        if (*i == rax_35)
                                            goto label_14216aeaa
                                
                                if (rax_35 != 0 && (*(*rbx_5 + 0x1b8))(rbx_5) != 0)
                                    int32_t rdx_21 = var_6c
                                    
                                    if (rdx_21 == 1)
                                        goto label_14216ae4e
                                    
                                    char rax_38
                                    rax_38, zmm1_1 = sub_14216e470(arg1, rdx_21)
                                    
                                    if (rax_38 == 0)
                                        rdx_21 = var_6c
                                    label_14216ae4e:
                                        var_50 = 0
                                        int64_t var_48_1 = 0
                                        sub_142166630(arg1, rdx_21, rbx_5, &var_50, zmm1_1, nullptr)
                            
                            goto label_14216aeaa
                        
                        void* rdx_22 = *arg4
                        
                        if (rdx_22 != 0)
                            int32_t* var_88_1 = &arg_28
                            int32_t* var_90_1 = &var_70
                            int32_t var_98_1
                            var_98_1.q = var_68
                            sub_142175a00(arg1[0x62], rdx_22, &var_78, &var_60)
                        label_14216aeaa:
                            rax_41 = var_78
                            goto label_14216aead
                        
                        if (sub_14216ba60(arg1) != 0)
                            goto label_14216aeaa
                        
                        char rax_42 = arg_28.b u>> 1 & 1
                        int32_t r9_9 = sub_142172940(arg1[0x62], &var_78, &var_60, &var_70, var_74, 
                            rax_42, rax_42)
                        int64_t* rcx_37 = arg1[0x62]
                        void* rax_44 = sub_142168c50(rcx_37, &var_78, *(rcx_37 + 0x152), r9_9)
                        *arg4 = rax_44
                        
                        if (rax_44 == 0)
                            sub_14217bcd0(arg1[0x62], &var_78)
                        
                        int16_t* rcx_39 = var_60
                        
                        if (rcx_39 != 0)
                            sub_140a74f90(rcx_39)
                        
                        *arg2 = var_78
                    else
                        *arg4 = 0
                    label_14216aead:
                        *arg2 = rax_41
                    label_14216aeaf:
                        int16_t* rcx_35 = var_60
                        
                        if (rcx_35 != 0)
                            sub_140a74f90(rcx_35)
else
    *(arg3 + 0x29) |= 1
    *arg4 = 0
    *arg2 = 0

return arg2
