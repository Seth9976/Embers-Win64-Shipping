// 函数: sub_1427248c0
// 地址: 0x1427248c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)

if ((*(rax + 0xcc) & 1) == 0)
    int32_t rbx_1 = *(rax + 0x18)
    bool cond:0_1 = data_143b58168 == data_143b58194
    int32_t arg_8 = rbx_1
    void* rcx_3
    
    if (cond:0_1)
    labelid_7:
        rcx_3 = nullptr
    else
        int32_t rax_2 = sub_140b5ead0(rbx_1)
        void* rcx_1 = data_143b581a0
        void* rax_4 = &data_143b58198
        
        if (rcx_1 != 0)
            rax_4 = rcx_1
        
        int32_t rax_5 = *(rax_4 + (((sx.q(data_143b581a8) - 1) & sx.q(rax_2)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_14272496a:
            rcx_3 = nullptr
        else
            int64_t r8_1 = data_143b58160
            int64_t rdx_4
            
            while (true)
                rdx_4 = sx.q(rax_5) * 0x18
                
                if (*(rdx_4 + r8_1) == rbx_1)
                    break
                
                rax_5 = *(rdx_4 + r8_1 + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_14272496a_1
            
            rcx_3 = rdx_4 + r8_1
            
            if (rax_5 == 0xffffffff)
            label_14272496a_1:
                rcx_3 = nullptr
    
    char* rax_6 = rcx_3 + 4
    
    if (rcx_3 == 0)
        rax_6 = nullptr
    
    if (rax_6 == 0)
        char rcx_5 = data_143f72518
        int64_t rdx_5 = *(arg1 + 0x18)
        char var_18 = rcx_5
        int64_t var_14_1 = rdx_5
        data_143f72518 = rcx_5 + 1
        *(arg1 + 0x44) = rcx_5
        *(arg1 + 0x48) = rdx_5
        sub_142719200(&data_143b58160, &arg_8, &var_18)
    else
        int64_t rcx_4 = *(rax_6 + 4)
        *(arg1 + 0x44) = *rax_6
        *(arg1 + 0x48) = rcx_4

*arg2 = *(arg1 + 0x44)
*(arg2 + 4) = *(arg1 + 0x48)
return arg2
