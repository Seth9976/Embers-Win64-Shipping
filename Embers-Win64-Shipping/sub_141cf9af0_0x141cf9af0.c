// 函数: sub_141cf9af0
// 地址: 0x141cf9af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t* rdi_2 = (sx.q(not.d(*(r9 + 0x104))) & sx.q(arg2)) * 0x30 + *(r9 + 0xe0)
rdi_2[3].d -= 1

if (rdi_2[3].d == 1)
    if (data_143a21048 == 0)
        goto label_141cf9ba5
    
    int64_t rax_3 = *rdi_2
    uint64_t rcx_1 = rax_3 u>> 0x30
    
    if ((rax_3 & 0xffffffffffff) + rdi_2[1] s<= arg1[1])
        goto label_141cf9ba5
    
    if (arg1[2].b != 0 && data_143f3624c != 0)
        int64_t rcx_3 = sx.q(*(*(rcx_1 * 0x98 + *(*arg1 + 0xa8) + 8) + 0x18c))
        rdi_2[5] = 0
        sub_1409d7d20((rcx_3 << 4) + *(*arg1 + 0x158), rdi_2)
    label_141cf9ba5:
        sub_141cfd9f0(*arg1, rdi_2)
        int64_t rax_9
        rax_9.b = 1
        return rax_9
    
    int64_t rbx_1 = sx.q(*(*(rcx_1 * 0x98 + *(*arg1 + 0xa8) + 8) + 0x18c))
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int64_t rbx_2 = rbx_1 << 4
    rdi_2[5] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
    sub_1409d7d20(*(*arg1 + 0x158) + rbx_2, rdi_2)
    int64_t* rbx_3 = rbx_2 + *(*arg1 + 0x158)
    int64_t rsi_1 = sx.q(rbx_3[1].d)
    int32_t rax_14 = (rsi_1 + 1).d
    rbx_3[1].d = rax_14
    
    if (rax_14 s> *(rbx_3 + 0xc))
        sub_1405a4d70(rbx_3)
    
    *(*rbx_3 + (rsi_1 << 3)) = *rdi_2

int64_t rax_2
rax_2.b = 0
return rax_2
