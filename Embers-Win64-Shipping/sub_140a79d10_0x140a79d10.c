// 函数: sub_140a79d10
// 地址: 0x140a79d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140a2e390(&var_18, u"GetFilenameOnDisk %s", arg3)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_2 = *(arg1 + 8)
(*(*rcx_2 + 0xb8))(rcx_2, arg2, arg3)
QueryPerformanceCounter(&performanceCount)
int64_t rbx_1 = var_18

if (rbx_1 != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    (*(*rcx_4 + 0x30))(rcx_4, rbx_1)

return arg2
