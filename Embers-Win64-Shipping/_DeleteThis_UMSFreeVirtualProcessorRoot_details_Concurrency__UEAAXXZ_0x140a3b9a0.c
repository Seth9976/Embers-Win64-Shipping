// 函数: ?DeleteThis@UMSFreeVirtualProcessorRoot@details@Concurrency@@UEAAXXZ
// 地址: 0x140a3b9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax_1 = sub_14059e7c0(sub_140a463a0())
void*** rdi = rax_1

if (rax_1 == 0)
    rdi = sub_140b662c0(0)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    *arg1 = nullptr
    return arg1

*rax_3 = &data_142e5bfb0
rax_3[1].d = 0
*(rax_3 + 0xc) = 0
*rax_3 = &data_142e5e778
rax_3[2] = rdi
*arg1 = rax_3
return arg1
