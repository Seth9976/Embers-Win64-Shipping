// 函数: sub_14227bf80
// 地址: 0x14227bf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 0)
    return 

int64_t* rax_1 = *arg1
wchar16* _String

if (rax_1[1].d == 0)
    _String = &data_142d40450
else
    _String = *rax_1

int32_t rax = _wtoi(_String)

if (arg2 == 0)
    return 

void* rcx = *(arg2 + 0x1f8)

if (rcx == 0)
    return 

int32_t rdx = rax

if (rax s<= 4)
    rdx = 4

*(rcx + 0x1e0) = rdx
return sub_142279e50(rcx) __tailcall
