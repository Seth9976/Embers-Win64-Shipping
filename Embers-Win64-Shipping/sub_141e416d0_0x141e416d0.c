// 函数: sub_141e416d0
// 地址: 0x141e416d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x268)
int512_t result

if (rbx != 0)
    void* rax_1
    rax_1, result = sub_1424771c0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        result.o = *(rbx + 0x8c)
        return result
    
    void* rbx_1 = *(arg1 + 0x268)
    
    if (rbx_1 != 0)
        void* rax_4
        rax_4, result = sub_14246bfb0()
        void* rdx_2 = *(rbx_1 + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            result.o = *(rbx_1 + 0x90)
            return result

result.o = zx.o(0)
return result
