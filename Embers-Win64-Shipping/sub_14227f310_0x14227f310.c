// 函数: sub_14227f310
// 地址: 0x14227f310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x53]

if (rbx == 0)
    return 

void* rax_1 = sub_142531230()
void* r8_1 = *(rbx + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int64_t rax_3 = (*(*arg1 + 0x150))(arg1)
int64_t* rax_4 = sub_142168400()
int64_t r9_2 = *rax_4

if (arg2 != 0)
    jump(*(r9_2 + 0x328))

(*(r9_2 + 0x330))(rax_4, rax_3, zx.q(*(rbx + 0xb8)), r9_2)
