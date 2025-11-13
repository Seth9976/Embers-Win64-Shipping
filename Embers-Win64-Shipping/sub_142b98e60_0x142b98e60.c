// 函数: sub_142b98e60
// 地址: 0x142b98e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* rsi = *(arg1[1] + 0x90)
int64_t rbp = rsi[2]
void* r14 = rsi[3]
*arg1 = rsi[1]
int64_t** rax_2 = (*(rbp + 8))(rbp, 0x38)

if (rax_2 != 0)
    __builtin_memset(rax_2, 0, 0x38)
else
    rbx = (&rax_2[8]).d

if (rbx == 0)
    arg1[0x1e] = rax_2
    
    if ((**rsi & 0x200) == 0)
        rbx = sub_142b92b70(rbp, rax_2)
    
    if (rbx == 0)
        int64_t rax_5 = *(r14 + 0x68)
        
        if (rax_5 != 0)
            return rax_5(arg1)

return zx.q(rbx)
