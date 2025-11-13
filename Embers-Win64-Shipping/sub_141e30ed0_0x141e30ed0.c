// 函数: sub_141e30ed0
// 地址: 0x141e30ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int128_t zmm7_1
rax, zmm7_1 = sub_141e29f90(arg1, arg2, arg3, arg4)
void* rax_1
void* rcx
int64_t rdx

if (arg2 != 0)
    rax_1 = sub_142469550()
    rcx = arg2[2]
    rdx = sx.q(*(rax_1 + 0x38))

if (arg2 != 0 && rdx.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx << 3)) == rax_1 + 0x30)
    if (not(sub_141e40d60(arg2) f== zmm7_1.d))
        sub_141e499c0(arg2, zmm7_1, 1)
else if (rax != 0 && arg2 != 0)
    int64_t* rax_3 = sub_141df8320(arg2, rax)
    
    if (rax_3 == 0)
        return rax_3
    
    sub_141defe90(&rax_3[0x26], 0x3f800000[0])
    int32_t zmm7_2 = sub_141defc30(&rax_3[0x26], 0x3f800000)
    
    if (*(rax_3 + 0x17c) != 0)
        *(rax_3 + 0x17c) = 0
    
    void arg_10
    
    if (&arg_10 != &rax_3[0x30])
        rax_3[0x30].d = zmm7_2
        *(rax_3 + 0x184) = 1

return rax
