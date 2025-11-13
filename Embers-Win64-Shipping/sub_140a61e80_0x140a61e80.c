// 函数: sub_140a61e80
// 地址: 0x140a61e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x180c) == 0
*(arg1 + 0x1808) = 0

if (not(cond:0))
    sub_140a89910(arg1, 0)

*(arg1 + 0x1840) = 0xffffffff
*(arg1 + 0x1844) = 0
void* result

if (*(arg1 + 0x183c) u> 0x100)
    *(arg1 + 0x183c) = 0x100
    result = sub_140a84a70(arg1 + 0x1810, 0)
else
    result = *(arg1 + 0x1830)
    void* result_1 = arg1 + 0x1810
    uint32_t rdx_3 = (*(arg1 + 0x1838) + 0x1f) u>> 5
    
    if (result != 0)
        result_1 = result
    
    if (rdx_3 u> 8)
        result = memset(result_1, 0, zx.q(rdx_3) << 2)
    else if (rdx_3 != 0)
        result = nullptr
        __builtin_memset(result_1, 0, zx.q(rdx_3) << 2)

*(arg1 + 0x1838) = 0
int64_t rdi_1 = *(arg1 + 0x1830)

if (rdi_1 != 0)
    int64_t* rcx_3 = data_143ddb3f0
    
    if (rcx_3 == 0)
        sub_140a750a0()
        rcx_3 = data_143ddb3f0
    
    result = (*(*rcx_3 + 0x30))(rcx_3, rdi_1)

int64_t rdi_2 = *(arg1 + 0x1800)

if (rdi_2 == 0)
    return result

int64_t* rcx_4 = data_143ddb3f0

if (rcx_4 == 0)
    sub_140a750a0()
    rcx_4 = data_143ddb3f0

return (*(*rcx_4 + 0x30))(rcx_4, rdi_2)
