// 函数: sub_142084470
// 地址: 0x142084470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg3 + 0x20)
void* r14 = arg3
uint8_t rsi_1 = not.b((arg1[0xd].d u>> 2).b) & 1

if (rbx == 0)
label_14208451e:
    
    if (rsi_1 != 0)
        return (*(*arg1 + 0x2e8))(arg1, arg2, r14, zx.q(arg4), arg5)
else
    void* rax_1 = sub_1424cd3c0()
    void* rdx = *(rbx + 0x10)
    arg3 = rax_1 + 0x30
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != arg3)
        goto label_14208451e
    
    void* rbx_1 = *(rbx + 0x20)
    
    if (rbx_1 == 0)
        goto label_14208451e
    
    void* rax_4 = sub_1425455a0()
    rdx = *(rbx_1 + 0x10)
    arg3 = rax_4 + 0x30
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != arg3)
        goto label_14208451e
    
    char rax_7 = arg1[0xa].b
    
    if ((rax_7 != 1 || (*(rbx_1 + 0x258) & rax_7) != 0)
            && (rax_7 != 2 || (*(rbx_1 + 0x258) & 1) == 0))
        goto label_14208451e

return (*(*r14 + 0x268))(r14, arg1, arg3)
