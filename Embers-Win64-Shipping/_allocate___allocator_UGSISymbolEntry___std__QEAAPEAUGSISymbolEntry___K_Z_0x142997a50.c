// 函数: ?allocate@?$allocator@UGSISymbolEntry@@@std@@QEAAPEAUGSISymbolEntry@@_K@Z
// 地址: 0x142997a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = arg2 * 0x30

if (arg2 u> 0x555555555555555)
    rax_1 = -1
else if (rax_1 u< 0x1000)
    if (rax_1 == 0)
        return rax_1
    
    return j_sub_140a82f30(rax_1) __tailcall

int64_t rcx = rax_1 + 0x27

if (rcx u<= rax_1)
    rcx = -1

int64_t rax_2 = j_sub_140a82f30(rcx)

if (rax_2 == 0)
    _invalid_parameter_noinfo_noreturn()
    noreturn

void* rax_4 = (rax_2 + 0x27) & 0xffffffffffffffe0
*(rax_4 - 8) = rax_2
return rax_4
