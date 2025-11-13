// 函数: sub_141ca1c20
// 地址: 0x141ca1c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140b6b610()
int32_t* i = *(arg2 + 0x38)
int32_t rbx = 0

for (void* rdi_1 = &i[sx.q(*(arg2 + 0x40))]; i != rdi_1; i = &i[1])
    int64_t r8_1 = *rax
    int32_t rax_1 = (*(r8_1 + 8))(rax, zx.q(*i), r8_1)
    
    if (rax_1 == 3)
        rbx = 3
        break
    
    if (rax_1 s> rbx)
        rbx = rax_1

if (rbx == 0)
    return 0

if (rbx == 1)
    return 1

if (rbx == 2)
    return 2

return 3
