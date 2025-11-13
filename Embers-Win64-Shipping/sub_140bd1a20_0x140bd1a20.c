// 函数: sub_140bd1a20
// 地址: 0x140bd1a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x20)

for (void* rbp_2 = (sx.q(*(arg1 + 0x28)) << 6) + i; i != rbp_2; i += 0x40)
    char temp0_1 = *(i + 0x38)
    *(i + 0x38) = 1
    int64_t rax_1
    rax_1.b = temp0_1
    char temp0_2 = *(i + 0x39)
    *(i + 0x39) = 1
    int64_t rax_2
    rax_2.b = temp0_2
    sub_140be3360(*(i + 8))

char temp0_3 = *(arg1 + 0x19)
*(arg1 + 0x19) = 1
int64_t rax_3
rax_3.b = temp0_3
char temp0_4 = *(arg1 + 0x18)
*(arg1 + 0x18) = 1
int64_t rdi
rdi.b = temp0_4
return sub_140be3360(arg1 + 0x388) __tailcall
