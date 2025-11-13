// 函数: sub_140a68320
// 地址: 0x140a68320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e62710
CRITICAL_SECTION* rcx = data_143db7a48

if (rcx != 0)
    sub_140a6f430(rcx, &arg1[1])

int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

*arg1 = &data_142e62310

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
