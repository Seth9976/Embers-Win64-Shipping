// 函数: sub_140596a40
// 地址: 0x140596a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x100
*arg1 = &data_142d408c0
arg1[2].w = 4
HANDLE hFile = GetStdHandle(STD_OUTPUT_HANDLE)

if (hFile == -1)
    hFile.b = 0
else if (GetFileType(hFile).d != 2)
    hFile.b = 0
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"GenericConsoleOutput").b != 0)
        hFile.b = 0
    else
        hFile.b = 1

*(arg1 + 0x11) = hFile.b
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"AllowStdOutLogVerbosity") != 0)
    arg1[2].b = 5

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"FullStdOutLogOutput") != 0)
    arg1[2].b = 7

if (__acrt_iob_func(1) == 0)
    arg1[2].b = 0

return arg1
