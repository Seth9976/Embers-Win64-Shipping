// 函数: sub_1426b2000
// 地址: 0x1426b2000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_6 = sub_14272a130()
    void* rdx_1 = *(arg2 + 0x10)
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
        return *(arg2 + 0x68)
    
    void* rax_10 = sub_140d3c6e0(arg2 + 0x58)
    
    if (rax_10 == 0)
        return 0
    
    return (*(*(rax_10 + 0xb0) + 0x18))(rax_10 + 0xb0, arg2)

if ((*(arg1 + 0x2d) & 1) == 0)
    return 0

void* const rbx_1 = *(arg1 - 8)
void* rax_1
int64_t rax_2
void* rdx

if (rbx_1 != 0)
    rax_1 = sub_1427297d0()
    rdx = *(rbx_1 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx_1 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx_1 = nullptr

return *(rbx_1 + 0xc0)
