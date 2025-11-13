// 函数: sub_142c77910
// 地址: 0x142c77910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0xdc]
void* rsi = arg1[0xd8]
int64_t arg_8
int32_t result = sub_142c648f0(arg1, 0, rax + rsi, 0x9000 - rax, &arg_8)

if (result != 0)
    return result

int64_t rax_1 = arg_8

if (rax_1 != 0)
    arg1[0xdc] += rax_1
    
    if (arg1[0xdc] u>= 4)
        int64_t rbx_2 = zx.q(sub_142c8ebb0(rsi + 2)) + 4
        
        if (arg1[0xdc] u>= rbx_2)
            if (rbx_2 u>= 0x25)
                void* rdi_1 = (zx.q(*(rsi + 0x24)) << 1) + 0x25
                
                if (rbx_2 u>= rdi_1 + 2 && rbx_2 u< rdi_1 + 2 + zx.q(sub_142c8ebc0(rdi_1 + rsi)))
                    return 0x1a
            
            *arg2 = rsi

return 0
