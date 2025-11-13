// 函数: sub_142661ea0
// 地址: 0x142661ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    int64_t* var_38 = nullptr
    int32_t var_30_1 = 0
    sub_140d3c7c0(sub_14269ce80(), &var_38, 1)
    int64_t* rbx_1 = var_38
    int64_t rsi_1 = 0
    void* rcx_1 = &rbx_1[sx.q(var_30_1)]
    uint64_t rbp_4 = (rcx_1 - rbx_1 + 7) u>> 3
    
    if (rbx_1 u> rcx_1)
        rbp_4 = 0
    
    if (rbp_4 != 0)
        do
            sub_142663f50(arg1, *rbx_1)
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rsi_1 != rbp_4)
    
    sub_142649710(arg1)
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int64_t r14_1 = 0
        
        do
            int32_t* rsi_4 = *(arg1 + 0x78) + 0x50 + r14_1
            uint64_t rax_3 = sub_140d3c6e0(rsi_4)
            uint64_t rbx_2 = rax_3
            
            if (rax_3 != 0)
            label_142661fdf:
                void* rax_6 = sub_140bdf2e0()
                void* rdx_4 = *(rbx_2 + 0x10)
                rax_3 = sx.q(*(rax_6 + 0x38))
                
                if (rax_3.d s> *(rdx_4 + 0x38))
                    rbx_2 = 0
                else if (*(*(rdx_4 + 0x30) + (rax_3 << 3)) != rax_6 + 0x30)
                    rbx_2 = 0
                else
                    rax_3 = sub_142452380()
                    
                    if (rax_3 == 0)
                        rbx_2 = 0
                    else
                        int64_t rdx_5 = rax_3 + 0x30
                        rax_3 = sx.q(*(rax_3 + 0x38))
                        
                        if (rax_3.d s> *(rbx_2 + 0x38))
                            rbx_2 = 0
                        else if (*(*(rbx_2 + 0x30) + (rax_3 << 3)) != rdx_5)
                            rbx_2 = 0
            else if (*(rsi_4 + 0x10) == 0)
                rbx_2 = 0
            else
                if (rax_3.d == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_3 = zx.q(data_1439aaa30)
                
                if (rax_3.d != rsi_4[2] || *rsi_4 != 0xffffffff)
                    void* rax_4 = sub_140d2bce0(&rsi_4[4])
                    sub_140d3a3a0(rsi_4, rax_4)
                    
                    if (rax_4 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_5 = 0
                        
                        if (0 == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_5 = data_1439aaa30
                        
                        rsi_4[2] = rax_5
                    
                    rax_3 = sub_140d3c6e0(rsi_4)
                    rbx_2 = rax_3
                    
                    if (rax_3 != 0)
                        goto label_142661fdf
                    
                    rbx_2 = 0
                else
                    rbx_2 = 0
            
            if (i s< 0 || i s>= *(arg1 + 0x80))
                rax_3.b = 0
            else
                rax_3.b = 1
            
            if (rax_3.b != 0)
                uint64_t rdx_7
                
                if (rbx_2 == 0)
                    rdx_7 = 0
                else
                    void* rax_7 = sub_14269c200()
                    
                    if (rax_7 == 0)
                        rdx_7 = 0
                    else
                        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                        
                        if (rax_8.d s> *(rbx_2 + 0x38))
                            rdx_7 = 0
                        else
                            rdx_7 = rbx_2
                            
                            if (*(*(rbx_2 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                rdx_7 = 0
                
                void* rsi_5 = sx.q(i) * 0x78
                sub_141defed0(*(arg1 + 0x78) + rsi_5, rdx_7)
                
                if (rbx_2 == 0)
                    rbx_2 = 0
                else
                    void* rax_11 = sub_14269c200()
                    
                    if (rax_11 == 0)
                        rbx_2 = 0
                    else
                        int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                        
                        if (rax_12.d s> *(rbx_2 + 0x38)
                                || *(*(rbx_2 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                            rbx_2 = 0
                
                sub_141deff90(rsi_5 + *(arg1 + 0x78), rbx_2)
            
            i += 1
            r14_1 += 0x78
        while (i s< *(arg1 + 0x80))
    
    if ((*(arg1 + 0x68) & 0x40) != 0)
        *(arg1 + 0x399) |= 4
    
    *(arg1 + 0x398) |= *(arg1 + 0x399)
    int64_t* rax_16 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_16 != 0)
        *rax_16 = &data_142dc0378
        sub_140d3a3a0(&rax_16[1], arg1)
        rax_16[2] = sub_142660650
        rax_16[4] = sub_140a387b0()
        *rax_16 = &data_142dc03d0
        sub_140599630(&data_1439aa970, 1)
        void arg_8
        (*(*rax_16 + 0x30))(rax_16, &arg_8)
        int64_t rsi_6 = sx.q(data_1439aa978)
        int32_t rax_19 = (rsi_6 + 1).d
        bool cond:2_1 = rax_19 s<= data_1439aa97c
        data_1439aa978 = rax_19
        
        if (not(cond:2_1))
            sub_1405a4f90(&data_1439aa970)
        
        void** rax_22 = (rsi_6 << 4) + data_1439aa970
        *rax_22 = rax_16
        rax_22[1].d = 3
    
    result = sub_140a84c80(0, 0x30, 0)
    uint64_t result_1 = result
    
    if (result != 0)
        *result_1 = &data_142dc0378
        sub_140d3a3a0(result_1 + 8, arg1)
        *(result_1 + 0x10) = sub_142660470
        *(result_1 + 0x20) = sub_140a387b0()
        *result_1 = &data_142dc03d0
        sub_140599630(&data_143b51520, 1)
        void arg_10
        (*(*result_1 + 0x30))(result_1, &arg_10)
        int64_t rdi_1 = sx.q(data_143b51528)
        int32_t rax_25 = (rdi_1 + 1).d
        bool cond:3_1 = rax_25 s<= data_143b5152c
        data_143b51528 = rax_25
        
        if (not(cond:3_1))
            sub_1405a4f90(&data_143b51520)
        
        result = (rdi_1 << 4) + data_143b51520
        *result = result_1
        *(result + 8) = 3
    
    int64_t* rcx_19 = var_38
    
    if (rcx_19 != 0)
        return sub_140a74f90(rcx_19)

return result
