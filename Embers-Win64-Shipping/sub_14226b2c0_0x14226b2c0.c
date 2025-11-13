// 函数: sub_14226b2c0
// 地址: 0x14226b2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || sub_141dcdc50(arg1).d == 3)
    return 

int64_t* rbx_2 = arg1[0x53]

if (rbx_2 == 0)
    return 

void* rax_1 = sub_14254f450()
void* rdx = rbx_2[2]
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

if ((*(*rbx_2 + 0x268))(rbx_2, rdx) != 0)
    rbx_2 = rbx_2[0x346]

int64_t arg_10
sub_140d3a3a0(&arg_10, arg2)

if (rbx_2[0x26f].d == *(rbx_2 + 0x13a4))
    return 

int64_t rdx_2 = arg_10
void* r9_1 = &rbx_2[0x275]
void* r8_2 = *(r9_1 + 8)
uint32_t r11_2 = (rdx_2 u>> 0x20).d

if (r8_2 != 0)
    r9_1 = r8_2

int32_t rcx_6 = *(r9_1 + (((sx.q(r11_2) ^ sx.q(rdx_2.d)) & (sx.q(rbx_2[0x277].d) - 1)) << 2))

if (rcx_6 == 0xffffffff)
    return 

int64_t r10_1 = rbx_2[0x26e]
int64_t r8_3

while (true)
    r8_3 = sx.q(rcx_6)
    int64_t rax_6 = r8_3 * 3
    rax = *(r10_1 + (rax_6 << 3))
    
    if (rax.d != rdx_2.d || (rax u>> 0x20).d != r11_2)
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b != 0)
        break
    
    rcx_6 = *(r10_1 + (rax_6 << 3) + 0x10)
    
    if (rcx_6 == 0xffffffff)
        return 

if (rcx_6 == 0xffffffff)
    return 

void* rcx_7 = r10_1 + r8_3 * 0x18

if (rcx_7 == 0 || *(rcx_7 + 8) == 0)
    return 

rax = sub_141dc3780(arg2)

if (rax != 0)
    *(rax + 0xd0) |= 1
