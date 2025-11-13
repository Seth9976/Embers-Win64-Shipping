// 函数: sub_140fde960
// 地址: 0x140fde960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x17cc8)
uint64_t result

if (rax != 0)
    result = zx.q(rax - 1)
else
    result = 0x270f

void* rdi = *(arg1 + (result << 3) + 0x4448)
void* rsi = *(rdi + 0x30)

if (rsi != 0)
    int32_t rcx_1 = zx.d(*(rsi + 0xba)) & *(arg1 + 0x27b4)
    int64_t rbp
    rbp.b = 0
    int32_t rdx_1
    
    if (data_1439b49c0 != 0)
        rdx_1 = *(arg1 + 0x27b8)
    
    if (data_1439b49c0 != 0 && (rcx_1 & not.d(rdx_1)) != 0 && rdx_1 == (rdx_1 & rcx_1))
        *(arg1 + 0x27b8) = rcx_1
    else if (*(arg1 + 0x27b8) != rcx_1)
        *(arg1 + 0x27b8) = rcx_1
        rbp.b = 1
        sub_140fdedb0(arg1, 1)
    
    result = sub_140fd7f50(arg1, rsi, rbp.b)
    
    if (result.d != 0 || *(arg1 + 0x27b0) != result.d)
        result = sub_140fdefb0(arg1)

void* rdx_3 = *(rdi + 0x28)

if (rdx_3 != 0)
    result = sub_140fd7b90(arg1, rdx_3)

if (rsi != 0)
    result = sub_140fd77d0(arg1, rsi)

void* rdx_5 = *(rdi + 0x38)

if (rdx_5 != 0)
    result = sub_140fd7410(arg1, rdx_5)

void* rdx_6 = *(rdi + 0x40)

if (rdx_6 != 0)
    result = sub_140fd6c90(arg1, rdx_6)

void* rdx_7 = *(rdi + 0x48)

if (rdx_7 == 0)
    return result

return sub_140fd7050(arg1, rdx_7) __tailcall
