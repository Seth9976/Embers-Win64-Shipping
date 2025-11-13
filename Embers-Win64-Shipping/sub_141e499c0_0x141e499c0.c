// 函数: sub_141e499c0
// 地址: 0x141e499c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
zmm6 = arg2
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
            void* r8
            r8.b = 1
            zmm6 = sub_141f3e990(arg1[4], 1, r8.b)
    
    rax_5 = arg1[0x48]
    
    if (rax_5 == 0)
        rax_5 = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax_5

int128_t zmm7
return sub_141e49a70(arg1, zmm6, *(rax_5 + 0x80c), arg3, var_18, zmm7) __tailcall
