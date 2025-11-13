// 函数: sub_140b270f0
// 地址: 0x140b270f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg1
void* rbx_2 = (sx.q(arg1[1].d) << 4) + r11
int32_t r10 = 0xa

while (r11 != rbx_2)
    int32_t rax_1 = *(r11 + 8)
    int32_t rcx_1 = r10 - 1 + rax_1
    
    if (rax_1 == 0)
        rcx_1 = r10
    
    r11 += 0x10
    r10 = rcx_1 + 3

int64_t var_28 = 0
int64_t var_20 = 0

if (r10 + 1 s> 0)
    sub_1405947f0(&var_28, r10 + 1)

int64_t* i = *arg1

for (void* rdi_3 = &i[sx.q(arg1[1].d) * 2]; i != rdi_3; i = &i[2])
    int32_t rax_2 = i[1].d
    int32_t r8 = rax_2 - 1
    
    if (rax_2 == 0)
        r8 = 0
    
    sub_140a20ba0(&var_28, *i, r8)
    sub_140a20ba0(&var_28, &data_142d6acb4, 2)

char rax_4 = sub_140b27210(&var_28, arg2, arg3, arg4, arg5)
int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rax_4)
