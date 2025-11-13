// 函数: sub_140a842f0
// 地址: 0x140a842f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140a2e390(&var_18, u"OpenRead %s", arg2)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_2 = *(arg1 + 8)
int64_t rax_1 = (*(*rcx_2 + 0xc0))(rcx_2, arg2, zx.q(arg3))
QueryPerformanceCounter(&performanceCount)
void*** rax_2

if (rax_1 != 0)
    rax_2 = j_sub_140a82f30(0x20)

void*** result

if (rax_1 == 0 || rax_2 == 0)
    result = nullptr
else
    result = sub_140a56420(rax_2, rax_1, arg2)

int64_t rdi_1 = var_18

if (rdi_1 != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 == 0)
        sub_140a750a0()
        rcx_5 = data_143ddb3f0
    
    (*(*rcx_5 + 0x30))(rcx_5, rdi_1)

return result
