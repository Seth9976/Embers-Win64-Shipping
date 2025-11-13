// 函数: sub_140be1ca0
// 地址: 0x140be1ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)
void* rsi = arg2
void* rax = sub_140cbe090()

if (rax != 0)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        rsi = sub_140d21950(rsi, rbx)

int64_t rbx_1 = *(arg3 + 0x88)
*(arg3 + 0x88) = arg1
int64_t result = (*(arg1 + 0xd8))(rsi, arg3, arg4)
*(arg3 + 0x88) = rbx_1
return result
