// 函数: sub_1422b7940
// 地址: 0x1422b7940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
sub_141ff4780(&arg_8, arg1, 0, 0xd6)
(*(*arg1 + 0x1d8))(arg1, &data_1439a94c8)
sub_1422d1070(arg2, arg1, arg3)

if ((arg1[5].b & 1) != 0 || *(arg2 + 0x30) == 0)
    sub_1422b8ec0(arg2)

if (((arg_8 & 2) == 0 || *(arg1 + 0x2a) s< 0) && *(arg2 + 0x30) != 0)
    int64_t rbp_1 = 0
    int32_t rax_1
    
    if ((arg1[5].b & 1) != 0)
        rax_1 = sub_140b4e7c0(arg1, &data_1439a94c8)
    
    if ((arg1[5].b & 1) == 0 || rax_1 s>= 5)
        int64_t* rcx_15 = *(arg2 + 0x30)
        (*(*rcx_15 + 0x40))(rcx_15, arg1, 0)
    else
        int32_t rbx_1 = *(arg2 + 0x24)
        char rdi_1 = *(arg2 + 0x28)
        int64_t* rax_2
        int64_t r8_1
        rax_2, r8_1 = j_sub_140a82f30(0x28)
        int64_t* rsi_1 = rax_2
        
        if (rbx_1 u<= 4)
            if (rdi_1 == 0)
                if (rsi_1 == 0)
                    rsi_1 = nullptr
                else
                    char rax_6 = *(arg2 + 0x20)
                    rsi_1[2] = 0
                    rsi_1[3] = 0
                    rsi_1[4].b = rax_6
                    rsi_1[1] = &data_143317630
                    *rsi_1 = &data_143317670
            else if (rsi_1 == 0)
                rsi_1 = nullptr
            else
                char rax_5 = *(arg2 + 0x20)
                rsi_1[2] = 0
                rsi_1[3] = 0
                rsi_1[4].b = rax_5
                rsi_1[1] = &data_143317590
                *rsi_1 = &data_1433175d0
        else if (rdi_1 == 0)
            if (rsi_1 == 0)
                rsi_1 = nullptr
            else
                char rax_4 = *(arg2 + 0x20)
                rsi_1[2] = 0
                rsi_1[3] = 0
                rsi_1[4].b = rax_4
                rsi_1[1] = &data_1433174f0
                *rsi_1 = &data_143317530
        else if (rax_2 == 0)
            rsi_1 = nullptr
        else
            char rax_3 = *(arg2 + 0x20)
            rsi_1[2] = 0
            rsi_1[3] = 0
            rsi_1[4].b = rax_3
            rsi_1[1] = &data_143317450
            *rsi_1 = &data_143317490
        
        int32_t rax_7
        
        if ((arg1[5].b & 1) != 0)
            rax_7, r8_1 = sub_140b4e7c0(arg1, &data_1439a94c8)
        
        if ((arg1[5].b & 1) == 0 || rax_7 s>= 4)
            r8_1.b = 0
        else
            r8_1.b = 1
        
        (*(*rsi_1 + 0x40))(rsi_1, arg1, r8_1)
        int64_t* rax_10 = (*(*rsi_1 + 0x38))(rsi_1)
        int64_t rdx_3 = *rax_10
        uint32_t count = (*(rdx_3 + 0x18))(rax_10, rdx_3)
        int64_t* rcx_9 = *(arg2 + 0x30)
        int64_t r9_1 = *rcx_9
        (*(r9_1 + 8))(rcx_9, zx.q(count), 0, r9_1)
        int64_t rdx_5 = *rsi_1
        int64_t rax_11 = (*(rdx_5 + 0x30))(rsi_1, rdx_5)
        int64_t* rcx_11 = *(arg2 + 0x30)
        int64_t rdx_6 = *rcx_11
        memcpy((*(rdx_6 + 0x30))(rcx_11, rdx_6), rax_11, count)
        *(arg2 + 0x40) = (*(*rsi_1 + 0x28))(rsi_1)
        (**rsi_1)(rsi_1, 1)
    
    if (*(arg1 + 0x2a) s>= 0)
        if (*(arg2 + 0x44) u> 0)
            int64_t* rcx_16 = *(arg2 + 0x30)
            int64_t* rax_18 = (*(*rcx_16 + 0x38))(rcx_16)
            int64_t rdx_9 = *rax_18
            
            if ((*(rdx_9 + 0x18))(rax_18, rdx_9) != 0)
                int64_t* rcx_18 = *(arg2 + 0x30)
                rbp_1 = (*(*rcx_18 + 0x30))(rcx_18)
        
        *(arg2 + 0x38) = rbp_1

return arg1
