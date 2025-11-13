// 函数: sub_140b342f0
// 地址: 0x140b342f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de8178 == 0 || *(zx.q(data_143de7018) + &data_143de7240) == 0)
    return 

uint64_t rax = TlsGetValue(data_143de7a5c)

if (rax == 0)
    rax = sub_140b35c00()

char const (* rdi_1)[0xa]

if (*(rax + 0xa0) != 0)
    rdi_1 = *(*(rax + 0x98) + (sx.q(*(rax + 0xa0)) << 3) - 8)
else
    rdi_1 = data_1439a8ff0

if (rdi_1 == data_1439a8ff8)
    return 

int64_t* rax_1 = TlsGetValue(data_143de7a5c)
int64_t* rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = sub_140b35c00()

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char rax_3 = (rbx_1[2]).b
void* const r8_1

if (rax_3 != 0)
    r8_1 = rbx_1[1]
else
    void* rax_4 = j_sub_140a82f30(0x1808)
    r8_1 = rax_4
    
    if (rax_4 == 0)
        r8_1 = nullptr
    else
        *(rax_4 + 0x1800) = 0
    
    void* rax_5 = rbx_1[1]
    
    if (rax_5 != 0)
        *(rax_5 + 0x1800) = r8_1
        rbx_1[1] = r8_1
    else
        *rbx_1 = r8_1
        rbx_1[1] = r8_1

int32_t rdx_1 = data_143de7018
uint64_t rcx_5 = zx.q(rax_3) * 3
*(r8_1 + (rcx_5 << 3)) = performanceCount
*(r8_1 + (rcx_5 << 3) + 0x15) = 0x12
*(r8_1 + (rcx_5 << 3) + 8) = rdi_1
*(r8_1 + (rcx_5 << 3) + 0x10) = rdx_1
rbx_1[2] += 1
