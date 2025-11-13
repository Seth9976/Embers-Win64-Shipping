// 函数: sub_141995510
// 地址: 0x141995510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
void* result = &arg1[1]

if (rbx == result)
    return result

int32_t r8_1 = *(rbx + 0xc)
int64_t rsi_1 = *result
int32_t rdi_1 = *(result + 8)
rbx[1].d = rdi_1

if (rdi_1 == 0 && r8_1 == 0)
    *(rbx + 0xc) = rdi_1
    return result

sub_1405a4c70(rbx, rdi_1, r8_1)
return memcpy(*rbx, rsi_1, rdi_1 * 2)
