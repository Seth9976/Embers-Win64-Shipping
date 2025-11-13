// 函数: sub_14085bac0
// 地址: 0x14085bac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
void** result = __security_cookie ^ &var_c8
void** result_1 = result

if (((*(arg1 + 0x6b8)).b & 1) != arg2)
    if (*(arg1 + 0x6bc) != 0)
        sub_1408622c0(arg1)
        sub_14084fd50(arg1)
    
    void* rax_2 = *(arg1 + 0x28)
    int64_t* rbx_1 = nullptr
    void* const r12_1
    
    if (rax_2 == 0)
        r12_1 = nullptr
    else
        r12_1 = *(rax_2 + 0x408)
    
    void*** rdi_1
    
    if (arg2 == 0)
        int64_t rcx_14
        
        if (rax_2 == 0)
            rcx_14 = 0
        else
            rcx_14 = *(rax_2 + 0xc0)
        
        *(arg1 + 0x30) = rcx_14
        int32_t rax_11 = sub_14084aae0(arg1)
        void* rcx_16 = *(arg1 + 0x28)
        
        if (rcx_16 != 0)
            void* rax_12 = *(rcx_16 + 0xa8)
            
            if (rax_12 == 0)
                rax_12 = sub_141ee69e0(rcx_16)
            
            rbx_1 = sub_140865dd0(rax_12)
        
        void var_68
        int64_t* rax_14 = sub_140865fa0(rbx_1, &var_68, rax_11, r12_1)
        rdi_1 = rax_14[1]
        void* r12_2 = *rax_14
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* var_60
        
        if (var_60 != 0)
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rax_17 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*var_60 + 8))(var_60, 1)
        
        sub_140860680(r12_2, *(arg1 + 0x18), arg1)
        void* var_88 = r12_2
        void*** rcx_22 = rdi_1
        void*** var_80_1 = rcx_22
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rcx_22 = var_80_1
        
        result = &var_88
        
        if (&var_88 != arg1 + 0x18)
            int128_t zmm1_2 = var_88.o
            int128_t var_48_1 = zmm1_2
            var_88.o = *(arg1 + 0x18)
            rcx_22 = var_80_1
            *(arg1 + 0x18) = zmm1_2
        
        if (rcx_22 != 0)
            result = zx.q(rcx_22[1].d)
            rcx_22[1].d -= 1
            
            if (result.d == 1)
                (**var_80_1)(var_80_1)
                result = zx.q(*(var_80_1 + 0xc))
                *(var_80_1 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*var_80_1)[1](var_80_1, 1)
        
        *(arg1 + 0x6b8) &= 0xfffffffe
    else
        void*** rax_3 = j_sub_140a82f30(0xe88)
        rdi_1 = rax_3
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        else
            rax_3[1].d = 1
            *(rax_3 + 0xc) = 1
            *rdi_1 = &data_142ddc048
            sub_140844190(&rdi_1[2])
        
        void*** var_70_1 = rdi_1
        void* var_78 = &rdi_1[2]
        sub_140842040(&var_78, &rdi_1[2])
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_6 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_6 == 1)
                    (*rdi_1)[1](rdi_1, 1)
        
        void* rcx_8 = *(arg1 + 0x28)
        void* rax_8 = *(rcx_8 + 0xa8)
        
        if (rax_8 == 0)
            rax_8 = sub_141ee69e0(rcx_8)
        
        sub_140853350(&rdi_1[2], r12_1, rax_8, 1, 8)
        sub_140860680(&rdi_1[2], *(arg1 + 0x18), arg1)
        void* var_98 = &rdi_1[2]
        void*** rcx_11 = rdi_1
        void*** var_90_1 = rcx_11
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            rcx_11 = var_90_1
        
        result = &var_98
        
        if (&var_98 != arg1 + 0x18)
            int128_t zmm1_1 = var_98.o
            int128_t var_58_1 = zmm1_1
            var_98.o = *(arg1 + 0x18)
            rcx_11 = var_90_1
            *(arg1 + 0x18) = zmm1_1
        
        if (rcx_11 != 0)
            result = zx.q(rcx_11[1].d)
            rcx_11[1].d -= 1
            
            if (result.d == 1)
                (**var_90_1)(var_90_1)
                result = zx.q(*(var_90_1 + 0xc))
                *(var_90_1 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*var_90_1)[1](var_90_1, 1)
        
        *(arg1 + 0x6b8) |= 1
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        rdi_1[1].d -= 1
        
        if (result.d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t rsi_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*rdi_1)[1](rdi_1, zx.q(rsi_1))

__security_check_cookie(result_1 ^ &var_c8)
return result
