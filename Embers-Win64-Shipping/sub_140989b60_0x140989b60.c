// 函数: sub_140989b60
// 地址: 0x140989b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1

if (rbx == 0)
    return 

sub_141c4f2c0(rbx, arg1)
*rbx = &data_142e2d6c8
rbx[5] = &data_142e2dc18
CvtStSymsToSz::CvtStSymsToSz(&rbx[0xda])
rbx[0xdd] = 0
InitializeCriticalSection(&rbx[0xde])
return SetCriticalSectionSpinCount(&rbx[0xde], 0xfa0) __tailcall
