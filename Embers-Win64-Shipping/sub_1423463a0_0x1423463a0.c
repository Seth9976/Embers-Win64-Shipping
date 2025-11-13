// 函数: sub_1423463a0
// 地址: 0x1423463a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421026a0(arg1, arg2)
int64_t result = sx.q(data_143f0f1a0)

if ((((result.d u> 0x18 || not(test_bit(0x100a040, result.d)))
        && *(result * 0x14 + &data_143f025f0) != data_143f025b8) || (result - 0x19).d u<= 1
        || *(result * 0x14 + &data_143f025f0) == data_143f025d0)
        && (result.d u> 0x1e || not(test_bit(0x6562c800, result.d))))
    result *= 5
    
    if ((*((result << 2) + &data_143f025fc) & 1) == 0)
        void* rdi_1 = nullptr
        void arg_20
        int64_t* rax = sub_1420f74a0(&arg_20, arg1, *(arg1 + 0x1f4), nullptr, 0, 0)
        
        if (&arg1[0x40] != rax)
            int64_t* rbx_1 = arg1[0x40]
            arg1[0x40] = *rax
            *rax = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_2
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_2 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_4 = sub_140a20af0()
                            
                            if (rax_4 != 0)
                                rdi_1 = *((zx.q(rax_4) u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_4) & 0x3fff) * 0x18
                            
                            *(rdi_1 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rax_4)
        
        return sub_1405d1550(&arg_20)

return result
