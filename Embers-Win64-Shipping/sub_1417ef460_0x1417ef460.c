// 函数: sub_1417ef460
// 地址: 0x1417ef460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298

if (rcx == 0)
    return 

int64_t* rcx_1 = *(rcx + 0xb08)

if (rcx_1 == 0)
    return 

int64_t* rax = (*(*rcx_1 + 0x100))(rcx_1)

if (rax == 0)
    return 

if (arg1[1].d != 0)
    int64_t* rax_2 = *arg1
    wchar16* rcx_2
    
    if (rax_2[1].d == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = *rax_2
    
    sub_140b16cc0(rcx_2)
    jump(*(*rax + 0x58))

wchar16 const* const r8_1 = u"disabled"

if ((*(*rax + 0x48))(rax) != 0)
    r8_1 = u"enabled"

sub_140b1f700(arg3, u"HMD device is %s", r8_1)
