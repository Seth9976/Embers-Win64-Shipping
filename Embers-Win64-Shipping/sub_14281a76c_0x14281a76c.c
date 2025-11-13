// 函数: sub_14281a76c
// 地址: 0x14281a76c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t rbp = *(rcx + 0xc8)
uint64_t result = sub_14281e6ec(rcx)
char rbx = 0

if (arg2 != 0)
    void* rcx_1 = *arg1
    
    if (*(rcx_1 + 0xd0) == 0 && *(rcx_1 + 0xd2) == 0 && *(rcx_1 + 0xd3) == 0 && result != 0)
        sub_14281f460(&arg1[1], &data_14370209c, 1)
    
    result = zx.q(arg2 - 1)
    
    if (result.d u<= 2 || arg2 == 5)
        void* rax = *arg1
        
        if (*(rax + 0xd0) != 0 || *(rax + 0xd2) != 0)
            rbx = 1
        
        arg2.b = rbx
        return sub_14281ba8c(arg1, arg2.b, rbp)

return result
