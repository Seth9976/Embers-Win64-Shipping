// 函数: sub_1428afec0
// 地址: 0x1428afec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = *_Str1

if (rax != *_Str2)
    return rax - *_Str2

int32_t* rcx = data_143fecb08

if (rcx != 0)
    int32_t rax_2 = sub_142898c70(rcx)
    int32_t rdx = *_Str1
    
    if (rax_2 s> rdx)
        int64_t rax_3 = sub_142898ea0(data_143fecb08, rdx)
        *(_Str2 + 8)
        *(_Str1 + 8)
        jump(*(rax_3 + 8))

return _stricmp(*(_Str1 + 8), *(_Str2 + 8))
