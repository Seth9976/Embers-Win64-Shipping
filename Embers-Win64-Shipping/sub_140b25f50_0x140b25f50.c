// 函数: sub_140b25f50
// 地址: 0x140b25f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* wcs1 = *arg1

if (wcs1 == 0)
    return 

wchar16* rax = wcsstr(wcs1, u"//")

if (rax == 0)
    return 

int32_t rdx_1 = arg1[1].d
int64_t r8_1 = 0
int32_t rcx_1 = rdx_1 - 1

if (rdx_1 == 0)
    rcx_1 = 0

void* rax_1 = &rax[1]
void* rdx_2 = &wcs1[sx.q(rcx_1)]
void* rcx_3 = rax_1 + 2
uint64_t r9_4 = (rdx_2 - rcx_3 + 1) u>> 1

if (rcx_3 u> rdx_2)
    r9_4 = 0

if (r9_4 != 0)
    do
        int16_t rdx_3 = *rcx_3
        
        if (*(rax_1 - 2) != 0x2f || rdx_3 != 0x2f)
            *rax_1 = rdx_3
            rax_1 += 2
        
        rcx_3 += 2
        r8_1 += 1
    while (r8_1 u< r9_4)

*rax_1 = 0
sub_140a36160(arg1)
