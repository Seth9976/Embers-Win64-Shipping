// 函数: sub_142870200
// 地址: 0x142870200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *(arg1 + 0xb0)

if (*(rax + 0x1f4) == 0 && *(rax + 0x1f8) == 0)
    int64_t r8_1 = *(rax + 0x208)
    
    if (r8_1 == 0)
        *(rax + 0x1fc) = 0xf4240
    else
        *(*(arg1 + 0xb0) + 0x1fc) = r8_1(arg1, 0)

sub_142870390(*(arg1 + 0xb0) + 0x1f4)
void* rcx_3 = *(arg1 + 0xb0)
int32_t r8_2 = *(rcx_3 + 0x1fc)
*(rcx_3 + 0x1f4) += r8_2 u/ 0xf4240
void* rcx_4 = *(arg1 + 0xb0)
*(rcx_4 + 0x1f8) += r8_2 u% 0xf4240
void* rbx = *(arg1 + 0xb0)

if (*(rbx + 0x1f8) s>= 0xf4240)
    *(rbx + 0x1f4) += 1
    void* rax_3 = *(arg1 + 0xb0)
    *(rax_3 + 0x1f8) -= 0xf4240
    rbx = *(arg1 + 0xb0)

return sub_142899cf0(sub_14060aa60(arg1), 0x2d, 0, rbx + 0x1f4) __tailcall
