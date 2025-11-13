// 函数: sub_14063db00
// 地址: 0x14063db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1
sub_14062c810(arg2, 0)
sub_14062c8d0(arg3, 0)
int64_t* rax = sub_1424c7800()
void* result = rax[0x23]
void* result_2 = result

if (result != 0)
label_14063db94:
    int64_t* rax_1 = MRFIBuf::SetofNiBoringClass(result)
    int32_t* i = *rax_1
    int128_t zmm6
    
    for (void* rax_3 = &i[sx.q(rax_1[1].d) * 0xa]; i != rax_3; i = &i[0xa])
        int64_t rax_4 = *(i + 0x10)
        
        if (rax_4 == *r14)
            int64_t rax_5 = *(i + 0x18)
            void* rax_6 = *(i + 0x20)
            int64_t var_120 = 0
            int64_t var_118_1 = 0
            
            if (rax_6 != 0)
                *(rax_6 + 8) += 1
            
            int64_t var_f8
            void var_78
            sub_140596d10(&var_f8, sub_140ac6680(sub_140d44c30(&i[4], &var_78, 1)))
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t rax_11 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            int32_t var_e8
            int32_t rsi_2 = var_e8 ^ ((zx.d(i[2].b) ^ var_e8) & 0xf)
            var_e8 = rsi_2
            int64_t var_98
            int64_t* rax_16
            rax_16, zmm6 = sub_140b63b70(i, &var_98)
            int32_t r12_1
            int64_t r14_1
            int32_t r15_1
            
            if (&var_120 == rax_16)
                r12_1 = var_118_1:4.d
                r15_1 = var_118_1.d
                r14_1 = var_120
            else
                int64_t rcx_11 = var_120
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                r14_1 = *rax_16
                *rax_16 = 0
                r15_1 = rax_16[1].d
                r12_1 = *(rax_16 + 0xc)
                var_118_1.d = r15_1
                var_118_1:4.d = r12_1
                rax_16[1] = 0
                var_120 = r14_1
            
            int64_t rcx_12 = var_98
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int64_t rbx_4 = sx.q(arg2[1].d)
            int32_t rax_17 = (rbx_4 + 1).d
            arg2[1].d = rax_17
            
            if (rax_17 s> *(arg2 + 0xc))
                sub_140638a90(arg2)
            
            int64_t* rdx_7 = (rbx_4 << 6) + *arg2
            *rdx_7 = r14_1
            r14 = arg1
            rdx_7[1].d = r15_1
            *(rdx_7 + 0xc) = r12_1
            rdx_7[2] = rax_4
            rdx_7[3] = rax_5
            rdx_7[4] = rax_6
            rdx_7[5] = var_f8
            int32_t var_f0
            rdx_7[6].d = var_f0
            int32_t var_ec
            *(rdx_7 + 0x34) = var_ec
            rdx_7[7].d &= 0xfffffff0
            rdx_7[7].d |= rsi_2 & 0xf
    
    void** rax_24 = sub_1417b0b00(result_2)
    int32_t* rdi_1 = *rax_24
    result = &rdi_1[sx.q(rax_24[1].d) * 0xa]
    void* result_1 = result
    
    if (rdi_1 != result)
        int128_t var_48_1 = zmm6
        
        do
            result = *r14
            
            if (*(rdi_1 + 0x10) == result)
                int64_t var_d8 = 0
                int64_t var_d0_1 = 0
                void var_60
                int64_t* rax_26
                int512_t zmm6_1
                rax_26, zmm6_1 = sub_140d44c30(&rdi_1[4], &var_60, 1)
                int64_t var_c8
                sub_140596d10(&var_c8, sub_140ac6680(rax_26))
                int64_t* var_58
                
                if (var_58 != 0)
                    var_58[1].d -= 1
                    
                    if (var_58[1].d == 1)
                        (**var_58)(var_58)
                        int32_t rax_30 = *(var_58 + 0xc)
                        *(var_58 + 0xc) -= 1
                        
                        if (rax_30 == 1)
                            (*(*var_58 + 8))(var_58, 1)
                
                void* rax_32 = *(rdi_1 + 0x10)
                void* rsi_4 = *(rdi_1 + 0x20)
                void* result_3 = *(rdi_1 + 0x18)
                
                if (rsi_4 != 0)
                    *(rsi_4 + 8) += 1
                
                zmm6_1.o = rdi_1[2]
                int64_t var_88
                int64_t* rax_33
                rax_33, zmm6 = sub_140b63b70(rdi_1, &var_88)
                int32_t r12_2
                int64_t r14_2
                int32_t r15_2
                
                if (&var_d8 == rax_33)
                    r12_2 = var_d0_1:4.d
                    r15_2 = var_d0_1.d
                    r14_2 = var_d8
                else
                    int64_t rcx_22 = var_d8
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    r14_2 = *rax_33
                    *rax_33 = 0
                    r15_2 = rax_33[1].d
                    r12_2 = *(rax_33 + 0xc)
                    rax_33[1] = 0
                
                int64_t rcx_23 = var_88
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rbx_7 = sx.q(arg3[1].d)
                int32_t rax_34 = (rbx_7 + 1).d
                arg3[1].d = rax_34
                
                if (rax_34 s> *(arg3 + 0xc))
                    sub_140638a90(arg3)
                
                int64_t rax_35 = var_c8
                int64_t* rcx_27 = (rbx_7 << 6) + *arg3
                *rcx_27 = r14_2
                r14 = arg1
                rcx_27[1].d = r15_2
                *(rcx_27 + 0xc) = r12_2
                rcx_27[2] = rax_35
                int32_t var_c0
                rcx_27[3].d = var_c0
                int32_t var_bc
                *(rcx_27 + 0x1c) = var_bc
                rcx_27[4] = rax_32
                result = result_3
                rcx_27[5] = result
                rcx_27[7].d = zmm6.d
                rcx_27[6] = rsi_4
            
            rdi_1 = &rdi_1[0xa]
        while (rdi_1 != result_1)
else
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)
    result = rax[0x23]
    result_2 = result
    
    if (result != 0)
        goto label_14063db94

int64_t* rbx_8 = r14[2]

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        result = (**rbx_8)(rbx_8)
        int32_t temp2_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_8 + 8))(rbx_8, 1)

return result
