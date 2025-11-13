// 函数: sub_14202fcb0
// 地址: 0x14202fcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1424aec40(arg1)

if (data_143de5426 == 0)
    void arg_10
    int64_t* rax_2 = (*(*arg1 + 0x348))(arg1, &arg_10)
    int64_t* rsi_2
    
    if (*rax_2 == 0)
        rsi_2 = nullptr
    else
        void* rax_3 = sub_14254f730()
        
        if (rax_3 == 0)
            rsi_2 = nullptr
        else
            rsi_2 = *rax_2
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> rsi_2[7].d || *(rsi_2[6] + (rax_4 << 3)) != rax_3 + 0x30)
                rsi_2 = nullptr
    
    int64_t arg_8 = 0
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_7 = sub_140d2dfc0(rsi_2, arg1, 0, 0, 0, 0, 0, 0, 0)
    arg1[9] = rax_7
    
    if (rax_7 != 0)
        int64_t rdx_4 = *rax_7
        (*(rdx_4 + 0x260))(rax_7, rdx_4)
    
    void* rax_8 = arg1[6]
    
    if (rax_8 == 0 || *(rax_8 + 0x24c) == 0)
        int64_t* rbx_1 = data_143e20d20
        int64_t* rsi_3 = data_143e20d18
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (rsi_3 != 0)
            int32_t var_20_1 = 0
            int64_t (* var_28_1)() = sub_140594850
            void*** var_38 = nullptr
            void*** rax_9 = sub_140a84c80(0, 0x30, 0)
            var_38 = rax_9
            int32_t var_30_1 = 3
            
            if (rax_9 != 0)
                *rax_9 = &data_142fd1390
                sub_140d3a3a0(&rax_9[1], arg1)
                *(rax_9 + 0x10) = var_28_1.o
                rax_9[5] = sub_140a387b0()
                *rax_9 = &data_142fd13e8
            
            (*(*rsi_3 + 0xa0))(rsi_3, &var_38)
            void*** rax_13
            
            if (var_30_1 == 0)
                rax_13 = var_38
            label_14202fe96:
                
                if (rax_13 != 0)
                    sub_140a74f90(rax_13)
            else
                void*** rcx_7 = var_38
                
                if (rcx_7 != 0)
                    (*rcx_7)[7](rcx_7, 0)
                    rax_13 = var_38
                    
                    if (rax_13 != 0)
                        rax_13 = sub_140a84c80(rax_13, 0, 0)
                        var_38 = rax_13
                    
                    int32_t var_30_2 = 0
                    goto label_14202fe96
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int32_t var_20_2 = 0
    int64_t (* var_28_2)(int64_t* arg1) = sub_14201b410
    void*** rax_16 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_16 != 0)
        *rax_16 = &data_143084628
        sub_140d3a3a0(&rax_16[1], arg1)
        *(rax_16 + 0x10) = var_28_2.o
        rax_16[5] = sub_140a387b0()
        *rax_16 = &data_143084680
        sub_141ba01b0(rax_16, &data_143f4cf68)
    else if (data_143f4cf70 != 0)
        int64_t* rcx_14 = data_143f4cf68
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x38))(rcx_14, 0)
            int64_t rcx_15 = data_143f4cf68
            
            if (rcx_15 != 0)
                data_143f4cf68 = sub_140a84c80(rcx_15, 0, 0)
            
            data_143f4cf70 = 0
    
    if (rax_16 != 0)
        (*rax_16)[7](rax_16, 0)
        int64_t rax_21 = sub_140a84c80(rax_16, 0, 0)
        
        if (rax_21 != 0)
            sub_140a74f90(rax_21)
    
    int32_t var_20_3 = 0
    int64_t (* var_28_3)(int64_t* arg1) = sub_14201b41c
    int64_t* rax_22 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_22 != 0)
        *rax_22 = &data_142fd1390
        sub_140d3a3a0(&rax_22[1], arg1)
        *(rax_22 + 0x10) = var_28_3.o
        rax_22[5] = sub_140a387b0()
        *rax_22 = &data_142fd13e8
        sub_1417d8920(rax_22, &data_143f4cf78)
    else if (data_143f4cf80 != 0)
        int64_t* rcx_21 = data_143f4cf78
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0x38))(rcx_21, 0)
            int64_t rcx_22 = data_143f4cf78
            
            if (rcx_22 != 0)
                data_143f4cf78 = sub_140a84c80(rcx_22, 0, 0)
            
            data_143f4cf80 = 0
    
    if (rax_22 != 0)
        (*(*rax_22 + 0x38))(rax_22, 0)
        int64_t rax_27 = sub_140a84c80(rax_22, 0, 0)
        
        if (rax_27 != 0)
            sub_140a74f90(rax_27)

return sub_1423b1ee0(&arg1[0x1a], arg1) __tailcall
