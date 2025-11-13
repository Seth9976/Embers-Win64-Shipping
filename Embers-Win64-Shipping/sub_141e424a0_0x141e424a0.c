// 函数: sub_141e424a0
// 地址: 0x141e424a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]
int512_t result

if (rdi != 0)
    void* rax_1
    rax_1, result = sub_142591550()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8_1
        r8_1.b = 1
        sub_141f3e990(arg1[4], 1, r8_1.b)

void* rax_5 = arg1[0x48]

if (rax_5 == 0)
    rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5

result.o = *(rax_5 + 0x820)
return result
