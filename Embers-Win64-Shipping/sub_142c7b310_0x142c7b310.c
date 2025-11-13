// 函数: sub_142c7b310
// 地址: 0x142c7b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int32_t* r8 = *(rax + 0x250)
char* r9 = *(r8 + 8)
char rcx = *r9
char const* const rax_1

if (rcx == 0 || *(rax + 0x5dd) != 0)
    rax_1 = "LIST"
    
    if (rcx != 0)
        *r8 = 1
else
    rax_1 = "RETR"

char const* const r8_1 = *(r8 + 0x10)
int32_t result
int512_t entry_zmm2

if (*r9 == 0)
    if (r8_1 == 0 || *r8_1 == 0)
        r8_1 = rax_1
    
    result = gzprintf(&arg1[0xd3], &data_1434ccff0, r8_1, entry_zmm2)
else
    if (r8_1 == 0 || *r8_1 == 0)
        r8_1 = rax_1
    
    result = gzprintf(&arg1[0xd3], "%s %s", r8_1, entry_zmm2)

if (result == 0)
    arg1[0xe1].d = 9

return result
