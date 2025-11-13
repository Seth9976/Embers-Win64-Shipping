// 函数: sub_142a40eb0
// 地址: 0x142a40eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

TEB* gsbase
int64_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 8
int64_t rdx_1 = data_143cc8258
int64_t* rcx_1 = *rbx_2

if (rdx_1 == 0)
    goto label_142a40f34

rdx_1 = data_143cc8258

if (rdx_1 == gsbase->NtTib.Self)
    goto label_142a40f34

if (rcx_1 == &data_14360daa0)
    return 

sub_142a43f80(*rcx_1 + 0x1e8, 1)
rcx_1 = *rbx_2
rdx_1 = data_143cc8258
label_142a40f34:

if (rcx_1 == &data_14360daa0)
    return 

if (rdx_1 == 0 || data_143cc8258 == gsbase->NtTib.Self)
    rdx_1.b = 1
else
    rdx_1.b = 0

void* const rax_2 = &data_14360daa0

if (rdx_1.b != 0)
    rax_2 = &data_143cc7730

*rbx_2 = rax_2
int64_t* rbx_3 = *(*rcx_1 + 0x10)

if (rbx_3 == &data_14360daa0)
    return 

if (rbx_3 != &data_143cc7730)
    sub_142a45360(rbx_3)

sub_142a43fa0(*rbx_3 + 0x88)

if (rbx_3 != &data_143cc7730)
    sub_142a42140(rbx_3, 0xe18, &data_14400f130)
