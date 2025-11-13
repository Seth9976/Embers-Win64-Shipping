// 函数: sub_141b107e0
// 地址: 0x141b107e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x88)

if (result == 0)
    return 0

int64_t* rcx = &result[3]
*result = &data_142d6a040
result[1] = 0
result[2] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
result[7].d = 0xffffffff
*(result + 0x3c) = 0
result[9] = 0
result[0xa].d = 0
result[0xb] = 0
result[0xc] = 0
*result = &data_14305a8b0
sub_140596d10(&result[0xd], arg1 + 0x68)
result[0xf] = 0
int32_t i_1 = *(arg1 + 0x80)
int32_t* rdi_1 = *(arg1 + 0x78)
result[0x10].d = i_1

if (i_1 == 0)
    *(result + 0x84) = 0
    return result

sub_140808f70(&result[0xf], i_1, 0)
void* rbx = result[0xf]
int32_t i

do
    *rbx = *rdi_1
    sub_140596d10(rbx + 8, &rdi_1[2])
    rbx += 0x18
    rdi_1 = &rdi_1[6]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
