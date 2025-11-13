// 函数: sub_142334b20
// 地址: 0x142334b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rsi = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rsi
        
        if (rbx_1 != 0)
            sub_140bc0410(&rbx_1[0x7d])
            int64_t rcx_1 = rbx_1[0x7a]
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = rbx_1[0x78]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            sub_141e38b40(&rbx_1[0x60])
            sub_142307870(&rbx_1[0x41])
            sub_1422b54d0(&rbx_1[0x38])
            sub_1422b5540(&rbx_1[0x27])
            sub_142289b70(&rbx_1[0x1f])
            sub_142289c80(&rbx_1[0x17])
            sub_1422b5620(&rbx_1[6])
            sub_142289bd0(&rbx_1[4])
            sub_142289bd0(&rbx_1[2])
            sub_14232b440(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rsi = &rsi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) == arg2)
    return 

return sub_140638c50(arg1, arg2) __tailcall
