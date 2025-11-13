// 函数: sub_140cd7f80
// 地址: 0x140cd7f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
void* result = sub_140d23cf0(rsi)

if (result.b != 0)
    int64_t* rbx_1 = *arg1
    int64_t rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax = (rdi_1 + 1).d
    rbx_1[1].d = rax
    
    if (rax s> *(rbx_1 + 0xc))
        sub_1405a4d70(rbx_1)
    
    result = *rbx_1
    *(result + (rdi_1 << 3)) = rsi

return result
