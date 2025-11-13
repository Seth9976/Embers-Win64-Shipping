// 函数: sub_141cbfa10
// 地址: 0x141cbfa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* i = *arg2
void* r12_2 = &i[sx.q(arg2[1].d) * 2]
void* arg_20 = r12_2

for (; i != r12_2; i = &i[2])
    int64_t var_70
    int64_t* rax = sub_140b18970(&var_70, i)
    int16_t* rdx_1
    
    if (rax[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax
    
    uint64_t arg_10
    sub_140b58260(&arg_10, rdx_1, 1)
    int64_t rcx_2 = var_70
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    uint64_t rbx_1 = arg_10
    
    if (*(arg1 + 0x128) == *(arg1 + 0x154))
        goto label_141cbfb14
    
    int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8_1 = arg1 + 0x158
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x168)) - 1) & sx.q(rax_3)) << 2)))
    
    if (result.d == 0xffffffff)
    label_141cbfb10:
        rbx_1 = arg_10
    label_141cbfb14:
        r8_1.b = 2
        result = sub_141cc2580(arg1, rbx_1, r8_1.b)
        
        if (result != 0)
            void* rcx_8 = result[2]
            
            if (rcx_8 != 0)
                sub_140597df0(rcx_8 + 0x28, i)
                void* rcx_10 = data_143ddb400
                int64_t* var_80 = nullptr
                int32_t j_2 = 0
                int64_t* rbx_2
                
                if (sub_140af2c50(rcx_10, u"UserTags", u"GameplayTags", &var_80, i) == 0)
                    int16_t* const rbx_3
                    
                    if (i[1].d == 0)
                        rbx_3 = &data_142d40450
                    else
                        rbx_3 = *i
                    
                    void* rax_7 = sub_141cc7400()
                    sub_140ce1310(result[2], rax_7, rbx_3, 0, 0)
                    rbx_2 = var_80
                else
                    rbx_2 = var_80
                    void* rdi_3 = &rbx_2[sx.q(j_2) * 2]
                    
                    if (rbx_2 != rdi_3)
                        do
                            int16_t* rdx_8
                            
                            if (rbx_2[1].d == 0)
                                rdx_8 = &data_142d40450
                            else
                                rdx_8 = *rbx_2
                            
                            void** const var_60 = &data_143213a30
                            int64_t var_50_1 = 0
                            int64_t var_48_1 = 0
                            void var_88
                            int64_t var_58_1 = *sub_140b58260(&var_88, rdx_8, 1)
                            sub_141cbd4b0(result[2] + 0x38, &var_60)
                            
                            if (var_50_1 != 0)
                                sub_140a74f90(var_50_1)
                            
                            rbx_2 = &rbx_2[2]
                        while (rbx_2 != rdi_3)
                        
                        r12_2 = arg_20
                        rbx_2 = var_80
                
                result = result[2]
                void* rdi_4 = result[7]
                void* rsi_4 = (sx.q(result[8].d) << 5) + rdi_4
                
                if (rdi_4 != rsi_4)
                    do
                        result = sub_141cbf650(arg1, rdi_4, arg_10.b, 0)
                        rdi_4 += 0x20
                    while (rdi_4 != rsi_4)
                    
                    rbx_2 = var_80
                
                int32_t j_1 = j_2
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_18 = *rbx_2
                        
                        if (rcx_18 != 0)
                            result = sub_140a74f90(rcx_18)
                        
                        rbx_2 = &rbx_2[2]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    rbx_2 = var_80
                
                if (rbx_2 != 0)
                    result = sub_140a74f90(rbx_2)
    else
        int64_t rdx_5 = *(arg1 + 0x120)
        
        while (true)
            int64_t rcx_6 = sx.q(result.d) * 2
            
            if (*(rdx_5 + (rcx_6 << 3)) == rbx_1)
                break
            
            result = zx.q(*(rdx_5 + (rcx_6 << 3) + 8))
            
            if (result.d == 0xffffffff)
                goto label_141cbfb10
        
        if (result.d == 0xffffffff)
            goto label_141cbfb10

return result
