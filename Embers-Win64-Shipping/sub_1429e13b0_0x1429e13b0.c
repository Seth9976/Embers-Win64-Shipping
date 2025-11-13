// 函数: sub_1429e13b0
// 地址: 0x1429e13b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1 + 0x40
void* rdi = arg1 + 0x70
int64_t i_1 = 0xf
int64_t result
int64_t i

do
    if (*rbx s> 0 && *(rbx + 0x18) != 0)
        (*(arg1 + 0x38))(*(arg1 + 0x28), rdi - 0x18)
        *rbx = 0
    
    sub_1429dde60(*(rbx + 8))
    *(rbx + 8) = 0
    result = sub_142a1cda0(rdi)
    rdi += 0xd0
    rbx = &rbx[0x34]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
