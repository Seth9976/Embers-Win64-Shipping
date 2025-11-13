// 函数: sub_142c7c4d0
// 地址: 0x142c7c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(*arg1 + 0x250)
int64_t* r9 = *(r8 + 0x10)
char* r8_1 = *(r8 + 8)
int32_t result
int512_t entry_zmm2

if (r9 == 0)
    if (r8_1 == 0 || *r8_1 == 0)
        r8_1 = "HELP"
    
    result = gzprintf(&arg1[0xd3], &data_1434ccff0, r8_1, entry_zmm2)
else
    if (r8_1 == 0 || *r8_1 == 0)
        r8_1 = "VRFY"
    
    *r9
    result = gzprintf(&arg1[0xd3], "%s %s", r8_1, entry_zmm2)

if (result == 0)
    arg1[0xe1].d = 7

return result
