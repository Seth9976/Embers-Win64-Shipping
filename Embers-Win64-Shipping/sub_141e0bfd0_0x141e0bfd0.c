// 函数: sub_141e0bfd0
// 地址: 0x141e0bfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
char result = arg2[5].b & 3

if (result == 3)
    return result

void* rsi_1 = arg1[4]

if (rsi_1 != 0)
    void* rax = sub_142591550()
    void* rdx = *(rsi_1 + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30)
        uint32_t rax_3
        void* r8_1
        
        if (data_143de5480 != 0)
            rax_3, r8_1 = GetCurrentThreadId()
            rax_3.b = rax_3 == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            r8_1.b = 1
            zmm1 = sub_141f3e990(arg1[4], 1, r8_1.b)

void* rdx_1 = arg1[0x48]

if (rdx_1 == 0)
    void* rax_5 = (*(*arg1 + 0x300))(arg1, rdx_1)
    arg1[0x48] = rax_5
    rdx_1 = rax_5

return sub_141df2e50(arg2, rdx_1 + 0x4a0, zmm1)
