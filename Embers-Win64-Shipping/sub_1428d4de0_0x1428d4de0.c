// 函数: sub_1428d4de0
// 地址: 0x1428d4de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
memset(arg1, 0, 0xb0)
arg1[6] = 5
int64_t rax = sub_1428a6730(0x50)
arg1[0xb] = rax

if (rax == 0)
    sub_1428a5670((rax + 0xf).d, (rax + 0x7a).d, (rax + 0x41).d, "crypto\modes\ocb128.c", 0x9f)
    return 0

arg1[1] = arg5
arg1[4] = arg6
*arg1 = arg4
arg1[2] = arg2
arg1[3] = arg3
arg4(&arg1[7], &arg1[7], arg2)
uint8_t rbx_1 = neg.b(arg1[7].b u>> 7) & 0x87
sub_1428d5190(&arg1[7], 1, &arg1[9])
*(arg1 + 0x57) ^= rbx_1
char* rdi_1 = arg1[0xb]
uint8_t rbx_2 = neg.b(arg1[9].b u>> 7) & 0x87
sub_1428d5190(&arg1[9], 1, rdi_1)
rdi_1[0xf] ^= rbx_2
char* rcx_4 = arg1[0xb]
uint8_t rbx_3 = neg.b(*rcx_4 u>> 7) & 0x87
sub_1428d5190(rcx_4, 1, &rcx_4[0x10])
rcx_4[0x1f] ^= rbx_3
void* rax_4 = arg1[0xb]
uint8_t rbx_4 = neg.b(*(rax_4 + 0x10) u>> 7) & 0x87
sub_1428d5190(rax_4 + 0x10, 1, rax_4 + 0x20)
*(rax_4 + 0x2f) ^= rbx_4
void* rax_5 = arg1[0xb]
uint8_t rbx_5 = neg.b(*(rax_5 + 0x20) u>> 7) & 0x87
sub_1428d5190(rax_5 + 0x20, 1, rax_5 + 0x30)
*(rax_5 + 0x3f) ^= rbx_5
void* rax_6 = arg1[0xb]
uint8_t rbx_6 = neg.b(*(rax_6 + 0x30) u>> 7) & 0x87
sub_1428d5190(rax_6 + 0x30, 1, rax_6 + 0x40)
*(rax_6 + 0x4f) ^= rbx_6
arg1[5] = 4
return 1
