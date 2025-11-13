// 函数: sub_140a6f1c0
// 地址: 0x140a6f1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140a2e390(&var_18, u"DeleteFile %s", arg2)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_2 = *(arg1 + 8)
char rax_1 = (*(*rcx_2 + 0x80))(rcx_2, arg2)
QueryPerformanceCounter(&performanceCount)
int64_t rdi_1 = var_18

if (rdi_1 != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    (*(*rcx_4 + 0x30))(rcx_4, rdi_1)

return zx.q(rax_1)
