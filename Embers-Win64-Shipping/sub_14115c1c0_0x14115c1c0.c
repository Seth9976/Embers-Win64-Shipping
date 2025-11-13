// 函数: sub_14115c1c0
// 地址: 0x14115c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
uint64_t result = zx.q(*(arg2 + 0x1aa0))
uint64_t result_1 = 0
void* rsi = nullptr
uint64_t result_2 = 0
int32_t arg_20 = 0
int32_t var_64 = 0
int32_t temp0 = result.d

if (temp0 != 0)
    void* r8_1 = arg2 + 0x1a98
    int32_t i = 0
    int32_t r14_1 = 0
    int32_t* var_80 = nullptr
    int32_t var_74_1 = 0
    
    if (temp0 s> 0)
        do
            int64_t r15_1 = *r8_1
            int32_t* rcx_1 = rsi + 0x10 + r15_1
            int32_t* rax = *(rcx_1 + 8)
            
            if (rax != 0)
                rcx_1 = rax
            
            int32_t rax_1 = *rcx_1
            
            if (rax_1 s>= 0)
                void* const rbx_1 = 0x1a8
                
                if (*(r15_1 + rsi + 8) != 0)
                    rbx_1 = 0x1b8
                
                void* rbx_2 = rbx_1 + arg2 + 0x18b0
                int64_t rdi_1 = sx.q(*(rbx_2 + 8))
                int32_t rax_2 = (rdi_1 + 1).d
                *(rbx_2 + 8) = rax_2
                
                if (rax_2 s> *(rbx_2 + 0xc))
                    sub_1405a4f90(rbx_2)
                
                int64_t rbx_3 = sx.q(r14_1)
                *(*rbx_2 + rdi_1 * 0x10) = *(r15_1 + rsi + 0x30)
                r14_1 = (rbx_3 + 1).d
                
                if (r14_1 s> var_74_1)
                    sub_14113b710(&var_80, rbx_3.d)
                
                r8_1 = arg2 + 0x1a98
                var_80[rbx_3] = rax_1
            
            i += 1
            rsi += 0x40
        while (i s< *(arg2 + 0x1aa0))
        
        rsi = zx.q(arg_20)
    
    result = sub_14113b5d0(r8_1, 0)
    
    if (r14_1 != 0)
        int32_t* r13_1 = var_80
        result = sub_140a1c0d0(r13_1, r14_1, arg_10.b, arg_10.b)
        int32_t i_1 = 0
        
        if (r14_1 s> 0)
            int32_t r15_2 = r14_1 - 1
            int32_t* r14_2 = r13_1
            int32_t var_60
            void* const var_58
            
            do
                int64_t rdx_5 = sx.q(*(arg2 + 0x18b4))
                int32_t r10_1 = *r14_2
                int32_t r9_2 = (rdx_5 - 1).d
                arg_20 = rdx_5.d
                int32_t rcx_9 = r13_1[sx.q(r15_2)]
                *(arg2 + 0x18b4) = r9_2
                
                if (rcx_9 s>= r9_2)
                    int32_t rcx_16 = *(arg2 + 0x18f0)
                    int32_t rax_16 = rcx_16 - r9_2
                    
                    if (rax_16 != 1)
                        int64_t rcx_17 = *(arg2 + 0x18e8)
                        memmove(rcx_17 + (sx.q(r9_2) << 3), rcx_17 + (rdx_5 << 3), 
                            (rax_16 - 1) << 3)
                        rcx_16 = *(arg2 + 0x18f0)
                    
                    *(arg2 + 0x18f0) = rcx_16 - 1
                    sub_1405c53d0(arg2 + 0x18e8)
                    r15_2 -= 1
                    i_1 -= 1
                    r14_2 -= 4
                else
                    int64_t r13_2 = sx.q(rsi.d)
                    var_60 = r10_1
                    int32_t var_5c_1 = r9_2
                    var_58 = nullptr
                    rsi = zx.q((r13_2 + 1).d)
                    int32_t var_68_1 = rsi.d
                    
                    if (rsi.d s> var_64)
                        sub_1405a4f90(&result_2)
                        rsi = zx.q(var_68_1)
                        rdx_5 = zx.q(arg_20)
                        result_1 = result_2
                    
                    *(result_1 + r13_2 * 0x10) = var_60.o
                    int32_t* rdx_7 = *(*(arg2 + 0x18e8) + (sx.q(rdx_5.d) << 3) - 8) + 0x88
                    int32_t* rax_9 = *(rdx_7 + 8)
                    
                    if (rax_9 != 0)
                        rdx_7 = rax_9
                    
                    *rdx_7 = r10_1
                    int32_t rax_10 = *(arg2 + 0x18f0)
                    int32_t rdx_10 = rax_10 - r10_1 - 1
                    
                    if (rdx_10 s>= 1)
                        rdx_10 = 1
                    
                    if (rdx_10 != 0)
                        int64_t rcx_13 = *(arg2 + 0x18e8)
                        memcpy(rcx_13 + (sx.q(r10_1) << 3), rcx_13 + (sx.q(rax_10 - rdx_10) << 3), 
                            rdx_10 << 3)
                        rax_10 = *(arg2 + 0x18f0)
                    
                    *(arg2 + 0x18f0) = rax_10 - 1
                    sub_1405c53d0(arg2 + 0x18e8)
                    r13_1 = var_80
                
                i_1 += 1
                r14_2 = &r14_2[1]
            while (i_1 s< r15_2 + 1)
            
            if (rsi.d != 0)
                if (rsi.d s> data_1439b5d98)
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q((rsi * 5).d)
                    data_1439b5d98 = (temp3_1 + (temp2_1 & 3)) s>> 2
                    sub_1405d16e0(&data_1439b5da0, nullptr)
                    sub_1405d16e0(&data_1439b5da8, nullptr)
                    sub_141131d40(u"0")
                
                int64_t* rcx_20 = data_143f0f180
                void* r8_7 = data_1439b5da0
                memcpy((*(*rcx_20 + 0x130))(rcx_20, &data_143f02b98, r8_7, 0, *(r8_7 + 0x18), 1), 
                    result_1, rsi.d << 4)
                int64_t* rcx_22 = data_143f0f180
                (*(*rcx_22 + 0x138))(rcx_22, &data_143f02b98, data_1439b5da0)
                void* r13_3 = arg_10
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(r13_3 + 8))]), &var_60, 
                    &data_143e5aa30, 0)
                void* r14_3 = var_60.q
                void* rdi_2 = nullptr
                
                if (r14_3 != 0)
                    int64_t rdx_17 = sx.q(*(r14_3 + 0x10c))
                    int64_t* rbx_4 = *(var_58 + 0x10)
                    int64_t rdi_3 = rdx_17 << 3
                    int64_t rax_31 = rbx_4[3]
                    
                    if (*(rdi_3 + rax_31) == 0)
                        sub_1419ccf30(rbx_4, rdx_17.d)
                        rax_31 = rbx_4[3]
                    
                    rdi_2 = *(rdi_3 + rax_31)
                
                *(arg1 + 0x1b0) = rdi_2
                sub_14198aa60(rdi_2)
                void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_32 = &rcx_29[3]
                
                if (rax_32 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x20)
                    rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_32 = &rcx_29[3]
                
                *(arg1 + 0x30) = rax_32
                void**** rax_33 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_33 = rcx_29
                *(arg1 + 8) = &rcx_29[1]
                rcx_29[1] = 0
                *rcx_29 = &data_142dd5b40
                rcx_29[2] = rdi_2
                int32_t var_a8_1
                var_a8_1.q = data_1439b5da8
                sub_141142700(r14_3, arg1, r13_3, rsi.d, var_a8_1, 0, 0)
                sub_1419cd1c0(arg1, r14_3, (rsi + 0x3f).d u>> 6, 1, 1)
                void* r9_4 = *(r13_3 + 0x18c8)
                arg_10 = *(arg1 + 0x1b0)
                sub_14111a3f0(r14_3 + 0x122, arg1, &arg_10, r9_4, 1)
            
            result = result_1
            
            if (result != 0)
                return sub_140a74f90(result)

return result
