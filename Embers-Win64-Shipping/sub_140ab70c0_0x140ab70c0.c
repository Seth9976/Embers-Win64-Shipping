// 函数: sub_140ab70c0
// 地址: 0x140ab70c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) != 0)
    return 

EnterCriticalSection(arg1 + 0x98)

if (*(arg1 + 8) == 0)
    void*** rax_1 = j_sub_140a82f30(0x20)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rax_1[1].d = 1
        *(rax_1 + 0xc) = 1
        *rdi_1 = &data_142df7bd8
        sub_140596d10(&rdi_1[2], arg1 + 0x88)
    
    uint128_t zmm0_1 = (&rdi_1[2]).o
    uint128_t var_28 = zmm0_1
    void*** rdi_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
        rdi_2 = rdi_1
    
    if (arg1 + 8 != &var_28)
        *(arg1 + 8) = var_28.q
        var_28.q = 0
        sub_1405aeff0(arg1 + 0x10, &var_28:8)
        rdi_2 = rdi_1
    
    void* rcx_3 = var_28:8.q
    
    if (rcx_3 != 0)
        int32_t rax = *(rcx_3 + 8)
        *(rcx_3 + 8) -= 1
        
        if (rax == 1)
            int64_t* rdi_3 = var_28:8.q
            (**rdi_3)(rdi_3)
            rax = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rax == 1)
                int64_t* rcx_5 = var_28:8.q
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        rdi_2 = rdi_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rsi_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*rdi_2)[1](rdi_2, zx.q(rsi_1))

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)
