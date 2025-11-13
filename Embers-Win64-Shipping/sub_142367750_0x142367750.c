// 函数: sub_142367750
// 地址: 0x142367750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int512_t result
rax, result = sub_140e15d20(arg2)

if (rax != 0)
    void* rax_1
    rax_1, result = sub_14259c320()
    void* rcx_1 = *(rax + 0x10)
    int64_t rdx = sx.q(*(rax_1 + 0x38))
    
    if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == rax_1 + 0x30)
        result.o = *(rax + 0xf8)
        return result

result.o = zx.o(0)
return result
