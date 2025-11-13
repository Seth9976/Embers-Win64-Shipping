// 函数: sub_14076d620
// 地址: 0x14076d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_1405d16e0(arg1 + 0x18, nullptr)
int64_t r8 = *(arg1 + 0x20)

if (r8 == 0)
    return result

int64_t* rcx_1 = data_143f0f180
void* arg_18
(*(*rcx_1 + 0xf8))(rcx_1, &arg_18, r8, &data_143f556a0, *(arg1 + 0x10), 1)
void* const rbx_1 = arg_18
void* const arg_10 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 8) += 1
    rbx_1 = arg_10

sub_1405d1550(&arg_18)

if (arg1 + 0x18 != &arg_10)
    int64_t* rdi_1 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rbx_1
    void* rbx_2 = nullptr
    arg_10 = nullptr
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            char rax_2
            
            if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                (**rdi_1)(rdi_1, 1)
            else
                bool z_1
                
                if (0 == *(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rdi_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_4 = sub_140a20af0()
                    
                    if (rax_4 != 0)
                        rbx_2 = *(&data_143cf0bf8 + (zx.q(rax_4) u>> 0xe << 3))
                            + (zx.q(rax_4) & 0x3fff) * 0x18
                    
                    *(rbx_2 + 8) = rdi_1
                    sub_1405a42f0(&data_143f02390, rax_4)

return sub_1405d1550(&arg_10)
