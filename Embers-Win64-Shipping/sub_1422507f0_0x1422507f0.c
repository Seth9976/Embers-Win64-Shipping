// 函数: sub_1422507f0
// 地址: 0x1422507f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eefdd0(arg1)

if (sub_140cdd6a0(arg1) s< 0xf6)
    void* rdx_1 = arg1[0x44]
    
    if (rdx_1 != 0)
        sub_14222cb60(&arg1[0x47], rdx_1 + 0x28)
        arg1[0x44] = 0

uint64_t result = sub_140cdd6a0(arg1)

if (result.d s< 0x15d)
    int64_t* rax_1 = sub_14224ddf0(arg1, 0)
    result = sub_14224ddf0(arg1, 1)
    uint64_t result_1 = result
    
    if (rax_1 != 0 && (*(rax_1 + 0x2b4) & 0x10) != 0)
        int64_t r8_1 = *rax_1
        result = (*(r8_1 + 0x7d8))(rax_1, arg1[0x4b], r8_1)
    
    if (result_1 != 0 && (*(result_1 + 0x2b4) & 0x10) != 0)
        return (*(*result_1 + 0x7d8))(result_1, arg1[0x4c])

return result
