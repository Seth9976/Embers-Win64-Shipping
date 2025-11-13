// 函数: sub_141e42b70
// 地址: 0x141e42b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
void* i = arg1[0x17]
int64_t rdi = 0

for (void* rsi_2 = sx.q(arg1[0x18].d) * 0x30 + i; i != rsi_2; i += 0x30)
    void* rcx = *(i + 8)
    int64_t rax_1 = 0x30
    
    if (rcx != 0)
        rax_1 = sub_141e02f60(rcx) + 0x30
    
    rdi += rax_1

*(arg2 + 8) += rdi + 0x10
int64_t* rax_5 = sub_1405f89a0(sub_141f88540())
int64_t r8 = *rax_5
int64_t result = (*(r8 + 0xa8))(rax_5, arg1, r8)
*(arg2 + 8) += result
return result
