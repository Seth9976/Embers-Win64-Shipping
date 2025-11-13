// 函数: sub_140f7a3e0
// 地址: 0x140f7a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg3
char rdi = 0
int32_t arg_8 = 0
int32_t var_98
char rax_3

if (arg1[0x109].b != 0)
    int64_t* rcx = *arg1
    rdi = 1
    rax_3, arg3 = sub_140e19840(*(*(*rcx + 0x80))(rcx, &var_98), arg5)

int64_t rbp

if (arg1[0x109].b == 0 || rax_3 == 0
        || (not(data_143dbb1f0.d f!= *(arg4 + 0x28)) && data_143dbb1f0:4.d f== *(arg4 + 0x2c)))
    rbp.b = 0
else
    rbp = 1

int64_t* var_90

if ((rdi & 1) != 0 && var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        arg3 = (**var_90)(var_90)
        int32_t temp1_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp1_1 == 1)
            arg3 = (*(*var_90 + 8))(var_90, 1)

if (rbp.b == 0)
    *arg2 = 0
else
    float zmm2 = *(r15 + 0x28)
    float zmm4 = *(r15 + 0x24)
    int128_t zmm7 = *(r15 + 0x1c)
    arg5.o = zmm7
    int128_t zmm8 = *(r15 + 0x20)
    arg5.d = arg5.d f* zmm2
    var_98 = 0
    int32_t var_94_1 = 1
    int128_t zmm9 = *(arg4 + 0x18)
    arg5.d = arg5.d f- zmm8.d * zmm4
    int128_t zmm10 = *(arg4 + 0x1c)
    int128_t zmm6
    zmm6.d = zmm9.d f- *(r15 + 0x2c)
    zmm9.d = zmm9.d f- *(r15 + 0x2c)
    int32_t var_88_1 = 1
    float zmm0 = zmm10.d f- *(r15 + 0x30)
    zmm10.d = zmm10.d f- *(r15 + 0x30)
    float zmm5 = 1f f/ arg5.d
    zmm7.d = zmm7.d f* zmm5
    zmm8.d = zmm8.d f* zmm5
    zmm6.d = zmm6.d f* zmm2 * zmm5
    zmm10.d = zmm10.d f* zmm7.d
    zmm6.d = zmm6.d f- zmm0 * zmm4 * zmm5
    zmm9.d = zmm9.d f* zmm8.d
    float var_84_1 = *(r15 + 8)
    zmm10.d = zmm10.d f- zmm9.d
    var_90.d = zmm6.d
    var_90:4.d = zmm10.d
    sub_140f7c300(arg1, &var_98, arg3.d)
    *(arg1 + 0x84a) = 1
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
