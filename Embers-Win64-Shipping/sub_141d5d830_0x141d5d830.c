// 函数: sub_141d5d830
// 地址: 0x141d5d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x108)
int32_t result

if (rax == 0)
    result = 0
    int64_t* var_40 = nullptr
    int64_t var_48
    
    if (arg1 + 0x140 != &var_48)
        *(arg1 + 0x140) = 0
        var_48 = 0
        result = sub_1405aeff0(arg1 + 0x148, &var_40)
        int64_t* rcx_17 = var_40
        
        if (rcx_17 != 0)
            result = rcx_17[1].d
            rcx_17[1].d -= 1
            
            if (result == 1)
                int64_t* rbx_5 = var_40
                result = (**rbx_5)(rbx_5)
                int32_t rdi_2 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    int64_t* rcx_19 = var_40
                    return (*(*rcx_19 + 8))(rcx_19, zx.q(rdi_2))
else
    uint128_t zmm6 = *(rax + 0x120)
    int64_t rcx_1 = zmm6.q
    int64_t rdx_1 = _mm_bsrli_si128(zmm6, 8).q
    result = *(arg1 + 0xe8) ^ rcx_1.d
    
    if ((((rdx_1 u>> 0x20).d ^ *(arg1 + 0xf4)) | ((rcx_1 u>> 0x20).d ^ *(arg1 + 0xec))
            | (*(arg1 + 0xf0) ^ rdx_1.d) | result) != 0)
        void*** rax_7 = sub_141d4b9b0()
        uint128_t zmm0_1 = (&rax_7[2]).o
        uint128_t var_68 = zmm0_1
        void*** rbx_1 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = rax_7
        
        if (arg1 + 0x140 != &var_68)
            *(arg1 + 0x140) = var_68.q
            var_68.q = 0
            sub_1405aeff0(arg1 + 0x148, &var_68:8)
            rbx_1 = rax_7
        
        void* rcx_3 = var_68:8.q
        
        if (rcx_3 != 0)
            int32_t rax_9 = *(rcx_3 + 8)
            *(rcx_3 + 8) -= 1
            
            if (rax_9 == 1)
                int64_t* rbx_2 = var_68:8.q
                (**rbx_2)(rbx_2)
                int32_t rax_11 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_11 == 1)
                    int64_t* rcx_5 = var_68:8.q
                    (*(*rcx_5 + 8))(rcx_5, 1)
            
            rbx_1 = rax_7
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_15 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_15 == 1)
                    (*rbx_1)[1](rbx_1, 1)
        
        int64_t* rsi_2 = *(arg1 + 0x148)
        
        if (rsi_2 != 0)
            rsi_2[1].d += 1
        
        int64_t var_38 = *(arg1 + 0x140)
        
        if (rsi_2 != 0)
            rsi_2[1].d += 1
        
        int64_t* rbx_3 = *(rax + 0x118)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        result = sub_141d4c1f0(*(rax + 0x110), &var_38)
        
        if (rbx_3 != 0)
            result = rbx_3[1].d
            rbx_3[1].d -= 1
            
            if (result == 1)
                (**rbx_3)(rbx_3)
                result = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rsi_2 != 0)
            result = rsi_2[1].d
            rsi_2[1].d -= 1
            
            if (result == 1)
                (**rsi_2)(rsi_2)
                result = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rsi_2 + 8))(rsi_2, 1)
        
        if (rsi_2 != 0)
            result = rsi_2[1].d
            rsi_2[1].d -= 1
            
            if (result == 1)
                result = (**rsi_2)(rsi_2)
                int32_t rdi_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    result = (*(*rsi_2 + 8))(rsi_2, zx.q(rdi_1))
        
        *(arg1 + 0xe8) = zmm6

return result
