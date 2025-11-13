// 函数: sub_142b8b260
// 地址: 0x142b8b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg4 + 8)
int32_t rdi = rsi
int32_t rbx = arg2
int128_t result_1 = sub_142a4bbb0()
int32_t r15 = *(arg1 + 0x60)
int128_t result = result_1

if (rbx s>= r15)
    *(arg4 + 0xc) = rsi
else
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        int32_t* rdx_2 = (sx.q(rbx) << 4) + *(arg1 + 0x58)
        
        if (*rdx_2 == 6)
            break
        
        result_1 = sub_142b752d0(arg1, rdx_2)
        int32_t rbp_1 = *(*(arg1 + 0x58) + sx.q(rbx + 2) * 0x10 + 0xc)
        
        if (rbp_1 s< rbx + 2)
            rbp_1 = rbx + 2
        
        int32_t rax_2 = sub_142b8b150(arg1, rbx + 2, rbp_1, arg3, rsi)
        
        if (rax_2 s>= 0)
            int32_t rbx_2 = rax_2 + rsi
            
            if (rbx_2 s> rdi)
                rdi = rbx_2
                result = result_1
                
                if (rbx_2 == sub_142a4a1f0(arg3))
                    break
        
        rbx = rbp_1 + 1
    while (rbx s< r15)
    
    if (rdi == rsi)
        *(arg4 + 0xc) = rsi
    else
        *(arg4 + 8) = rdi

return result
