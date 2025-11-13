// 函数: sub_142c88ec0
// 地址: 0x142c88ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg5
PSTR rdi = arg3
void* rsi = nullptr
arg3.b = 1
void* rbx = arg4
*r15 = 0
int64_t rax = sub_142c65dc0(*arg1, nullptr, arg3.b, rbx)

if (rax s>= 0)
    while (true)
        if (sub_142c64080(arg2, -1, -1, rax) s> 0)
            int32_t result = sub_142c64a40(arg2, rdi, rbx.d, &arg5)
            
            if (result == 0x51)
                goto label_142c88f52
            
            if (result != 0)
                return result
            
            int64_t* rax_2 = arg5
            
            if (rbx == rax_2)
                *r15 = rax_2 + rsi
                return 0
            
            if (rax_2 != 0)
                rbx -= rax_2
                rdi += rax_2
                rsi += rax_2
            label_142c88f52:
                rax = sub_142c65dc0(*arg1, nullptr, 1, rbx)
                
                if (rax s< 0)
                    break
                
                continue
        
        return -1

return 0x1c
