// 函数: sub_141903910
// 地址: 0x141903910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x80)

if (r8 != 0)
    int32_t rax_1 = *(r8 + 0x18)
    int32_t rsi_1 = *(arg1 + 0x74)
    
    if (rax_1 != 0)
        if (rax_1 u> 1)
            *(arg1 + 0x70) = *(r8 + 0x1c)
    else if (*(arg1 + 0x98) != *(r8 + 0x78))
        int32_t rdx_1 = *(arg1 + 0x78)
        int64_t rbp_1 = *(r8 + 0x48)
        int32_t rcx_1 = *(r8 + 0x74) - rdx_1
        
        if (rdx_1 u>= *(r8 + 0x74))
            rcx_1 = 0
        
        if (rsi_1 u<= rcx_1)
            rcx_1 = rsi_1
        
        rsi_1 = rcx_1
        int64_t* rcx_2 = *(arg1 + 0x60)
        void* r9_1 = *rcx_2
        
        if (r9_1 == 0 || *(r9_1 + 0x30) != rdx_1 + *(r8 + 0x50) || *(r9_1 + 0x34) != rsi_1
                || *(arg1 + 0x90) != rbp_1)
            sub_1405d16e0(rcx_2, nullptr)
            r8 = *(arg1 + 0x80)
        
        *(arg1 + 0x98) = *(r8 + 0x78)
        *(arg1 + 0x90) = rbp_1
    
    if (*(*(arg1 + 0x60) + (sx.q(*(arg1 + 0x70)) << 3)) == 0)
        void*** rax_5 = j_sub_140a82f30(0x38)
        void*** rdx_3 = rax_5
        
        if (rax_5 == 0)
            rdx_3 = nullptr
        else
            int64_t rcx_4 = *(arg1 + 0x18)
            *rdx_3 = &data_142d3ff08
            rdx_3[1].d = 0
            *(rdx_3 + 0xc) = 0
            rdx_3[2].w = 0x100
            rdx_3[3] = rcx_4
            *rdx_3 = &data_142ff1be0
            __builtin_memset(&rdx_3[4], 0, 0x18)
        
        sub_1405d16e0(*(arg1 + 0x60) + (sx.q(*(arg1 + 0x70)) << 3), rdx_3)
        void* rdx_4 = *(arg1 + 0x80)
        sub_1418dadb0(*(*(arg1 + 0x60) + (sx.q(*(arg1 + 0x70)) << 3)), rdx_4, *(arg1 + 0x20), 
            *(rdx_4 + 0x50) + *(arg1 + 0x78), rsi_1)
else if (*(arg1 + 0x48) == 0 && *(arg1 + 0x30) == 0)
    int64_t* rcx_9
    
    if (*(arg1 + 0x24) != 1)
        rcx_9 = *(arg1 + 0x28)
    
    int64_t r15
    
    if (*(arg1 + 0x24) == 1 || ((rcx_9[8].d u>> 4).b & 1) == 0)
        rcx_9 = *(arg1 + 0x28)
        r15.b = 0
    else
        r15.b = 1
    
    int32_t rax_11 = *(arg1 + 0x20)
    int32_t rsi_2
    
    if (rax_11 != 0)
        rsi_2 = rax_11
    else
        rsi_2 = *(rcx_9 + 0x3c)
    
    void* rax_13 = (*(*rcx_9 + 8))(rcx_9)
    
    if (rax_13 == 0)
        int64_t* rcx_11 = *(arg1 + 0x28)
        void* rax_17 = (*(*rcx_11 + 0x20))(rcx_11)
        
        if (rax_17 == 0)
            int64_t* rcx_15 = *(arg1 + 0x28)
            uint64_t rax_20 = (*(*rcx_15 + 0x18))(rcx_15)
            uint64_t rbp_4 = rax_20
            int32_t var_30_1
            int32_t var_28_1
            int32_t rax_21
            int32_t r9_4
            
            if (rax_20 == 0)
                int64_t* rcx_17 = *(arg1 + 0x28)
                uint64_t rax = (*(*rcx_17 + 0x10))(rcx_17)
                rbp_4 = rax
                
                if (rax != 0)
                    int32_t rdi_1 = *(arg1 + 0x5c)
                    
                    if (rdi_1 == 0)
                        rdi_1 = *(rax + 0x68)
                    
                    rax_21 = sub_1418f0050(rsi_2, r15.b)
                    r9_4 = 5
                    char var_20_4 = 0
                    var_28_1 = rdi_1
                    var_30_1 = *(arg1 + 0x58)
                    goto label_141903bda
            else
                rax_21 = sub_1418f0050(rsi_2, r15.b)
                char var_20_3 = 0
                var_28_1 = 1
                var_30_1 = 0
                r9_4 = 2
            label_141903bda:
                sub_1418f7420(arg1 + 0x30, *(arg1 + 0x18), *(rbp_4 + 0x88), r9_4, *(rbp_4 + 0xec), 
                    rsi_2, rax_21, *(arg1 + 0x50), *(arg1 + 0x54), var_30_1, var_28_1, 0)
        else
            int32_t rax_18 = sub_1418f0050(rsi_2, r15.b)
            char var_20_2 = 0
            sub_1418f7420(arg1 + 0x30, *(arg1 + 0x18), *(rax_17 + 0x80), 3, *(rax_17 + 0xe4), 
                rsi_2, rax_18, *(arg1 + 0x50), *(arg1 + 0x54), 0, 1, 0)
    else
        int32_t rax_14 = sub_1418f0050(rsi_2, r15.b)
        char var_20_1 = 0
        sub_1418f7420(arg1 + 0x30, *(arg1 + 0x18), *(rax_13 + 0x80), 1, *(rax_13 + 0xe4), rsi_2, 
            rax_14, *(arg1 + 0x50), *(arg1 + 0x54), 0, 1, 0)
