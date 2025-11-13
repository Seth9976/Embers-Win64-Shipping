// 函数: sub_1422b4240
// 地址: 0x1422b4240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0x40
void*** rbx = nullptr
void* rax = arg1 + 0x14
int64_t i

do
    *(rax - 0x14) = -1
    *(rax - 0xc) = 0
    *(rax - 4) = 0
    *(rax + 4) = 0
    *(rax + 0xc) = -1
    __builtin_memset(rax + 0x14, 0, 0x11)
    *(rax + 0x2c) = -1
    __builtin_memset(rax + 0x34, 0, 0x11)
    *(rax + 0x4c) = -1
    __builtin_memset(rax + 0x54, 0, 0x11)
    *(rax + 0x6c) = -1
    __builtin_memset(rax + 0x74, 0, 0x11)
    *(rax + 0x8c) = -1
    __builtin_memset(rax + 0x94, 0, 0x11)
    *(rax + 0xac) = -1
    __builtin_memset(rax + 0xb4, 0, 0x11)
    *(rax + 0xcc) = -1
    __builtin_memset(rax + 0xd4, 0, 0x11)
    *(rax + 0xec) = -1
    __builtin_memset(rax + 0xf4, 0, 0x11)
    *(rax + 0x10c) = -1
    __builtin_memset(rax + 0x114, 0, 0x11)
    *(rax + 0x12c) = -1
    __builtin_memset(rax + 0x134, 0, 0x11)
    *(rax + 0x14c) = -1
    __builtin_memset(rax + 0x154, 0, 0x11)
    *(rax + 0x16c) = -1
    __builtin_memset(rax + 0x174, 0, 0x11)
    *(rax + 0x18c) = -1
    __builtin_memset(rax + 0x194, 0, 0x11)
    *(rax + 0x1ac) = -1
    __builtin_memset(rax + 0x1b4, 0, 0x11)
    *(rax + 0x1cc) = -1
    __builtin_memset(rax + 0x1d4, 0, 0x11)
    *(rax + 0x1ec) = -1
    __builtin_memset(rax + 0x1f4, 0, 0x11)
    *(rax + 0x20c) = -1
    __builtin_memset(rax + 0x214, 0, 0x11)
    *(rax + 0x22c) = -1
    __builtin_memset(rax + 0x234, 0, 0x11)
    *(rax + 0x24c) = -1
    __builtin_memset(rax + 0x254, 0, 0x11)
    *(rax + 0x26c) = -1
    __builtin_memset(rax + 0x274, 0, 0x11)
    *(rax + 0x28c) = -1
    __builtin_memset(rax + 0x294, 0, 0x11)
    *(rax + 0x2ac) = -1
    __builtin_memset(rax + 0x2b4, 0, 0x11)
    *(rax + 0x2cc) = -1
    __builtin_memset(rax + 0x2d4, 0, 0x11)
    *(rax + 0x2ec) = -1
    __builtin_memset(rax + 0x2f4, 0, 0x11)
    *(rax + 0x30c) = -1
    __builtin_memset(rax + 0x314, 0, 0x11)
    *(rax + 0x32c) = -1
    __builtin_memset(rax + 0x334, 0, 0x11)
    *(rax + 0x34c) = -1
    __builtin_memset(rax + 0x354, 0, 0x11)
    *(rax + 0x36c) = -1
    __builtin_memset(rax + 0x374, 0, 0x11)
    *(rax + 0x38c) = -1
    __builtin_memset(rax + 0x394, 0, 0x11)
    *(rax + 0x3ac) = -1
    __builtin_memset(rax + 0x3b4, 0, 0x11)
    *(rax + 0x3cc) = -1
    __builtin_memset(rax + 0x3d4, 0, 0x11)
    rax += 0x400
    i = i_1
    i_1 -= 0x20
while (i != 0x20)
int64_t rcx = 0
*(arg1 + 0x800) = arg4
*(arg1 + 0x808) = 0
*(arg1 + 0x810) = 0
void* rbp = *arg2
int64_t* rdi = *(rbp + 0x18)

if (rdi != 0)
    int32_t rax_2 = rdi[1].d
    
    if (rax_2 != 0)
        rdi[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rcx = *(rbp + 0x10)

*(arg1 + 0x818) = 0
*(arg1 + 0x820) = 0
*(arg1 + 0x828) = rcx
*(arg1 + 0x830) = rdi

if (rdi != 0)
    int32_t rax_3 = rdi[1].d
    rdi[1].d = rax_3
    
    if (rax_3 == 0)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (*(rbp + 0x30) != 0 && *(rbp + 0x24) != 0)
    sub_1422ca6c0(rbp, arg1 + 0x818, arg3)

*(arg1 + 0x838) = 0
*(arg1 + 0x840) = 0
void*** rax_6 = j_sub_140a82f30(0xc0)

if (rax_6 != 0)
    rbx = sub_140bd5be0(rax_6, 0)

*(arg1 + 0x848) = rbx
*(arg1 + 0x850) = 0
return arg1
