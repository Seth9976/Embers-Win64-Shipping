// 函数: sub_140b5bae0
// 地址: 0x140b5bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* _Source = sub_140a42ee0()
int64_t rdi = -1
int64_t rdx = -1
***arg1 = 0
PWSTR lpFileName = **arg1

do
    rdx += 1
while (lpFileName[rdx] != 0)

int32_t r8_2 = arg1[1].d
wchar16* _Destination = &lpFileName[sx.q(rdx.d)]
int32_t rax_2 = r8_2 - rdx.d

if (rax_2 s> 0)
    int64_t rbx_1 = sx.q(rax_2)
    wcsncpy(_Destination, _Source, rbx_1 - 1)
    _Destination[rbx_1 - 1] = 0
    r8_2 = arg1[1].d
    lpFileName = **arg1

int64_t rdx_2 = -1

do
    rdx_2 += 1
while (lpFileName[rdx_2] != 0)

wchar16* _Destination_1 = &lpFileName[sx.q(rdx_2.d)]
int32_t rax_6 = r8_2 - rdx_2.d

if (rax_6 s> 0)
    int64_t rbx_2 = sx.q(rax_6)
    wcsncpy(_Destination_1, u"Binaries/", rbx_2 - 1)
    _Destination_1[rbx_2 - 1] = 0
    r8_2 = arg1[1].d
    lpFileName = **arg1

int64_t rdx_3 = -1

do
    rdx_3 += 1
while (lpFileName[rdx_3] != 0)

wchar16* _Destination_2 = &lpFileName[sx.q(rdx_3.d)]
int32_t rax_10 = r8_2 - rdx_3.d

if (rax_10 s> 0)
    int64_t rbx_3 = sx.q(rax_10)
    wcsncpy(_Destination_2, u"Win64", rbx_3 - 1)
    _Destination_2[rbx_3 - 1] = 0
    r8_2 = arg1[1].d
    lpFileName = **arg1

int64_t rdx_4 = -1

do
    rdx_4 += 1
while (lpFileName[rdx_4] != 0)

wchar16* _Destination_3 = &lpFileName[sx.q(rdx_4.d)]
int32_t rax_14 = r8_2 - rdx_4.d

if (rax_14 s> 0)
    int64_t rbx_4 = sx.q(rax_14)
    wcsncpy(_Destination_3, &data_142d5a024, rbx_4 - 1)
    _Destination_3[rbx_4 - 1] = 0
    r8_2 = arg1[1].d
    lpFileName = **arg1

do
    rdi += 1
while (lpFileName[rdi] != 0)

int32_t r8_7 = r8_2 - rdi.d
wchar16* _Destination_4 = &lpFileName[sx.q(rdi.d)]

if (r8_7 s> 0)
    int64_t rbx_5 = sx.q(r8_7)
    wcsncpy(_Destination_4, arg2, rbx_5 - 1)
    _Destination_4[rbx_5 - 1] = 0
    lpFileName = **arg1

uint32_t result
result.b = GetFileAttributesW(lpFileName) != 0xffffffff
return result
