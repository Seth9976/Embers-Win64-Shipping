// 函数: sub_1407ba470
// 地址: 0x1407ba470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint32_t result = *(arg1 + 8) u>> 4

if ((result.b & 1) != 0)
    int64_t* r8_1 = data_143ce3aa0
    int16_t result_2 = 1
    int64_t i = *(arg1 + 0x10)
    int64_t* rax_1 = r8_1
    int64_t rbx_1 = sx.q(data_143ce3aa8)
    void* rcx_2 = &r8_1[rbx_1 * 2]
    int64_t i_1 = i
    int16_t result_1 = 1
    int16_t var_c_1 = 0xffff
    
    if (r8_1 != rcx_2)
        while (*rax_1 != i || rax_1[1].w != 1)
            rax_1 = &rax_1[2]
            
            if (rax_1 == rcx_2)
                goto label_1407ba4f4
    
    if (r8_1 == rcx_2 || ((rax_1 - r8_1) s>> 4).d == 0xffffffff)
    label_1407ba4f4:
        int32_t rax_4 = (rbx_1 + 1).d
        bool cond:0_1 = rax_4 s<= data_143ce3aac
        data_143ce3aa8 = rax_4
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_143ce3aa0)
            i = i_1
            r8_1 = data_143ce3aa0
        
        int64_t rcx_4 = rbx_1 * 2
        r8_1[rcx_4] = i
        r8_1[rcx_4 + 1].w = result_1
        *(&r8_1[rcx_4] + 0xa) = 0xffffffff
        result_2 = result_1
        i = i_1
    
    int64_t* r8_2 = data_143ce3ab0
    int64_t rbx_2 = sx.q(data_143ce3ab8)
    int64_t* rax_6 = r8_2
    void* rcx_7 = &r8_2[rbx_2 * 2]
    
    if (r8_2 != rcx_7)
        while (*rax_6 != i || rax_6[1].w != result_2)
            rax_6 = &rax_6[2]
            
            if (rax_6 == rcx_7)
                goto label_1407ba58a
    
    if (r8_2 == rcx_7 || ((rax_6 - r8_2) s>> 4).d == 0xffffffff)
    label_1407ba58a:
        int32_t rax_9 = (rbx_2 + 1).d
        bool cond:1_1 = rax_9 s<= data_143ce3abc
        data_143ce3ab8 = rax_9
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143ce3ab0)
            i = i_1
            r8_2 = data_143ce3ab0
        
        int64_t rcx_9 = rbx_2 * 2
        r8_2[rcx_9] = i
        r8_2[rcx_9 + 1].w = result_1
        *(&r8_2[rcx_9] + 0xa) = 0xffffffff
    
    result = sub_140834b00(&i_1)
    
    if (result.b != 0)
        int64_t* r8_3 = data_143ce3ae0
        int64_t rbx_3 = sx.q(data_143ce3ae8)
        int64_t* rax_11 = r8_3
        int64_t i_2 = i_1
        void* rcx_13 = &r8_3[rbx_3 * 2]
        
        if (r8_3 != rcx_13)
            while (*rax_11 != i_2 || rax_11[1].w != result_1)
                rax_11 = &rax_11[2]
                
                if (rax_11 == rcx_13)
                    goto label_1407ba632
            
            result = ((rax_11 - r8_3) s>> 4).d
        
        if (r8_3 == rcx_13 || result == 0xffffffff)
        label_1407ba632:
            int32_t rax_13 = (rbx_3 + 1).d
            bool cond:2_1 = rax_13 s<= data_143ce3aec
            data_143ce3ae8 = rax_13
            
            if (not(cond:2_1))
                sub_1405a4f90(&data_143ce3ae0)
                i_2 = i_1
                r8_3 = data_143ce3ae0
            
            int64_t rcx_15 = rbx_3 * 2
            r8_3[rcx_15] = i_2
            result = zx.d(result_1)
            r8_3[rcx_15 + 1].w = result.w
            *(&r8_3[rcx_15] + 0xa) = 0xffffffff

return result
