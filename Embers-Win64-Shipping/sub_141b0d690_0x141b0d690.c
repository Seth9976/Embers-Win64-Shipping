// 函数: sub_141b0d690
// 地址: 0x141b0d690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((sub_140b5b8a0(0, 0) & 1) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* result = sub_140d2dfc0(sub_141b36a10(), arg1, 0, 8, 0, 0, 0, 0, 0)

if (result != 0)
    void* rax_2 = sub_141b36a10()
    void* rcx_2 = *(result + 0x10)
    int64_t rdx_1 = sx.q(*(rax_2 + 0x38))
    
    if (rdx_1.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_1 << 3)) == rax_2 + 0x30)
        return result

return nullptr
