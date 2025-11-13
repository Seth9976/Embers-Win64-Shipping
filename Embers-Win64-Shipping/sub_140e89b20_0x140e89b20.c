// 函数: sub_140e89b20
// 地址: 0x140e89b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* arg_8 = arg1
int32_t r12 = 0
int32_t arg_18 = 0

if (*arg1 != 0)
    int64_t rbx_1 = *(arg2 + 0x74)
    int64_t rdi_1 = *(arg2 + 0x7c)
    int32_t i = 0
    arg_18.q = rdi_1
    
    do
        int64_t* r14_1 = *arg1
        int64_t var_88 = rdi_1
        int64_t var_80_1 = rbx_1
        char var_78_1 = i.b
        int32_t rsi_2 = sub_140b5ead0(rdi_1.d) + arg3
        int32_t r9_3 = (sub_140b5ead0(rbx_1.d) + rbx_1:4.d) ^ rsi_2
        void* r15_1
        
        if (r14_1[1].d == *(r14_1 + 0x34))
        label_140e89c17:
            r15_1 = sub_140e48010(r14_1, r9_3, &var_88)
        else
            void* rcx_2 = r14_1[8]
            void* r8_1 = &r14_1[7]
            
            if (rcx_2 != 0)
                r8_1 = rcx_2
            
            int32_t rax_4 = *(r8_1 + (((sx.q(r14_1[9].d) - 1) & sx.q(r9_3)) << 2))
            
            if (rax_4 == 0xffffffff)
            label_140e89c17_1:
                r15_1 = sub_140e48010(r14_1, r9_3, &var_88)
            else
                int64_t* rdx_5
                
                while (true)
                    rdx_5 = (sx.q(rax_4) << 6) + *r14_1
                    
                    if (*rdx_5 == rdi_1 && rdx_5[1] == rbx_1 && rdx_5[2].b == i.b)
                        break
                    
                    rax_4 = rdx_5[7].d
                    
                    if (rax_4 == 0xffffffff)
                        goto label_140e89c17_2
                
                if (rax_4 == 0xffffffff || rdx_5 == 0)
                label_140e89c17_2:
                    r15_1 = sub_140e48010(r14_1, r9_3, &var_88)
                else
                    r15_1 = &rdx_5[3]
        
        int64_t* rsi_5 = (zx.q(i.b) << 4) + *arg2
        int64_t* r14_2 = *rsi_5
        int64_t* rsi_6 = rsi_5[1]
        
        if (rsi_6 != 0)
            rsi_6[1].d += 1
            
            if (rsi_6 != 0)
                int32_t rax_7 = rsi_6[1].d
                rsi_6[1].d = rax_7
                
                if (rax_7 == 0)
                    (**rsi_6)(rsi_6)
                    int32_t temp0_1 = *(rsi_6 + 0xc)
                    *(rsi_6 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*rsi_6 + 8))(rsi_6, 1)
        
        int64_t* var_58
        int64_t* r14_3
        
        if (r14_2 == 0)
            r12 |= 2
            var_88 = data_143e202b8
            int64_t var_80_2 = data_143e202c0
            void* rax_17 = data_143e202c8
            var_78_1.q = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 8) += 1
            
            int32_t var_70 = var_70 & 0xfffffff0
            r14_3 = &var_88
        else
            r12 |= 1
            int64_t var_68 = *r14_2
            int64_t var_60_1 = r14_2[1]
            int64_t* rax_12 = r14_2[2]
            var_58 = rax_12
            
            if (rax_12 != 0)
                rax_12[1].d += 1
            
            r14_3 = &var_68
            int32_t var_50 = var_50 ^ ((r14_2[3].d ^ var_50) & 0xf)
        
        sub_140627710(r15_1, r14_3)
        *(r15_1 + 0x18) &= 0xfffffff0
        result = r14_3[3].d & 0xf
        *(r15_1 + 0x18) |= result
        
        if ((r12.b & 2) != 0)
            int64_t* r14_4 = var_78_1.q
            r12 &= 0xfffffffd
            
            if (r14_4 != 0)
                r14_4[1].d -= 1
                
                if (r14_4[1].d == 1)
                    result = (**r14_4)(r14_4)
                    int32_t temp4_1 = *(r14_4 + 0xc)
                    *(r14_4 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        result = (*(*r14_4 + 8))(r14_4, 1)
        
        if ((r12.b & 1) != 0)
            r12 &= 0xfffffffe
            
            if (var_58 != 0)
                var_58[1].d -= 1
                
                if (var_58[1].d == 1)
                    result = (**var_58)(var_58)
                    int32_t temp6_1 = *(var_58 + 0xc)
                    *(var_58 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*var_58 + 8))(var_58, 1)
        
        if (rsi_6 != 0)
            rsi_6[1].d -= 1
            
            if (rsi_6[1].d == 1)
                result = (**rsi_6)(rsi_6)
                int32_t temp5_1 = *(rsi_6 + 0xc)
                *(rsi_6 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rsi_6 + 8))(rsi_6, 1)
        
        arg1 = arg_8
        i += 1
    while (i u< 2)

return result
