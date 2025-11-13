// 函数: sub_1417d3f60
// 地址: 0x1417d3f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142216be0(&arg1[0x55]) != arg2)
    int64_t* rbx_1 = arg1[0x89]
    int64_t rdi_1 = 0
    int64_t rsi_1 = 0
    uint64_t r15_2 = sx.q(arg1[0x8a].d) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[arg1[0x8a]])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            sub_1422216c0(*rbx_1, arg2, 1)
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rsi_1 != r15_2)
    
    if ((arg1[0x11].b & 1) != 0 && (*(arg1 + 0x2b4) & 0x10) != 0 && sub_141f1e460(arg1) == 0)
        int64_t* rbx_2 = arg1[0x89]
        uint64_t rsi_3 = sx.q(arg1[0x8a].d) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[arg1[0x8a]])
            rsi_3 = 0
        
        if (rsi_3 != 0)
            do
                sub_1422115a0(*rbx_2)
                rdi_1 += 1
                rbx_2 = &rbx_2[1]
            while (rdi_1 != rsi_3)

return sub_1422ac210(arg1, arg2) __tailcall
