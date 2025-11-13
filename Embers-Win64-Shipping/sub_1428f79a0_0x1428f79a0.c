// 函数: sub_1428f79a0
// 地址: 0x1428f79a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
int32_t var_78
int32_t* arg_10 = &var_78

if (arg1 s>= 0)
    var_78 = arg1
    int64_t* rax_1 = sub_1428a8f00(&arg_10, &data_143b85fd0, 0x2f, 8, sub_142859050)
    
    if (rax_1 != 0)
        return *rax_1
    
    int32_t* rcx_1 = data_143fecef8
    
    if (rcx_1 != 0)
        int32_t rax_3 = sub_1428989f0(rcx_1, &var_78)
        return sub_142898ea0(data_143fecef8, rax_3)

return 0
