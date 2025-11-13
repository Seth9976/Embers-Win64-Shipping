// 函数: sub_142a19f00
// 地址: 0x142a19f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t (* rdi)[0x20] = arg8
int32_t arg_8
int32_t rax
uint8_t zmm6[0x20]
uint8_t zmm6_1[0x20]
uint8_t zmm7[0x20]
uint8_t zmm7_1[0x20]
char zmm11[0x20]
char zmm11_1[0x20]
uint8_t zmm12[0x20]
uint8_t zmm12_1[0x20]
char zmm13[0x20]
char zmm13_1[0x20]
uint8_t zmm14[0x20]
uint8_t zmm14_1[0x20]
rax, zmm6_1, zmm7_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 = sub_142a06430(arg1, arg2, arg3, arg4, 
    zmm6, zmm7, zmm11, zmm12, zmm13, zmm14, arg5, arg6, rdi, 0x40, 0x40, &arg_8)
int32_t rax_1 = sub_142a06430(&arg1[1], arg2, arg3, arg4, zmm6_1, zmm7_1, zmm11_1, zmm12_1, 
    zmm13_1, zmm14_1, &arg5[1], arg6, &rdi[1], 0x40, 0x40, &arg8)
int32_t r8_3 = arg8.d + arg_8
*arg7 = r8_3
int64_t rcx_2 = sx.q(rax_1 + rax)
return zx.q(r8_3 - ((rcx_2 * rcx_2) s>> 0xc).d)
