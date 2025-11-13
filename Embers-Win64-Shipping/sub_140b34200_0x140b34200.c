// 函数: sub_140b34200
// 地址: 0x140b34200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (data_143de8178 == 0 || *(rdi + &data_143de7240) == 0)
    return 

void* rax_1 = TlsGetValue(data_143de7a5c)
void* rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = sub_140b35c00()

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char rax_3 = (*(rbx_1 + 0x10)).b
void* const rdx

if (rax_3 != 0)
    rdx = *(rbx_1 + 8)
else
    void* rax_4 = j_sub_140a82f30(0x1808)
    rdx = rax_4
    
    if (rax_4 == 0)
        rdx = nullptr
    else
        *(rax_4 + 0x1800) = 0
    
    void* rax_5 = *(rbx_1 + 8)
    
    if (rax_5 != 0)
        *(rax_5 + 0x1800) = rdx
        *(rbx_1 + 8) = rdx
    else
        *rbx_1 = rdx
        *(rbx_1 + 8) = rdx

uint64_t rcx_2 = zx.q(rax_3) * 3
*(rdx + (rcx_2 << 3)) = performanceCount
*(rdx + (rcx_2 << 3) + 0x15) = 2
*(rdx + (rcx_2 << 3) + 8) = arg1
*(rdx + (rcx_2 << 3) + 0x10) = rdi.d
*(rbx_1 + 0x10) += 1
