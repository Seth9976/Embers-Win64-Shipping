// 函数: sub_140fedac0
// 地址: 0x140fedac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e2b8b6 != 0 && *(arg1 + 9) != 0)
    int32_t rax_1 = *(arg1 + 0x14)
    uint64_t r15_1
    
    if (rax_1 s< 0 || arg1[0x1c].d s< rax_1)
        int32_t rax_2 = sub_140a5ff80(arg2, 0)
        int32_t r8 = *(arg1 + 0xbc)
        r15_1 = sx.q(rax_2)
        int32_t rax_3 = arg1[0x12].d
        int32_t var_38
        void arg_20
        
        if (rax_3 - r8 s> 0x2710)
            sub_140fe5880(&arg1[0x11], 0x2710)
            sub_140de7870(&arg1[0x11], &var_38)
            int32_t* var_30
            *var_30 = data_143e2b9a0
            sub_140596d10(&var_30[2], &data_143e2b990)
            int32_t rax_5 = var_38
            var_30[6] = 0xffffffff
            sub_140619c60(&arg1[0x11], &arg_20, *var_30, var_30, rax_5, nullptr)
            rax_3 = arg1[0x12].d
            r8 = *(arg1 + 0xbc)
        
        if (rax_3 == r8)
        label_140fedc15:
            int32_t r14_2 = 0
            int64_t r12_1 = 0
            int32_t r13_1 = 0
            var_38.q = 0
            int32_t* var_30_1 = nullptr
            
            if (arg2 != 0 && *arg2 != 0)
                int64_t rdi_2 = -1
                
                do
                    rdi_2 += 1
                while (arg2[rdi_2] != 0)
                
                if (rdi_2.d + 1 s> 0)
                    sub_1405947f0(&var_38, rdi_2.d + 1)
                    r13_1 = var_30_1:4.d
                    r14_2 = var_30_1.d
                    r12_1 = var_38.q
                
                r14_2 += rdi_2.d + 1
                var_30_1.d = r14_2
                
                if (r14_2 s> r13_1)
                    sub_140594770(&var_38)
                    r13_1 = var_30_1:4.d
                    r14_2 = var_30_1.d
                    r12_1 = var_38.q
                
                UnDecorator::getReferenceType(r12_1, arg2, (rdi_2.d + 1) * 2)
            
            sub_140de7870(&arg1[0x11], &var_38)
            int32_t rax_8 = var_38
            *var_30_1 = r15_1.d
            *(var_30_1 + 8) = r12_1
            var_30_1[4] = r14_2
            var_30_1[5] = r13_1
            var_30_1[6] = 0xffffffff
            sub_140619c60(&arg1[0x11], &arg_20, *var_30_1, var_30_1, rax_8, nullptr)
        else
            void* rcx_7 = arg1[0x19]
            void* r8_2 = &arg1[0x18]
            
            if (rcx_7 != 0)
                r8_2 = rcx_7
            
            int32_t rax_6 = *(r8_2 + (((sx.q(arg1[0x1a].d) - 1) & r15_1) << 2))
            
            if (rax_6 == 0xffffffff)
                goto label_140fedc15
            
            int32_t* rdx_7
            
            while (true)
                rdx_7 = (sx.q(rax_6) << 5) + arg1[0x11]
                
                if (*rdx_7 == r15_1.d)
                    break
                
                rax_6 = rdx_7[6]
                
                if (rax_6 == 0xffffffff)
                    goto label_140fedc15
            
            if (rax_6 == 0xffffffff || rdx_7 == 0 || rdx_7 == -8)
                goto label_140fedc15
    else
        r15_1 = zx.q(data_143e2b9a0)
    
    int64_t r14_3 = sx.q(arg1[0x1c].d)
    int32_t rax_9 = (r14_3 + 1).d
    arg1[0x1c].d = rax_9
    
    if (rax_9 s> *(arg1 + 0xe4))
        sub_1405a4cf0(&arg1[0x1b])
    
    *(arg1[0x1b] + (r14_3 << 2)) = r15_1.d
    GFSDK_Aftermath_SetEventMarker(*(arg1[0xe] + 0x158), arg1[0x1b], zx.q(arg1[0x1c].d << 2))

D3DPERF_BeginEvent(arg3, arg2)
return sub_14197bbd0(arg1, arg2) __tailcall
