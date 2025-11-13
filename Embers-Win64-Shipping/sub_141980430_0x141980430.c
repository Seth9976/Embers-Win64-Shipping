// 函数: sub_141980430
// 地址: 0x141980430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
    *arg2 = 0
else
    void*** r9_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r9_3[3]
    
    if (rax_1 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x20)
        r9_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r9_3[3]
    
    *(arg1 + 0x30) = rax_1
    int64_t* rax_2 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_2 = r9_3
    *(arg1 + 8) = &r9_3[1]
    r9_3[1] = 0
    *r9_3 = &data_143002a68
    sub_140a228d0(&r9_3[2])
    
    if (arg3 != 0)
        void* rax_4 = r9_3[2]
        int64_t* rcx_2 = data_143f02f40
        data_143f02f40 = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 0x48) += 1
        
        if (rcx_2 != 0)
            rcx_2[9].d -= 1
            
            if (rcx_2[9].d == 1)
                sub_140a2f6e0(rcx_2)
    
    void* rax_6 = r9_3[2]
    *arg2 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 0x48) += 1

return arg2
