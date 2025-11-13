// 函数: sub_1428b6d90
// 地址: 0x1428b6d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
FILE* _Stream = sub_142905e40(arg1, arg2)
int32_t rsi = 1

if (strchr(arg2, 0x62) == 0)
    rsi = 0x11

if (_Stream != 0)
    int64_t* result = sub_14289a500(&data_143507b90)
    
    if (result == 0)
        fclose(_Stream)
        return nullptr
    
    sub_142899cc0(result, 0)
    sub_142899cf0(result, 0x6a, rsi, _Stream)
    return result

int32_t rbx = 2
int32_t var_18_1 = 0x48
sub_1428a5670(2, (&_Stream->_Placeholder + 1).d, GetLastError(), "crypto\bio\bss_file.c", 0x48)
void* const var_10_1 = &data_1434d9fcc
var_18_1.q = arg2
sub_1428a4880((&_Stream->_Placeholder + 5).d)
int32_t* rax_2 = _errno()
int32_t* rax_3

if (*rax_2 != 2)
    rax_3 = _errno()

int32_t rax_4

if (*rax_2 == 2 || *rax_3 == 6)
    rbx = 0x80
    rax_4 = 0x4f
else
    rax_4 = (_Stream + 0x51).d

sub_1428a5670(0x20, 0x6d, rbx, "crypto\bio\bss_file.c", rax_4)
return nullptr
