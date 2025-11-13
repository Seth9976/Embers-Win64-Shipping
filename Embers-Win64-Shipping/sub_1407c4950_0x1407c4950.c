// 函数: sub_1407c4950
// 地址: 0x1407c4950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t rbx = 0

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t* rbp_1 = *(arg3[1] + 0x10)
    int64_t rbx_1 = rbp_1[3]
    
    if (*(rbx_1 + (rdx << 3)) == 0)
        sub_1419ccf30(rbp_1, rdx.d)
        rbx_1 = rbp_1[3]
    
    rbx = *(rbx_1 + (rdx << 3))

void* r9 = data_14396ff58
int64_t var_48 = rbx
void* arg_20 = r9

if (r9 != 0)
    *(r9 + 8) += 1
    r9 = arg_20

sub_14077caf0(arg2, &var_48, arg1 + 8, r9)
int16_t rcx_2 = *(arg1 + 0x2e)

if (rcx_2 != 0 || *(arg1 + 0x34) u> rcx_2)
    void* rax_2 = arg3[4]
    
    if (rax_2 != 0)
        int64_t arg_18 = rbx
        
        if (rcx_2 != 0 || *(arg1 + 0x34) u> rcx_2)
            int64_t rbp_2 = *(rax_2 + 0x2a0)
            
            if (rbp_2 == 0)
                rbp_2 = *(data_143f111a8 + 0x10)
            
            int64_t* r15_2 = data_14396ee58
            
            if (*(arg1 + 0xc) u> 0)
                uint32_t r12_1 = zx.d(*(arg1 + 0xa))
                void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_4 = &rcx_5[5]
                
                if (rax_4 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_4 = &rcx_5[5]
                
                *(arg2 + 0x30) = rax_4
                void**** rax_5 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_5 = rcx_5
                *(arg2 + 8) = &rcx_5[1]
                rcx_5[1] = 0
                *rcx_5 = &data_142da77b8
                rcx_5[2] = rbx
                rcx_5[3].d = r12_1
                rcx_5[4] = rbp_2
            
            if (*(arg1 + 0x1c) u> 0)
                uint32_t rbp_3 = zx.d(*(arg1 + 0x1a))
                
                if ((*(*r15_2 + 8))(r15_2) == 0)
                    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_9 = &rcx_12[5]
                    
                    if (rax_9 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_9 = &rcx_12[5]
                    
                    *(arg2 + 0x30) = rax_9
                    void**** rax_10 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_10 = rcx_12
                    *(arg2 + 8) = &rcx_12[1]
                    rcx_12[1] = 0
                    *rcx_12 = &data_142da77c8
                    rcx_12[2] = rbx
                    rcx_12[3].d = rbp_3
                    rcx_12[4] = r15_2
            
            int64_t rbp_4 = *(rax_2 + 0x2a8)
            
            if (rbp_4 == 0)
                rbp_4 = *(data_143f111a8 + 0x10)
            
            int64_t* r15_3 = data_14396ee58
            
            if (*(arg1 + 0x10) u> 0)
                uint32_t r12_2 = zx.d(*(arg1 + 0xe))
                void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_13 = &rcx_18[5]
                
                if (rax_13 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_13 = &rcx_18[5]
                
                *(arg2 + 0x30) = rax_13
                void**** rax_14 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_14 = rcx_18
                *(arg2 + 8) = &rcx_18[1]
                rcx_18[1] = 0
                rcx_18[3].d = r12_2
                *rcx_18 = &data_142da77b8
                rcx_18[2] = rbx
                rcx_18[4] = rbp_4
            
            if (*(arg1 + 0x20) u> 0)
                uint32_t rbp_5 = zx.d(*(arg1 + 0x1e))
                
                if ((*(*r15_3 + 8))(r15_3) == 0)
                    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_18 = &rcx_25[5]
                    
                    if (rax_18 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_18 = &rcx_25[5]
                    
                    *(arg2 + 0x30) = rax_18
                    void**** rax_19 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_19 = rcx_25
                    *(arg2 + 8) = &rcx_25[1]
                    rcx_25[1] = 0
                    *rcx_25 = &data_142da77c8
                    rcx_25[2] = rbx
                    rcx_25[3].d = rbp_5
                    rcx_25[4] = r15_3
            
            int64_t rbp_6 = *(rax_2 + 0x2b0)
            
            if (rbp_6 == 0)
                rbp_6 = *(data_143f111a8 + 0x10)
            
            int64_t* r15_4 = data_14396ee58
            
            if (*(arg1 + 0x14) u> 0)
                uint32_t r12_3 = zx.d(*(arg1 + 0x12))
                void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_22 = &rcx_31[5]
                
                if (rax_22 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_22 = &rcx_31[5]
                
                *(arg2 + 0x30) = rax_22
                void**** rax_23 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_23 = rcx_31
                *(arg2 + 8) = &rcx_31[1]
                rcx_31[1] = 0
                *rcx_31 = &data_142da77b8
                rcx_31[2] = rbx
                rcx_31[3].d = r12_3
                rcx_31[4] = rbp_6
            
            if (*(arg1 + 0x24) u> 0)
                uint32_t rbp_7 = zx.d(*(arg1 + 0x22))
                
                if ((*(*r15_4 + 8))(r15_4) == 0)
                    void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_27 = &rcx_38[5]
                    
                    if (rax_27 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_27 = &rcx_38[5]
                    
                    *(arg2 + 0x30) = rax_27
                    void**** rax_28 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_28 = rcx_38
                    *(arg2 + 8) = &rcx_38[1]
                    rcx_38[1] = 0
                    *rcx_38 = &data_142da77c8
                    rcx_38[2] = rbx
                    rcx_38[3].d = rbp_7
                    rcx_38[4] = r15_4
            
            int64_t rbp_8 = *(rax_2 + 0x2b8)
            
            if (rbp_8 == 0)
                rbp_8 = *(data_143f111a8 + 0x10)
            
            int64_t* r15_5 = data_14396ee58
            
            if (*(arg1 + 0x18) u> 0)
                uint32_t r12_4 = zx.d(*(arg1 + 0x16))
                void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_31 = &rcx_44[5]
                
                if (rax_31 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_31 = &rcx_44[5]
                
                *(arg2 + 0x30) = rax_31
                void**** rax_32 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_32 = rcx_44
                *(arg2 + 8) = &rcx_44[1]
                rcx_44[1] = 0
                *rcx_44 = &data_142da77b8
                rcx_44[2] = rbx
                rcx_44[3].d = r12_4
                rcx_44[4] = rbp_8
            
            if (*(arg1 + 0x28) u> 0)
                uint32_t rbp_9 = zx.d(*(arg1 + 0x26))
                
                if ((*(*r15_5 + 8))(r15_5) == 0)
                    void*** rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_36 = &rcx_51[5]
                    
                    if (rax_36 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_36 = &rcx_51[5]
                    
                    *(arg2 + 0x30) = rax_36
                    void** rax_37 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_37 = rcx_51
                    *(arg2 + 8) = &rcx_51[1]
                    rcx_51[1] = 0
                    *rcx_51 = &data_142da77c8
                    rcx_51[2] = rbx
                    rcx_51[3].d = rbp_9
                    rcx_51[4] = r15_5
            
            sub_14077c9b0(arg2, &arg_18, arg1 + 0x2a, rax_2 + 0x220, 4, 0)
            sub_14077c9b0(arg2, &arg_18, arg1 + 0x30, rax_2 + 0x260, 4, 0)
            sub_140741e30(arg2, &arg_18, arg1 + 0x36, rax_2 + 0x2c0, 0)
            float arg_8 = 1f f/ *(rax_2 + 0x2c0)
            sub_140741e30(arg2, &arg_18, arg1 + 0x3c, &arg_8, 0)
            sub_140741e30(arg2, &arg_18, arg1 + 0x42, rax_2 + 0x2c4, 0)

return sub_1405d1550(&arg_20)
