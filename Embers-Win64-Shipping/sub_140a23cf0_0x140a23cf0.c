// 函数: sub_140a23cf0
// 地址: 0x140a23cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = -1

if (arg2 != 0)
    if (arg4 != 0)
        if (arg3 == 1)
            int64_t i_1 = 0
            int32_t rax_6 = 0
            int16_t* r14_1 = nullptr
            int16_t* var_48 = nullptr
            int32_t r15_1 = 0
            int32_t var_40_1 = 0
            int32_t var_3c_1 = 0
            int32_t rax_7
            
            if (*arg2 != 0)
                do
                    rsi += 1
                while (arg2[rsi] != 0)
                
                if (rsi.d + 1 s> 0)
                    sub_1405947f0(&var_48, rsi.d + 1)
                    rax_6 = var_3c_1
                    r15_1 = var_40_1
                    r14_1 = var_48
                
                r15_1 += rsi.d + 1
                
                if (r15_1 s> rax_6)
                    sub_140594770(&var_48)
                    r14_1 = var_48
                
                UnDecorator::getReferenceType(r14_1, arg2, (rsi.d + 1) * 2)
                rax_7 = r15_1 - 1
            
            if (*arg2 == 0 || r15_1 == 0)
                rax_7 = 0
            
            if (rax_7 s> 0)
                int64_t i = 0
                
                do
                    uint32_t rcx_3 = zx.d(r14_1[i])
                    int32_t rax_8
                    rax_8.w = sbb.w((rcx_3 - 0x61).w, (rcx_3 - 0x61).w, rcx_3 - 0x61 u< 0x1a)
                    rax_8.w &= 0x20
                    rcx_3.w -= rax_8.w
                    r14_1[i] = rcx_3.w
                    i += 1
                while (i s< sx.q(rax_7))
            
            int32_t rbx_1 = arg1[1].d
            uint64_t r8_3 = 0
            int64_t rsi_2 = *arg1
            uint64_t var_38 = 0
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_38, rbx_1, 0)
                memcpy(var_38, rsi_2, rbx_1 * 2)
                r8_3 = var_38
            else
                int32_t var_2c_1 = 0
            
            int32_t rbx_2
            
            if (rbx_1 == 0)
                rbx_2 = 0
            else
                rbx_2 = rbx_1 - 1
            
            if (rbx_2 s> 0)
                do
                    uint32_t rcx_6 = zx.d(*(r8_3 + (i_1 << 1)))
                    int32_t rax_9
                    rax_9.w = sbb.w((rcx_6 - 0x61).w, (rcx_6 - 0x61).w, rcx_6 - 0x61 u< 0x1a)
                    rax_9.w &= 0x20
                    rcx_6.w -= rax_9.w
                    *(r8_3 + (i_1 << 1)) = rcx_6.w
                    i_1 += 1
                while (i_1 s< sx.q(rbx_2))
            
            int16_t* const rdx_8 = &data_142d40450
            
            if (r15_1 != 0)
                rdx_8 = r14_1
            
            int32_t rax_11 = sub_140a23cf0(&var_38, rdx_8, 0, zx.q(arg4), arg5)
            uint64_t rcx_8 = var_38
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            return zx.q(rax_11)
        
        int64_t rdx_9 = -1
        
        do
            rdx_9 += 1
        while (arg2[rdx_9] != 0)
        
        int32_t r9_2 = arg5
        
        if (rdx_9.d s<= 1)
            rdx_9 = 1
        
        int32_t rcx_10
        
        if (r9_2 != 0xffffffff)
            int32_t rax_12 = arg1[1].d
            rcx_10 = rax_12 - 1
            
            if (rax_12 == 0)
                rcx_10 = 0
        
        if (r9_2 == 0xffffffff || r9_2 s>= rcx_10)
            int32_t r9_3 = arg1[1].d
            
            if (r9_3 == 0)
                r9_2 = 0
            else
                r9_2 = r9_3 - 1
        
        int32_t r9_4 = r9_2 - rdx_9.d
        
        if (r9_2 - rdx_9.d s>= 0)
            int16_t i_3 = *arg2
            int64_t r10_1 = sx.q(r9_4)
            int64_t temp1_1
            
            do
                int64_t rcx_11 = 0
                
                if (i_3 != 0)
                    int16_t i_2 = i_3
                    int16_t* r8_6 = *arg1 + (r10_1 << 1)
                    
                    while (*r8_6 == i_2)
                        i_2 = arg2[rcx_11 + 1]
                        rcx_11 += 1
                        r8_6 = &r8_6[1]
                        
                        if (i_2 == 0)
                            break
                
                if (arg2[rcx_11] == 0)
                    return zx.q(r9_4)
                
                r9_4 -= 1
                temp1_1 = r10_1
                r10_1 -= 1
            while (temp1_1 - 1 s>= 0)
    else
        int32_t r9 = arg1[1].d
        int16_t* const rbp_1 = &data_142d40450
        int16_t* wcs1
        
        if (r9 == 0)
            wcs1 = &data_142d40450
        else
            wcs1 = *arg1
        
        if (arg5 != 0xffffffff)
            int32_t rax_1 = r9 - 2
            
            if (r9 == 0)
                rax_1 = -1
            
            int32_t rdi_1
            
            if (arg5 s>= 0)
                if (arg5 s< rax_1)
                    rax_1 = arg5
                
                rdi_1 = rax_1
            else
                rdi_1 = 0
            
            wcs1 = &wcs1[sx.q(rdi_1)]
        
        void* rax_3
        
        if (arg3 != 1)
            rax_3 = wcsstr(wcs1, arg2)
        else
            rax_3 = sub_140a32c90(wcs1, arg2)
        
        if (rax_3 != 0)
            if (arg1[1].d != 0)
                rbp_1 = *arg1
            
            return (rax_3 - rbp_1) s>> 1

return 0xffffffff
