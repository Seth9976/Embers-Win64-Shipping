// 函数: sub_141af3ab0
// 地址: 0x141af3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58
int64_t* result = __FrameHandler3::TryBlockMap::TryBlockMap(&var_58, arg1 + 8, arg1 + 0x40)
int64_t* rsi = var_58
int64_t* r10 = arg1 + 0x18
int64_t* var_48 = r10
int32_t i_1 = rsi[1].d

if (i_1 s> 1)
    int64_t r11_1 = *(arg2 + 8)
    int64_t rbx_1 = *rsi
    int32_t i_2 = 0
    
    if (r11_1.b != 2)
        int32_t i = i_1
        
        if (i_1 s> 0)
            do
                int32_t rcx_2 = i & 0x80000001
                
                if (rcx_2 s< 0)
                    rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_3 = (temp1_1 - temp0_1) s>> 1
                i = i_3
                int32_t rax_3 = i_3 + i_2
                
                if (*(rbx_1 + (sx.q(rax_3) << 2)) s< (r11_1 u>> 0x20).d)
                    i_2 = rax_3 + rcx_2
            while (i s> 0)
    
    int64_t rax_4 = *(arg2 + 0x10)
    int32_t r9_1
    
    if (rax_4.b == 2)
        r9_1 = i_1
    else
        r9_1 = 0
        
        while (i_1 s> 0)
            int32_t rcx_7 = i_1 & 0x80000001
            
            if (rcx_7 s< 0)
                rcx_7 = ((rcx_7 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i_1)
            int32_t i_4 = (temp3_1 - temp2_1) s>> 1
            i_1 = i_4
            int32_t rax_8 = i_4 + r9_1
            
            if ((rax_4 u>> 0x20).d s>= *(rbx_1 + (sx.q(rax_8) << 2)))
                r9_1 = rax_8 + rcx_7
    
    result = sx.q(r9_1)
    int64_t i_5 = sx.q(i_2)
    int64_t* result_1 = result
    
    if (i_5 s< result)
        int32_t r13_1 = i_2 + 1
        int64_t r14_2 = i_5 << 4
        
        while (i_2 s< rsi[1].d)
            int64_t rax_9 = *rsi
            int16_t* r12_1 = nullptr
            uint64_t var_68 = 0
            int32_t rbx_2 = *(rax_9 + (i_5 << 2))
            int64_t rax_10 = *r10
            int32_t r15_1 = *(r14_2 + rax_10 + 8)
            int64_t rax_11 = *(r14_2 + rax_10)
            
            if (r15_1 != 0)
                sub_1405a4c70(&var_68, r15_1, 0)
                r12_1 = var_68
                memcpy(r12_1, rax_11, r15_1 * 2)
                rsi = var_58
            else
                int32_t var_5c_1 = 0
            
            int32_t rcx_15 = rsi[1].d
            int32_t rax_13 = rcx_15 - i_2
            
            if (rax_13 != 1)
                int64_t rcx_13 = *rsi
                memmove(rcx_13 + (sx.q(i_2) << 2), rcx_13 + (sx.q(r13_1) << 2), (rax_13 - 1) << 2)
                rcx_15 = rsi[1].d
            
            rsi[1].d = rcx_15 - 1
            int64_t r9_3 = sx.q(i_2) << 4
            int64_t rcx_16 = *(r9_3 + *var_48)
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            int32_t rax_20 = var_48[1].d
            int32_t rcx_18 = rax_20 - i_2
            
            if (rcx_18 != 1)
                int64_t rax_19 = *var_48
                memmove(rax_19 + r9_3, (sx.q(r13_1) << 4) + rax_19, (rcx_18 - 1) << 4)
                rax_20 = var_48[1].d
            
            var_48[1].d = rax_20 - 1
            int64_t* var_50
            
            if (var_50 != 0)
                sub_141f845f0(var_50, i_2)
            
            int32_t var_74_1 = 0
            void* rax_22 = sub_141b17c70(arg1, rbx_2)
            
            if (rax_22 != 0)
                int16_t* rdx_13
                
                if (*(rax_22 + 8) == 0)
                    rdx_13 = &data_142d40450
                else
                    rdx_13 = *rax_22
                
                int16_t* const rcx_23 = &data_142d40450
                
                if (r15_1 != 0)
                    rcx_23 = r12_1
                
                result = sub_140a54510(rcx_23, rdx_13)
            
            if (rax_22 == 0 || result.d != 0)
                int32_t rax_23 = sub_141a376d0(&var_58, rbx_2)
                int32_t r9_4 = rax_23
                int32_t r8_7 = var_48[1].d
                int64_t arg_18
                arg_18.d = r8_7
                var_48[1].d = r8_7 + 1
                
                if (r8_7 + 1 s> *(var_48 + 0xc))
                    sub_1405a4f90(var_48)
                    r8_7 = arg_18.d
                    r9_4 = rax_23
                
                int64_t rbx_4 = sx.q(r9_4) << 4
                int64_t rdx_17 = *var_48 + rbx_4
                memmove(rdx_17 + 0x10, rdx_17, (r8_7 - r9_4) << 4)
                int64_t* rbx_5 = rbx_4 + *var_48
                result = nullptr
                *rbx_5 = 0
                rbx_5[1].d = r15_1
                
                if (r15_1 != 0)
                    sub_1405a4c70(rbx_5, r15_1, 0)
                    result = memcpy(*rbx_5, r12_1, r15_1 * 2)
                else
                    *(rbx_5 + 0xc) = 0
            else
                i_2 -= 1
                r13_1 -= 1
                i_5 -= 1
                r14_2 -= 0x10
            
            if (r12_1 != 0)
                result = sub_140a74f90(r12_1)
            
            i_2 += 1
            r13_1 += 1
            i_5 += 1
            r14_2 += 0x10
            
            if (i_5 s>= result_1)
                break
            
            r10 = var_48
            rsi = var_58

return result
