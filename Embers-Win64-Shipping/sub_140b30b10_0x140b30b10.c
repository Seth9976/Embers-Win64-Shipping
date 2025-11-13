// 函数: sub_140b30b10
// 地址: 0x140b30b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg1

if (data_143de8178 == 0 || *(zx.q(data_143de7018) + &data_143de7240) == 0)
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
uint64_t rcx_2 = zx.q(rax_3) * 3
*(r8_1 + (rcx_2 << 3)) = performanceCount
*(r8_1 + (rcx_2 << 3) + 0x15) = 0x10
*(r8_1 + (rcx_2 << 3) + 8) = rsi
*(r8_1 + (rcx_2 << 3) + 0x10) = rdx_1
rbx_1[2] += 1
