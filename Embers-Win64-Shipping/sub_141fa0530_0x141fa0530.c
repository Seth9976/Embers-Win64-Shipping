// 函数: sub_141fa0530
// 地址: 0x141fa0530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0x10].d)
int32_t r8 = 0

if (rax.d s> 0)
    int128_t* rdx = arg1[0xf]
    int128_t* r9_1 = rdx
    int64_t rax_1 = 0
    
    do
        uint32_t zmm1[0x4] = *r9_1
        zmm1[0] = zmm1[0] f- arg3.d
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f<= arg6.d)
            *(rdx + (sx.q(r8) << 3) + 4) = arg4.d
            sub_141f89520(arg1, arg2, r8)
            return arg2
        
        if (zmm1[0] f> arg3.d)
            break
        
        r8 += 1
        rax_1 += 1
        r9_1 += 8
    while (rax_1 s< rax)

int32_t rax_3 = data_143a2d8ec + 1
int32_t var_10 = rax_3
data_143a2d8ec = rax_3
sub_141f7f880(arg1, arg2, arg3, arg4, arg5)
return arg2
