// 函数: sub_141755ff0
// 地址: 0x141755ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    void* rax = (rbx << 6) + *arg1
    
    if (i_1 != 0)
        uint32_t zmm3[0x4] = data_143ef7300
        int32_t i
        
        do
            float zmm1[0x4] = data_143ef72f0
            *(rax + 0x10) = zx.o(0)
            rax += 0x40
            zmm1[0].q = zx.o(0) u>> 0x40
            *(rax - 0x40) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            *(rax - 0x20) = _mm_and_ps(data_143ef72f0, zmm3)
            *(rax - 0x10) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_14174d050(arg1, arg2, rbx.d - arg2, arg3) __tailcall
