// 函数: sub_141f98ab0
// 地址: 0x141f98ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        void var_f0
        sub_140d3a3a0(&var_f0, arg2)
        char arg_10
        
        if (sub_14217c860(*(*(*(arg1 + 0x28) + 0x58) + 0x150), arg2, &var_f0) == 0)
            sub_142160e10(*(*(*(arg1 + 0x28) + 0x58) + 0x150), &arg_10, arg2)
        
        int64_t r14
        r14.b = 0
        arg_10 = 0
        int64_t* rax_13 = sub_141f881c0(arg1, arg2, &arg_10)
        
        if (arg_10 != 0)
            arg3[0x1e].b |= 0x20
            r14.b = 1
        
        uint8_t result_1 = sub_141fc4e80(*rax_13, arg3, *arg4)
        uint8_t result = result_1
        
        if (r14.b != 0 && result_1 == 0)
            void** var_d8
            sub_140bd5ba0(&var_d8)
            int64_t* var_f8 = arg2
            sub_140b560b0(arg3, 0)
            int64_t* rbx
            rbx.b = var_f8 == *(arg1 + 0x70)
            sub_140b560b0(arg3, rbx.b)
            
            if (rbx.b == 0)
                (*(*arg3 + 0x130))(arg3, &var_f8)
                int64_t* rcx_13 = *(*(arg1 + 0x28) + 0x58)
                
                if ((*(*rcx_13 + 0x368))(rcx_13) != 0)
                    int64_t* rcx_14 = var_f8
                    
                    if ((*(*rcx_14 + 0x1b8))(rcx_14) == 0)
                        sub_140b560b0(arg3, 0)
                        int64_t rax_22 = *arg3
                        int64_t var_e8 = var_f8[2]
                        (*(rax_22 + 0x130))(arg3, &var_e8)
                    else
                        sub_140b560b0(arg3, 1)
            
            int32_t var_38
            arg_10.d = var_38
            (*(*arg3 + 0x168))(arg3, &arg_10)
            int64_t var_48
            (*(*arg3 + 0x158))(arg3, var_48, var_38.q)
            result = 1
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            sub_140b4cb40(&var_d8)
        
        return result

return 0
