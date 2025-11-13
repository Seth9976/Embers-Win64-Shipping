// 函数: sub_140be1be0
// 地址: 0x140be1be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = *(arg1 + 0x78); i != 0; i = i[0xc])
    if ((i[8] & 0x8000080000) != 0)
        int64_t rcx
        int64_t r8
        
        if (arg3 == 0)
            rcx = zx.q(*(i + 0x4c))
            r8 = 0
        else
            int32_t rdx
            
            if (arg4 == 0)
                rdx = 0x7fffffff
            else
                rdx = *(arg4 + 0x58)
            
            rcx = sx.q(*(i + 0x4c))
            
            if (*(i + 0x3c) * i[7].d + rcx.d s> rdx)
                r8 = 0
            else
                r8 = arg3 + rcx
        
        (*(*i + 0x100))(i, sx.q(rcx.d) + arg2, r8, arg5, arg6)
