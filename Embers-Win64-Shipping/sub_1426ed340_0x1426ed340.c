// 函数: sub_1426ed340
// 地址: 0x1426ed340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0xa0)

if (rbx != 0)
    void* rax_1 = sub_142497110()
    void* rdx = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        rbx = *(rbx + 0x250)
    
    if (rbx != 0 && ((*(arg1 + 0xdc) u>> 1).b & 1) != 0 && *arg3 == 0xffffffff)
        int32_t rax_6
        int128_t zmm6
        rax_6, zmm6 = sub_1426d5470(&arg1[0x13], rbx, *(arg2 + 0xb8), &arg1[0x1c])
        *arg3 = rax_6

return sub_1426c0fe0(arg1, arg2, arg3) __tailcall
