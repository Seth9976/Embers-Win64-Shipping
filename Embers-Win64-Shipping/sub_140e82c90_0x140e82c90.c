// 函数: sub_140e82c90
// 地址: 0x140e82c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (data_143e29f88 != 0)
    result = data_143e29f90

if (data_143e29f88 == 0 || result == 0 || *(result + 8) s<= 0)
    int64_t* rax_1 = j_sub_140a82f30(0x68)
    int64_t* rdi_1 = nullptr
    int64_t* r14_1 = rax_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        int64_t* rcx_1 = data_143e243c8
        int64_t arg_8 = 0
        int64_t rbx_1 = *(*(*rcx_1 + 8))(rcx_1)
        void var_48
        int64_t* rax_4 = _vfprintf_p_l(&var_48, u"Docking Tab Commands", u"TabCommands")
        void arg_10
        int64_t rcx_4 = *sub_140b58260(&arg_10, u"TabCommands", 1)
        r14_1[1] = 0
        r14_1[2] = 0
        r14_1[3] = rcx_4
        r14_1[4] = 0
        r14_1[5] = *rax_4
        void* rax_6 = rax_4[1]
        r14_1[6] = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        r14_1[7].d = rax_4[2].d
        r14_1[8] = rbx_1
        *r14_1 = &data_142ed8e70
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t rsi_2 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    (*(*var_40 + 8))(var_40, zx.q(rsi_2))
        
        *r14_1 = &data_142ed8f68
        __builtin_memset(&r14_1[9], 0, 0x20)
    
    void*** rax_11 = j_sub_140a82f30(0x18)
    void*** rsi_3 = rax_11
    
    if (rax_11 == 0)
        rsi_3 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        *rsi_3 = &data_142d42ea8
        rsi_3[2] = r14_1
    
    void* rbx_3 = &r14_1[1]
    
    if (r14_1 == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        void* rax_12
        
        if (*rbx_3 != 0)
            rax_12 = *(rbx_3 + 8)
        
        if (*rbx_3 == 0 || rax_12 == 0 || *(rax_12 + 8) s<= 0)
            if (rsi_3 != 0)
                rsi_3[1].d += 1
            
            *rbx_3 = rbx_3
            int64_t* rcx_8 = *(rbx_3 + 8)
            
            if (rsi_3 != rcx_8)
                if (rsi_3 != 0)
                    *(rsi_3 + 0xc) += 1
                    rcx_8 = *(rbx_3 + 8)
                
                if (rcx_8 != 0)
                    int32_t temp3_1 = *(rcx_8 + 0xc)
                    *(rcx_8 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rcx_8 + 8))(rcx_8, 1)
                
                *(rbx_3 + 8) = rsi_3
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp2_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*rsi_3)[1](rsi_3, 1)
    
    int64_t rbx_4 = r14_1[3]
    void*** rax_16 = sub_140e64ad0()
    int64_t* rdx_7
    
    if (rax_16[0xc].d == *(rax_16 + 0x8c))
    label_140e82efe:
        rdx_7 = nullptr
    else
        int32_t rax_18 = sub_140b5ead0(rbx_4.d) + rbx_4:4.d
        void* r8_1 = &rax_16[0x12]
        void* rcx_13 = *(r8_1 + 8)
        
        if (rcx_13 != 0)
            r8_1 = rcx_13
        
        int32_t rax_20 = *(r8_1 + (((sx.q(rax_16[0x14].d) - 1) & sx.q(rax_18)) << 2))
        
        if (rax_20 == 0xffffffff)
        label_140e82efe_1:
            rdx_7 = nullptr
        else
            while (true)
                rdx_7 = &rax_16[0xb][sx.q(rax_20) * 0x10]
                
                if (*rdx_7 == rbx_4)
                    break
                
                rax_20 = rdx_7[0xf].d
                
                if (rax_20 == 0xffffffff)
                    goto label_140e82efe_2
            
            if (rax_20 == 0xffffffff)
            label_140e82efe_2:
                rdx_7 = nullptr
    
    result = &rdx_7[1]
    
    if (rdx_7 == 0)
        result = nullptr
    
    int64_t rcx_14
    
    if (result != 0)
        rdi_1 = *(result + 0x68)
        rcx_14 = *(result + 0x60)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
    
    if (result == 0 || rcx_14 == 0)
        int64_t* rcx_19 = data_143e29f90
        data_143e29f88 = r14_1
        
        if (rsi_3 != rcx_19)
            if (rsi_3 != 0)
                *(rsi_3 + 0xc) += 1
                rcx_19 = data_143e29f90
            
            if (rcx_19 != 0)
                int32_t temp5_1 = *(rcx_19 + 0xc)
                *(rcx_19 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_19 + 8))(rcx_19, 1)
            
            data_143e29f90 = rsi_3
        
        (*(*r14_1 + 8))(r14_1)
        result = sub_140920c10(&data_1439b3880, &r14_1[1])
    else
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        data_143e29f88 = rcx_14 - 8
        int64_t* rcx_16 = data_143e29f90
        
        if (rdi_1 != rcx_16)
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
                rcx_16 = data_143e29f90
            
            if (rcx_16 != 0)
                int32_t temp11_1 = *(rcx_16 + 0xc)
                *(rcx_16 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    result = (*(*rcx_16 + 8))(rcx_16, 1)
            
            data_143e29f90 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp10_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp7_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            result = (**rsi_3)(rsi_3)
            int32_t temp8_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                return (*rsi_3)[1](rsi_3, 1)

return result
