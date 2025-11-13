// 函数: sub_141f83a40
// 地址: 0x141f83a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t rcx = arg1[6].d
int64_t arg_8

if ((rcx.b & 2) == 0)
    void* r8_1 = arg1[5]
    
    if (*(r8_1 + 0x134) - 2 u<= 1 && not(test_bit(rcx, 9)))
        void* rax_3 = *(r8_1 + 0x140)
        
        if ((rax_3 == 0 || *(rax_3 + 0x21c) == 2) && (((*(r8_1 + 0xa4) u>> 1).b & 1) != 0
                || *(*(r8_1 + 0x58) + 0x88) != 0 || **(r8_1 + 0x1330) != *(r8_1 + 0x1354)))
            r8_1.b = 1
            void** var_138
            sub_141f79e30(&var_138, arg1, r8_1.b)
            int32_t rcx_4 = arg1[6].d | 0x200
            char var_46_1 = arg2
            arg1[6].d = rcx_4
            char var_48
            uint8_t var_48_1 = (((rcx_4 u>> 2).b & 1) | 4) << 3 | (var_48 & 0xf7)
            (*(*arg1 + 0x2c8))(arg1, &arg_8, &var_138, 0)
            int64_t result_1
            result = result_1
            var_138 = &data_143286b38
            int64_t var_30
            
            if (var_30 != 0)
                sub_140a74f90(var_30)
            
            int64_t var_40
            
            if (var_40 != 0)
                sub_140a74f90(var_40)
            
            int64_t var_a8
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            sub_140b4cb40(&var_138)

void* r8_3 = arg1[0xe]

if (r8_3 != 0)
    void* rdx_2 = arg1[5]
    int64_t rbp
    rbp.b = 0
    
    if (rdx_2 != 0)
        void* rsi_1 = rdx_2
        void* rdi_1 = r8_3
        
        if (arg2 == 1 && (arg2 & (*(rdx_2 + 0xa4) u>> 1).b) == 0)
            int64_t* rcx_11 = *(rdx_2 + 0x58)
            
            if (rcx_11 != 0)
                if ((*(*rcx_11 + 0x368))(rcx_11) == 0)
                    *(arg1[0xe] + 0xf1) = 2
                
                void* rcx_12 = arg1[5]
                sub_14216f020(*(rcx_12 + 0x58), arg1[0xe], rcx_12)
                rdi_1 = arg1[0xe]
                rsi_1 = arg1[5]
            
            rbp.b = data_143f4d278 s> 0
        
        sub_140d3a3a0(&arg_8, rdi_1)
        sub_141f96420(rsi_1 + 0x1370, arg_8)
        int64_t* rcx_16 = *(rsi_1 + 0x13c0)
        
        if (rcx_16 != 0)
            int64_t r8_5 = *rcx_16
            (*(r8_5 + 0x268))(rcx_16, rdi_1, r8_5)
    
    arg1[0xe] = 0
    sub_141f83590(arg1, rbp.b)

return result
