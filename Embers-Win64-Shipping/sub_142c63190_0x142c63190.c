// 函数: sub_142c63190
// 地址: 0x142c63190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
data_143ccb8a0(*(rbx + 0x250))
int64_t rcx_1 = *(rbx + 0x230)
*(rbx + 0x250) = 0
data_143ccb8a0(rcx_1)
*(rbx + 0x230) = 0
memset(rbx + 0xd8, 0, 0x180)
*(rbx + 0xe8) = -1
void* rax = arg1[0x87]
*(arg1 + 0xbc) = 1
int64_t rdx = *(rax + 8)

if (rdx != 0)
    int32_t result = rdx(arg1)
    
    if (result != 0)
        return result
    
    rax = arg1[0x87]

if (arg1[0x2f].d s< 0)
    arg1[0x2f].d = *(rax + 0x78)

return 0
