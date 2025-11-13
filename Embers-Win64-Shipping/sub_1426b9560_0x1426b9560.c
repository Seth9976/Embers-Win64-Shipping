// 函数: sub_1426b9560
// 地址: 0x1426b9560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
void* rdi = *(rax_1 + 0x188)
void* rdi_1

if (rdi == 0)
    rdi_1 = *(rax_1 + 0x300)
else
    rdi_1 = *(rdi + 0xc0)

if (sub_1423dce10(rdi_1, &arg1[0x14]) != 0)
    sub_1423e60e0(rdi_1, arg1[0x14])

arg1[0x14] = 0
return 4
