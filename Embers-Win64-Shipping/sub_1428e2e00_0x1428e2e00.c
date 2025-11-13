// 函数: sub_1428e2e00
// 地址: 0x1428e2e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 == 0)
    return 0

int64_t rbx = -1
bool cond:0_1

do
    cond:0_1 = arg1[rbx + 1] != 0
    rbx += 1
while (cond:0_1)
int32_t rax_1 = WideCharToMultiByte(0, 0, arg1, (rbx + 1).d, nullptr, 0, nullptr, nullptr)
int64_t rbp = sx.q(rax_1)

if (rax_1 == 0)
    int32_t rax_2 = data_143fecca8
    
    if (rax_2 == 0)
        rax_2 = sub_1428a5060()
        data_143fecca8 = rax_2
    
    sub_1428a5670(rax_2, 0x71, 0x81, "engines\e_capi.c", 0x45c)
    return nullptr

PSTR lpMultiByteStr = sub_1428a6730(rbp)

if (lpMultiByteStr == 0)
    int32_t rax_4 = data_143fecca8
    
    if (rax_4 == 0)
        rax_4 = sub_1428a5060()
        data_143fecca8 = rax_4
    
    sub_1428a5670(rax_4, 0x71, 0x41, "engines\e_capi.c", 0x461)
    return nullptr

if (WideCharToMultiByte(0, 0, arg1, (rbx + 1).d, lpMultiByteStr, rbp.d, nullptr, nullptr) != 0)
    return lpMultiByteStr

sub_1428a6780(lpMultiByteStr)
int32_t rax_6 = data_143fecca8

if (rax_6 == 0)
    rax_6 = sub_1428a5060()
    data_143fecca8 = rax_6

sub_1428a5670(rax_6, 0x71, 0x81, "engines\e_capi.c", 0x466)
return nullptr
