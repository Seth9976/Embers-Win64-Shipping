// 函数: sub_1417b5150
// 地址: 0x1417b5150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
sub_141754910(arg1 + 0x10, arg2, sub_141755af0(arg1, arg2))
sub_1417b5070(arg1 + 0x50, arg2)
sub_1417558e0(arg2, arg1 + 0x78)
int64_t* arg_8

if (sub_140b4e7c0(arg2, &data_1439a9538) s< 1)
    int64_t* rcx_6 = arg2[0x12]
    (*(*rcx_6 + 0x1d8))(rcx_6, &data_1439a9528)
    int32_t rax_3
    int512_t zmm1_1
    rax_3, zmm1_1 = sub_140b4e7c0(arg2[0x12], &data_1439a9528)
    
    if (rax_3 s>= 5)
        arg_8 = nullptr
        sub_1416f2f10(arg2, &arg_8, zmm1_1)
        
        if ((*(arg2[0x12] + 0x28) & 1) != 0)
            int64_t* rcx_9 = arg_8
            
            if (rcx_9 != 0)
                (**rcx_9)(rcx_9, 1)

if (sub_140b4e7c0(arg2, &data_1439a9538) s>= 0xa)
    if (sub_140b4e7c0(arg2, &data_1439a9538) s>= 0xd)
        sub_141751820(arg1 + 0xb0, arg2)
    else
        int32_t var_28_1 = 0x47c35000
        void** const var_b8 = &data_142fc4938
        int16_t var_b0_1 = 0x100
        int64_t var_a8_1 = 0
        int64_t var_a0_1 = 0
        int64_t* var_58_1 = nullptr
        int32_t i_2 = 0
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int64_t var_48
        __builtin_memset(&var_48, 0, 0x20)
        sub_1417527a0(&var_b8, arg2)
        sub_1417b23c0(arg1)
        int64_t var_38
        
        if (var_38 != 0)
            sub_140a74f90(var_38)
        
        int64_t rcx_16 = var_48
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        int32_t i_1 = i_2
        int64_t* rbx_1 = var_58_1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_17 = *rbx_1
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                rbx_1 = &rbx_1[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_1 = var_58_1
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        if (var_a8_1 != 0)
            sub_140a74f90(var_a8_1)
else
    sub_1417b23c0(arg1)

int32_t rax_8
int512_t zmm1_2
rax_8, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_8 s>= 0x13)
    sub_14152dc60(arg2, arg1 + 0x90, zmm1_2)

int32_t result
int512_t zmm1_3
result, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)

if (result s>= 0x21)
    if ((arg2[5].b & 1) != 0)
        int64_t* rax_9 = j_sub_140a82f30(0x10)
        int64_t* rbx_2 = rax_9
        
        if (rax_9 == 0)
            rbx_2 = nullptr
        else
            *rax_9 = 0
            rax_9[1] = 0
        
        if (arg1 + 0xa0 != &arg_8)
            int64_t* rsi_1 = *(arg1 + 0xa0)
            *(arg1 + 0xa0) = rbx_2
            
            if (rsi_1 != 0)
                int64_t rcx_24 = *rsi_1
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                zmm1_3 = j_sub_140a74f90(rsi_1)
        else if (rbx_2 != 0)
            int64_t rcx_25 = *rbx_2
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            zmm1_3 = j_sub_140a74f90(rbx_2)
        
        return sub_14152de20(arg2, *(arg1 + 0xa0), zmm1_3)
    
    int64_t* rdx_8 = *(arg1 + 0xa0)
    
    if (rdx_8 != 0)
        return sub_14152de20(arg2, rdx_8, zmm1_3)
    
    int64_t var_c8 = 0
    int64_t var_c0_1 = 0
    result = sub_14152de20(arg2, &var_c8, zmm1_3)
    int64_t rcx_29 = var_c8
    
    if (rcx_29 != 0)
        return sub_140a74f90(rcx_29)

return result
