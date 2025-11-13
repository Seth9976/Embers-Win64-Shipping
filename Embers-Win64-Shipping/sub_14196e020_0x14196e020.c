// 函数: sub_14196e020
// 地址: 0x14196e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x20)

if (result[1].d != 0)
    int64_t* rcx = data_143f0f180
    int64_t* arg_18
    result = (*(*rcx + 0xf8))(rcx, &arg_18, *(arg1 + 0x10), *(arg1 + 0x18), 1, 1)
    int64_t* rdx_2 = *(arg1 + 0x20)
    
    if (rdx_2 != result)
        int64_t* rbx_1 = *rdx_2
        *rdx_2 = *result
        *result = 0
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                if (rbx_1[2].b == 0)
                    result = nullptr
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(rbx_1 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_2 = sub_140a20af0()
                        uint64_t rdx_3 = zx.q(rax_2)
                        void* const rax_3
                        
                        if (rax_2 != 0)
                            rax_3 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                        else
                            rax_3 = nullptr
                        
                        *(rax_3 + 8) = rbx_1
                        result = sub_1405a42f0(&data_143f02390, rdx_3.d)
                else
                    result = (**rbx_1)(rbx_1, 1)
    
    int64_t* rbx_2 = arg_18
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            if (rbx_2[2].b == 0)
                result = nullptr
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    result = zx.q(*(rbx_2 + 0xc))
                    z_2 = false
                
                if (z_2)
                    int32_t rax_8 = sub_140a20af0()
                    uint64_t rcx_7 = zx.q(rax_8)
                    void* const rax_9
                    
                    if (rax_8 != 0)
                        rax_9 = *((rcx_7 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rcx_7.d) & 0x3fff) * 0x18
                    else
                        rax_9 = nullptr
                    
                    *(rax_9 + 8) = rbx_2
                    result = sub_1405a42f0(&data_143f02390, rcx_7.d)
            else
                result = (**rbx_2)(rbx_2, 1)

*(arg1 + 0x18) = 0
*(arg1 + 0x10) = 0
return result
