// 函数: sub_141e546e0
// 地址: 0x141e546e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result = *(arg1 + 0x224)

if (not(result f!= *(arg2 + 0xa8)) && *(arg2 + 0xb0) == *(arg1 + 0x22c)
        && *(arg2 + 0xb4) == arg1[0x46].d && *(arg2 + 0xb8) == *(arg1 + 0x234)
        && *(arg2 + 0xbc) == arg1[0x47].d && *(arg2 + 0xc0) == *(arg1 + 0x23c)
        && *(arg2 + 0xc4) == arg1[0x48].d && *(arg2 + 0xc8) == *(arg1 + 0x244)
        && *(arg2 + 0xcc) == arg1[0x49].d && *(arg2 + 0xd0) == *(arg1 + 0x24c))
    void* r13_1 = nullptr
    int64_t var_48_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_40 = 0xffffffff
    void var_38
    sub_140d3a3a0(&var_38, nullptr)
    void* const rbx_1 = nullptr
    char var_4f
    
    if ((arg1[0x11].b & 1) != 0)
        void* rax_11
        
        if (arg1[0x15] == 0)
            rax_11 = sub_141ee69e0(arg1)
        
        if (arg1[0x15] != 0 || rax_11 != 0)
            if ((arg1[0x11].b & 2) != 0)
                sub_141efe1c0(arg1, nullptr)
            
            rbx_1 = arg1[0x15]
            
            if (rbx_1 == 0)
                rbx_1 = sub_141ee69e0(arg1)
            
            void* const var_58_1 = rbx_1
            char var_50_1 = 1
            var_4f = (var_4f & 0xfd) | 1
            sub_141ee0b60(arg1)
            arg1[0x15] = 0
    
    sub_140d3a3a0(&var_38, rbx_1)
    int64_t* rdx_1 = nullptr
    
    if (sub_140d3e110(&var_38) != 0)
        rdx_1 = arg1
    
    sub_140d3a3a0(&var_40, rdx_1)
    sub_141e68c80(arg1)
    int32_t rax_14 = sub_140bc7f20(arg2 + 0xd8)
    sub_140bcb6b0(&arg1[0x50], 2)
    int64_t arg_8 = sub_140bce470(&arg1[0x50], sx.q(rax_14))
    sub_140bc7fd0(arg2 + 0xd8, &arg_8, 0)
    sub_140bd1d40(&arg1[0x50])
    int32_t rax_16 = sub_140bc7f20(arg2 + 0xf8)
    sub_140bcb6b0(&arg1[0x54], 2)
    arg_8 = sub_140bce470(&arg1[0x54], sx.q(rax_16))
    sub_140bc7fd0(arg2 + 0xf8, &arg_8, 0)
    sub_140bd1d40(&arg1[0x54])
    int32_t rax_18 = sub_140bc7f20(arg2 + 0x118)
    sub_140bcb6b0(&arg1[0x58], 2)
    arg_8 = sub_140bce470(&arg1[0x58], sx.q(rax_18))
    sub_140bc7fd0(arg2 + 0x118, &arg_8, 0)
    sub_140bd1d40(&arg1[0x58])
    arg1[0x4c].d = 2
    result = sub_141e63970(arg1)
    
    if (sub_140d3e110(&var_40) != 0)
        int64_t rax_21 = sub_140d3c6e0(&var_38)
        int64_t* rax_22 = sub_140d3c6e0(&var_40)
        int32_t rax_23 = *(rax_22 + 0xc)
        
        if (rax_23 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_23)
            uint32_t rdx_9 = zx.d(temp0_1)
            int32_t rax_25 = temp1_1 + rdx_9
            r13_1 = *(data_143e1d9a0 + (sx.q(rax_25 s>> 0x10) << 3))
                + sx.q(zx.d(rax_25.w) - rdx_9) * 0x18
        
        if (((*(r13_1 + 8) u>> 0x1d).b & 1) == 0)
            if ((rax_22[0x11].b & 1) != 0)
                sub_141ee0b60(rax_22)
            
            rax_22[0x15] = rax_21
            int64_t var_58_2 = rax_21
            char var_4f_1 = (var_4f & 0xfd) | 1
            char var_50_2 = 1
            sub_141ee0740(rax_22, 0)
            result = sub_141efe1c0(rax_22, nullptr)

return result
