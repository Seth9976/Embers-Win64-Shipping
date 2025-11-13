// 函数: sub_140da81b0
// 地址: 0x140da81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
EnterCriticalSection(arg1 + 0xe8)

if (*(arg1 + 0xb0) == 0)
    uint64_t var_48
    uint64_t var_38
    uint64_t* rdi_2
    int32_t r12_1
    uint64_t r15_1
    
    if (*(arg1 + 0x120) == 0)
        r15_1 = var_48
        rdi_2 = &var_38
        var_38 = 0
        r12_1 = 2
        int64_t var_30_1 = 0
    else
        int32_t rsi_1 = *(arg1 + 0x118)
        r15_1 = 0
        int64_t rdi_1 = *(arg1 + 0x110)
        var_48 = 0
        int32_t var_40_1 = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(&var_48, rsi_1, 0)
            r15_1 = var_48
            memcpy(r15_1, rdi_1, rsi_1 * 2)
            rdi_2 = &var_48
            r12_1 = 1
        else
            int32_t var_3c_1 = 0
            rdi_2 = &var_48
            r12_1 = 1
    
    void*** rax_1 = j_sub_140a82f30(0x30)
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        uint64_t r8_3 = *rdi_2
        *rax_1 = &data_142e4d510
        rax_1[1].d = 1
        *(rax_1 + 0xc) = 1
        rax_1[2] = r8_3
        *rdi_2 = 0
        rax_1[3].d = rdi_2[1].d
        *(rax_1 + 0x1c) = *(rdi_2 + 0xc)
        rdi_2[1] = 0
        r15_1 = var_48
        rax_1[4].w = 0
        *(rax_1 + 0x24) = 0
        rax_1[5] = 0
    
    int64_t* rdi_3 = rax_1
    int64_t* rsi_2 = rdi_3
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
        rdi_3 = rax_1
    
    if (arg1 + 0xb0 == &var_48)
    label_140da8343:
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d != 1)
                rdi_3 = rax_1
            else
                (**rsi_2)(rsi_2)
                int32_t temp2_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rdi_3 = rax_1
                else
                    (*(*rsi_2 + 8))(rsi_2, 1)
                    rdi_3 = rax_1
    else
        *(arg1 + 0xb0) = &rax_1[2]
        int64_t* r14_1 = *(arg1 + 0xb8)
        
        if (rsi_2 == r14_1)
            goto label_140da8343
        
        *(arg1 + 0xb8) = rsi_2
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d != 1)
                rdi_3 = rax_1
            else
                (**r14_1)(r14_1)
                int32_t temp5_1 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rdi_3 = rax_1
                else
                    (*(*r14_1 + 8))(r14_1, 1)
                    rdi_3 = rax_1
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp4_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    if ((r12_1.b & 2) != 0)
        uint64_t rcx_9 = var_38
        r12_1 &= 0xfffffffd
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    if ((r12_1.b & 1) != 0 && r15_1 != 0)
        sub_140a74f90(r15_1)

int64_t result = *(arg1 + 0xb0)

if (arg1 != -0xe8)
    LeaveCriticalSection(arg1 + 0xe8)

return result
