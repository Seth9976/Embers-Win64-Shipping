// 函数: sub_140a48c00
// 地址: 0x140a48c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = data_143db4894

if (result == 0)
    int32_t rcx_7 = (data_14399e9d8 + 0x10) * data_14399e9dc
        + (data_14399e9d0 + 0x10) * data_14399e9d4 + (data_14399e9c8 + 0x10) * data_14399e9cc
        + (data_14399e9c0 + 0x10) * data_14399e9c4 + (data_14399e9b8 + 0x10) * data_14399e9bc
    int32_t rcx_11 = rcx_7 + (data_14399e9b0 + 0x10) * data_14399e9b4
        + (data_14399e9a8 + 0x10) * data_14399e9ac + (data_14399e9a0 + 0x10) * data_14399e9a4
        + (data_14399e998 + 0x10) * data_14399e99c
    int32_t rcx_15 = rcx_11 + (data_14399e990 + 0x10) * data_14399e994
        + (data_14399e988 + 0x10) * data_14399e98c + (data_14399e980 + 0x10) * data_14399e984
        + (data_14399e978 + 0x10) * data_14399e97c
    data_143db4894 = rcx_15 + (data_14399e970 + 0x10) * data_14399e974
    void var_88
    int32_t rcx_18 = sub_140b6c480(&var_88)[2].d
    
    if (rcx_18 == 0)
        rcx_18 = 0x10000
    
    result = (data_143db4894 - 1 + rcx_18) & neg.d(rcx_18)
    data_143db4894 = result

return result
