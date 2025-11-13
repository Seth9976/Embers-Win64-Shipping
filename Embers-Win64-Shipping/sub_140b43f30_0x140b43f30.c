// 函数: sub_140b43f30
// 地址: 0x140b43f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)

if (data_143de8178 == 0 || *(rsi + &data_143de7240) == 0)
    return 

void* rax_1 = TlsGetValue(data_143de7a5c)
void* rdi_1 = rax_1

if (rax_1 == 0)
    rdi_1 = sub_140b35c00()

char rax_3 = (*(rdi_1 + 0x38)).b
void* rax_4

if (rax_3 != 0)
    rax_4 = *(rdi_1 + 0x30)
else
    rax_4 = j_sub_140a82f30(0x2008)
    
    if (rax_4 != 0)
        *(rax_4 + 0x2000) = 0
    
    void* rcx_1 = *(rdi_1 + 0x30)
    
    if (rcx_1 != 0)
        *(rcx_1 + 0x2000) = rax_4
        *(rdi_1 + 0x30) = rax_4
    else
        *(rdi_1 + 0x28) = rax_4
        *(rdi_1 + 0x30) = rax_4

int64_t* rbx_3 = (zx.q(rax_3) << 5) + rax_4
int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
*rbx_3 = performanceCount[0]
rbx_3[3].d = arg3.d
rbx_3[1] = arg1
rbx_3[2].d = rsi.d
*(rbx_3 + 0x14) = arg4
*(rbx_3 + 0x15) = 4
*(rdi_1 + 0x38) += 1
