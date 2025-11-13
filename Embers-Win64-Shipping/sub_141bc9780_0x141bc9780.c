// 函数: sub_141bc9780
// 地址: 0x141bc9780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)
int32_t i = 0

if (arg1[0x22].d s> 0)
    int32_t rsi_1 = 1
    uint64_t* rdi_1 = nullptr
    
    do
        int64_t rcx = arg1[0x21]
        result = *(rdi_1 + rcx)
        
        if (result == 0 || *(result + 0x30) == 0)
            int32_t rdx_1 = arg1[0x22].d
            int32_t rax_1 = rdx_1 - i
            
            if (rax_1 != 1)
                memmove(rcx + (sx.q(i) << 3), rcx + (sx.q(rsi_1) << 3), (rax_1 - 1) << 3)
                rdx_1 = arg1[0x22].d
            
            arg1[0x22].d = rdx_1 - 1
            result = sub_1405c53d0(&arg1[0x21])
            i -= 1
            rsi_1 -= 1
            rdi_1 -= 8
        
        i += 1
        rsi_1 += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[0x22].d)

return result
