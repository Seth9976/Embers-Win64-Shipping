// 函数: sub_1423a8780
// 地址: 0x1423a8780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) != 0 || *(arg1 + 0x58) == 0)
    return 

*(arg1 + 0x54) = 1
uint64_t rax = arg1 + 0x188
uint64_t rdx_1 = *(arg1 + 0x1f8)

if (rdx_1 != 0)
    rax = rdx_1

int64_t rdx_2 = rax + (sx.q(*(arg1 + 0x200)) << 3)

if (rax == rdx_2)
    return 

while (*rax == 0)
    rax += 8
    
    if (rax == rdx_2)
        return 

void*** rax_1 = j_sub_140a82f30(0x10)
void*** rcx_1 = rax_1

if (rax_1 == 0)
    rcx_1 = nullptr
else
    *rcx_1 = &data_143339620
    rcx_1[1] = arg1
    *(arg1 + 0x5c) += 1

int64_t* r8 = data_143db7ac8

if (r8 == 0)
    return sub_1423ae0b0(rcx_1) __tailcall

jump(*(*r8 + 0x10))
