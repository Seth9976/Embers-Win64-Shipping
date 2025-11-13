// 函数: sub_141e2ee60
// 地址: 0x141e2ee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int128_t zmm6
int128_t zmm8
result, zmm6, zmm8 = sub_141e29f90(arg1, arg3, arg4, arg6)
int64_t* rbp

if (arg3 == 0 || result == 0)
    rbp = nullptr
else
    rbp = sub_141df8320(arg3, result)

int128_t zmm7 = arg8
void* rax_2
int64_t rax_3
void* rdx_2

if (arg3 != 0)
    rax_2 = sub_142469550()
    rdx_2 = arg3[2]
    rax_3 = sx.q(*(rax_2 + 0x38))

int128_t zmm7_1

if (arg3 != 0 && rax_3.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
    sub_141e40d60(arg3)
    char r8_2
    
    if (arg7 == 0 || result != 0)
        r8_2 = 0
    else
        r8_2 = 1
    
    int128_t zmm6_1 = arg5
    
    if (zmm7.d f!= 0f)
        zmm7_1 = sub_141e499c0(arg3, zmm6_1, r8_2)
    else
        zmm7_1 = sub_141e49a70(arg3, zmm6_1, zmm6_1.d, r8_2, zmm6_1, zmm7)
    
    goto label_141e2efa0

if (rbp != 0)
    sub_141defe90(&rbp[0x26], 0x3f800000[0])
    int512_t zmm8_1
    zmm7_1, zmm8_1 = sub_141defc30(&rbp[0x26], 0x3f800000)
    zmm8_1.o = sub_141e06ce0(arg3, result)
    sub_141e07910(arg3, result, arg5)
label_141e2efa0:
    
    if (rbp != 0)
        int32_t zmm6_3
        int32_t zmm8_2
        zmm6_3, zmm8_2 = sub_141e0f0c0(arg3, zmm7_1, 0, 1)
        sub_141e250e0(rbp, zmm8_2, zmm6_3, nullptr)
        
        if (arg7 == 0)
            sub_141e30570(&arg3[0x20], arg2)
        
        if (sub_141e07c90(arg3) != 0)
            sub_141e08380(arg3)
        
        sub_141e09d20(arg3)

(*(*arg2 + 0x8d8))(arg2, 0)
sub_141f6f060(arg2)
int512_t zmm6_4
int512_t zmm8_3
zmm6_4, zmm8_3 = sub_1405c6ac0(arg2, 0, 0)
(*(*arg2 + 0x908))(arg2)
sub_141ee8690(arg2)
sub_141ee8470(arg2)
zmm8_3.o = zmm8
zmm6_4.o = zmm6
return result
