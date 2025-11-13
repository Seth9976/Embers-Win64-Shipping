// 函数: sub_1408fb0b0
// 地址: 0x1408fb0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg1
sub_142041cb0(arg1, arg2)
int64_t* var_68
sub_1424365b0((*(*r13 + 0x150))(r13), &var_68)
int32_t result_1
int32_t result = result_1

while (true)
    int64_t* rdx_1 = var_68
    void* rcx_1
    
    if (result s< 0 || result s>= rdx_1[1].d)
        rcx_1.b = 0
    else
        rcx_1.b = 1
    
    if (rcx_1.b == 0)
        break
    
    int64_t* rax_3
    rax_3, rcx_1 = sub_140d3c6e0(*rdx_1 + (sx.q(result) << 3))
    void* rax_4
    int64_t rdx_2
    
    if (rax_3 != 0)
        rax_4 = sub_1408fb7a0()
        rcx_1 = rax_3[2]
        rdx_2 = sx.q(*(rax_4 + 0x38))
    
    if (rax_3 == 0 || rdx_2.d s> *(rcx_1 + 0x38)
            || *(*(rcx_1 + 0x30) + (rdx_2 << 3)) != rax_4 + 0x30)
        int64_t* var_88 = nullptr
    else
        var_88 = rax_3
        char rax_7
        rax_7, rcx_1 = (*(*rax_3 + 0x6a8))(rax_3, rdx_2)
        
        if (rax_7 == 0)
            void var_58
            int32_t* rax_8
            rax_8, rcx_1 = sub_1405ba560(&r13[0x66], &var_58, var_88)
            
            if (*rax_8 == 0xffffffff)
                int64_t var_78 = 0
                int64_t** var_48 = &var_88
                int64_t var_70_1 = 0
                int64_t* var_40_1 = &var_78
                void var_54
                sub_1408f79e0(&r13[0x66], &var_54, &var_48, nullptr)
                int64_t rcx_7 = var_78
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                sub_1408fbc70(var_88)
            
            int64_t* r14_1 = var_88
            
            if (r14_1[0xae].b != 0)
                int32_t arg_18
                sub_1405ba560(&r13[0x66], &arg_18, r14_1)
                int64_t rax_9 = sx.q(arg_18)
                void* const rcx_12
                
                if (rax_9.d == 0xffffffff)
                    rcx_12 = nullptr
                else
                    rcx_12 = (rax_9 << 5) + r13[0x66]
                
                int64_t* i = *(rcx_12 + 8)
                
                for (void* r12_3 = &i[sx.q(*(rcx_12 + 0x10)) * 2]; i != r12_3; i = &i[2])
                    void* rdx_6 = r14_1[0xaf]
                    void* r8_6 = (sx.q(r14_1[0xb0].d) << 5) + rdx_6
                    
                    if (rdx_6 == r8_6)
                    label_1408fb285:
                        int32_t arg_20
                        sub_1408f9e80(&r13[0x70], &arg_20, i)
                        int64_t rax_16 = sx.q(arg_20)
                        
                        if (rax_16.d != 0xffffffff)
                            int64_t rdi_2 = rax_16 * 0x68
                            void* rdi_3 = rdi_2 + r13[0x70]
                            
                            if (rdi_2 != neg.q(r13[0x70]) && rdi_3 != -0x10)
                                sub_1405c3040(rdi_3 + 0x10, var_88)
                                
                                if (*(rdi_3 + 0x18) == *(rdi_3 + 0x44))
                                    sub_1408fa850(&r13[0x70], i)
                    else
                        while (true)
                            int32_t rcx_17 = (*(rdx_6 + 4) ^ *(i + 4)) | (*(rdx_6 + 8) ^ i[1].d)
                                | (*(rdx_6 + 0xc) ^ *(i + 0xc)) | (*rdx_6 ^ *i)
                            
                            if (rcx_17 == 0)
                                break
                            
                            rdx_6 += 0x20
                            
                            if (rdx_6 == r8_6)
                                goto label_1408fb285
                
                int32_t rbx_2 = r14_1[0xb0].d
                int32_t var_80
                sub_1405ba560(&r13[0x66], &var_80, var_88)
                int64_t rax_18 = sx.q(var_80)
                void* const rcx_24
                
                if (rax_18.d == 0xffffffff)
                    rcx_24 = nullptr
                else
                    rcx_24 = (rax_18 << 5) + r13[0x66]
                
                *(rcx_24 + 0x10) = 0
                
                if (rbx_2 s> *(rcx_24 + 0x14))
                    sub_1405a5410(rcx_24 + 8, rbx_2)
                
                int32_t* rdi_5 = r14_1[0xaf]
                void* r12_6 = &rdi_5[sx.q(r14_1[0xb0].d) * 8]
                
                if (rdi_5 != r12_6)
                    void* r14_2 = &rdi_5[4]
                    
                    do
                        int32_t var_7c
                        sub_1405ba560(&r13[0x66], &var_7c, var_88)
                        int64_t rax_20 = sx.q(var_7c)
                        void* const rcx_29
                        
                        if (rax_20.d == 0xffffffff)
                            rcx_29 = nullptr
                        else
                            rcx_29 = (rax_20 << 5) + r13[0x66]
                        
                        int64_t rsi_1 = sx.q(*(rcx_29 + 0x10))
                        int32_t rax_21 = (rsi_1 + 1).d
                        *(rcx_29 + 0x10) = rax_21
                        
                        if (rax_21 s> *(rcx_29 + 0x14))
                            sub_1405a4f90(rcx_29 + 8)
                        
                        *(*(rcx_29 + 8) + rsi_1 * 0x10) = *rdi_5
                        int64_t* rax_24 =
                            sub_1408f8140(&r13[0x70], sub_140a6b260(rdi_5, 0x10), rdi_5)
                        int64_t* r9_2 = var_88
                        uint32_t rdx_16 = (r9_2 u>> 4).d
                        int32_t r8_12 = (0x9e3779b9 - rdx_16) ^ rdx_16 << 8
                        int32_t r11_4 = neg.d(r8_12 + rdx_16) ^ r8_12 u>> 0xd
                        int32_t rdx_19 = (rdx_16 - r8_12 - r11_4) ^ r11_4 u>> 0xc
                        int32_t r8_15 = (r8_12 - rdx_19 - r11_4) ^ rdx_19 << 0x10
                        int32_t r11_7 = (r11_4 - r8_15 - rdx_19) ^ r8_15 u>> 5
                        int32_t rdx_22 = (rdx_19 - r8_15 - r11_7) ^ r11_7 u>> 3
                        int32_t r8_18 = (r8_15 - rdx_22 - r11_7) ^ rdx_22 << 0xa
                        int32_t r11_10 = (r11_7 - r8_18 - rdx_22) ^ r8_18 u>> 0xf
                        void* rax_40
                        
                        if (rax_24[1].d == *(rax_24 + 0x34))
                        label_1408fb4a1:
                            rax_40 = sub_1408f7b80(rax_24, r11_10, &var_88)
                        else
                            void* rcx_37 = rax_24[8]
                            void* r8_20 = &rax_24[7]
                            
                            if (rcx_37 != 0)
                                r8_20 = rcx_37
                            
                            int32_t rax_39 =
                                *(r8_20 + (((sx.q(rax_24[9].d) - 1) & sx.q(r11_10)) << 2))
                            
                            if (rax_39 == 0xffffffff)
                            label_1408fb4a1_1:
                                rax_40 = sub_1408f7b80(rax_24, r11_10, &var_88)
                            else
                                int64_t* rdx_28
                                
                                while (true)
                                    rdx_28 = (sx.q(rax_39) << 5) + *rax_24
                                    
                                    if (*rdx_28 == r9_2)
                                        break
                                    
                                    rax_39 = rdx_28[3].d
                                    
                                    if (rax_39 == 0xffffffff)
                                        goto label_1408fb4a1_2
                                
                                if (rax_39 == 0xffffffff || rdx_28 == 0)
                                label_1408fb4a1_2:
                                    rax_40 = sub_1408f7b80(rax_24, r11_10, &var_88)
                                else
                                    rax_40 = &rdx_28[1]
                        
                        int128_t zmm0_1 = *r14_2
                        r14_2 += 0x20
                        rdi_5 = &rdi_5[8]
                        *rax_40 = zmm0_1
                    while (rdi_5 != r12_6)
                    
                    r13 = arg1
                
                var_88[0xae].b = 0
                sub_1405a9f90(&r13[0x63], 0)
                result = result_1 + 1
                result_1 = result
                continue
    
    result = result_1 + 1
    result_1 = result

return result
