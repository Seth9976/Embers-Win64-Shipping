// 函数: sub_140bc7180
// 地址: 0x140bc7180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = TlsGetValue(data_143e1a81c)
void* rax_1 = arg1[3]

if (*(rax_1 + 0x10) != 0 && rax != 0)
    (*rax_1)(arg1[4], zx.q(arg1[5].d))
    char temp0 = *(arg1 + 0x15)
    *(arg1 + 0x15) = 1
    int64_t rcx_2
    rcx_2.b = temp0
    return sub_140bcd5d0(arg1, rax) __tailcall

int64_t* rdx_3 = *(rax_1 + 8)
int32_t rcx_5 = (rdx_3[1]).d
rdx_3[1] += 1
uint64_t rcx_6 = zx.q(rcx_5) & 0x7ffff
int64_t* result = nullptr
bool z

if (0 == rdx_3[rcx_6 + 3])
    rdx_3[rcx_6 + 3] = arg1
    z = true
else
    result = rdx_3[rcx_6 + 3]
    z = false

if (not(z))
    *nullptr = 0

int64_t* rcx_7 = *rdx_3

if (rcx_7 == 0)
    return result

return sub_140be33e0(rcx_7)
