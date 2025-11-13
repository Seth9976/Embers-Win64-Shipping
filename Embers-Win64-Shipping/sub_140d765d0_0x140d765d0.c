// 函数: sub_140d765d0
// 地址: 0x140d765d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
BOOL result

if (arg2 == 0)
    int64_t pvParam_3 = *(arg1 + 0x1a8)
    int64_t pvParam = pvParam_3
    uint32_t rax_2 = (pvParam_3 u>> 0x20).d
    
    if ((rax_2.b & 1) == 0)
        pvParam:4.d = rax_2 & 0xfffffff3
        SystemParametersInfoW(SPI_SETSTICKYKEYS, 8, &pvParam, 0)
    
    int64_t pvParam_4 = *(arg1 + 0x1b0)
    int64_t pvParam_1 = pvParam_4
    uint32_t rax_4 = (pvParam_4 u>> 0x20).d
    
    if ((rax_4.b & 1) == 0)
        pvParam_1:4.d = rax_4 & 0xfffffff3
        SystemParametersInfoW(SPI_SETTOGGLEKEYS, 8, &pvParam_1, 0)
    
    int128_t pvParam_5 = *(arg1 + 0x1b8)
    int64_t var_18_1 = *(arg1 + 0x1c8)
    result = (pvParam_5.q u>> 0x20).d
    int128_t pvParam_2 = pvParam_5
    
    if ((result.b & 1) == 0)
        pvParam_2:4.d = result & 0xfffffff3
        result = SystemParametersInfoW(SPI_SETFILTERKEYS, 0x18, &pvParam_2, 0)
else
    SystemParametersInfoW(SPI_SETSTICKYKEYS, 8, arg1 + 0x1a8, 0)
    SystemParametersInfoW(SPI_SETTOGGLEKEYS, 8, arg1 + 0x1b0, 0)
    result = SystemParametersInfoW(SPI_SETFILTERKEYS, 0x18, arg1 + 0x1b8, 0)

__security_check_cookie(rax_1 ^ &var_58)
return result
