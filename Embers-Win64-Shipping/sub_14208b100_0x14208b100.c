// 函数: sub_14208b100
// 地址: 0x14208b100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
void* r9_1 = sx.q(*(arg1 + 0x30)) * 0x78 + rax

if (rax != r9_1)
    while (true)
        if (*(rax + 0x18) != arg3)
            void* rcx_1 = *(rax + 8)
            
            if (rcx_1 == 0 || *(rcx_1 + 0x18) != arg3)
                rax += 0x78
                
                if (rax == r9_1)
                    break
                
                continue
        
        *arg2 = *(rax + 0x10)
        arg2[1] = *(rax + 0x20)
        return arg2

__builtin_memset(arg2, 0, 0x20)
return arg2
