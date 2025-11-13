// 函数: sub_1423e8e40
// 地址: 0x1423e8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0xc38)
int64_t* rbx = arg4
int32_t rsi = arg3
void* rcx_1 = &rax[sx.q(*(arg1 + 0xc40))]
char* var_a0_1
char* rdi_1

if (rax == rcx_1)
label_1423e8ea2:
    char* rax_1 = sub_1423d6f90(data_143f5b298, 0)
    rdi_1 = rax_1
    var_a0_1 = rax_1
else
    while (true)
        rdi_1 = *rax
        var_a0_1 = rdi_1
        
        if (*(rdi_1 + 0x278) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_1423e8ea2

int16_t* const rcx_3

if (rbx[1].d == 0)
    rcx_3 = &data_142d40450
else
    rcx_3 = *rbx

uint32_t result = sub_140a54510(rcx_3, u"___TAILONLY___")
int32_t rcx_4 = *(rdi_1 + 0x1b0)
int32_t i = rcx_4 - 1

if (result != 0)
    i = 0

int32_t i_1 = i

if (i s< rcx_4)
    int64_t r15_1 = sx.q(i) * 0x38
    int64_t var_a8_1 = r15_1
    
    do
        char* rdi_3 = *(rdi_1 + 0x1a8) + r15_1
        char* var_b0_1 = rdi_3
        result = zx.d(*rdi_3)
        
        if (result == rsi)
            int16_t* rdx
            
            if (rbx[1].d == 0)
                rdx = &data_142d40450
            else
                rdx = *rbx
            
            int16_t* const rcx_5
            
            if (*(rdi_3 + 0x10) == 0)
                rcx_5 = &data_142d40450
            else
                rcx_5 = *(rdi_3 + 8)
            
            result = sub_140a54510(rcx_5, rdx)
            
            if (result == 0)
            label_1423e8fa3:
                int32_t j = 0
                int32_t j_1 = 0
                
                if (*(rdi_3 + 0x20) s> 0)
                    do
                        int64_t rbx_1 = sx.q(j) << 3
                        int64_t var_58
                        int64_t* rax_4 = sub_140b63b70(*(rdi_3 + 0x18) + rbx_1, &var_58)
                        int64_t rcx_10 = *rax_4
                        int32_t rdx_2 = rax_4[1].d
                        int32_t rdx_3 = neg.d(rdx_2)
                        *rax_4 = 0
                        int32_t r8 = rax_4[1].d
                        int64_t var_d0 = rcx_10
                        int32_t rcx_11 = *(rax_4 + 0xc)
                        int32_t rdx_6 = sbb.d(rdx_3, rdx_3, rdx_2 != 0) + 4 + r8
                        rax_4[1] = 0
                        
                        if (rdx_6 s> rcx_11)
                            sub_1405947f0(&var_d0, rdx_6)
                        
                        sub_140a20ba0(&var_d0, &data_143342660, 3)
                        int64_t rcx_14 = var_58
                        int64_t var_98 = var_d0
                        int32_t var_90_1 = r8
                        int32_t var_8c_1 = rcx_11
                        int32_t var_c8_1
                        var_c8_1.q = 0
                        var_d0 = 0
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        void* var_c0 = nullptr
                        int32_t var_b8_1 = 0
                        char rax_8 = sub_140ba1330(&var_98, 0, &var_c0, 1)
                        char rbx_2
                        
                        if (rax_8 == 0)
                            int64_t var_48
                            result = sub_140ba1330(sub_140b63b70(*(rdi_3 + 0x18) + rbx_1, &var_48), 
                                0, &var_c0, 1)
                            int64_t rcx_19 = var_48
                            rbx_2 = result.b
                            
                            if (rcx_19 != 0)
                                result = sub_140a74f90(rcx_19)
                        
                        if (rax_8 != 0 || rbx_2 != 0)
                            void* rdx_8 = &data_142d40450
                            
                            if (var_b8_1 != 0)
                                rdx_8 = var_c0
                            
                            void* rax_10 = sub_140d23fd0(nullptr, rdx_8, 0, nullptr, 0)
                            void* rsi_1 = rax_10
                            int32_t rcx_20 = *(rax_10 + 0xc)
                            void* const rax_13
                            
                            if (rcx_20 s>= data_143e1d9b4)
                                rax_13 = nullptr
                            else
                                uint32_t rdx_9 = zx.d(rcx_20.w)
                                
                                if (rcx_20 s< 0)
                                    rcx_20 += 0xffff
                                    rdx_9 -= 0x10000
                                
                                rax_13 = *(data_143e1d9a0 + (sx.q(rcx_20 s>> 0x10) << 3))
                                    + sx.q(rdx_9) * 0x18
                            
                            *(rax_13 + 8) |= 0x40000000
                            int64_t rbx_3 = sx.q(*(rdi_3 + 0x30))
                            int32_t rax_14 = (rbx_3 + 1).d
                            *(rdi_3 + 0x30) = rax_14
                            
                            if (rax_14 s> *(rdi_3 + 0x34))
                                sub_1405a4d70(&rdi_3[0x28])
                            
                            *(*(rdi_3 + 0x28) + (rbx_3 << 3)) = rsi_1
                            int32_t* var_80
                            result = sub_1409aa070(&var_80, sub_140d41340(), 0, 0x10, 0)
                            void** var_70
                            void** rdi_4 = var_70
                            
                            if (rdi_4 == 0)
                            label_1423e9289:
                                j = j_1
                                rdi_3 = var_b0_1
                            else
                                int32_t* r15_2 = var_80
                                uint32_t result_1
                                uint32_t result_2 = result_1
                                
                                while (true)
                                    void* const rcx_26
                                    
                                    if (rdi_4 == 0)
                                        rcx_26 = nullptr
                                    else
                                        rcx_26 = *rdi_4
                                    
                                    if (sub_140d23d40(rcx_26, rsi_1) != 0)
                                        void* const rax_18
                                        
                                        if (rdi_4 == 0)
                                            rax_18 = nullptr
                                        else
                                            rax_18 = *rdi_4
                                        
                                        int32_t rax_19 = *(rax_18 + 0xc)
                                        void* const rax_23
                                        
                                        if (rax_19 s>= data_143e1d9b4)
                                            rax_23 = nullptr
                                        else
                                            uint32_t rdx_14 = zx.d(rax_19.w)
                                            
                                            if (rax_19 s< 0)
                                                rax_19 += 0xffff
                                                rdx_14 -= 0x10000
                                            
                                            rax_23 =
                                                *(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3))
                                                + sx.q(rdx_14) * 0x18
                                        
                                        *(rax_23 + 8) |= 0x40000000
                                        void* const rsi_2
                                        
                                        if (rdi_4 == 0)
                                            rsi_2 = nullptr
                                        else
                                            rsi_2 = *rdi_4
                                        
                                        int64_t rdi_5 = sx.q(*(rdi_3 + 0x30))
                                        int32_t rax_24 = (rdi_5 + 1).d
                                        *(rdi_3 + 0x30) = rax_24
                                        
                                        if (rax_24 s> *(rdi_3 + 0x34))
                                            sub_1405a4d70(&rdi_3[0x28])
                                        
                                        *(*(rdi_3 + 0x28) + (rdi_5 << 3)) = rsi_2
                                        rsi_1 = rax_10
                                    
                                    int32_t r9_2 = r15_2[9]
                                    
                                    while (true)
                                        result = result_2 + 1
                                        result_1 = result
                                        result_2 = result
                                        
                                        if (result s>= r9_2)
                                            goto label_1423e9289
                                        
                                        void* rax_29
                                        
                                        while (true)
                                            uint32_t rcx_30 = zx.d(result_1.w)
                                            uint32_t result_3 = result_2
                                            
                                            if (result_2 s< 0)
                                                result_3 = result_2 + 0xffff
                                                rcx_30 -= 0x10000
                                            
                                            int64_t rcx_31 = sx.q(rcx_30) * 3
                                            int64_t rax_28 =
                                                *(*(r15_2 + 0x10) + (sx.q(result_3 s>> 0x10) << 3))
                                            rdi_4 = rax_28 + (rcx_31 << 3)
                                            rax_29 = *(rax_28 + (rcx_31 << 3))
                                            
                                            if (rax_29 != 0)
                                                break
                                            
                                            result = result_2 + 1
                                            result_1 = result
                                            result_2 = result
                                            
                                            if (result s>= r9_2)
                                                goto label_1423e9289
                                        
                                        int32_t var_60
                                        
                                        if ((*(rax_29 + 8) & var_60) == 0)
                                            int32_t rax_30 = *(rax_29 + 0xc)
                                            void* const rdx_19
                                            
                                            if (rax_30 s>= data_143e1d9b4)
                                                rdx_19 = nullptr
                                            else
                                                uint32_t rcx_34 = zx.d(rax_30.w)
                                                
                                                if (rax_30 s< 0)
                                                    rax_30 += 0xffff
                                                    rcx_34 -= 0x10000
                                                
                                                rdx_19 =
                                                    *(data_143e1d9a0 + (sx.q(rax_30 s>> 0x10) << 3))
                                                    + sx.q(rcx_34) * 0x18
                                            
                                            int32_t var_5c
                                            
                                            if ((*(rdx_19 + 8) & var_5c) == 0)
                                                break
                        
                        void* rcx_32 = var_c0
                        
                        if (rcx_32 != 0)
                            result = sub_140a74f90(rcx_32)
                        
                        int64_t rcx_33 = var_98
                        
                        if (rcx_33 != 0)
                            result = sub_140a74f90(rcx_33)
                        
                        j += 1
                        j_1 = j
                    while (j s< *(rdi_3 + 0x20))
                    
                    rbx = arg4
                    i = i_1
                    r15_1 = var_a8_1
                
                rsi = arg3
            else
                int16_t* const rcx_6
                
                if (rbx[1].d == 0)
                    rcx_6 = &data_142d40450
                else
                    rcx_6 = *rbx
                
                result = sub_140a54510(rcx_6, &data_142d40450)
                
                if (result == 0)
                    goto label_1423e8fa3
                
                int16_t* const rcx_7
                
                if (rbx[1].d == 0)
                    rcx_7 = &data_142d40450
                else
                    rcx_7 = *rbx
                
                result = sub_140a54510(rcx_7, u"___TAILONLY___")
                
                if (result == 0)
                    goto label_1423e8fa3
        
        rdi_1 = var_a0_1
        i += 1
        r15_1 += 0x38
        i_1 = i
        var_a8_1 = r15_1
    while (i s< *(rdi_1 + 0x1b0))

return result
