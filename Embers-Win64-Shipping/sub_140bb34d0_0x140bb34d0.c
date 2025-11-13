// 函数: sub_140bb34d0
// 地址: 0x140bb34d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("AsyncLoading")
sub_140b43e30("EDLEventQueueDepth", data_143de7030, *(arg1 + 0x330), 0)
int32_t rax = 0

if (0 == *(arg1 + 0x2b0))
    *(arg1 + 0x2b0) = 0
else
    rax = *(arg1 + 0x2b0)

sub_140b43e30("QueuedPackagesQueueDepth", data_143de7030, rax, 0)
int32_t rax_1 = 0

if (0 == *(arg1 + 0x2b4))
    *(arg1 + 0x2b4) = 0
else
    rax_1 = *(arg1 + 0x2b4)

sub_140b43e30("ExistingQueuedPackagesQueueDepth", data_143de7030, rax_1, 0)
sub_140bbbde0(arg1 - 8, arg2, arg3, arg4, nullptr)
int32_t rbx_1 = 2

if (data_14399fa10() != 0)
    rbx_1 = 0

sub_140b37f60("AsyncLoading")
return zx.q(rbx_1)
