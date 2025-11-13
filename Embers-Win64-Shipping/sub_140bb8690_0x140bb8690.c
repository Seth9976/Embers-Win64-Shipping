// 函数: sub_140bb8690
// 地址: 0x140bb8690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x34c))
void* rbx = arg1

if (result.d != 0xffffffff || *(arg1 + 0x348) != 0)
    arg1.b = 1
else
    arg1.b = 0

if (arg1.b != 0)
    uint64_t rdi_1
    
    if (result.d == 0xffffffff)
        rdi_1 = *(arg2 + 0x118)
    else
        rdi_1 = *((result << 7) + *(rbx + 0x18) + 0x40)
    
    int64_t* r13_1 = nullptr
    int32_t* rbp_1 = nullptr
    int32_t r15_1 = 0
    int32_t* var_58 = nullptr
    int32_t var_4c_1 = 0
    int512_t zmm1_1
    double zmm2_1[0x2]
    result, zmm1_1, zmm2_1 = sub_140bac880()
    void* const var_48
    
    if (result.b == 0)
        *(rbx + 0x290) |= 8
        int32_t i = 0
        
        if (*(rbx + 0x20) s> 0)
            void* r12_1 = nullptr
            
            do
                if (sub_140bac7d0(rbx).b == 0)
                    break
                
                result = *(rbx + 0x18)
                void* rbp_2 = *(r12_1 + result + 0x40)
                void* r14_1 = r12_1 + result
                
                if (rbp_2 == 0)
                    rbp_1 = var_58
                else
                    void* rax_1
                    int512_t zmm0_1
                    rax_1, zmm0_1 = sub_140cddbd0()
                    void* rdx = *(rbp_2 + 0x10)
                    result = sx.q(*(rax_1 + 0x38))
                    
                    if (result.d s> *(rdx + 0x38))
                        rbp_1 = var_58
                    else if (*(*(rdx + 0x30) + (result << 3)) != rax_1 + 0x30)
                        rbp_1 = var_58
                    else if (*(r14_1 + 0xc) s<= 0)
                        if (*(rbp_2 + 0xe8) == 0)
                            uint64_t rax_2 = sub_140cbbb40(rbx, i, zmm2_1, zmm0_1, zmm1_1)
                            int64_t rdi_4
                            
                            if (rax_2 != 0)
                                sub_140b96420(&var_48, rbx, i)
                                zmm2_1 = sub_140ba92c0(rbx, rax_2)
                                rdi_4 = *(r14_1 + 0x40)
                                result, zmm1_1 = sub_140b97a30(&var_48)
                            
                            if (rax_2 == 0 || rbp_2 == rdi_4)
                                double zmm2_2[0x2] = sub_140d3e8d0(rbp_2, nullptr, 0xffffffff, 1)
                                sub_140ce4c20(r14_1)
                                uint64_t rax_3 = sub_140cb4600(rbx, i, zmm2_2)
                                int64_t r8_3 = *(rbp_2 + 0x28)
                                (*(r8_3 + 0x10))(rbp_2 + 0x28, rax_3, r8_3)
                                zmm1_1, zmm2_1 = sub_140bb90e0(rbx, rbp_2)
                                int32_t rax_4 = *(rbp_2 + 0xc)
                                
                                if (rax_4 s>= data_143e1d9b4)
                                    result = 0
                                else
                                    int16_t temp0_1
                                    int32_t temp1_1
                                    temp0_1:temp1_1 = sx.q(rax_4)
                                    uint32_t rdx_9 = zx.d(temp0_1)
                                    int32_t rax_6 = temp1_1 + rdx_9
                                    result = *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_6.w) - rdx_9) * 0x18
                                
                                *(result + 8) |= 0x20000000
                                
                                if (rax_3 != 0)
                                    result, zmm1_1, zmm2_1 = sub_140cc45a0(rbx + 0x200, rax_3)
                        
                        rbp_1 = var_58
                    else
                        int64_t rdi_2 = sx.q(r15_1)
                        r15_1 = (rdi_2 + 1).d
                        
                        if (r15_1 s> var_4c_1)
                            sub_1405a4cf0(&var_58)
                        
                        rbp_1 = var_58
                        rbp_1[rdi_2] = i
                
                i += 1
                r12_1 -= -0x80
            while (i s< *(rbx + 0x20))
        
        *(rbx + 0x290) &= 0xfffffff7
    
    int32_t rcx_18 = *(rbx + 0x34c)
    
    if (rcx_18 != 0xffffffff || *(rbx + 0x348) != 0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b != 0)
        if (rcx_18 != 0xffffffff)
            int32_t rdi_6 = *(rdi_1 + 8)
            *(rdi_1 + 8) = rdi_6 & 0xffffcbff
            sub_140d3e8d0(rdi_1, rbx, *(rbx + 0x34c), 0)
            *(rdi_1 + 8) |= rdi_6
        
        double zmm2_3[0x2] = sub_140cc45a0(rbx + 0x200, rdi_1)
        int32_t i_1 = 0
        
        if (*(rbx + 0x20) s> 0)
            int64_t r14_2 = 0
            
            do
                void* rdi_8 = *(rbx + 0x18) + r14_2
                
                if ((*(rdi_8 + 0x1c) & 0x40000) != 0)
                    int32_t rax_12 = *(rdi_8 + 8)
                    
                    if (rax_12 s> 0 && rax_12 - 1 == *(rbx + 0x34c))
                        uint64_t rdx_14 = *(rdi_8 + 0x40)
                        
                        if (rdx_14 != 0)
                            zmm2_3 = sub_140cc45a0(rbx + 0x200, rdx_14)
                        else
                            zmm2_3 = sub_140cb4600(rbx, i_1, zmm2_3)
                            rdx_14 = *(rdi_8 + 0x40)
                            
                            if (rdx_14 != 0)
                                zmm2_3 = sub_140cc45a0(rbx + 0x200, rdx_14)
                
                i_1 += 1
                r14_2 -= -0x80
            while (i_1 s< *(rbx + 0x20))
        
        int32_t* rsi_2 = rbp_1
        int32_t arg_8 = *(rbx + 0x34c)
        *(rbx + 0x34c) = 0xffffffff
        void* r15_3 = &rbp_1[sx.q(r15_1)]
        
        if (rbp_1 != r15_3)
            do
                int64_t r14_3 = sx.q(*rsi_2)
                void* rdi_11 = (r14_3 << 7) + *(rbx + 0x18)
                void* rbp_3 = *(rdi_11 + 0x40)
                
                if (rbp_3 != 0)
                    void* rax_16 = sub_140cddbd0()
                    void* rcx_23 = *(rbp_3 + 0x10)
                    int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                    
                    if (rax_17.d s<= *(rcx_23 + 0x38)
                            && *(*(rcx_23 + 0x30) + (rax_17 << 3)) == rax_16 + 0x30)
                        void* r9_2
                        r9_2.b = 1
                        double zmm2_4[0x2] = sub_140d3e8d0(rbp_3, nullptr, 0xffffffff, r9_2.b)
                        sub_140ce4c20(rdi_11)
                        uint64_t rax_19 = sub_140cb4600(rbx, r14_3.d, zmm2_4)
                        int64_t r8_7 = *(rbp_3 + 0x28)
                        (*(r8_7 + 0x10))(rbp_3 + 0x28, rax_19, r8_7)
                        sub_140bb90e0(rbx, rbp_3)
                        int32_t rcx_29 = *(rbp_3 + 0xc)
                        void* const rax_22
                        
                        if (rcx_29 s>= data_143e1d9b4)
                            rax_22 = nullptr
                        else
                            uint32_t rdx_19 = zx.d(rcx_29.w)
                            
                            if (rcx_29 s< 0)
                                rcx_29 += 0xffff
                                rdx_19 -= 0x10000
                            
                            rax_22 = *(data_143e1d9a0 + (sx.q(rcx_29 s>> 0x10) << 3))
                                + sx.q(rdx_19) * 0x18
                        
                        *(rax_22 + 8) |= 0x20000000
                        
                        if (rax_19 != 0)
                            sub_140cc45a0(rbx + 0x200, rax_19)
                
                rsi_2 = &rsi_2[1]
            while (rsi_2 != r15_3)
            
            rbp_1 = var_58
        
        *(rbx + 0x34c) = arg_8
        arg_8.b = 0
        int32_t* var_50_1 = &arg_8
        var_58 = j_sub_140b98ce0
        void* rax_24 = sub_140a756e0(&var_58, &data_1439a98a8)
        int64_t* rbx_1 = rax_24 - 0x108
        
        if (rax_24 == 0)
            rbx_1 = nullptr
        
        char arg_18 = 0
        char* var_40_1 = &arg_18
        var_48 = &data_140b9beb0
        void* rax_25 = sub_140a756e0(&var_48, &data_1439a98a4)
        
        if (rax_25 != 0)
            r13_1 = rax_25 - 0x108
        
        sub_140bb7f90(rbx_1, rdi_1)
        result = sub_140bb7f90(r13_1, rdi_1)
    
    if (rbp_1 != 0)
        return sub_140a74f90(rbp_1)

return result
