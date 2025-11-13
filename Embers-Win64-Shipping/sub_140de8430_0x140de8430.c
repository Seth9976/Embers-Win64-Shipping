// 函数: sub_140de8430
// 地址: 0x140de8430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == data_143e244b0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_2

if (sub_140db3510(&arg1[3]) == 0)
    int128_t var_58
    sub_140d94830(&var_58, arg1)
    int32_t rax_3 = arg4[1].d
    int32_t rbp_1 = 0
    int32_t var_4c_1 = arg3
    
    if (arg1[0x37].d != 0)
        int64_t* rcx_3 = arg1[0x36]
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (arg1[0x37].d == 0)
                rcx_4 = nullptr
            else
                rcx_4 = arg1[0x36]
            
            char arg_8
            (*(*rcx_4 + 0x48))(rcx_4, &arg_8)
            arg1[0x35].b = arg_8
    
    char rax_8 = arg1[0x35].b
    char var_3e_1 = rax_8
    int64_t r13
    
    if (arg5 == 0 || (rax_8 & 0x19) == 0)
        r13.b = 0
    else
        r13.b = 1
    
    arg1[5].b &= 0x7f
    char rcx_5 = (*(arg1 + 0x29) & 0xfe) | (r13.b ^ 1)
    *(arg1 + 0x29) = rcx_5
    char var_3d
    char var_3d_1 = var_3d ^ ((rcx_5 << 2 ^ var_3d) & 4)
    arg1[5].b |= arg6 << 7
    int64_t var_68
    int64_t* rax_12 = sub_140d94870(&var_68, arg2, rax_3)
    bool cond:1_1 = (*(arg1 + 0x29) & 1) == 0
    *(arg1 + 0x18) = *rax_12
    
    if (not(cond:1_1) && arg1[0x27] != 0)
        void* rax_13 = arg1[0x28]
        
        if (rax_13 != 0 && *(rax_13 + 8) s> 0)
            sub_140dbb220(&arg1[0x27])
    
    int64_t rbx_1 = sx.q(arg4[1].d)
    int32_t rax_14 = (rbx_1 + 1).d
    arg4[1].d = rax_14
    
    if (rax_14 s> *(arg4 + 0xc))
        sub_140dbce90(arg4, rbx_1.d)
    
    int64_t rax_15 = *arg4
    int64_t rcx_10 = rbx_1 << 5
    *(rcx_10 + rax_15) = var_58
    int128_t var_48
    *(rcx_10 + rax_15 + 0x10) = var_48
    
    if ((*(*arg1 + 0x210))(arg1).b == 0 || arg3 == 0xffffffff)
        int64_t* rax_18 = (*(*arg1 + 0x190))(arg1)
        int64_t rdx_4 = *rax_18
        int32_t rax_19 = (*rdx_4)(rax_18, rdx_4)
        int32_t rsi_1 = 0
        
        if (rax_19 s> 0)
            do
                int64_t r9 = *rax_18
                char var_78
                char var_70
                (*(r9 + 0x10))(rax_18, &var_68, zx.q(rsi_1), r9, var_78, var_70)
                char rax_20
                
                if (arg6 != 0 || (arg1[5].b & 0x40) != 0)
                    rax_20 = 1
                else
                    rax_20 = 0
                
                var_70 = rax_20
                var_78 = r13.b
                
                if (sub_140de8430(var_68, arg2, zx.q(rax_3), arg4, var_78, var_70) != 0)
                    rbp_1 += 1
                
                int64_t* var_60
                
                if (var_60 != 0)
                    var_60[1].d -= 1
                    
                    if (var_60[1].d == 1)
                        (**var_60)(var_60)
                        int32_t temp1_1 = *(var_60 + 0xc)
                        *(var_60 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*var_60 + 8))(var_60, 1)
                
                rsi_1 += 1
            while (rsi_1 s< rax_19)
        
        rax_2 = -1
        void* rdx_9 = (sx.q(rax_3) << 5) + *arg4
        *(rdx_9 + 0x10) = rbp_1
        int32_t rcx_19 = arg4[1].d - 1
        
        if (rcx_19 != rax_3)
            rax_2 = rcx_19
        
        *(rdx_9 + 0x14) = rax_2
    
    rax_2.b = 1
else
    sub_140db3510(&arg1[3])
    rax_2.b = 0

return rax_2
