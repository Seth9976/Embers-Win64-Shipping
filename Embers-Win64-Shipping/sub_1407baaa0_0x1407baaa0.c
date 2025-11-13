// 函数: sub_1407baaa0
// 地址: 0x1407baaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint32_t result = *(arg1 + 8) u>> 4

if ((result.b & 1) != 0)
    int64_t* r8_1 = data_143ce3aa0
    int16_t r9_1 = 1
    int64_t i = *(arg1 + 0x10)
    int64_t* rax_1 = r8_1
    int64_t rbx_1 = sx.q(data_143ce3aa8)
    void* rcx_2 = &r8_1[rbx_1 * 2]
    int64_t i_2 = i
    int16_t var_10_1 = 1
    int16_t var_c_1 = 0xffff
    
    if (r8_1 != rcx_2)
        while (*rax_1 != i || rax_1[1].w != 1)
            rax_1 = &rax_1[2]
            
            if (rax_1 == rcx_2)
                goto label_1407bab28
    
    if (r8_1 == rcx_2 || ((rax_1 - r8_1) s>> 4).d == 0xffffffff)
    label_1407bab28:
        int32_t rax_4 = (rbx_1 + 1).d
        bool cond:0_1 = rax_4 s<= data_143ce3aac
        data_143ce3aa8 = rax_4
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_143ce3aa0)
            i = i_2
            r8_1 = data_143ce3aa0
        
        int64_t rcx_4 = rbx_1 * 2
        r8_1[rcx_4] = i
        r8_1[rcx_4 + 1].w = var_10_1
        *(&r8_1[rcx_4] + 0xa) = 0xffffffff
        r9_1 = var_10_1
        i = i_2
    
    int64_t* r8_2 = data_143ce3ab0
    int64_t rbx_2 = sx.q(data_143ce3ab8)
    int64_t* rax_6 = r8_2
    void* rcx_7 = &r8_2[rbx_2 * 2]
    
    if (r8_2 != rcx_7)
        while (*rax_6 != i || rax_6[1].w != r9_1)
            rax_6 = &rax_6[2]
            
            if (rax_6 == rcx_7)
                goto label_1407babba
    
    if (r8_2 == rcx_7 || ((rax_6 - r8_2) s>> 4).d == 0xffffffff)
    label_1407babba:
        int32_t rax_9 = (rbx_2 + 1).d
        bool cond:1_1 = rax_9 s<= data_143ce3abc
        data_143ce3ab8 = rax_9
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_143ce3ab0)
            i = i_2
            r8_2 = data_143ce3ab0
        
        int64_t rcx_9 = rbx_2 * 2
        r8_2[rcx_9] = i
        r8_2[rcx_9 + 1].w = var_10_1
        *(&r8_2[rcx_9] + 0xa) = 0xffffffff
    
    if (sub_140834b00(&i_2) != 0)
        int64_t* r8_3 = data_143ce3ae0
        int64_t rbx_3 = sx.q(data_143ce3ae8)
        int64_t* rax_12 = r8_3
        int64_t i_4 = i_2
        void* rcx_13 = &r8_3[rbx_3 * 2]
        
        if (r8_3 != rcx_13)
            while (*rax_12 != i_4 || rax_12[1].w != var_10_1)
                rax_12 = &rax_12[2]
                
                if (rax_12 == rcx_13)
                    goto label_1407bac62
        
        if (r8_3 == rcx_13 || ((rax_12 - r8_3) s>> 4).d == 0xffffffff)
        label_1407bac62:
            int32_t rax_15 = (rbx_3 + 1).d
            bool cond:3_1 = rax_15 s<= data_143ce3aec
            data_143ce3ae8 = rax_15
            
            if (not(cond:3_1))
                sub_1405a4f90(&data_143ce3ae0)
                i_4 = i_2
                r8_3 = data_143ce3ae0
            
            int64_t rcx_15 = rbx_3 * 2
            r8_3[rcx_15] = i_4
            r8_3[rcx_15 + 1].w = var_10_1
            *(&r8_3[rcx_15] + 0xa) = 0xffffffff
    
    int64_t i_3 = sub_140874d90()
    int64_t* r8_4 = data_143ce3aa0
    int64_t i_1 = i_3
    int64_t rbx_4 = sx.q(data_143ce3aa8)
    int16_t result_2 = 2
    i_2 = i_3
    int64_t* rcx_16 = r8_4
    int16_t result_1 = 2
    void* rax_19 = &r8_4[rbx_4 * 2]
    int16_t var_c_2 = 0xffff
    
    if (r8_4 != rax_19)
        while (*rcx_16 != i_1 || rcx_16[1].w != 2)
            rcx_16 = &rcx_16[2]
            
            if (rcx_16 == rax_19)
                goto label_1407bad08
    
    if (r8_4 == rax_19 || ((rcx_16 - r8_4) s>> 4).d == 0xffffffff)
    label_1407bad08:
        int32_t rax_20 = (rbx_4 + 1).d
        bool cond:2_1 = rax_20 s<= data_143ce3aac
        data_143ce3aa8 = rax_20
        
        if (not(cond:2_1))
            sub_1405a4f90(&data_143ce3aa0)
            i_1 = i_2
            r8_4 = data_143ce3aa0
        
        int64_t rcx_20 = rbx_4 * 2
        r8_4[rcx_20] = i_1
        r8_4[rcx_20 + 1].w = result_1
        *(&r8_4[rcx_20] + 0xa) = 0xffffffff
        result_2 = result_1
        i_1 = i_2
    
    int64_t* r8_5 = data_143ce3ab0
    int64_t rbx_5 = sx.q(data_143ce3ab8)
    int64_t* rax_22 = r8_5
    void* rcx_23 = &r8_5[rbx_5 * 2]
    
    if (r8_5 != rcx_23)
        while (*rax_22 != i_1 || rax_22[1].w != result_2)
            rax_22 = &rax_22[2]
            
            if (rax_22 == rcx_23)
                goto label_1407bad9a
    
    if (r8_5 == rcx_23 || ((rax_22 - r8_5) s>> 4).d == 0xffffffff)
    label_1407bad9a:
        int32_t rax_25 = (rbx_5 + 1).d
        bool cond:4_1 = rax_25 s<= data_143ce3abc
        data_143ce3ab8 = rax_25
        
        if (not(cond:4_1))
            sub_1405a4f90(&data_143ce3ab0)
            i_1 = i_2
            r8_5 = data_143ce3ab0
        
        int64_t rcx_25 = rbx_5 * 2
        r8_5[rcx_25] = i_1
        r8_5[rcx_25 + 1].w = result_1
        *(&r8_5[rcx_25] + 0xa) = 0xffffffff
        result_2 = result_1
        i_1 = i_2
    
    int64_t* r8_6 = data_143ce3ac0
    int64_t rbx_6 = sx.q(data_143ce3ac8)
    int64_t* rax_27 = r8_6
    void* rcx_28 = &r8_6[rbx_6 * 2]
    
    if (r8_6 != rcx_28)
        while (*rax_27 != i_1 || rax_27[1].w != result_2)
            rax_27 = &rax_27[2]
            
            if (rax_27 == rcx_28)
                goto label_1407bae32
    
    if (r8_6 == rcx_28 || ((rax_27 - r8_6) s>> 4).d == 0xffffffff)
    label_1407bae32:
        int32_t rax_30 = (rbx_6 + 1).d
        bool cond:5_1 = rax_30 s<= data_143ce3acc
        data_143ce3ac8 = rax_30
        
        if (not(cond:5_1))
            sub_1405a4f90(&data_143ce3ac0)
            i_1 = i_2
            r8_6 = data_143ce3ac0
        
        int64_t rcx_30 = rbx_6 * 2
        r8_6[rcx_30] = i_1
        r8_6[rcx_30 + 1].w = result_1
        *(&r8_6[rcx_30] + 0xa) = 0xffffffff
    
    result = sub_140834b00(&i_2)
    
    if (result.b != 0)
        int64_t* r8_7 = data_143ce3ae0
        int64_t rbx_7 = sx.q(data_143ce3ae8)
        int64_t* rax_32 = r8_7
        int64_t i_5 = i_2
        void* rcx_34 = &r8_7[rbx_7 * 2]
        
        if (r8_7 != rcx_34)
            while (*rax_32 != i_5 || rax_32[1].w != result_1)
                rax_32 = &rax_32[2]
                
                if (rax_32 == rcx_34)
                    goto label_1407baed5
            
            result = ((rax_32 - r8_7) s>> 4).d
        
        if (r8_7 == rcx_34 || result == 0xffffffff)
        label_1407baed5:
            int32_t rax_34 = (rbx_7 + 1).d
            bool cond:6_1 = rax_34 s<= data_143ce3aec
            data_143ce3ae8 = rax_34
            
            if (not(cond:6_1))
                sub_1405a4f90(&data_143ce3ae0)
                i_5 = i_2
                r8_7 = data_143ce3ae0
            
            int64_t rcx_36 = rbx_7 * 2
            r8_7[rcx_36] = i_5
            result = zx.d(result_1)
            r8_7[rcx_36 + 1].w = result.w
            *(&r8_7[rcx_36] + 0xa) = 0xffffffff

return result
