// 函数: sub_142a1a050
// 地址: 0x142a1a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* rbx)[0x20] = arg5
int32_t arg_8
int32_t rax
uint8_t zmm6[0x20]
uint8_t zmm6_1[0x20]
uint8_t zmm7[0x20]
uint8_t zmm7_1[0x20]
char zmm11[0x20]
char zmm11_1[0x20]
int16_t zmm12[0x10]
int16_t zmm12_1[0x10]
uint8_t zmm13[0x20]
uint8_t zmm13_1[0x20]
rax, zmm6_1, zmm7_1, zmm11_1, zmm12_1, zmm13_1 =
    sub_142a06cb0(arg1, arg2, arg3, arg4, zmm6, zmm7, zmm11, zmm12, zmm13, rbx, arg6, 0x40, &arg_8)
int32_t rax_2 = sub_142a06cb0(&arg1[1], arg2, arg3, arg4, zmm6_1, zmm7_1, zmm11_1, zmm12_1, 
    zmm13_1, &rbx[1], arg6, 0x40, &arg5) + rax
int32_t r8_2 = arg5.d + arg_8
*arg7 = r8_2
int64_t rcx_2 = sx.q(rax_2)
return zx.q(r8_2 - ((rcx_2 * rcx_2) s>> 0xc).d)
