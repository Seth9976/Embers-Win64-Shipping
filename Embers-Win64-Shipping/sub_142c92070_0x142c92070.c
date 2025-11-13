// 函数: sub_142c92070
// 地址: 0x142c92070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1
char* rdi = -ffffffffffffffff
*arg6 = 0
*arg4 = 0

do
    rdi = &rdi[1]
while (rdi[arg2] != 0)

do
    rbx += 1
while (arg3[rbx] != 0)

int64_t r12 = rdi * 2

if (r12 u>= rdi)
    int64_t rsi_1 = r12 + rbx
    
    if (rsi_1 u>= rbx && rsi_1 + 2 u>= 2)
        char* rax_2 = data_143ccb898(rsi_1 + 2)
        
        if (rax_2 == 0)
            return zx.q((&rax_2[0x1b]).d)
        
        memcpy(rax_2, arg2, rdi.d)
        *(rax_2 + rdi) = 0
        memcpy(&rax_2[1] + rdi, arg2, rdi.d)
        rax_2[r12 + 1] = 0
        memcpy(&rax_2[2 + r12], arg3, rbx.d)
        int32_t rax_4 = sub_142c75c90(arg1, rax_2, rsi_1 + 2, arg4, arg5, arg6)
        data_143ccb8a0(rax_2)
        return zx.q(rax_4)

return 0x1b
