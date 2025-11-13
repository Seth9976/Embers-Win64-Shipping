// 函数: sub_14076f2f0
// 地址: 0x14076f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)

if (((*(arg1 + 8) u>> 4).b & 1) != 0)
    int64_t* r8_1 = data_143ce3aa0
    int16_t r9_1 = 1
    int64_t i = *(arg1 + 0x10)
    int64_t* rax_2 = r8_1
    int64_t rbx_1 = sx.q(data_143ce3aa8)
    void* rcx_2 = &r8_1[rbx_1 * 2]
    int64_t i_1 = i
    int16_t var_10_1 = 1
    int16_t var_c_1 = 0xffff
    
    if (r8_1 != rcx_2)
        while (*rax_2 != i || rax_2[1].w != 1)
            rax_2 = &rax_2[2]
            
            if (rax_2 == rcx_2)
                goto label_14076f379
    
    if (r8_1 == rcx_2 || ((rax_2 - r8_1) s>> 4).d == 0xffffffff)
    label_14076f379:
        int32_t rax_5 = (rbx_1 + 1).d
        bool cond:0_1 = rax_5 s<= data_143ce3aac
        data_143ce3aa8 = rax_5
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_143ce3aa0)
            i = i_1
            r8_1 = data_143ce3aa0
        
        int64_t rcx_4 = rbx_1 * 2
        r8_1[rcx_4] = i
        r8_1[rcx_4 + 1].w = var_10_1
        *(&r8_1[rcx_4] + 0xa) = 0xffffffff
        r9_1 = var_10_1
        i = i_1
    
    int64_t* r8_2 = data_143ce3ab0
    int64_t rbx_2 = sx.q(data_143ce3ab8)
    int64_t* rax_7 = r8_2
    void* rcx_7 = &r8_2[rbx_2 * 2]
    
    if (r8_2 != rcx_7)
        while (*rax_7 != i || rax_7[1].w != r9_1)
            rax_7 = &rax_7[2]
            
            if (rax_7 == rcx_7)
                goto label_14076f412
    
    if (r8_2 == rcx_7 || ((rax_7 - r8_2) s>> 4).d == 0xffffffff)
    label_14076f412:
        int32_t rax_10 = (rbx_2 + 1).d
        bool cond:1_1 = rax_10 s<= data_143ce3abc
        data_143ce3ab8 = rax_10
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143ce3ab0)
            i = i_1
            r8_2 = data_143ce3ab0
        
        int64_t rcx_9 = rbx_2 * 2
        r8_2[rcx_9] = i
        r8_2[rcx_9 + 1].w = var_10_1
        *(&r8_2[rcx_9] + 0xa) = 0xffffffff
    
    if (sub_140834b00(&i_1) != 0)
        int64_t* r8_3 = data_143ce3ae0
        int64_t rbx_3 = sx.q(data_143ce3ae8)
        int64_t* rax_13 = r8_3
        int64_t i_2 = i_1
        void* rcx_13 = &r8_3[rbx_3 * 2]
        
        if (r8_3 != rcx_13)
            while (*rax_13 != i_2 || rax_13[1].w != var_10_1)
                rax_13 = &rax_13[2]
                
                if (rax_13 == rcx_13)
                    goto label_14076f4ba
        
        if (r8_3 == rcx_13 || ((rax_13 - r8_3) s>> 4).d == 0xffffffff)
        label_14076f4ba:
            int32_t rax_16 = (rbx_3 + 1).d
            bool cond:2_1 = rax_16 s<= data_143ce3aec
            data_143ce3ae8 = rax_16
            
            if (not(cond:2_1))
                sub_1405a4f90(&data_143ce3ae0)
                i_2 = i_1
                r8_3 = data_143ce3ae0
            
            int64_t rcx_15 = rbx_3 * 2
            r8_3[rcx_15] = i_2
            r8_3[rcx_15 + 1].w = var_10_1
            *(&r8_3[rcx_15] + 0xa) = 0xffffffff

sub_14076eb70(*(arg1 + 0x28), *(arg1 + 0x38), *(arg1 + 0x3c))
return sub_14076ed50(*(arg1 + 0x28), *(arg1 + 0x30)) __tailcall
