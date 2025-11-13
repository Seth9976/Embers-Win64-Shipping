// 函数: sub_1408662c0
// 地址: 0x1408662c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142006940()
void*** rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    *rax_1 = &data_142d3fe58
    rax_1[1] = &data_14396ff30
    rax_1[2] = sub_140868000
    rax_1[4] = sub_140a387b0()
    *rax_1 = &data_142d3feb0
    sub_1405964f0(rax_1, &data_14396ff60)
else if (data_14396ff68 != 0)
    int64_t* rcx_2 = data_14396ff60
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = data_14396ff60
        
        if (rcx_3 != 0)
            data_14396ff60 = sub_140a84c80(rcx_3, 0, 0)
        
        data_14396ff68 = 0

if (rax_1 != 0)
    (*rax_1)[7](rax_1, 0)
    int64_t rax_6 = sub_140a84c80(rax_1, 0, 0)
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)

jump(*(*rax + 0xe8))
