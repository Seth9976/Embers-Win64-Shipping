// 函数: sub_142101b10
// 地址: 0x142101b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0)
    void* r14_1 = *(result + 0x38)
    
    if (r14_1 != 0)
        void* rcx = *(r14_1 + 0x88)
        
        if (rcx != 0 && *(rcx + 0x134) == 3 && (arg1[0x14].b & 1) == 0)
            int64_t r8_1 = arg1[6]
            
            if (r8_1 == 0)
            label_142101bc7:
                void var_1a8
                sub_1423fd810(&var_1a8, nullptr)
                sub_1424171b0(&var_1a8, u"DefaultPlayer", &data_143de5830)
                int64_t var_1f8
                (*(*arg1 + 0x2a8))(arg1, &var_1f8)
                int16_t* var_218
                int32_t var_210
                int32_t var_1f0
                
                if (var_1f0 != 0 && var_1f0 - 1 s> 0)
                    sub_140a2e390(&var_218, u"Name=%s", var_1f8)
                    int16_t* const rdx_2 = &data_142d40450
                    
                    if (var_210 != 0)
                        rdx_2 = var_218
                    
                    sub_142401e40(&var_1a8, rdx_2)
                    int16_t* rcx_7 = var_218
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                
                int64_t var_208
                (*(*arg1 + 0x2b0))(arg1, &var_208)
                int32_t var_200
                
                if (var_200 != 0 && var_200 - 1 s> 0)
                    sub_140a2e390(&var_218, u"%s", var_208)
                    int16_t* const rdx_4 = &data_142d40450
                    
                    if (var_210 != 0)
                        rdx_4 = var_218
                    
                    sub_142401e40(&var_1a8, rdx_4)
                    int16_t* rcx_11 = var_218
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                
                int64_t* i = *arg2
                
                for (void* rsi_3 = &i[sx.q(arg2[1].d) * 2]; i != rsi_3; i = &i[2])
                    int16_t* const r8_4
                    
                    if (i[1].d == 0)
                        r8_4 = &data_142d40450
                    else
                        r8_4 = *i
                    
                    sub_140a2e390(&var_218, u"%s", r8_4)
                    int16_t* rdx_5 = &data_142d40450
                    
                    if (var_210 != 0)
                        rdx_5 = var_218
                    
                    sub_142401e40(&var_1a8, rdx_5)
                    int16_t* rcx_14 = var_218
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                
                void** var_1d8
                sub_1420fb380(arg1, &var_1d8)
                uint64_t var_1e8
                int512_t zmm1_1 = sub_142423a30(&var_1a8, &var_1e8, 0)
                void* rbx_1 = *(r14_1 + 0x88)
                void* rdx_8 = **(rbx_1 + 0x1310)
                
                if (rdx_8 != 0 && (*(rdx_8 + 0x30) & 2) == 0)
                    void** var_138
                    sub_141f79620(&var_138, rdx_8, 0)
                    char arg_8 = 0xa
                    int64_t* var_130
                    char* rdx_9 = *var_130
                    
                    if (&rdx_9[1] u> var_130[1])
                        var_138[0x2a](&var_138, &arg_8, 1)
                    else
                        arg_8 = *rdx_9
                        *var_130 += 1
                    
                    sub_14215ddd0(&var_138, &var_1d8, sub_140a1d9d0(&var_138, &var_1e8, zmm1_1))
                    int64_t r9_2
                    r9_2.b = 1
                    int64_t* rcx_22 = **(rbx_1 + 0x1310)
                    void arg_18
                    (*(*rcx_22 + 0x2c8))(rcx_22, &arg_18, &var_138, r9_2)
                    sub_141f7bb50(&var_138)
                
                arg1[0x14].d |= 1
                uint64_t rcx_24 = var_1e8
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                var_1d8 = &data_142e259e0
                int64_t var_1c0
                
                if (var_1c0 != 0)
                    sub_140a74f90(var_1c0)
                
                int64_t* var_1c8
                
                if (var_1c8 != 0)
                    var_1c8[1].d -= 1
                    
                    if (var_1c8[1].d == 1)
                        (**var_1c8)(var_1c8)
                        int32_t temp1_1 = *(var_1c8 + 0xc)
                        *(var_1c8 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*var_1c8 + 8))(var_1c8, 1)
                
                int64_t rcx_28 = var_208
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                int64_t rcx_29 = var_1f8
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                
                return sub_14094c030(&var_1a8)
            
            if (*(rcx + 0x30) != r8_1)
                int64_t rax_1 = sx.q(*(rcx + 0x50))
                
                if (rax_1.d s> 0)
                    void** rcx_1 = *(rcx + 0x48)
                    int64_t rdx = 0
                    
                    do
                        result = *rcx_1
                        
                        if (*(result + 0x30) == r8_1)
                            return result
                        
                        rdx += 1
                        rcx_1 = &rcx_1[1]
                    while (rdx s< rax_1)
                
                goto label_142101bc7

return result
