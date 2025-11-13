// 函数: sub_1405acf90
// 地址: 0x1405acf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
arg1[5].b = 1
*(arg1 + 0x2c) = 0
arg1[7] = 0
arg1[8] = 0
*(arg1 + 0x4c) = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x54) = 0x780
arg1[0xb].d = 0x438
*(arg1 + 0x5c) = 6
arg1[0xc].b = 1
*arg1 = &data_142d479a8
sub_1405ab4c0(&arg1[0xd])
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cd6118 s> *rdi_1)
    _Init_thread_header(&data_143cd6118)
    
    if (data_143cd6118 == 0xffffffff)
        sub_1405aa900(&data_143cd6100, 
            MaterialInterface'/Composure/Materials/Media/M_VideoPlateDefault.M_Vide", 0)
        atexit(&data_142cb0730)
        _Init_thread_footer(&data_143cd6118)

arg1[0x38] = data_143cd6110

if (data_143cd6138 s> *rdi_1)
    _Init_thread_header(&data_143cd6138)
    
    if (data_143cd6138 == 0xffffffff)
        sub_1405aa900(&data_143cd6120, 
            MaterialInterface'/Composure/Materials/Media/M_StaticVideoPlateDebug."
        "M_StaticVideoPlateDebug'", 0)
        atexit(sub_142cb07c0)
        _Init_thread_footer(&data_143cd6138)

arg1[0x39] = data_143cd6130
arg1[0x21] = arg1[0x38]
int64_t arg_8 = data_143cd5fe8
sub_1405a7750(&arg1[0x2c], &data_143cd5fe0, &arg_8)
arg1[0xc].b = 0
*arg1 = &data_142d47d00
return arg1
