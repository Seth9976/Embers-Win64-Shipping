// 函数: sub_140858750
// 地址: 0x140858750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408380d0(arg1)
uint64_t result = (*(arg1[0x42] + 0x30))(&arg1[0x42])

if (data_143f0f21f != 0)
    uint64_t rcx_1 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rcx_1.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rcx_1))
            (*(arg1[6] + 0x30))(&arg1[6])
            void* rcx_3 = arg1[2]
            
            if (rcx_3 != 0)
                int32_t rax_4 = 0
                
                if (0 == *(rcx_3 + 8))
                    *(rcx_3 + 8) = 0
                else
                    rax_4 = *(rcx_3 + 8)
                
                if (rax_4 == 1)
                    void* rdi_1 = arg1[2]
                    
                    if (*(rdi_1 + 0x11) != 0)
                        if (data_143f0f1c7 != 0)
                            int64_t* rcx_4 = data_143f0f180
                            (*(*rcx_4 + 0x630))(rcx_4, rdi_1)
                        
                        *(rdi_1 + 0x11) = 0
            
            arg1[5].d = 0
            sub_1405d16e0(&arg1[2], nullptr)
            sub_1405d16e0(&arg1[3], nullptr)
            return sub_1405d16e0(&arg1[4], nullptr)

return result
