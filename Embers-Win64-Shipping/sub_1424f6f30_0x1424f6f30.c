// 函数: sub_1424f6f30
// 地址: 0x1424f6f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rbx = &var_48
char arg_10 = 0

if (rax_2 != 0)
    rbx = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
uint32_t rcx_2 = zx.d(arg_10)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
int32_t var_58
int64_t zmm0
int32_t zmm1

if (rcx_2 == 1)
    zmm1 = *(rbx + 4)
    var_58 = (*rbx).d
    zmm0 = *(rbx + 8)
else if (rcx_2 == 2)
    zmm1 = *(rbx + 0x14)
    var_58 = (*(rbx + 0x10)).d
    zmm0 = *(rbx + 0x18)
else if (rcx_2 == 3)
    zmm1 = *(rbx + 0x24)
    var_58 = (*(rbx + 0x20)).d
    zmm0 = *(rbx + 0x28)
else
    zmm1 = data_143dbb1fc
    var_58 = data_143dbb1f8.d
    zmm0 = data_143dbb200

int32_t result = zmm0.d
int32_t var_54 = zmm1
*arg3 = var_58.q
arg3[1].d = result
return result
