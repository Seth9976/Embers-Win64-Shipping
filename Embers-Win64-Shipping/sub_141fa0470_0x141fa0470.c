// 函数: sub_141fa0470
// 地址: 0x141fa0470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0xf].d)
int32_t r8 = 0

if (rax.d s> 0)
    void* rdx = arg1[0xe]
    int64_t rax_1 = 0
    arg4 = rdx + 4
    
    do
        uint32_t zmm1[0x4] = *arg4
        zmm1[0] = zmm1[0] f- arg3
        
        if (_mm_and_ps(zmm1, 0x7fffffff)[0] f<= arg7.d)
            *(sx.q(r8) * 0x1c + rdx + 8) = arg5.d
            sub_141f89520(arg1, arg2, r8)
            return arg2
        
        if (zmm1[0] f> arg3)
            break
        
        r8 += 1
        rax_1 += 1
        arg4 += 0x1c
    while (rax_1 s< rax)

int32_t rax_3 = data_143a2d8ec + 1
int32_t var_10 = rax_3
data_143a2d8ec = rax_3
char var_18 = arg6
sub_141f7f6d0(arg1, arg2, arg3, arg4.b)
return arg2
