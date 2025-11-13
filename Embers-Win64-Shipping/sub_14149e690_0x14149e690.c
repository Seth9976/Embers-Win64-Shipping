// 函数: sub_14149e690
// 地址: 0x14149e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = sub_141080be0(arg1, arg2, *(arg2 + 0x188), *(arg3 + 0x10))
int32_t rcx = *(arg4 + 0x570)
int32_t rax_1 = rcx & 0x40
int64_t arg_10
int128_t* r9_2
int128_t var_28
int128_t var_18

if (rax_1 == 0 || *(arg4 + 0x534) s< 0 || (rcx.b & 0x10) == 0)
    if (rax_1 != 0)
        void* rdx_1 = *(arg4 + 0x5c0)
        
        if (((*(*(rdx_1 + 0x20) + 0x13c) - 1) & 0xfd) == 0)
            int32_t var_38
            var_38.q = rdx_1
            return sub_141238f00(arg1 + 0x118, arg2, arg1, arg3, zmm6, var_38)
    
    int64_t rax_5 = *(arg2 + 0x188)
    var_18 = data_142d3f660
    arg_10 = rax_5
    sub_1405d0e10(arg2, &arg_10, arg1 + 0x118, &var_18, 0)
    r9_2 = &var_28
    var_28 = zx.o(0)
else
    int64_t rax_2 = *(arg2 + 0x188)
    var_28 = data_142d3f660
    arg_10 = rax_2
    sub_1405d0e10(arg2, &arg_10, arg1 + 0x118, &var_28, 0)
    r9_2 = &var_18
    var_18 = zx.o(0)
arg_10 = *(arg2 + 0x188)
return sub_1405d0e10(arg2, &arg_10, arg1 + 0x11e, r9_2, 0)
