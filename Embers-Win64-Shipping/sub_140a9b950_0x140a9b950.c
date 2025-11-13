// 函数: sub_140a9b950
// 地址: 0x140a9b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*arg3)
sub_140a20ba0(arg2, u"ERoundingMode::", 0xf)
wchar16 const* const rdx

if (rbx.d u> 6)
    rdx = u"<Unknown ERoundingMode>"
else
    switch (rbx)
        case 0
            rdx = u"HalfToEven"
        case 1
            rdx = u"HalfFromZero"
        case 2
            rdx = u"HalfToZero"
        case 3
            rdx = u"FromZero"
        case 4
            rdx = u"ToZero"
        case 5
            rdx = u"ToNegativeInfinity"
        case 6
            rdx = u"ToPositiveInfinity"

int64_t r8 = -1

do
    r8 += 1
while (rdx[r8] != 0)

return sub_140a20ba0(arg2, rdx, r8.d) __tailcall
