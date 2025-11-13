// 函数: sub_141d9c9f0
// 地址: 0x141d9c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** rsi = arg3
int64_t* rsi_2

if (*(arg1 + 0x3c0) == 0)
    sub_140a464c0()
    int16_t* rbp_1
    
    if (rsi[1].d == 0)
        rbp_1 = &data_142d40450
    else
        rbp_1 = *rsi
    
    rsi_2 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rbp_1, 4)
    void*** rax_16 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_16
    
    if (rax_16 == 0)
        rbx_1 = nullptr
    else
        rax_16[1].d = 1
        *(rax_16 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rsi_2
    
    *arg2 = rsi_2
    arg2[1] = rbx_1
else
    int32_t rax = arg3[1].d
    int16_t* const rbp = &data_142d40450
    int16_t* rdx
    
    if (rax == 0)
        rdx = &data_142d40450
    else
        rdx = *arg3
    
    int32_t rcx = rax - 1
    
    if (rax == 0)
        rcx = 0
    
    int64_t* rax_2 = sub_141d93800(arg1 + 0x3c8, sub_1405969c0(rcx, rdx), rsi)
    
    if (rax_2[1].d == 0)
        sub_140a464c0()
        
        if (rsi[1].d != 0)
            rbp = *rsi
        
        int64_t* rax_4 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rbp, 4)
        
        if (rax_4 != 0)
            int64_t rdx_3 = *rax_4
            int32_t rax_5 = (*(rdx_3 + 0x28))(rax_4, rdx_3)
            int32_t rcx_3 = rax_2[1].d + rax_5
            rax_2[1].d = rcx_3
            
            if (rcx_3 s> *(rax_2 + 0xc))
                sub_1405daba0(rax_2)
                rcx_3 = rax_2[1].d
            
            (*(*rax_4 + 0x150))(rax_4, *rax_2, sx.q(rcx_3))
            (**rax_4)(rax_4, 1)
    
    if (rax_2[1].d s<= 0)
        void*** rax_12 = j_sub_140a82f30(0x18)
        
        if (rax_12 == 0)
            *arg2 = nullptr
            arg2[1] = 0
        else
            rax_12[1].d = 1
            *rax_12 = &data_142d42ea8
            *(rax_12 + 0xc) = 1
            rax_12[2] = 0
            *arg2 = nullptr
            arg2[1] = rax_12
    else
        void*** rax_8 = j_sub_140a82f30(0xb8)
        
        if (rax_8 == 0)
            rsi_2 = nullptr
        else
            int64_t arg_8 = 0
            rsi_2 = sub_140b4c8e0(rax_8, *rax_2, sx.q(rax_2[1].d), 0, 0)
        
        void*** rax_10 = j_sub_140a82f30(0x18)
        
        if (rax_10 == 0)
            *arg2 = rsi_2
            arg2[1] = 0
        else
            rax_10[1].d = 1
            *rax_10 = &data_142d42ea8
            *(rax_10 + 0xc) = 1
            rax_10[2] = rsi_2
            *arg2 = rsi_2
            arg2[1] = rax_10
return arg2
