// 函数: sub_142bb2350
// 地址: 0x142bb2350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x30)
int32_t arg_8 = 0
*arg3 = 0
char i_1 = sub_142b96700(arg1)
uint32_t i = zx.d(i_1)

if (i_1 == 0)
    return -1

if (i.b s< 0)
    i = (i & 0x7f) << 8 | zx.d(sub_142b96700(arg1))

if (i u> arg2)
    return 0

int64_t result = sub_142b99a90(rsi, 2, 0, i + 1, 0, &arg_8)

if (arg_8 != 0)
    return 0

*arg3 = i
uint64_t rbx_1 = 0
int16_t rdi_1 = 0

if (i != 0)
    do
        uint32_t rbp_1 = zx.d(sub_142b96700(arg1))
        
        if (rbp_1.b s>= 0)
            int32_t rsi_2 = 0
            rdi_1 += zx.w(sub_142b96700(arg1))
            uint64_t rax_11 = zx.q(rbx_1.d)
            rbx_1 = zx.q(rbx_1.d + 1)
            *(result + (rax_11 << 1)) = rdi_1
            
            if (rbp_1 != 0)
                do
                    rdi_1 += zx.w(sub_142b96700(arg1))
                    *(result + (rbx_1 << 1)) = rdi_1
                    rbx_1 = zx.q(rbx_1.d + 1)
                    
                    if (rbx_1.d u>= i)
                        return result
                    
                    rsi_2 += 1
                while (rsi_2 u< rbp_1)
        else
            rdi_1 += sub_142b967c0(arg1)
            int32_t rsi_1 = 0
            uint64_t rax_7 = zx.q(rbx_1.d)
            rbx_1 = zx.q(rbx_1.d + 1)
            *(result + (rax_7 << 1)) = rdi_1
            int32_t rbp_2 = rbp_1 & 0x7f
            
            if (rbp_2 != 0)
                do
                    rdi_1 += sub_142b967c0(arg1)
                    *(result + (rbx_1 << 1)) = rdi_1
                    rbx_1 = zx.q(rbx_1.d + 1)
                    
                    if (rbx_1.d u>= i)
                        return result
                    
                    rsi_1 += 1
                while (rsi_1 u< rbp_2)
    while (rbx_1.d u< i)

return result
