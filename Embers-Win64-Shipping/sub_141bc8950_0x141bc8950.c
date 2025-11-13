// 函数: sub_141bc8950
// 地址: 0x141bc8950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141bc9780(arg1)
void var_18

if (sub_140cdd6a0(arg1) s< 0x18d)
    void* rax_1 = arg1[0xd7]
    
    if (rax_1 != 0)
        void* rcx_1 = *(rax_1 + 0x28)
        int64_t rbx_1 = data_143e243d8
        
        if (rcx_1 != 0)
            int64_t* rax_3 = (*(*(rcx_1 + 0x28) + 0x10))(rcx_1 + 0x28)
            
            if (rax_3 != 0)
                int64_t r8_1 = *rax_3
                
                if (*(*(r8_1 + 0x10))(rax_3, &var_18, r8_1) == rbx_1)
                    sub_141b85d70(&arg1[0x27], rax_3)
        
        arg1[0xd7] = 0
    
    void* rdx_3 = arg1[0xd8]
    
    if (rdx_3 != 0)
        sub_140693270(&arg1[0x29], rdx_3 + 0x28)
        arg1[0xd8] = 0
    
    void* rdx_5 = arg1[0xd9]
    
    if (rdx_5 != 0)
        sub_140693270(&arg1[0x3a], rdx_5 + 0x28)
        arg1[0xd9] = 0
    
    void* rdx_7 = arg1[0xda]
    
    if (rdx_7 != 0)
        sub_140693270(&arg1[0x4b], rdx_7 + 0x28)
        arg1[0xda] = 0
    
    void* rdx_9 = arg1[0xdb]
    
    if (rdx_9 != 0)
        sub_140693270(&arg1[0x5c], rdx_9 + 0x28)
        arg1[0xdb] = 0
    
    void* rdx_11 = arg1[0xdc]
    
    if (rdx_11 != 0)
        sub_140693270(&arg1[0x6d], rdx_11 + 0x28)
        arg1[0xdc] = 0
    
    void* rdx_13 = arg1[0xdd]
    
    if (rdx_13 != 0)
        sub_140693270(&arg1[0x7e], rdx_13 + 0x28)
        arg1[0xdd] = 0
    
    void* rdx_15 = arg1[0xde]
    
    if (rdx_15 != 0)
        sub_140693270(&arg1[0x8f], rdx_15 + 0x28)
        arg1[0xde] = 0
    
    void* rdx_17 = arg1[0xdf]
    
    if (rdx_17 != 0)
        sub_140693270(&arg1[0xa0], rdx_17 + 0x28)
        arg1[0xdf] = 0
    
    void* rdx_19 = arg1[0xe0]
    
    if (rdx_19 != 0)
        sub_140693270(&arg1[0xb1], rdx_19 + 0x28)
        arg1[0xe0] = 0

int32_t result = sub_140cdd6a0(arg1)

if (result s< 0x1d3)
    *(arg1 + 0x610) = *(arg1 + 0x70c)
    *(arg1 + 0x70c) = zx.o(0)
    
    if (data_14399f5c0.d.d f!= arg1[0xe4].d || data_14399f5c0:4.d.d f!= *(arg1 + 0x724)
            || data_14399f5c0:8.d.d f!= arg1[0xe5].d || data_14399f5c0:0xc.d.d f!= *(arg1 + 0x72c)
            || arg1[0xe6].b != 0)
        sub_140693390(&arg1[0xc9], &arg1[0xe4])
        arg1[0xe6].b = 0
        result = &var_18
        *(arg1 + 0x720) = data_14399f5c0
        
        if (&var_18 != &arg1[0xe7])
            uint128_t zmm0_2 = *(arg1 + 0x738)
            *(arg1 + 0x738) = zx.o(0)
            int64_t* rbx_4 = _mm_bsrli_si128(zmm0_2, 8).q
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    result = (**rbx_4)(rbx_4)
                    int32_t temp1_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        return (*(*rbx_4 + 8))(rbx_4, 1)

return result
