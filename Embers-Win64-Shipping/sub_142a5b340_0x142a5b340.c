// 函数: sub_142a5b340
// 地址: 0x142a5b340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x111]

if (rdi != 0)
    sub_142a5b3d0(rdi)
    sub_142a47920(rdi)

int64_t result = sub_142a5b470(&arg1[5])
void* rdi_1 = arg1[2]

if (rdi_1 != 0)
    sub_142ab72b0(rdi_1)
    result = sub_142a47920(rdi_1)

int64_t* rcx_5 = arg1[1]

if (rcx_5 != 0)
    result = (**rcx_5)(rcx_5, 1)

void* rbx_1 = *arg1

if (rbx_1 == 0)
    return result

sub_142a5b3d0(rbx_1)
return sub_142a47920(rbx_1)
