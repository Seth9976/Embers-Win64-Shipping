// 函数: sub_141aca260
// 地址: 0x141aca260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_14083ad30(arg1 + 0x48, 0)

int64_t var_18
sub_141e42610(arg3, &var_18)
int32_t result = sub_141e425d0(arg3, arg1 + 0x78)
int64_t r8 = var_18

if (result != 0xffffffff)
    uint64_t r9_1 = zx.q(*(r8 + sx.q(result) * 0xc + 8))
    
    if (r9_1.d s< *(arg2 + 0xc8) && *(*(arg2 + 0xc0) + (r9_1 << 1)) != 0xffff)
        int64_t rdi_1 = sx.q(*(arg1 + 0x50))
        int32_t result_1 = result
        int32_t var_20_1 = 0
        int32_t rax = (rdi_1 + 1).d
        *(arg1 + 0x50) = rax
        
        if (rax s> *(arg1 + 0x54))
            sub_14083a7e0(arg1 + 0x48)
        
        int64_t rcx_6 = *(arg1 + 0x48)
        int64_t rdx_4 = rdi_1 * 3
        result = 0
        *(rcx_6 + (rdx_4 << 2)) = r9_1.w.q
        *(rcx_6 + (rdx_4 << 2) + 8) = 0
        r8 = var_18

if (r8 == 0)
    return result

return sub_140a74f90(r8)
