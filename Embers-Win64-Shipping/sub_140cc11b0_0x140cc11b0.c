// 函数: sub_140cc11b0
// 地址: 0x140cc11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
sub_140b33630("GarbageCollection")

if (data_143de5444 != 0)
    data_143e1b328 = 1
    zmm6 = sub_140d1e580(&data_143e1d990)
    data_1439a9dd0 = 1

if (data_143e1b328 != 0)
    char arg_18 = 0
    data_143e1add8 = 1
    void* rcx = data_143e1adf0
    int64_t rbx
    rbx.b = 0
    bool z_1
    
    if (0 == *(rcx + 4))
        *(rcx + 4) = 0
        z_1 = true
    else
        *(rcx + 4)
        z_1 = false
    
    if (z_1)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm6 = sub_140cbaa10(data_143e1adf0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        rbx.b = 1
    
    int64_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    bool cond:0_1 = data_143e1b330 s>= data_143e1ae18
    data_143e1ade0 = float.d(performanceCount_2) f* data_143d796f8 f+ 16777216.0
    char rax_3
    
    if (not(cond:0_1))
        rax_3, zmm6 = sub_140cd06d0(arg1, zmm6)
    
    if (cond:0_1 || rax_3 == 0)
        arg_18 = sub_140cc0b20(arg1, zmm6)
    
    if (rbx.b != 0)
        void* rbx_1 = data_143e1adf0
        int64_t* rcx_7 = *(rbx_1 + 0x38)
        (*(*rcx_7 + 0x10))(rcx_7)
        *(rbx_1 + 4) -= 1
    
    if (arg_18 != 0)
        data_143e1add8 = 0

return sub_140b37f60("GarbageCollection") __tailcall
