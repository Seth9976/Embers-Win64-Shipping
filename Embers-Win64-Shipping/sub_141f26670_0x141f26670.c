// 函数: sub_141f26670
// 地址: 0x141f26670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0x85].b)
int32_t r8 = arg2.d

if ((result.b & 1) != 0)
    int128_t zmm6
    
    if ((result.b & 2) != 0)
        result, zmm6 = sub_141f08e30(arg1)
        r8 = arg2.d
    
    int32_t i_4 = arg1[0x84].d
    int32_t rbx = 0
    int64_t r11_1 = arg1[0x83]
    int32_t i = i_4
    int32_t r9_1 = arg2:4.d
    
    if (i_4 s> 0)
        do
            int32_t rcx_5 = i & 0x80000001
            
            if (rcx_5 s< 0)
                rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i)
            int32_t i_3 = (temp3_1 - temp2_1) s>> 1
            i = i_3
            int32_t rax_9 = i_3 + rbx
            int64_t rcx_9 = sx.q(rax_9) * 6
            int32_t rax_11 = *(r11_1 + (rcx_9 << 3))
            result = zx.q(rax_11 - r8)
            
            if (rax_11 == r8)
                result = zx.q(*(r11_1 + (rcx_9 << 3) + 4) - r9_1)
            
            if (result.d s< 0)
                rbx = rax_9 + rcx_5
        while (i s> 0)
    
    if (rbx s< i_4)
        int64_t rcx_10 = sx.q(rbx)
        result = rcx_10 * 0x30
        int32_t r8_2 = r8 - *(result + r11_1)
        
        if (r8 == *(result + r11_1))
            r8_2 = r9_1 - *(result + r11_1 + 4)
        
        if (r8_2 s>= 0 && rbx != 0xffffffff)
            result = rcx_10 * 0x30
            int64_t* rcx_12 = r11_1 + 8 + result
            
            if (r11_1 + 8 != neg.q(result))
                int32_t* i_1 = *rcx_12
                result = sx.q(rcx_12[1].d)
                
                for (void* r14_2 = &i_1[result]; i_1 != r14_2; i_1 = &i_1[1])
                    int32_t rbp_1 = *i_1
                    result = (*(*arg1 + 0x548))(arg1, zx.q(rbp_1))
                    uint64_t result_2 = result
                    
                    if (result != 0)
                        void* rax_16 = sub_142542e20()
                        void* rdx_6 = *(result_2 + 0x10)
                        int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                        
                        if (rax_17.d s> *(rdx_6 + 0x38)
                                || *(*(rdx_6 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                            result_2 = (*(*arg1 + 0x560))(arg1, zx.q(rbp_1), rax_16 + 0x30)
                        
                        result, zmm6 = sub_142131b70(result_2, arg2)
else
    int64_t var_38
    (*(*arg1 + 0x860))(arg3, &var_38, r8)
    int32_t result_1
    result = zx.q(result_1)
    int32_t i_2 = 0
    int64_t rcx = var_38
    
    if (result.d s> 0)
        int64_t* r14_1 = nullptr
        
        do
            void* rsi_1 = *(r14_1 + rcx)
            
            if (rsi_1 != 0)
                void* rax_1 = sub_142542e20()
                void* rdx_1 = *(rsi_1 + 0x10)
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    rsi_1 = (*(*arg1 + 0x560))(arg1, zx.q(i_2), rax_1 + 0x30)
                
                sub_142131b70(rsi_1, arg2)
                result = zx.q(result_1)
                rcx = var_38
            
            i_2 += 1
            r14_1 = &r14_1[1]
        while (i_2 s< result.d)
    
    if (rcx != 0)
        return sub_140a74f90(rcx)

return result
