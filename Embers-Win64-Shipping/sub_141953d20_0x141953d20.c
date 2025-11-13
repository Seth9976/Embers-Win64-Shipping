// 函数: sub_141953d20
// 地址: 0x141953d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = data_14399fa54

if (result u>= 3)
    int32_t rbx_1 = 0
    int32_t rsi_1 = result - 3
    result = data_143f01c18
    
    if (result s> 0)
        int64_t* rdi_1 = nullptr
        int64_t r9_1
        
        while (true)
            r9_1 = data_143f01c10
            void* rcx_1 = *(rdi_1 + r9_1)
            int32_t rdx_1 = *(rcx_1 + 0x10)
            
            if (rdx_1 s< 0)
                break
            
            if (rdx_1 s> rsi_1)
                break
            
            data_143f01c54 += zx.d(*(rcx_1 + 0xf)) + *(rcx_1 + 8)
            j_sub_140a74f90(rcx_1)
            result = data_143f01c18
            rbx_1 += 1
            rdi_1 = &rdi_1[1]
            
            if (rbx_1 s>= result)
                r9_1 = data_143f01c10
                break
        
        if (rbx_1 != 0)
            if (result != rbx_1)
                memmove(r9_1, r9_1 + (sx.q(rbx_1) << 3), (result - rbx_1) << 3)
                result = data_143f01c18
            
            data_143f01c18 = result - rbx_1
            result = sub_1405c53d0(&data_143f01c10)
    
    data_143f01c50 = 0

return result
