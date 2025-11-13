// 函数: sub_14078e850
// 地址: 0x14078e850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (arg2 == 0 || arg3 == 0)
    result.b = 0
else
    result = sub_140761ad0(arg2)
    void* result_2 = result
    
    if (result == 0 || arg4 s< 0 || arg4 s>= *(arg1 + 0xdc) || *(arg3 + 0xc0) != *(arg1 + 0xd0)
            || *(arg3 + 0xc4) != *(arg1 + 0xd4))
        result.b = 0
    else
        char result_1 = *(arg3 + 0xe0)
        
        if (result_1 != 0)
            result = zx.q(result_1)
        else
            result = sub_1405d9520(zx.d(*(arg3 + 0xdb)))
        
        if (result.d != 0xd)
            result.b = 0
        else
            int64_t var_48 = *(arg1 + 0x28)
            int64_t var_40_1 = *(result_2 + 0xe0)
            int64_t rax_2 = *(arg3 + 0x78)
            int32_t var_30_1 = arg4
            
            if (sub_140a80f40() == 0)
                uint32_t rax_4
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_4.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
                    void var_60
                    void** rax_5 = sub_1407894e0(&var_60, nullptr, 0xff)
                    void* rcx_7 = *rax_5
                    *(rcx_7 + 0x10) = var_48.o
                    *(rcx_7 + 0x20) = rax_2.o
                    void* rcx_8 = *rax_5
                    int32_t r8 = rax_5[2].d
                    int64_t* rdx = rax_5[1]
                    int64_t* rbx_1 = *(rcx_8 + 0x38)
                    int64_t* var_68_1 = rbx_1
                    void* rdi_1 = &rbx_1[9]
                    
                    if (rbx_1 != 0)
                        *rdi_1 += 1
                        rbx_1 = var_68_1
                    
                    sub_1407c96b0(rcx_8, rdx, r8, 1)
                    
                    if (rbx_1 != 0)
                        int32_t rax_6 = *rdi_1
                        *rdi_1 -= 1
                        
                        if (rax_6 == 1)
                            sub_140a2f6e0(var_68_1)
                    
                    result.b = 1
                else
                    int128_t var_28 = var_48.o
                    int128_t var_18_1 = rax_2.o
                    sub_1407821d0(&var_28, &data_143f02b98)
                    result.b = 1
            else
                sub_1407821d0(&var_48, &data_143f02b98)
                result.b = 1

return result
