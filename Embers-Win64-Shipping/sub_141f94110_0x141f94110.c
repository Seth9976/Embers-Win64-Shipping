// 函数: sub_141f94110
// 地址: 0x141f94110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((arg1[6].b & 0x60) == 0)
    void*** r15_1 = nullptr
    void* rax = arg1[5]
    uint64_t result_3 = 0
    void** result_1 = nullptr
    uint32_t performanceCount_2 = 0
    int32_t var_54_1 = 0
    int64_t* rcx = *(rax + 0x58)
    result = (*(*rcx + 0x368))(rcx)
    char rcx_1 = *(arg2 + 0xe5)
    
    if (result.b == 0)
        void var_50
        int64_t* var_48
        int16_t performanceCount
        
        if ((rcx_1 & 2) != 0)
            int64_t* rcx_2 = arg2[1]
            performanceCount = 0
            int16_t* rdx = *rcx_2
            
            if (&rdx[1] u> rcx_2[1])
                int16_t* rdx_1 = &performanceCount
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg2, rdx_1, arg3)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_1, 2)
            else
                performanceCount = *rdx
                *rcx_2 += 2
            
            uint32_t performanceCount_1 = zx.d(performanceCount)
            uint32_t i_2 = performanceCount_1
            
            if (performanceCount_1 != 0)
                sub_1405a4f90(&result_1)
                void** result_2 = result_1
                uint32_t i
                
                do
                    *result_2 = nullptr
                    result_2[1] = 0
                    result_2 = &result_2[2]
                    i = i_2
                    i_2 -= 1
                while (i != 1)
                performanceCount_2 = performanceCount_1
                performanceCount_1 = zx.d(performanceCount)
            
            int64_t* rbx_1 = *(*(arg1[5] + 0x58) + 0x150)
            int64_t* var_70_1 = rbx_1
            
            if (0 u< performanceCount_1.w)
                while (true)
                    int64_t rax_6 = *arg2
                    int32_t arg_18 = 0
                    (*(rax_6 + 0x168))(arg2, &arg_18)
                    
                    if (sub_14217bbb0(*(*(arg1[5] + 0x58) + 0x150)) != 0)
                        void* rax_9 = sub_142168530(rbx_1, &arg_18)
                        
                        if (rax_9 == 0)
                            *(arg2 + 0x29) |= 1
                            break
                        
                        int64_t rax_10 = sub_140d3c6e0(rax_9)
                        
                        if (rax_10 == 0)
                            void arg_20
                            sub_141f77ab0(&arg1[0x22], &arg_20, &arg_18, nullptr)
                            int64_t* rcx_17 = arg1[5] + 0x1510
                            int64_t* var_68 = arg1
                            sub_1405a7050(rcx_17, &var_68)
                            void var_78
                            arg3 = sub_141f77fb0(&arg1[0x49], &var_78, 
                                sub_14217e150(rbx_1, &var_50, arg_18, 0), nullptr)
                            
                            if (var_48 != 0)
                                var_48[1].d -= 1
                                
                                if (var_48[1].d == 1)
                                    (**var_48)(var_48)
                                    int32_t temp3_1 = *(var_48 + 0xc)
                                    *(var_48 + 0xc) -= 1
                                    
                                    if (temp3_1 == 1)
                                        (*(*var_48 + 8))(var_48, 1)
                        else
                            int64_t performanceCount_3 = sx.q(performanceCount_2)
                            performanceCount_2 = (performanceCount_3 + 1).d
                            
                            if (performanceCount_2 s> var_54_1)
                                sub_1405a4f90(&result_1)
                            
                            void* rcx_14 = &result_1[performanceCount_3 * 2]
                            *rcx_14 = arg_18
                            *(rcx_14 + 8) = rax_10
                        
                        rbx_1 = var_70_1
                    
                    result_3 = zx.q(result_3.d + 1)
                    
                    if (result_3.d s>= zx.d(performanceCount))
                        goto label_141f94355
                
                goto label_141f9461e
            
        label_141f94355:
            result_3 = result_1
        
        if (arg1[0xe] == 0 && (*(arg2 + 0xe4) & 1) != 0)
            int64_t rbx_3 = arg2[0x15]
            (*(*arg2 + 0x168))(arg2, &arg1[0xf])
            arg2[0x15] = rbx_3
            int64_t* rcx_23 = arg1[5]
            
            if (((*(rcx_23 + 0xa4) u>> 1).b & 1) != 0)
                (*(*rcx_23 + 0x350))(rcx_23, arg1)
        
        if (arg1[0x23].d - *(arg1 + 0x144) s<= 0 && arg1[0x20].d s<= 0)
            void* r9_1 = arg1[5]
            
            if (*(r9_1 + 0x1420) == *(r9_1 + 0x144c))
            label_141f94436:
                int64_t* rcx_27 = *(r9_1 + 0x58)
                
                if ((*(*rcx_27 + 0x3a0))(rcx_27, zx.q(arg1[0xf].d)) == 0)
                    goto label_141f94450
            else
                void* r8_4 = r9_1 + 0x1450
                void* rcx_24 = *(r8_4 + 8)
                int64_t r10_1 = sx.q(arg1[0xf].d)
                
                if (rcx_24 != 0)
                    r8_4 = rcx_24
                
                int32_t rax_23 = *(r8_4 + (((sx.q(*(r9_1 + 0x1460)) - 1) & r10_1) << 2))
                
                if (rax_23 == 0xffffffff)
                    goto label_141f94436
                
                int64_t rdx_15 = *(r9_1 + 0x1418)
                
                while (true)
                    int32_t* rcx_26 = sx.q(rax_23) << 5
                    
                    if (*(rcx_26 + rdx_15) == r10_1.d)
                        break
                    
                    rax_23 = *(rcx_26 + rdx_15 + 0x18)
                    
                    if (rax_23 == 0xffffffff)
                        goto label_141f94436
                
                if (rax_23 == 0xffffffff)
                    goto label_141f94436
        
        void* r9_2 = arg1[5]
        
        if (*(r9_2 + 0x1420) != *(r9_2 + 0x144c))
            void* r8_5 = r9_2 + 0x1450
            void* rcx_29 = *(r8_5 + 8)
            int64_t r10_2 = sx.q(arg1[0xf].d)
            
            if (rcx_29 != 0)
                r8_5 = rcx_29
            
            int32_t i_1 = *(r8_5 + (((sx.q(*(r9_2 + 0x1460)) - 1) & r10_2) << 2))
            
            if (i_1 != 0xffffffff)
                int64_t rdx_21 = *(r9_2 + 0x1418)
                
                do
                    int32_t* rcx_31 = sx.q(i_1) << 5
                    
                    if (*(rcx_31 + rdx_21) == r10_2.d)
                        break
                    
                    i_1 = *(rcx_31 + rdx_21 + 0x18)
                while (i_1 != 0xffffffff)
        
        if (arg1[0x20].d == 0)
            QueryPerformanceCounter(&performanceCount)
            arg1[0x12].d &= 0xffffffbf
            arg1[0x21] = float.d(performanceCount.q) f* data_143d796f8 f+ 16777216.0
        
        void*** rax_27 = j_sub_140a82f30(0xe8)
        
        if (rax_27 != 0)
            r15_1 = sub_141f79650(rax_27, arg2)
        
        int64_t rsi_1 = sx.q(arg1[0x20].d)
        int32_t rax_29 = (rsi_1 + 1).d
        arg1[0x20].d = rax_29
        
        if (rax_29 s> *(arg1 + 0x104))
            sub_1405a4d70(&arg1[0x1f])
        
        performanceCount.q = arg1
        *(arg1[0x1f] + (rsi_1 << 3)) = r15_1
        sub_1405a7050(arg1[5] + 0x1510, &performanceCount)
        int64_t* rbx_4 = *(arg1[5] + 0x68)
        
        if (rbx_4 != 0)
            void* rax_31 = sub_14254d5d0()
            void* rcx_38 = rbx_4[2]
            int64_t rax_32 = sx.q(*(rax_31 + 0x38))
            
            if (rax_32.d s<= *(rcx_38 + 0x38)
                    && *(*(rcx_38 + 0x30) + (rax_32 << 3)) == rax_31 + 0x30)
                int64_t r8_6
                r8_6.b = 1
                (*(*rbx_4 + 0x2e0))(rbx_4, &arg1[0xf], r8_6)
        
        void* r15_2 = *(*(arg1[5] + 0x58) + 0x150)
        
        if (r15_2 != 0)
            uint64_t result_4 = result_3
            int64_t r14_3 = (sx.q(performanceCount_2) << 4) + result_3
            
            if (result_3 != r14_3)
                do
                    sub_141f77fb0(&arg1[0x49], &performanceCount, 
                        sub_14217e150(r15_2, &var_50, *result_4, *(result_4 + 8)), nullptr)
                    
                    if (var_48 != 0)
                        var_48[1].d -= 1
                        
                        if (var_48[1].d == 1)
                            (**var_48)(var_48)
                            int32_t temp4_1 = *(var_48 + 0xc)
                            *(var_48 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*var_48 + 8))(var_48, 1)
                    
                    result_4 += 0x10
                while (result_4 != r14_3)
        
        goto label_141f9461e
    
    if ((rcx_1 & 2) == 0)
    label_141f94450:
        sub_141f91140(arg1, arg2, arg3)
    label_141f9461e:
        result = result_1
        
        if (result != 0)
            return sub_140a74f90(result)
    else
        *(arg2 + 0x29) |= 1

return result
