// 函数: sub_141fe6220
// 地址: 0x141fe6220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_78
__builtin_memset(&var_78, 0, 0x18)
float var_60
int128_t zmm6
int128_t zmm7
zmm6, zmm7 = sub_141fdef20(&arg1[7], &var_60, arg3, &var_78)
int64_t rbx
rbx.b = 1
int64_t zmm0_1

if ((*(arg1 + 0x5c) & 1) != 0)
    if (arg4 != 0)
        rbx = 1
        
        if (arg4 s< 0)
            rbx = 0
    else
        if (arg5 != 0)
            int32_t rax_3 = *(arg5 + 4) * 0xbb38435 + 0x3619636b
            *(arg5 + 4) = rax_3
            zmm0_1.d = (rax_3 u>> 9 | 0x3f800000).d f- 1f
        else
            zmm0_1, zmm6 = sub_140a50670()
        
        if (not(zmm0_1.d f<= 0.5f))
            rbx.b = 0

(*(*arg1 + 0x2b0))(arg1, &var_60)
float var_5c
float var_58
float var_54
float var_50
float var_4c

if ((*(arg1 + 0x5c) & 1) == 0)
    int128_t var_28_1 = zmm6
    int128_t var_38_1 = zmm7
    float zmm2
    
    if (arg5 != 0)
        int32_t rcx_3 = *(arg5 + 4) * 0xbb38435 + 0x3619636b
        zmm6.d = (rcx_3 u>> 9 | 0x3f800000).d f- 1f
        zmm7.d = ((rcx_3 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
        *(arg5 + 4) = (rcx_3 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
        zmm2 = (((rcx_3 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f
    else
        int128_t zmm0_2
        int512_t zmm6_1
        zmm0_2, zmm6_1 = sub_140a50670()
        zmm6_1.o = zmm0_2
        zmm7 = sub_140a50670()
        float zmm0_4
        zmm0_4, zmm6 = sub_140a50670()
        zmm2 = zmm0_4
    
    *arg2 = (var_54 - var_60) * zmm2 + var_60
    *(arg2 + 4) = (var_50 - var_5c) f* zmm7.d + var_5c
    arg2[1].d = (var_4c - var_58) f* zmm6.d + var_58
else
    float zmm1
    
    if (rbx.b != 1)
        zmm1 = var_5c
        var_78.d = var_60.d
        zmm0_1 = var_58
    else
        zmm1 = var_50
        var_78.d = var_54.d
        zmm0_1 = var_4c
    
    var_78:8.d = zmm0_1.d
    var_78:4.d = zmm1
    int32_t rax_7 = var_78:8.d
    *arg2 = var_78.q
    arg2[1].d = rax_7
return arg2
