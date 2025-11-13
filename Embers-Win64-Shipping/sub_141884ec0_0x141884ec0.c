// 函数: sub_141884ec0
// 地址: 0x141884ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
void* rdi = &rbx[sx.q(*(arg1 + 0x10))]

if (rbx == rdi)
    return 0

int64_t result

do
    int64_t* rcx = *rbx
    result = (*(*rcx + 8))(rcx, arg2)
    
    if (result != 0)
        return result
    
    rbx = &rbx[1]
while (rbx != rdi)

return result
