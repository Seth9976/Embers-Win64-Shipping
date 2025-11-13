// 函数: sub_1405b6d00
// 地址: 0x1405b6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd6170 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd6170)
    
    if (data_143cd6170 == 0xffffffff)
        sub_1405ab8c0(&data_143cd6140)
        int32_t var_10_1 = 0x37
        data_143cd6140 = &data_142d49380
        __builtin_memset(&data_143cd6150, 0, 0x18)
        wchar16 const* const var_18 = u"/Composure/Materials/Output/M_TextureCopy.M_TextureCopy"
        var_18.o = var_18.o
        sub_140d2c760(&data_143cd6150, &var_18)
        data_143cd6168 = 0
        atexit(sub_142cb09c0)
        _Init_thread_footer(&data_143cd6170)

void* result_1 = data_143cd6168
void* result

if (result_1 != 0)
label_1405b6dd0:
    void arg_20
    sub_142131d00(result_1, *sub_140b58260(&arg_20, u"Input", 1), arg2)
    sub_1420bacc0(arg1, arg3, result_1)
    result.b = 1
else
    result = sub_140d30a00(&data_143cd6150, 0)
    int64_t* result_2 = result
    void* rax_2
    void* rcx
    int64_t rdx
    
    if (result != 0)
        rax_2 = sub_142543940()
        rcx = result_2[2]
        rdx = sx.q(*(rax_2 + 0x38))
    
    if (result == 0 || rdx.d s> *(rcx + 0x38) || *(*(rcx + 0x30) + (rdx << 3)) != rax_2 + 0x30)
        result_1 = data_143cd6168
    else
        result = sub_142121cc0(result_2, sub_140cde0b0())
        result_1 = result
        data_143cd6168 = result
    
    if (result_1 != 0)
        goto label_1405b6dd0
    
    result.b = 0

return result
