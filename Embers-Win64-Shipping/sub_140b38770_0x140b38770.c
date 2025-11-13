// 函数: sub_140b38770
// 地址: 0x140b38770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de8178 == 0 || *(zx.q(data_143de7018) + &data_143de7240) == 0)
    return 

void* rax_1 = TlsGetValue(data_143de7a5c)

if (rax_1 == 0)
    rax_1 = sub_140b35c00()

uint64_t rax

if (*(rax_1 + 0xa0) != 0)
    rax = *(*(rax_1 + 0x98) + (sx.q(*(rax_1 + 0xa0)) << 3) - 8)
else
    rax = data_1439a8ff0

if (rax == data_1439a8ff8)
    return 

void* rax_3 = TlsGetValue(data_143de7a5c)

if (rax_3 == 0)
    rax_3 = sub_140b35c00()

char const (* rdi_1)[0xa]

if (*(rax_3 + 0xa0) != 0)
    rdi_1 = *(*(rax_3 + 0x98) + (sx.q(*(rax_3 + 0xa0)) << 3) - 8)
else
    rdi_1 = data_1439a8ff0

int64_t* rax_5 = TlsGetValue(data_143de7a5c)
int64_t* rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = sub_140b35c00()

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
char rax_7 = (rbx_1[2]).b
void* const r8_1

if (rax_7 != 0)
    r8_1 = rbx_1[1]
else
    void* rax_8 = j_sub_140a82f30(0x1808)
    r8_1 = rax_8
    
    if (rax_8 == 0)
        r8_1 = nullptr
    else
        *(rax_8 + 0x1800) = 0
    
    void* rax_9 = rbx_1[1]
    
    if (rax_9 != 0)
        *(rax_9 + 0x1800) = r8_1
        rbx_1[1] = r8_1
    else
        *rbx_1 = r8_1
        rbx_1[1] = r8_1

int32_t rdx_1 = data_143de7018
uint64_t rcx_7 = zx.q(rax_7) * 3
*(r8_1 + (rcx_7 << 3)) = performanceCount
*(r8_1 + (rcx_7 << 3) + 0x15) = 0x10
*(r8_1 + (rcx_7 << 3) + 8) = rdi_1
*(r8_1 + (rcx_7 << 3) + 0x10) = rdx_1
rbx_1[2] += 1
