// 函数: sub_142216cb0
// 地址: 0x142216cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t* result = data_143f5b298

if (result != 0 && result[0xd0] != 0)
    result = sub_140d3c6e0(&arg_10)
    int64_t* result_3 = result
    
    if (result != 0)
        int64_t rdx = *result
        result = (*(rdx + 0x6a0))(result, rdx)
        int64_t rsi_1 = sx.q(arg3[1].d)
        int64_t rbx_1 = sx.q(result.d)
        
        if (rbx_1.d s> rsi_1.d)
            arg3[1].d = rbx_1.d
            
            if (rbx_1.d s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            result = memset(*arg3 + (rsi_1 << 3), 0, sx.q(rbx_1.d - rsi_1.d) << 3)
        else if (rbx_1.d s< rsi_1.d && rbx_1.d != rsi_1.d)
            arg3[1].d = rbx_1.d
            result = sub_1405c53d0(arg3)
        
        if (arg4 != 0)
            result = zx.q(arg4[1].d)
            
            if (rbx_1.d s> result.d)
                arg4[1].d = rbx_1.d
                
                if (rbx_1.d s> *(arg4 + 0xc))
                    result = sub_1405a4f90(arg4)
            else if (rbx_1.d s< result.d && rbx_1.d != result.d)
                arg4[1].d = rbx_1.d
                result = sub_1405a5010(arg4)
        
        int32_t r15_1 = 0
        
        if (rbx_1.d s> 0)
            int64_t rsi_2 = 0
            int64_t* r14_1 = nullptr
            
            do
                int64_t* result_2 = *(data_143f5b298 + 0x680)
                result = (*(*result_3 + 0x548))(result_3, zx.q(r15_1))
                int64_t* result_1 = result
                
                if (result != 0)
                    int64_t rdx_4 = *result
                    result = (*(rdx_4 + 0x288))(result, rdx_4)
                    result_2 = result
                
                *(*arg3 + (rsi_2 << 3)) = result_2
                
                if (arg4 != 0)
                    int64_t rax_3 = 0
                    int64_t* result_4 = nullptr
                    
                    if (result_1 != 0)
                        rax_3 = (*(*result_1 + 0x290))(result_1)
                        
                        if (rax_3 != 0)
                            result_4 = result_1
                    
                    *(r14_1 + *arg4) = rax_3
                    result = *arg4
                    *(r14_1 + result + 8) = result_4
                
                r15_1 += 1
                rsi_2 += 1
                r14_1 = &r14_1[2]
            while (rsi_2 s< rbx_1)

return result
