// 函数: sub_141f51c20
// 地址: 0x141f51c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18
sub_141ff4780(&arg_18, arg1, 0, 0xd6)
char arg_8

if ((arg_18 & 2) == 0)
    int32_t rax_1
    
    if ((arg1[5].b & 1) != 0)
        rax_1, arg3 = sub_140b4e7c0(arg1, &data_1439a9478)
    
    if ((arg1[5].b & 1) == 0 || rax_1 s>= 9)
        sub_1409ac860(arg1, arg2, arg3)
    else
        void var_18
        *arg2 = *sub_140b214c0(&var_18)
        int64_t rax_3 = j_sub_140a82f30(0x38)
        int64_t* rsi_1
        
        if (rax_3 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = sub_1420f37f0(rax_3)
        
        arg2[1].q = rsi_1
        arg_8.q = *rsi_1
        sub_1420d96c0(arg1, &arg_8, arg3)
        
        if ((arg1[5].b & 1) != 0)
            void* rax_6 = arg_8.q
            int64_t* rcx_5 = *rsi_1
            *rsi_1 = rax_6
            
            if (rax_6 != 0)
                *(rax_6 + 0x1c) += 1
            
            if (rcx_5 != 0)
                int32_t temp0_1 = *(rcx_5 + 0x1c)
                *(rcx_5 + 0x1c) -= 1
                
                if (temp0_1 == 1)
                    (*(*rcx_5 + 0x40))()
        
        void* rsi_2 = arg2[1].q
        arg_8.q = *(rsi_2 + 8)
        sub_142307be0(arg1, &arg_8, arg3)
        
        if ((arg1[5].b & 1) != 0)
            void* rax_9 = arg_8.q
            int64_t* rcx_7 = *(rsi_2 + 8)
            *(rsi_2 + 8) = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 0x18) += 1
            
            if (rcx_7 != 0)
                rcx_7[3].d -= 1
                
                if (rcx_7[3].d == 1)
                    (*(*rcx_7 + 0x38))()

if ((arg4 & 1) == 0)
    void* rax_11 = arg2[3].q
    
    if (rax_11 == 0 || *(rax_11 + 0x34) u<= 0 || *(rax_11 + 0x30) u<= 0)
        rax_11.b = 0
    else
        rax_11.b = 1
    
    int64_t* rcx_9 = arg1[1]
    arg_8 = rax_11.b
    char* rdx_4 = *rcx_9
    
    if (&rdx_4[1] u> rcx_9[1])
        (*(*arg1 + 0x150))(arg1, &arg_8, 1)
    else
        arg_8 = *rdx_4
        *rcx_9 += 1
    
    if (arg_8 != 0)
        if ((arg1[5].b & 1) != 0)
            void*** rax_16 = j_sub_140a82f30(0x40)
            
            if (rax_16 != 0)
                rax_16 = sub_1422877b0(rax_16)
            
            arg2[3].q = rax_16
        
        char r8_1
        
        if ((arg1[5].b & 1) == 0 || (arg1[5].b & 1) == 0 || data_143de5426 != 0
                || data_143a2d814 != 0)
            r8_1 = 1
        else
            r8_1 = 0
        
        sub_1422ab240(arg2[3].q, arg1, r8_1, arg3)
        
        if ((arg1[5].b & 1) != 0)
            int64_t* rcx_13 = arg2[3].q
            
            if (*(rcx_13 + 0x34) u<= 0 || rcx_13[6].d u<= 0)
                if (rcx_13 != 0)
                    (**rcx_13)(rcx_13, 1)
                
                arg2[3].q = 0
            else
                arg3 = sub_141997e80(rcx_13)

if ((arg_18 & 1) == 0 && ((*(arg1 + 0x2b) & 2) == 0 || *(arg1 + 0x2a) s>= 0))
    sub_141f51e60(arg1, &arg2[2], arg3)

return arg1
