// 函数: sub_142b23e00
// 地址: 0x142b23e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[0x2f]

if (rbx != 0)
    int16_t rax_1 = *(rbx + 8)
    int32_t rax_3
    
    if (rax_1 s< 0)
        rax_3 = *(rbx + 0xc)
    else
        rax_3 = sx.d(rax_1) s>> 5
    
    if (*(rbx + 0x80) s< rax_3)
        int32_t result = sub_142a486d0(rbx, *(rbx + 0x80))
        int32_t rcx_1
        rcx_1.b = result u> 0xffff
        *(rbx + 0x80) += rcx_1 + 1
        return result

if (arg1[0x30].d == 0)
    return 0xffffffff

int32_t rax_6 = (*(*arg1 + 0x28))()
void* rax_7 = arg1[0x2f]

if (rax_7 != 0 && (*(rax_7 + 8) & 0xffe0) != 0 && rax_6 s>= 0)
    *(rax_7 + 0x80) += 1

int32_t rax_8 = arg1[0x30].d

if (rax_8 s> 0 && rax_6 s>= 0)
    arg1[0x30].d = rax_8 - 1

return zx.q(rax_6)
