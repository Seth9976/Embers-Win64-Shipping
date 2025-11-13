// 函数: sub_141f6a7a0
// 地址: 0x141f6a7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x430) == 0
int32_t arg_8 = 0xffffffff

if (not(cond:0))
    void* r9_1 = *(arg1 + 0x5b0)
    
    if (r9_1 != 0)
        if (*(arg1 + 0x578) s> 0)
            void* rdx = *(*(arg1 + 0x570) + 0x10)
            
            if (rdx != 0 && *(rdx + 8) != 0xffffffff && arg3 s< *(rdx + 0x34))
                *arg2 = *(zx.q(*(rdx + 0x30) * arg3) + *(rdx + 0x28))
                return arg2
        
        int64_t* rdi_1 = ***(r9_1 + 0x40)
        
        if (rdi_1[0x20].d != 0xffffffff)
            int32_t arg_20
            sub_142337b80(rdi_1, arg3, &arg_8, &arg_20)
            *arg2 = *(zx.q((*(sx.q(arg_8) * 0xe8 + *rdi_1 + 0x10) + arg_20) * rdi_1[0x25].d)
                + rdi_1[0x24])
            return arg2

*arg2 = arg_8
return arg2
