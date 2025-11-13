// 函数: sub_140d33420
// 地址: 0x140d33420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* entry_rdx
int16_t* rax = entry_rdx[4]
uint32_t rsi = zx.d(*rax)
entry_rdx[4] = &rax[1]
char rdi = rax[1].b
entry_rdx[4] = rax + 3
int32_t arg_10 = 0
uint32_t rcx = zx.d(*(rax + 3))
entry_rdx[4] = &rax[2]
int512_t entry_zmm1
wchar16 (* result)[0x200] =
    (&data_143e1cd60)[zx.q(rcx)](entry_rdx[3], entry_zmm1, &arg_10, &data_143e1cd60)

if (arg_10 == 0)
    int64_t var_18
    int64_t* rax_5 = sub_140d22270(entry_rdx, &var_18)
    int16_t* const r8_1
    
    if (rax_5[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_5
    
    result = sub_140b1f700(entry_rdx, u"%s", r8_1)
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    if (rdi != 0)
        return sub_140b1f850(entry_rdx, 2, u"Assertion failed, line %i", zx.q(rsi))

return result
