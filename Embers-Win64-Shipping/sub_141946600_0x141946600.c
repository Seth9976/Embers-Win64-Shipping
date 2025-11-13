// 函数: sub_141946600
// 地址: 0x141946600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
int64_t r8

if (*(arg1 + 0x11c) != 0 && data_143f01c92 != 0)
    r8.b = 1
    sub_14194e070(&data_1439c7510, data_143f0f180, r8.b)
    int64_t rdx_2 = data_1439c7510
    
    if (rdx_2 != 0)
        int64_t rbx_1 = sx.q(data_1439c7520)
        int32_t rax_1 = (rbx_1 + 1).d
        bool cond:0_1 = rax_1 s<= data_1439c7524
        data_1439c7520 = rax_1
        
        if (not(cond:0_1))
            sub_1405a4d70(&data_1439c7518)
            rdx_2 = data_1439c7510
        
        *(data_1439c7518 + (rbx_1 << 3)) = rdx_2
        data_1439c7510 = 0

void* rbx_2 = &arg1[2]

do
    int64_t rdx_4 = *(rbx_2 - 8)
    
    if (rdx_4 == 0)
        break
    
    r8 = *rbx_2
    
    if (r8 != 0)
        (*(*arg1 + 0x118))(arg1, rdx_4, r8, &arg1[0x1c])
    
    i += 1
    rbx_2 += 0x18
while (i s< 8)

uint64_t result_1 = arg1[0x19]
uint64_t result = result_1

if (result_1 != 0)
    r8 = arg1[0x1a]
    
    if (r8 != 0)
        result_1, r8 = (*(*arg1 + 0x118))(arg1, result_1, r8, &arg1[0x1c])
        result = arg1[0x19]

if (result != 0)
    char rcx_3 = arg1[0x1b].b
    result.b = rcx_3 & 0x30
    result_1.b = result.b == 0
    r8.b = (rcx_3 & 3) == 0

return result
