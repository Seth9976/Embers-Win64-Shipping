// 函数: sub_1423ac710
// 地址: 0x1423ac710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x128)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    void*** rax_1 = sub_1423a4cd0(rax)
    rbx = rax_1
    
    if (rax_1 != 0)
        rax_1[1].d += 1

if (&rbx[2] != arg2 + 0x10)
    int32_t r8_1 = *(rbx + 0x1c)
    int32_t r14_1 = *(arg2 + 0x18)
    int64_t r15_1 = *(arg2 + 0x10)
    rbx[3].d = r14_1
    
    if (r14_1 != 0 || r8_1 != 0)
        sub_1423b4ad0(&rbx[2], r14_1, r8_1)
        memcpy(rbx[2], r15_1, r14_1 * 0xf0)
    else
        *(rbx + 0x1c) = r14_1

sub_1423a6640(&rbx[4], arg2 + 0x20)
sub_1405af100(&rbx[6], arg2 + 0x30)
rbx[0x24].d = *(arg2 + 0x120)
int32_t rax_4 = rbx[1].d
*arg1 = rbx
rbx[1].d = rax_4

if (rax_4 == 0)
    (**rbx)(rbx, 1)

return arg1
