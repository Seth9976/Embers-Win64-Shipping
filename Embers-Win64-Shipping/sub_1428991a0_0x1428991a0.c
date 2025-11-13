// 函数: sub_1428991a0
// 地址: 0x1428991a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0x28
__chkstk(0x28)

if (data_143feb048 != 0 && data_143feb030 == 0)
    data_143feb030 = 1
    void* rax = sub_1428a5b30(&data_143b84cb0)
    sub_1428a5cd0(&data_143b84cb0, 0)
    sub_1428999b0(rax)
    void* i = data_143feb038
    
    while (i != 0)
        (*i)()
        void* i_1 = i
        i = *(i + 8)
        sub_1428a6780(i_1)
    
    CRITICAL_SECTION* rcx_2 = data_143feb040
    data_143feb038 = 0
    sub_1428a5ba0(rcx_2)
    data_143feb0cc
    data_143feb040 = 0
    
    if (data_143feb098 != 0)
        sub_1428acd70()
    
    if (data_143feb05c != 0)
        sub_1428a59e0()
    
    int32_t arg_8 = data_143b84cb0
    data_143b84cb0 = 0xffffffff
    sub_1428a5ad0(&arg_8)
    sub_142897e50()
    sub_1428dcc00()
    sub_1428a41f0()
    sub_1428e3390()
    sub_1428e3680()
    sub_1428a65d0()
    sub_14289ab50()
    sub_14289b9b0()
    sub_1428aa1e0()
    sub_1428a5900()
    result = sub_140592360()
    data_143feb048 = 0

return result
