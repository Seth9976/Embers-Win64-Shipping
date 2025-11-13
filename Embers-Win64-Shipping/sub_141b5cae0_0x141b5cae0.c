// 函数: sub_141b5cae0
// 地址: 0x141b5cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)
int32_t i_1 = *(arg1 + 0x18)
void* result_1 = arg1

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *result_1
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                char rax
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax != 0))
                    result = (**rbx_1)(rbx_1, 1)
                else
                    result = nullptr
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = zx.q(*(rbx_1 + 0xc))
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_1 = sub_140a20af0()
                        uint64_t rdx = zx.q(rax_1)
                        void* const rax_2
                        
                        if (rax_1 != 0)
                            rax_2 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3))
                                + (zx.q(rdx.d) & 0x3fff) * 0x18
                        else
                            rax_2 = nullptr
                        
                        *(rax_2 + 8) = rbx_1
                        result = sub_1405a42f0(&data_143f02390, rdx.d)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) == arg2)
    return result

return sub_1408098d0(arg1, arg2)
