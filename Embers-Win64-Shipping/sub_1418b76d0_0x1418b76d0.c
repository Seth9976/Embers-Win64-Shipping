// 函数: sub_1418b76d0
// 地址: 0x1418b76d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x30))

if (rax.d s>= 0 && rax.d s< *(arg1 + 0x28))
    int64_t* rcx = *(*(arg1 + 0x20) + rax * 0x10)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx)

*(arg1 + 0x30) = 0xffffffff
uint128_t var_18
uint128_t zmm0

if (*(arg1 + 0x50) != 0)
    int64_t* rbx_1 = *(arg1 + 0x58)
    
    if (rbx_1 != 0 && rbx_1[1].d s> 0)
        zmm0 = data_143e244b0.o
        var_18 = zmm0
        void* rax_3 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
            rbx_1 = *(arg1 + 0x58)
        
        int64_t* rcx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_4 = rbx_1[1].d
            
            if (rax_4 != 0)
                rbx_1[1].d = rax_4 + 1
                rax_4.b = 1
            
            if (rax_4.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                rcx_1 = *(arg1 + 0x50)
        
        sub_140e23de0(rcx_1, &var_18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_4 = *(arg1 + 0x60)

if (rcx_4 != 0)
    zmm0 = data_143e244b0.o
    var_18 = zmm0
    void* rax_7 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
        rcx_4 = *(arg1 + 0x60)
    
    sub_140e23de0(rcx_4, &var_18)

return sub_1419a21e0(0) __tailcall
