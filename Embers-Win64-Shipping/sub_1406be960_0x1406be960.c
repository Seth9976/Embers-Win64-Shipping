// 函数: sub_1406be960
// 地址: 0x1406be960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].b == 0)
    int128_t* rax_1 = j_sub_140a82f30(0x68)
    
    if (rax_1 != 0)
        __builtin_memset(rax_1, 0, 0x68)
        *rax_1 = *arg2
        rax_1[1] = arg2[1]
        rax_1[2] = arg2[2]
        rax_1[3] = arg2[3]
        rax_1[4] = arg2[4]
        rax_1[5].q = arg2[5].q
        
        if (arg2 == sub_1406bbf50())
            *(arg1 + 0x24) += 1
        
        rax_1[6].d = *(arg1 + 0x24)
        void* rax_4 = arg1[1]
        
        if (rax_4 != 0)
            *(rax_4 + 0x58) = rax_1
        else
            *arg1 = rax_1
        
        arg1[2].d += 1
        arg1[1] = rax_1
        *(arg1 + 0x14) += rax_1[2].d + 0x68
        arg1[3] += rax_1[4].q
        int64_t* rcx_1 = arg1[0xa]
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x10))(rcx_1)
        
        return 0

return 0xffffffff
