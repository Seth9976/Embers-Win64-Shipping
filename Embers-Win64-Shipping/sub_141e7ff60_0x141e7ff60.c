// 函数: sub_141e7ff60
// 地址: 0x141e7ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (sub_141e81130(arg1).b != 0)
    int64_t* rcx = *(arg1 + 0x60)
    char rax_2 = (*(*rcx + 0x40))(rcx)
    int64_t* rax_3 = sub_142475900()
    void* rcx_1 = rax_3[0x23]
    
    if (rcx_1 == 0)
        int64_t rdx_1 = *rax_3
        (*(rdx_1 + 0x390))(rax_3, rdx_1)
        rcx_1 = rax_3[0x23]
    
    *(rcx_1 + 0x140) = rax_2
    void*** rax_4 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_4 != 0)
        rax_4[1] = arg1
        *rax_4 = &data_142d3fe58
        rax_4[2] = sub_141e74b90
        rax_4[4] = sub_140a387b0()
        *rax_4 = &data_142d3feb0
    
    if (rax_4 != 0)
        sub_140599630(&data_14399ff58, 1)
        void arg_10
        (*rax_4)[6](rax_4, &arg_10)
        int64_t rsi_2 = sx.q(data_14399ff60)
        int32_t rax_7 = (rsi_2 + 1).d
        bool cond:0_1 = rax_7 s<= data_14399ff64
        data_14399ff60 = rax_7
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_14399ff58)
        
        void** rax_10 = (rsi_2 << 4) + data_14399ff58
        *rax_10 = rax_4
        rax_10[1].d = 3
    
    int16_t var_30_1 = 1
    int64_t var_38 = 0
    int64_t var_28_1 = 0
    int64_t var_20
    sub_141e72190(arg1 + 0x88, sub_141e85320(arg1, &var_20, &var_38))
    void* rcx_6 = data_143f5b298
    
    if (rcx_6 != 0)
        int64_t var_18
        
        if (sub_1423dcff0(rcx_6) != 0 && var_18 != 0)
            rax = sub_1423dcff0(data_143f5b298)
            int32_t var_10
            
            if (rax != 0)
                sub_141e797e0(rax, zx.q(var_10), var_20)
        
        void* rcx_9 = data_143f5b298
        
        if (rcx_9 != 0 && sub_1423dcff0(rcx_9) != 0 && *(arg1 + 0x90) != 0)
            sub_141e87d10()
            void** rax_12
            rax_12.b = 1
            return rax_12

rax.b = 0
return rax
