// 函数: sub_140910400
// 地址: 0x140910400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
uint128_t zmm2 = *(rsi + 0x70)
uint128_t var_68 = zmm2
int64_t arg_10 = *(rsi + 0x58)
uint128_t var_78 = zmm2
int32_t result

if (*(rsi + 0x28) != 1)
    int32_t rcx_3 = _mm_bsrli_si128(zmm2, 0xc).d
    int32_t rax_7 = _mm_bsrli_si128(zmm2, 8).d
    result = _mm_bsrli_si128(zmm2, 4).d
    
    if ((rcx_3 | rax_7 | zmm2.d | result) != 0)
        int64_t* rbx_2 = arg2[1]
        
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            zmm2 = var_68
            var_78 = zmm2
        
        uint128_t var_2c_1 = zmm2
        
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
        
        int64_t* rax_9 = j_sub_140a82f30(0x30)
        int64_t* rcx_7 = nullptr
        int64_t* rdx_3 = rax_9
        
        if (rax_9 == 0)
            rdx_3 = nullptr
            rcx_7 = rbx_2
        else
            *rax_9 = 0
            rax_9[1].b = 0
            *(rax_9 + 0xc) = var_78
            rax_9[4] = rsi
            rax_9[5] = rbx_2
        
        if (rdx_3 != 0)
            int64_t** temp0_6 = *(arg1 + 0xa0)
            *(arg1 + 0xa0) = rdx_3
            *temp0_6
            *temp0_6 = rdx_3
        
        if (rcx_7 != 0)
            int32_t temp4_1 = *(rcx_7 + 0xc)
            *(rcx_7 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_7 + 8))(rcx_7, 1)
        
        if (rbx_2 != 0)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* rcx_9 = *(arg1 + 0xd8)
        result = (*(*rcx_9 + 8))(rcx_9, &var_68)
else
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        zmm2 = var_68
        var_78 = zmm2
    
    uint128_t var_54_1 = zmm2
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    int64_t* rax_1 = j_sub_140a82f30(0x30)
    int64_t* rcx = nullptr
    int64_t* rdx = rax_1
    
    if (rax_1 == 0)
        rdx = nullptr
        rcx = rbx_1
    else
        *rax_1 = 0
        rax_1[1].b = 1
        *(rax_1 + 0xc) = var_78
        rax_1[4] = rsi
        rax_1[5] = rbx_1
    
    if (rdx != 0)
        void** temp0_1 = *(arg1 + 0xa0)
        *(arg1 + 0xa0) = rdx
        *temp0_1
        *temp0_1 = rdx
    
    if (rcx != 0)
        int32_t temp3_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    if (rbx_1 != 0)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rcx_2 = *(arg1 + 0xd8)
    result = (**rcx_2)(rcx_2, &var_68)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
