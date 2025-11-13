// 函数: sub_1426b51d0
// 地址: 0x1426b51d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee7360(arg1)
int64_t* rdi = *(arg1 + 0xa0)
char entry_r8

if (rdi != 0)
    int64_t rax_1 = sub_1427303e0()
    int64_t r8 = *rdi
    int64_t rax
    rax, entry_r8 = (*(r8 + 0x610))(rdi, rax_1, r8)
    *(arg1 + 0xb0) = rax
    
    if (rax != 0)
        sub_1426ccf50(rax, arg1)

if (*(arg1 + 0xc0) != 0)
    return 

int64_t rdx_3 = *(arg1 + 0xb8)

if (rdx_3 != 0)
    sub_1426b4c90(arg1, rdx_3, entry_r8)
