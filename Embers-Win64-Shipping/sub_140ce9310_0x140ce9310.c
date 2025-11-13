// 函数: sub_140ce9310
// 地址: 0x140ce9310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
arg3.b = *(arg2 + 0xc) == 0
int64_t result
int64_t arg_10

if ((arg3.b & sub_140b5b8a0(*(arg2 + 8), 6)) == 0)
    int32_t rcx_2
    rcx_2.b = *(arg2 + 0xc) == 0
    
    if ((rcx_2.b & sub_140b5b8a0(*(arg2 + 8), 0xd).b) == 0)
        result.b = 0
    else
        void* rcx_3 = *rbx
        uint64_t var_18 = 0
        int32_t var_10_1 = 0
        sub_140a1d9d0(*(rcx_3 + 8), &var_18, arg4)
        int16_t* const rdx_2 = &data_142d40450
        
        if (var_10_1 != 0)
            rdx_2 = var_18
        
        sub_140b58260(&arg_10, rdx_2, 1)
        uint64_t rcx_6 = var_18
        *arg1 = arg_10
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        result.b = 1
else
    arg_10 = 0
    int64_t* rcx_1 = *(*rbx + 8)
    (*(*rcx_1 + 0x140))(rcx_1, &arg_10, arg3)
    *arg1 = arg_10
    result.b = 1
return result
