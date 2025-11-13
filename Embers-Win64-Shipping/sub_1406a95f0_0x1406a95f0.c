// 函数: sub_1406a95f0
// 地址: 0x1406a95f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
char rdi = arg2

if (*(rax + 8) != 6 || (*(rax + 0xc) & 4) != 0)
    void*** rax_1 = j_sub_140a82f30(0x30)
    void*** rdx = rax_1
    
    if (rax_1 == 0)
        rdx = rax_1
    else
        rax_1[1].d = 6
        *rdx = &data_142d8c608
        __builtin_memset(rdx + 0xc, 0, 0x24)
    
    rdx[3] = *(arg1 + 8)
    void* rax_3 = *(arg1 + 8)
    int64_t rcx = *(rax_3 + 0x10)
    
    if (rcx != 0)
        rdx[2] = rcx
        *(*(*(arg1 + 8) + 0x10) + 0x18) = rdx
        rax_3 = *(arg1 + 8)
    
    *(rax_3 + 0x10) = rdx
    *(arg1 + 8) = rdx

int32_t rax_5 = *(arg1 + 0x10)

if (test_bit(rax_5, 8))
    rdi = std::ctype<char>::tolower(*(*(arg1 + 0x18) + 8))
else if (test_bit(rax_5, 0xb))
    rdi = sub_1406b15f0(*(arg1 + 0x18), rdi)

void* rbx_1 = *(arg1 + 8)
int32_t rax_7 = *(rbx_1 + 0x24)

if (*(rbx_1 + 0x20) u<= rax_7)
    int32_t rsi_1 = rax_7 + 0x10
    int64_t rax_8 = realloc(*(rbx_1 + 0x28), zx.q(rsi_1))
    
    if (rax_8 == 0)
        std::_Xbad_alloc()
        noreturn
    
    *(rbx_1 + 0x28) = rax_8
    rax_7 = *(rbx_1 + 0x24)
    *(rbx_1 + 0x20) = rsi_1

int64_t result = *(rbx_1 + 0x28)
*(zx.q(rax_7) + result) = rdi
*(rbx_1 + 0x24) += 1
return result
