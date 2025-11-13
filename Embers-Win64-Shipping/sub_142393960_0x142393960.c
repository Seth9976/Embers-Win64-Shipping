// 函数: sub_142393960
// 地址: 0x142393960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14239a380(arg1 + 0x10)
int512_t zmm1
zmm1.o = 0x3f800000
void* rbp = *(arg1 + 8)
sub_142394440(arg1)
void* const rbx = *(arg1 + 0x20)
int32_t result = 0

if (rbx != 0)
    result = *(rbx + 8)

void* rsi = *(arg1 + 0x10)

if (result != 1)
    rbx = nullptr

int64_t* rcx_2 = *(rsi + 0x28)
*(rsi + 0x28) = rbp

if (rbp != 0)
    *(rbp + 8) += 1

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        result = (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = *(rsi + 0x30)
*(rsi + 0x30) = rbx

if (rbx != 0)
    *(rbx + 8) += 1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        result = (**rcx_3)(rcx_3, 1)

*(rsi + 0x38) = 1
int64_t* rcx_4 = *(arg1 + 0x20)
*(arg1 + 0x20) = 0

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        return (**rcx_4)(rcx_4, 1)

return result
