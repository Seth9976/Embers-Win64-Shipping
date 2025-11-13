// 函数: sub_141d96230
// 地址: 0x141d96230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char result = sub_141da1e80(rcx, &rcx[0x74], arg2, 1)

if (result != 0)
    int64_t* rcx_1 = *arg1
    int64_t rbx_1 = *rcx_1
    int64_t var_120
    int64_t* rax
    int512_t zmm1_1
    rax, zmm1_1 = sub_141d9ef80(rcx_1, &var_120, &rcx_1[0x74])
    int64_t* var_138
    (*(rbx_1 + 0x1e0))(*arg1, &var_138, rax)
    int64_t rcx_3 = var_120
    
    if (rcx_3 != 0)
        zmm1_1 = sub_140a74f90(rcx_3)
    
    int64_t* var_130
    int64_t* rcx_56
    
    if (var_138 == 0)
        rcx_56 = *arg1
        result = sub_141da1e80(rcx_56, &rcx_56[0x74], arg2, 0)
    else
        int32_t i_1 = 0xffffffff
        int16_t* const r15_1 = &data_142d40450
        int32_t i = 0
        
        if (arg2[0xf].d s> 0)
            int64_t rdi_1 = 0
            
            do
                int64_t rax_1 = arg2[0xe]
                int16_t* rdx_3
                
                if (arg1[2].d == 0)
                    rdx_3 = &data_142d40450
                else
                    rdx_3 = arg1[1]
                
                int16_t* const rcx_4
                
                if (*(rdi_1 + rax_1 + 0x10) == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *(rdi_1 + rax_1 + 8)
                
                if (sub_140a54510(rcx_4, rdx_3) == 0)
                    i_1 = i
                    break
                
                i += 1
                rdi_1 += 0x50
            while (i s< arg2[0xf].d)
        
        int64_t* rcx_5 = *arg1
        int64_t var_158 = 0
        int64_t var_150_1 = 0
        
        if ((*(*rcx_5 + 0x1b8))(rcx_5) == 0)
            if (&var_158 != &arg1[8])
                uint32_t count = arg1[9].d
                int64_t rbx_3 = arg1[8]
                int32_t r8_4 = var_150_1:4.d
                var_150_1.d = count
                
                if (count != 0 || r8_4 != 0)
                    sub_1405da9e0(&var_158, count, r8_4)
                    memcpy(var_158, rbx_3, count)
            
            goto label_141d9640a
        
        int64_t* rcx_6 = *arg1
        int64_t var_148 = arg1[0xa]
        int32_t var_140_1 = arg1[0xb].d
        int128_t zmm0_1 = var_148.o
        var_148 = arg1[8]
        int32_t var_140_2 = arg1[9].d
        int64_t rax_9 = *rcx_6
        int128_t var_48 = zmm0_1
        zmm0_1 = var_148.o
        var_148.o = zmm0_1
        result = (*(rax_9 + 0x1c8))(zmm0_1, &var_148, &var_158, &var_48)
        
        if (result != 0)
        label_141d9640a:
            var_148 = 0
            void** const var_108
            memset(&var_108, 0, 0x90)
            sub_140b4c2a0(&var_108)
            int64_t var_78_1 = 0
            var_108 = &data_142d6ad48
            int64_t var_60
            int64_t* var_70_1 = &var_60
            int64_t var_68 = 0
            sub_140b552b0(&var_108, 1)
            var_108[0x1b](&var_108, 0)
            var_108 = &data_142d6b000
            var_60 = 0
            int64_t var_58_1 = 0
            int32_t arg_8 = 3
            int64_t* var_100
            int32_t* rdx_8 = *var_100
            char var_df
            
            if (&rdx_8[1] u> var_100[1])
                int32_t* rdx_9 = &arg_8
                void** const* rcx_15 = &var_108
                
                if ((var_df & 0x20) != 0)
                    sub_140b54070(rcx_15, rdx_9, zmm1_1)
                else
                    zmm1_1 = sub_14063a3c0(rcx_15, rdx_9, 4)
            else
                arg_8 = *rdx_8
                *var_100 += 4
            
            int32_t arg_20 = 0
            var_148 = var_78_1
            int32_t* rdx_10 = *var_100
            
            if (&rdx_10[1] u> var_100[1])
                int32_t* rdx_11 = &arg_20
                void** const* rcx_17 = &var_108
                
                if ((var_df & 0x20) != 0)
                    sub_140b54070(rcx_17, rdx_11, zmm1_1)
                else
                    var_108[0x2a](rcx_17, rdx_11, 4)
            else
                arg_20 = *rdx_10
                *var_100 += 4
            
            int32_t rbx_4 = arg1[2].d
            int32_t r13_1 = var_78_1.d
            int64_t rdi_2 = arg1[1]
            var_120 = 0
            int32_t var_118_1 = rbx_4
            
            if (rbx_4 != 0)
                sub_1405a4c70(&var_120, rbx_4, 0)
                memcpy(var_120, rdi_2, rbx_4 * 2)
            else
                int32_t var_114_1 = 0
            
            int512_t zmm1_2 = sub_140a1d9d0(&var_108, &var_120, zmm1_1)
            int32_t rbx_5 = arg1[4].d
            int64_t rdi_3 = arg1[3]
            uint64_t var_168 = 0
            int32_t var_160_1 = rbx_5
            int32_t var_15c
            
            if (rbx_5 != 0)
                sub_1405a4c70(&var_168, rbx_5, 0)
                memcpy(var_168, rdi_3, rbx_5 * 2)
            else
                var_15c = 0
            
            int512_t zmm1_3 = sub_140a1d9d0(&var_108, &var_168, zmm1_2)
            
            if (&var_168 != &arg1[6])
                int32_t rbx_6 = arg1[7].d
                int64_t rdi_4 = arg1[6]
                int32_t var_160_2 = rbx_6
                
                if (rbx_6 != 0 || var_15c != 0)
                    sub_1405a4c70(&var_168, rbx_6, var_15c)
                    memcpy(var_168, rdi_4, rbx_6 * 2)
                else
                    int32_t var_15c_1 = 0
            
            int512_t zmm1_4 = sub_140a1d9d0(&var_108, &var_168, zmm1_3)
            int32_t var_178 = arg1[5].d
            int32_t* rdx_21 = *var_100
            
            if (&rdx_21[1] u> var_100[1])
                int32_t* rdx_22 = &var_178
                void** const* rcx_28 = &var_108
                
                if ((var_df & 0x20) != 0)
                    sub_140b54070(rcx_28, rdx_22, zmm1_4)
                else
                    var_108[0x2a](rcx_28, rdx_22, 4)
            else
                var_178 = *rdx_21
                *var_100 += 4
            
            int32_t var_174 = arg1[5].d
            int32_t* rdx_23 = *var_100
            
            if (&rdx_23[1] u> var_100[1])
                int32_t* rdx_24 = &var_174
                void** const* rcx_30 = &var_108
                
                if ((var_df & 0x20) != 0)
                    sub_140b54070(rcx_30, rdx_24, zmm1_4)
                else
                    var_108[0x2a](rcx_30, rdx_24, 4)
            else
                var_174 = *rdx_23
                *var_100 += 4
            
            int32_t var_170 = var_150_1.d
            int32_t* rdx_25 = *var_100
            
            if (&rdx_25[1] u> var_100[1])
                int32_t* rdx_26 = &var_170
                void** const* rcx_32 = &var_108
                
                if ((var_df & 0x20) != 0)
                    sub_140b54070(rcx_32, rdx_26, zmm1_4)
                else
                    var_108[0x2a](rcx_32, rdx_26, 4)
            else
                var_170 = *rdx_25
                *var_100 += 4
            
            int64_t* r8_13 = var_70_1
            int64_t rdi_5 = sx.q(var_150_1.d)
            int64_t r12_1 = var_158
            int64_t rax_30 = sx.q(r8_13[1].d)
            int64_t rbx_9 = var_78_1 - rax_30 + rdi_5
            
            if (rbx_9 s> 0)
                if (rax_30 + rbx_9 s>= 0x7fffffff)
                    int16_t** rax_32 = sub_140b63b70(&var_68, &var_48)
                    
                    if (rax_32[1].d != 0)
                        r15_1 = *rax_32
                    
                    zmm1_4 = sub_140af98a0("Unknown", 0x2a, 
                        FMemoryWriter does not support data larger than 2GB. Archive name: %s.", r15_1)
                    int64_t rcx_34 = var_48.q
                    
                    if (rcx_34 != 0)
                        zmm1_4 = sub_140a74f90(rcx_34)
                    
                    sub_140afbb40()
                    r8_13 = var_70_1
                
                int32_t rax_33 = rbx_9.d + r8_13[1].d
                r8_13[1].d = rax_33
                
                if (rax_33 s> *(r8_13 + 0xc))
                    sub_1405daba0(r8_13)
                
                r8_13 = var_70_1
            
            if (rdi_5 != 0)
                memcpy(sx.q(var_78_1.d) + *r8_13, r12_1, rdi_5.d)
                var_78_1 += rdi_5
            
            int32_t arg_18 = var_78_1.d - r13_1
            int64_t var_78_2 = var_148
            int32_t* rdx_30 = *var_100
            
            if (&rdx_30[1] u> var_100[1])
                int32_t* rdx_31 = &arg_18
                void** const* rcx_39 = &var_108
                
                if ((var_df & 0x20) != 0)
                    sub_140b54070(rcx_39, rdx_31, zmm1_4)
                else
                    var_108[0x2a](rcx_39, rdx_31, 4)
            else
                arg_18 = *rdx_30
                *var_100 += 4
            
            int64_t i_2 = sx.q(i_1)
            
            if (i_2.d == 0xffffffff)
            label_141d96893:
                int64_t* rdi_6 = var_138
                int64_t rbx_10 = *rdi_6
                (*(rbx_10 + 0x178))(rdi_6, (*(rbx_10 + 0x28))(rdi_6))
            else
                int64_t* rcx_43 = var_138
                void* rdx_33 = arg2[0xa] + sx.q(*(arg2[0xe] + i_2 * 0x50)) * 0x18
                int64_t rax_43 = *rcx_43
                int64_t rdx_34 = *(rdx_33 + 8)
                
                if (arg_18 s> *(rdx_33 + 4))
                    (*(rax_43 + 0x178))(rcx_43, rdx_34)
                    int64_t* r9_3 = var_138
                    arg_8 = 0xffffffff
                    int64_t* rcx_44 = r9_3[1]
                    int32_t* rdx_35 = *rcx_44
                    
                    if (&rdx_35[1] u> rcx_44[1])
                        int32_t* rdx_36 = &arg_8
                        
                        if ((*(r9_3 + 0x29) & 0x20) != 0)
                            sub_140b54070(r9_3, rdx_36, zmm1_4)
                        else
                            (*(*r9_3 + 0x150))(r9_3, rdx_36, 4)
                    else
                        arg_8 = *rdx_35
                        int64_t* rax_46 = r9_3[1]
                        *rax_46 += 4
                    
                    goto label_141d96893
                
                (*(rax_43 + 0x178))(rcx_43, rdx_34)
            
            int64_t* rcx_48 = var_138
            int64_t r9_4 = *rcx_48
            (*(r9_4 + 0x150))(rcx_48, var_60, sx.q(var_70_1[1].d), r9_4)
            int64_t* rbx_11 = var_130
            var_138 = nullptr
            
            if (rbx_11 != 0)
                var_130 = nullptr
                rbx_11[1].d -= 1
                
                if (rbx_11[1].d == 1)
                    (**rbx_11)(rbx_11)
                    int32_t temp3_1 = *(rbx_11 + 0xc)
                    *(rbx_11 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_11 + 8))(rbx_11, 1)
            
            uint64_t rcx_51 = var_168
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
            
            int64_t rcx_52 = var_120
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            int64_t rcx_53 = var_60
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
            
            sub_140b4cb40(&var_108)
            int64_t rcx_55 = var_158
            
            if (rcx_55 != 0)
                sub_140a74f90(rcx_55)
            
            rcx_56 = *arg1
            result = sub_141da1e80(rcx_56, &rcx_56[0x74], arg2, 0)
        else
            int64_t rcx_7 = var_158
            *(arg2 + 0x31) = 0
            
            if (rcx_7 != 0)
                result = sub_140a74f90(rcx_7)
    
    if (var_130 != 0)
        var_130[1].d -= 1
        
        if (var_130[1].d == 1)
            result = (**var_130)(var_130)
            int32_t temp1_1 = *(var_130 + 0xc)
            *(var_130 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_130 + 8))(var_130, 1)

return result
