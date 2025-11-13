// 函数: sub_141c859d0
// 地址: 0x141c859d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
void* r15 = arg1
int64_t* rsi = arg2
int32_t arg_18 = 0
void** result = (*(*rbx + 0x18))(rbx)

if (result != 0)
    result = sub_140d3e170((*(*rbx + 0x20))(rbx), 0, 1)
    
    if (result.b != 0)
        int64_t* rcx_3 = *rsi
        int64_t* var_e8 = nullptr
        int64_t var_e0_1 = 0
        int64_t* rax_4 = (*(*rcx_3 + 0x30))(rcx_3)
        int64_t rcx_4 = sx.q(rax_4[1].d)
        
        if (rcx_4.d s<= 0)
            int64_t* rbx_5 = *rsi
            int64_t rax_36 = (*(*rbx_5 + 0x18))(rbx_5)
            char rax_39
            
            if (rax_36 != 0)
                rax_39 = sub_140d3e170((*(*rbx_5 + 0x20))(rbx_5), 0, 1)
            
            int32_t var_d4
            int32_t rcx_30
            int64_t rbx_6
            
            if (rax_36 == 0 || rax_39 == 0)
                rcx_30 = 0
                int32_t var_d0_1 = 0
                var_d4 = 0
                rbx_6 = var_d4.q
                int32_t var_98_1 = 0
            else
                rbx_6 = *(sub_140d3c6e0((*(*rbx_5 + 0x20))(rbx_5)) + 0x18)
                var_d4.q = rbx_6
                rcx_30 = var_d4
            
            sub_141c883d0(r15, 
                sub_141c80d40(r15 + 0xb0, (rbx_6 u>> 0x20).d + sub_140b5ead0(rcx_30), &var_d4), 
                rsi, &var_e8)
            int32_t var_b4_1 = 0
            void var_94
            int32_t rcx_34 = *sub_140b5e500(&var_94, 0xe6)
            int32_t var_b8 = rcx_34
            int64_t r10_1 = sx.q(sub_140b5ead0(rcx_34))
            int64_t* rax_48
            
            if (*(r15 + 0xb8) == *(r15 + 0xe4))
            label_141c85e32:
                rax_48 = sub_141c80900(r15 + 0xb0, r10_1.d, &var_b8)
            else
                void* rdx_10 = *(r15 + 0xf0)
                void* r9_2 = r15 + 0xe8
                
                if (rdx_10 != 0)
                    r9_2 = rdx_10
                
                int32_t rax_47 = *(r9_2 + (((sx.q(*(r15 + 0xf8)) - 1) & r10_1) << 2))
                
                if (rax_47 == 0xffffffff)
                label_141c85e32_1:
                    rax_48 = sub_141c80900(r15 + 0xb0, r10_1.d, &var_b8)
                else
                    int64_t* r8_13
                    
                    while (true)
                        r8_13 = (sx.q(rax_47) << 5) + *(r15 + 0xb0)
                        
                        if (*r8_13 == var_b8.q)
                            break
                        
                        rax_47 = r8_13[3].d
                        
                        if (rax_47 == 0xffffffff)
                            goto label_141c85e32_2
                    
                    if (rax_47 == 0xffffffff || r8_13 == 0)
                    label_141c85e32_2:
                        rax_48 = sub_141c80900(r15 + 0xb0, r10_1.d, &var_b8)
                    else
                        rax_48 = &r8_13[1]
            
            sub_141c883d0(r15, rax_48, rsi, &var_e8)
        else
            char* rsi_1 = *rax_4
            void* r12_3 = &rsi_1[rcx_4 << 4]
            
            if (rsi_1 != r12_3)
                do
                    int32_t arg_20
                    sub_141c88700(r15 + 0x60, &arg_20, rsi_1)
                    int64_t rax_5 = sx.q(arg_20)
                    void* rcx_6
                    
                    if (rax_5.d != 0xffffffff)
                        rcx_6 = *(r15 + 0x60) + rax_5 * 0x28
                    
                    int128_t var_b0
                    
                    if (rax_5.d == 0xffffffff || rcx_6 == 0)
                        var_b0 = zx.o(0)
                    else
                        var_b0.q = *(rcx_6 + 0x10)
                        void* rax_8 = *(rcx_6 + 0x18)
                        var_b0:8.q = rax_8
                        
                        if (rax_8 != 0)
                            *(rax_8 + 0xc) += 1
                    
                    int64_t i_3 = 0
                    int64_t* var_c0
                    sub_141c4d620(&var_c0, &var_b0:8)
                    int64_t* rbx_1 = var_c0
                    int64_t i
                    
                    if (rbx_1 == 0)
                        i = i_3
                    else
                        i = var_b0.q
                        i_3 = i
                        var_b0.q = 0
                    
                    void* rcx_8 = var_b0:8.q
                    
                    if (rcx_8 != 0)
                        int32_t rax_9 = *(rcx_8 + 0xc)
                        *(rcx_8 + 0xc) -= 1
                        
                        if (rax_9 == 1)
                            int64_t* rcx_9 = var_b0:8.q
                            (*(*rcx_9 + 8))(rcx_9, 1)
                        
                        i = i_3
                        rbx_1 = var_c0
                    
                    if (i == 0)
                        sub_141c8bb00(r15 + 0x60, rsi_1)
                    label_141c85bae:
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                int64_t* rbx_2 = var_c0
                                (**rbx_2)(rbx_2)
                                int32_t rax_20 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (rax_20 == 1)
                                    int64_t* rcx_16 = var_c0
                                    (*(*rcx_16 + 8))(rcx_16, 1)
                    else
                        int64_t* rax_11 = var_e8
                        void* rcx_12 = &rax_11[sx.q(var_e0_1.d) * 2]
                        
                        if (rax_11 != rcx_12)
                            while (*rax_11 != i)
                                rax_11 = &rax_11[2]
                                
                                if (rax_11 == rcx_12)
                                    goto label_141c85b61
                            
                            if (((rax_11 - var_e8) s>> 4).d != 0xffffffff)
                                goto label_141c85bae
                            
                            goto label_141c85b61
                        
                    label_141c85b61:
                        int64_t r14_1 = sx.q(var_e0_1.d)
                        int32_t rax_14 = (r14_1 + 1).d
                        var_e0_1.d = rax_14
                        
                        if (rax_14 s> var_e0_1:4.d)
                            sub_1405a4f90(&var_e8)
                        
                        int64_t* rax_17 = &var_e8[r14_1 * 2]
                        *rax_17 = i
                        rax_17[1] = rbx_1
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d += 1
                            rbx_1 = var_c0
                            goto label_141c85bae
                    
                    rsi_1 = &rsi_1[0x10]
                while (rsi_1 != r12_3)
                
                r15 = arg1
            
            rsi = arg2
        
        int64_t* r12_4 = var_e8
        result = &r12_4[sx.q(var_e0_1.d) * 2]
        void** result_1 = result
        
        if (r12_4 != result)
            do
                int64_t* rcx_17 = *r12_4
                int32_t rax_25 = (*(*rcx_17 + 0x10))(rcx_17)
                
                if (rax_25 != 0xff)
                    void** lpTlsValue_1 = TlsGetValue(data_143cf0950)
                    void** lpTlsValue = lpTlsValue_1
                    
                    if (lpTlsValue_1 == 0)
                        void** lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                        lpTlsValue = lpTlsValue_2
                        
                        if (lpTlsValue_2 == 0)
                            lpTlsValue = nullptr
                        else
                            __builtin_memset(lpTlsValue, 0, 0x14)
                        
                        TlsSetValue(data_143cf0950, lpTlsValue)
                    
                    void*** rsi_2 = lpTlsValue[1]
                    int32_t rcx_43
                    
                    if (rsi_2 != 0)
                        rcx_43 = lpTlsValue[2].d
                    else
                        void* rax_49 = *lpTlsValue
                        
                        if (rax_49 == 0)
                            int64_t rax_50 = sub_14059e7c0(&data_143cf0958)
                            lpTlsValue[1] = rax_50
                            
                            if (rax_50 == 0)
                                int64_t* rax_51 = sub_140a82f70(0x2000, 0)
                                lpTlsValue[1] = rax_51
                                int64_t i_4 = 0x1f
                                int64_t* rcx_42
                                int64_t i_1
                                
                                do
                                    rcx_42 = &rax_51[0x20]
                                    *rax_51 = rcx_42
                                    rax_51 = rcx_42
                                    i_1 = i_4
                                    i_4 -= 1
                                while (i_1 != 1)
                                *rcx_42 = i_4
                        else
                            lpTlsValue[1] = rax_49
                            *lpTlsValue = rsi_2
                        
                        rsi_2 = lpTlsValue[1]
                        rcx_43 = 0x20
                        lpTlsValue[2].d = 0x20
                    
                    lpTlsValue[1] = *rsi_2
                    lpTlsValue[2].d = rcx_43 - 1
                    int64_t* var_90
                    int64_t** rax_54 = sub_140a228d0(&var_90)
                    arg_18 = 0
                    int64_t* rcx_45 = *rax_54
                    *rax_54 = nullptr
                    *rsi_2 = &data_142d40498
                    int64_t* var_58_1 = rcx_45
                    rsi_2[1].d = 0xff
                    *(rsi_2 + 0xc) = 1
                    *rsi_2 = &data_14320f7a0
                    rsi_2[9].b = 0
                    rsi_2[0xa] = rcx_45
                    int64_t* rcx_46 = var_90
                    
                    if (rcx_46 != 0)
                        rcx_46[9].d -= 1
                        
                        if (rcx_46[9].d == 1)
                            sub_140a2f6e0(rcx_46)
                    
                    int64_t* rbx_9 = *(r15 + 0x150)
                    int64_t r8_16 = *(r15 + 0x148)
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d += 1
                    
                    int64_t* r14_2 = r12_4[1]
                    int64_t rdx_14 = *r12_4
                    
                    if (r14_2 != 0)
                        *(r14_2 + 0xc) += 1
                    
                    int64_t* rdi_2 = arg2[1]
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d += 1
                    
                    rsi_2[2] = *arg2
                    rsi_2[3] = rdi_2
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d += 1
                    
                    rsi_2[4] = rdx_14
                    rsi_2[5] = r14_2
                    
                    if (r14_2 != 0)
                        *(r14_2 + 0xc) += 1
                    
                    rsi_2[6].d = rax_25
                    rsi_2[7] = r8_16
                    rsi_2[8] = rbx_9
                    
                    if (rbx_9 != 0)
                        *(rbx_9 + 0xc) += 1
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t rax_60 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (rax_60 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
                    
                    if (r14_2 != 0)
                        int32_t rax_62 = *(r14_2 + 0xc)
                        *(r14_2 + 0xc) -= 1
                        
                        if (rax_62 == 1)
                            (*(*r14_2 + 8))(r14_2, 1)
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d -= 1
                        
                        if (rbx_9[1].d == 1)
                            (**rbx_9)(rbx_9)
                            int32_t rax_66 = *(rbx_9 + 0xc)
                            *(rbx_9 + 0xc) -= 1
                            
                            if (rax_66 == 1)
                                (*(*rbx_9 + 8))(rbx_9, 1)
                    
                    int64_t* rbx_10 = rsi_2[0xa]
                    int64_t* var_a0_1 = rbx_10
                    int32_t* rdi_3 = &rbx_10[9]
                    
                    if (rbx_10 != 0)
                        *rdi_3 += 1
                        rbx_10 = var_a0_1
                    
                    result = sub_141c8cf10(rsi_2, nullptr, 0xff, 1)
                    
                    if (rbx_10 != 0)
                        result = zx.q(*rdi_3)
                        *rdi_3 -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(var_a0_1)
                    
                    rsi = arg2
                    r15 = arg1
                else
                    int64_t* rbx_3 = r12_4[1]
                    int64_t var_78 = *r12_4
                    int64_t* var_70_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d += 1
                    
                    sub_141c8dba0(*(r15 + 0x148), rsi, &var_78, 0)
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t rax_29 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (rax_29 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    int64_t* rcx_21 = *r12_4
                    (*(*rcx_21 + 0x20))(rcx_21, rsi)
                    int64_t* rbx_4 = r12_4[1]
                    int64_t var_68 = *r12_4
                    int64_t* var_60_1 = rbx_4
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                    
                    result = sub_141c8dde0(*(r15 + 0x148), rsi, &var_68)
                    
                    if (rbx_4 != 0)
                        result = zx.q(rbx_4[1].d)
                        rbx_4[1].d -= 1
                        
                        if (result.d == 1)
                            (**rbx_4)(rbx_4)
                            result = zx.q(*(rbx_4 + 0xc))
                            *(rbx_4 + 0xc) -= 1
                            
                            if (result.d == 1)
                                result = (*(*rbx_4 + 8))(rbx_4, 1)
                
                r12_4 = &r12_4[2]
            while (r12_4 != result_1)
        
        int32_t i_5 = var_e0_1.d
        
        if (i_5 != 0)
            void* rdi_5 = &var_e8[1]
            int32_t i_2
            
            do
                int64_t* rbx_11 = *rdi_5
                
                if (rbx_11 != 0)
                    result = zx.q(rbx_11[1].d)
                    rbx_11[1].d -= 1
                    
                    if (result.d == 1)
                        (**rbx_11)(rbx_11)
                        result = zx.q(*(rbx_11 + 0xc))
                        *(rbx_11 + 0xc) -= 1
                        
                        if (result.d == 1)
                            result = (*(*rbx_11 + 8))(rbx_11, 1)
                
                rdi_5 += 0x10
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        int64_t* rcx_58 = var_e8
        
        if (rcx_58 != 0)
            return sub_140a74f90(rcx_58)

return result
