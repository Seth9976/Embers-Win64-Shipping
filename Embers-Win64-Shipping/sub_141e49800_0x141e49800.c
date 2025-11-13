// 函数: sub_141e49800
// 地址: 0x141e49800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
void* const rax_5

if (arg1 == 0)
    rax_5 = nullptr
else
    void* rdi_1 = arg1[4]
    
    if (rdi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rdi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            zmm6 = sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rax_5 = arg1[0x48]
    
    if (rax_5 == 0)
        rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5

*(rax_5 + 0x820) = zmm6.d
int64_t* result = sub_141df83c0(arg1)

if (result != 0)
    *(result + 0x12c) = zmm6.d

return result
