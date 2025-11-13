// 函数: sub_14089e2c0
// 地址: 0x14089e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405920e0(arg1 + 0x330)
int64_t i = *(arg1 + 0x5f8)
void* rbx_1 = nullptr
int64_t rsi_1 = *(arg1 + 0x600) + i
int64_t* rax

if (arg1 == -0x5e0)
    rax = nullptr
else
    rax = *(arg1 + 0x5e0)

if (rax != 0)
    rbx_1 = *rax

for (; i != rsi_1; i += 1)
    sub_140591140(**(*(rbx_1 + 8) + (((*(rbx_1 + 0x10) - 1) & i) << 3)))

return sub_1408a05f0(arg1 + 0x5e0) __tailcall
