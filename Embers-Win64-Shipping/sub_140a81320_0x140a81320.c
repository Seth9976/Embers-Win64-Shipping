// 函数: sub_140a81320
// 地址: 0x140a81320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140a2e390(&var_18, u"IterateDirectoryRecursively %s", arg2)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_2 = *(arg1 + 8)
void** const var_28 = &data_142e614b8
int64_t r8
int64_t var_20 = r8
char rax_1 = (*(*rcx_2 + 0x148))(rcx_2, arg2, &var_28)
QueryPerformanceCounter(&performanceCount)
int64_t rdi_1 = var_18
var_28 = &data_142d6ad38

if (rdi_1 != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    (*(*rcx_4 + 0x30))(rcx_4, rdi_1)

return zx.q(rax_1)
