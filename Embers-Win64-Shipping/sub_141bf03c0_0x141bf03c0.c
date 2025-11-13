// 函数: sub_141bf03c0
// 地址: 0x141bf03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x74]

if (rax != 0)
    int32_t rax_1 = *(rax + 0xc)
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
    
    if (((*(rax_8 + 8) u>> 0x1c).b & 1) == 0)
        char arg_8 = 0
        char* var_30_1 = &arg_8
        void*** (* var_38)() = sub_140884c50
        
        if (*(sub_140a756e0(&var_38, &data_14397f5f0) + 0x20) == 0)
            int64_t* rcx_5 = arg1[0x74]
            int512_t zmm2
            zmm2.o = arg4
            (*(*rcx_5 + 0x328))(rcx_5, arg2, zmm2)

int64_t* result_1 = arg1[0x7c]
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax_13 = result_1[1].d
    
    if (rax_13 == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax_13 + 1
        result = result_1

if (result != 0)
    int64_t* rsi_1 = arg1[0x7b]
    
    if (rsi_1 != 0)
        if (result_1 != 0)
            result_1[1].d += 1
        
        result = (*(*rsi_1 + 0x48))(rsi_1, &arg1[0x75])
        int64_t* result_2 = result
        
        if (result_1 != 0)
            result_1[1].d -= 1
            
            if (result_1[1].d == 1)
                result = (**result_1)(result_1)
                int32_t temp5_1 = *(result_1 + 0xc)
                *(result_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*result_1 + 8))(result_1, 1)
        
        if (result_2 != 0)
            char r14_1 = *(arg1 + 0x3ed)
            result = (*(*rsi_1 + 0x10))(rsi_1, result_2)
            
            if (r14_1 != result.b)
                int64_t rax_19 = *arg1
                bool cond:0_1 = r14_1 == 0
                *(arg1 + 0x3ed) = cond:0_1
                result = (*(rax_19 + 0x258))(arg1, cond:0_1)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp3_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            jump(*(*result_1 + 8))

return result
