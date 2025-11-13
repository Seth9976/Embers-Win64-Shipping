// 函数: sub_142b917e0
// 地址: 0x142b917e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *(arg1 + 0x90) == 0)
    return 0x23

void* rax = *(arg1 + 0xd0)
*(rax + 0x60) -= 1

if (*(*(arg1 + 0xd0) + 0x60) s> 0)
    return 0

void* rdi = *(arg1 + 0x90)
void* rsi = *(rdi + 0x10)

if (rdi != -0x20)
    for (int64_t* i = *(rdi + 0x20); i != 0; i = i[1])
        if (i[2] == arg1)
            if (rdi != -0x20)
                void* r8_1 = *i
                void** rax_4 = i[1]
                
                if (r8_1 == 0)
                    *(rdi + 0x20) = rax_4
                else
                    *(r8_1 + 8) = rax_4
                
                if (rax_4 == 0)
                    *(rdi + 0x28) = r8_1
                else
                    *rax_4 = r8_1
            
            (*(rsi + 0x10))(rsi)
            sub_142b98490(rsi, arg1, rdi)
            return 0

return 0x23
