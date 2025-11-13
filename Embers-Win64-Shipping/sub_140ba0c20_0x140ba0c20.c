// 函数: sub_140ba0c20
// 地址: 0x140ba0c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
char rax = sub_140bbd8c0()

if (rax == 0)
    return rax

int32_t* rdi_1 = r14 * 0x38 + *(arg1 + 8)
void* r15 = *(rdi_1 + 0x20)
int64_t rax_1
uint64_t arg_18

if (r15 != 0)
    void* r14_1 = nullptr
    void* rax_2 = sub_140cddb10()
    void* rdx = *(r15 + 0x10)
    rax_1 = sx.q(*(rax_2 + 0x38))
    int64_t rcx
    
    if (rax_1.d s<= *(rdx + 0x38))
        rcx = rax_1
    
    if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rcx << 3)) != rax_2 + 0x30)
        void* rdi_2 = *(rdi_1 + 0x20)
        
        if (rdi_2 == 0)
            rax_1.b = r14_1 != 0
        else
            void* rax_3 = sub_140cddc80()
            void* rdx_1 = *(rdi_2 + 0x10)
            rax_1 = sx.q(*(rax_3 + 0x38))
            
            if (rax_1.d s> *(rdx_1 + 0x38))
                rax_1.b = r14_1 != 0
            else
                if (*(*(rdx_1 + 0x30) + (rax_1 << 3)) == rax_3 + 0x30)
                    r14_1 = rdi_2 + 0xe0
                    goto label_140ba0cf4
                
                rax_1.b = r14_1 != 0
    else
        r14_1 = r15 + 0x230
    label_140ba0cf4:
        
        if (r14_1 == 0)
            rax_1.b = r14_1 != 0
        else if ((*(arg1 + 0x290) & 0x100000) != 0)
            rax_1.b = r14_1 != 0
        else
            int64_t rax_4 = sx.q(*(arg1 + 0x34c))
            void* const rdi_3 = nullptr
            
            if (rax_4.d != 0xffffffff)
                int64_t rdx_2 = *(arg1 + 0x18)
                int64_t rax_6 = sx.q(*((rax_4 << 7) + rdx_2 + 0xc))
                
                if (rax_6.d s> 0)
                    rdi_3 = *((rax_6 << 7) + rdx_2 - 0x40)
                    void* rax_7
                    int64_t rax_8
                    void* rdx_3
                    
                    if (rdi_3 != 0)
                        rax_7 = sub_140bdf2e0()
                        rdx_3 = *(rdi_3 + 0x10)
                        rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rdi_3 == 0 || rax_8.d s> *(rdx_3 + 0x38)
                            || *(*(rdx_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                        rdi_3 = nullptr
            
            arg_18 = 0
            sub_140bb8de0(arg1, r14_1, rdi_3, 0)
            rax_1.b = 0
else if ((*(arg1 + 0x290) & 0x100000) == 0)
    rax_1.b = *(rdi_1 + 0x20) != 0
else
    rax_1 = sub_140cc1740(arg1, r14.d)
    
    if (rax_1.b != 0)
        rax_1.b = *(rdi_1 + 0x20) != 0
    else if (data_143de5426 != rax_1.b)
    label_140ba0dd4:
        int16_t* var_d8
        int64_t* rax_10 = sub_140b63b70(&rdi_1[3], &var_d8)
        int16_t* const r15_1 = &data_142d40450
        int16_t* rdx_8
        
        if (rax_10[1].d == 0)
            rdx_8 = &data_142d40450
        else
            rdx_8 = *rax_10
        
        rax_1 = sub_140b92f80(nullptr, rdx_8, 0)
        int16_t* rcx_9 = var_d8
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (rax_1 != 0)
            int16_t* var_e8
            int64_t* rax_11 = sub_140b63b70(&rdi_1[5], &var_e8)
            int16_t* rdx_10
            
            if (rax_11[1].d == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = *rax_11
            
            rax_1 = sub_1405968d0(rax_1, rdx_10, 0)
            int16_t* rcx_12 = var_e8
            int64_t rsi_2 = rax_1
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            if (rsi_2 != 0)
                if (sub_140b936f0(rsi_2) == 0)
                    rax_1 = sub_140bdfab0()
                    
                    if (rax_1 != 0)
                        int64_t rdx_13 = rax_1 + 0x30
                        rax_1 = sx.q(*(rax_1 + 0x38))
                        
                        if (rax_1.d s<= *(rsi_2 + 0x38)
                                && *(*(rsi_2 + 0x30) + (rax_1 << 3)) == rdx_13)
                            int32_t rsi_3 = rdi_1[2]
                            
                            if (rsi_3 s< 0)
                                int32_t rsi_4 = not.d(rsi_3)
                                
                                if (sub_140ba0c20(arg1, zx.q(rsi_4)).b != 0)
                                    void* r13_1 = *(sx.q(rsi_4) * 0x38 + *(arg1 + 8) + 0x20)
                                    
                                    if (r13_1 != 0)
                                        void* rax_14 = sub_140bdf2e0()
                                        void* rdx_16 = *(r13_1 + 0x10)
                                        rax_1 = sx.q(*(rax_14 + 0x38))
                                        
                                        if (rax_1.d s<= *(rdx_16 + 0x38)
                                                && *(*(rdx_16 + 0x30) + (rax_1 << 3))
                                                == rax_14 + 0x30)
                                            int64_t var_c8
                                            int64_t* rax_15 = sub_140b63b70(rdi_1, &var_c8)
                                            
                                            if (rax_15[1].d == 0)
                                                uint64_t arg_20 = &data_142d40450
                                            else
                                                arg_20 = *rax_15
                                            
                                            var_e8 = nullptr
                                            int32_t var_e0_1 = 0
                                            sub_1405947f0(&var_e8, 0x16)
                                            int32_t rbx_1 = var_e0_1 + 0x16
                                            
                                            if (rbx_1 s> 0)
                                                sub_140594770(&var_e8)
                                            
                                            int16_t* r12_2 = var_e8
                                            UnDecorator::getReferenceType(r12_2, 
                                                PLACEHOLDER-FUNCTION_", 0x2c)
                                            int16_t* const r8_7 = &data_142d40450
                                            
                                            if (rbx_1 != 0)
                                                r8_7 = r12_2
                                            
                                            sub_140a2e390(&var_d8, u"%s_%s", r8_7)
                                            int32_t var_d0
                                            
                                            if (var_d0 != 0)
                                                r15_1 = var_d8
                                            
                                            sub_140b58260(&arg_18, r15_1, 1)
                                            int16_t* rcx_27 = var_d8
                                            
                                            if (rcx_27 != 0)
                                                sub_140a74f90(rcx_27)
                                            
                                            if (r12_2 != 0)
                                                sub_140a74f90(r12_2)
                                            
                                            arg_18 = *sub_140d25240(&var_e8, r13_1, 
                                                sub_140cddc80(), arg_18)
                                            int64_t* rax_18 = sub_140cddc80()
                                            uint64_t rbx_2 = arg_18
                                            int32_t rcx_31
                                            rcx_31.b = rbx_2:4.d == 0
                                            
                                            if ((rcx_31.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
                                                sub_140d19010(r13_1, 
                                                    NewObject with empty name can't be used to create "
                                                "default subobjects (inside of UObject derived class "
                                                "constructor) as it produces incon")
                                            
                                            int64_t* rax_20 = sub_140d2dfc0(rax_18, r13_1, rbx_2, 
                                                0x41, 0, 0, 0, 0, 0)
                                            
                                            if (r14.d != 0xffffffff)
                                                rax_20[0x1d].d = not.d(r14.d)
                                            
                                            int64_t rdx_22 = *rax_20
                                            (*(rdx_22 + 0x268))(rax_20, rdx_22)
                                            sub_140ca8970(rax_20, 1)
                                            int64_t rcx_36 = var_c8
                                            *(rdi_1 + 0x20) = rax_20
                                            
                                            if (rcx_36 != 0)
                                                sub_140a74f90(rcx_36)
                else
                    int64_t* rax_13 = sub_140b63b70(rdi_1, &var_d8)
                    
                    if (rax_13[1].d != 0)
                        r15_1 = *rax_13
                    
                    rax_1 = sub_140b93730(*(arg1 + 0xa0), r15_1, r14.d)
                    int16_t* rcx_16 = var_d8
                    *(rdi_1 + 0x20) = rax_1
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
        
        rax_1.b = *(rdi_1 + 0x20) != 0
    else
        rax_1 = sub_140ba66d0(r14.d, arg1 + 8)
        *(rdi_1 + 0x20) = rax_1
        
        if (rax_1 == 0)
            goto label_140ba0dd4
        
        rax_1.b = 1
return rax_1
