// 函数: sub_1409e4ff0
// 地址: 0x1409e4ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int64_t rsi = sx.q(arg2)
*arg4 = data_143a1c6c8
int32_t* var_58
char* result = sub_1409c2bd0(arg1[5], &var_58, rsi.d)
int32_t* rcx_1 = var_58
int32_t rbx = *(result + 8)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

if (rbx == 2)
    result = rsi * 3
    char r11_1 = 0
    int32_t result_1 = 0
    int64_t r14_1 = result * 2
    int64_t* r15_1 = arg1[5]
    int64_t rdi_1 = r15_1[0xe]
    int64_t rbp_1 = *r15_1
    int64_t rcx_3 = sx.q(*(rdi_1 + (r14_1 << 2))) << 5
    int32_t r10_1 = *(rcx_3 + rbp_1 + 0x18)
    
    if (r10_1 s> 0)
        void* r9 = rcx_3 + rbp_1
        
        do
            int32_t* r8_1
            
            if (result_1 s< 0 || result_1 s>= *(r9 + 0x18))
                r8_1 = &data_143a1c6bc
            else
                result = sx.q(result_1)
                r8_1 = *(r9 + 0x10) + (result << 2)
            
            if (*r8_1 != rsi.d)
                r11_1 = 1
                break
            
            result_1 += 1
        while (result_1 s< r10_1)
    
    rbx.b = 0
    int64_t r8_3 = sx.q(*(rdi_1 + (r14_1 << 2) + 4)) << 5
    int32_t result_2 = 0
    int32_t r10_2 = *(r8_3 + rbp_1 + 0x18)
    
    if (r10_2 s> 0)
        void* r9_1 = r8_3 + rbp_1
        
        do
            int32_t* r8_4
            
            if (result_2 s< 0 || result_2 s>= *(r9_1 + 0x18))
                r8_4 = &data_143a1c6bc
            else
                result = sx.q(result_2)
                r8_4 = *(r9_1 + 0x10) + (result << 2)
            
            if (*r8_4 != rsi.d)
                rbx.b = 1
                break
            
            result_2 += 1
        while (result_2 s< r10_2)
    
    if ((r11_1 & rbx.b) != 0)
        sub_1409c2bd0(r15_1, &var_58, rsi.d)
        int32_t* rbx_1 = &data_143a1c6c8
        int32_t* rcx_7 = var_58
        int32_t* rax_1 = &data_143a1c6c8
        int32_t var_50
        
        if (var_50 s> 0)
            rax_1 = rcx_7
        
        int64_t rdi_2 = sx.q(*rax_1)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        result = sub_1409c2bd0(arg1[5], &var_58, rsi.d)
        int32_t* rcx_9 = var_58
        
        if (var_50 s> 1)
            rbx_1 = &rcx_9[1]
        
        int64_t rbx_2 = sx.q(*rbx_1)
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        void* rbp_2 = arg1[5]
        void* var_70_1 = rbp_2
        int64_t rdx_3 = *(rbp_2 + 0xe0)
        int64_t* r13_1 = rdx_3 + rdi_2 * 0x28
        int32_t rbx_3 = r13_1[4].d
        int64_t* r9_2 = rdx_3 + rbx_2 * 0x28
        int64_t* var_68_1 = r9_2
        
        if (rbx_3 == r9_2[4].d)
            int64_t rax_2 = *(rbp_2 + 0x70)
            int64_t rcx_12 = rsi * 3
            int32_t r14_2 = r13_1[1].d
            int32_t* r15_2 = nullptr
            int32_t i_4 = 0
            var_58 = nullptr
            int32_t r10_3 = 0
            var_50.q = 0
            int32_t r8_7 = *(rax_2 + (rcx_12 << 3))
            int32_t r11_2 = 0
            int32_t rcx_13 = *(rax_2 + (rcx_12 << 3) + 4)
            int32_t rax_3 = -1
            int32_t var_78_1 = 0xffffffff
            int32_t arg_10 = 0xffffffff
            
            if (r14_2 s> 0)
                int64_t r13_2 = *(rbp_2 + 0x38)
                int32_t* rbp_3 = *r13_1
                
                while (true)
                    int32_t r12_1 = r11_2 + 1
                    int32_t rax_8 = *(r13_2 + sx.q(*rbp_3) * 0x18)
                    
                    if (rax_8 == r8_7 || rax_8 == rcx_13)
                        int32_t rax_11 = *(r13_2
                            + sx.q(*(*r13_1 + (sx.q(mods.dp.d(sx.q(r12_1), r14_2)) << 2))) * 0x18)
                        
                        if (rax_11 == r8_7 || rax_11 == rcx_13)
                            rax_3 = r11_2
                            arg_10 = rax_3
                            break
                    
                    rbp_3 = &rbp_3[1]
                    r11_2 = r12_1
                    
                    if (r12_1 s>= r14_2)
                        rax_3 = -1
                        break
                
                rbp_2 = var_70_1
                r9_2 = var_68_1
            
            int32_t r11_3 = 0
            int32_t r14_3 = r9_2[1].d
            
            if (r14_3 s> 0)
                int64_t r13_3 = *(rbp_2 + 0x38)
                int32_t* rbp_4 = *r9_2
                int32_t r12_2
                
                do
                    r12_2 = r11_3 + 1
                    int32_t rax_18 = *(r13_3 + sx.q(*rbp_4) * 0x18)
                    
                    if (rax_18 == r8_7 || rax_18 == rcx_13)
                        int32_t rax_21 = *(r13_3
                            + sx.q(*(*var_68_1 + (sx.q(mods.dp.d(sx.q(r12_2), r14_3)) << 2)))
                            * 0x18)
                        
                        if (rax_21 == r8_7 || rax_21 == rcx_13)
                            r9_2 = var_68_1
                            var_78_1 = r11_3
                            goto label_1409e530a
                    
                    rbp_4 = &rbp_4[1]
                    r11_3 = r12_2
                while (r12_2 s< r14_3)
                r9_2 = var_68_1
            
            r11_3 = -1
        label_1409e530a:
            int64_t r8_9 = *(var_70_1 + 0x38)
            int32_t r13_4 = mods.dp.d(sx.q(r11_3 + 1), r14_3)
            int64_t rdx_18 = sx.q(arg_10)
            int32_t r14_4 = mods.dp.d(sx.q(rax_3 + 1), r14_2)
            int32_t r12_3 = *(r8_9 + sx.q(*(*r13_1 + (rdx_18 << 2))) * 0x18)
            int32_t rax_28 = *(r8_9 + sx.q(*(*r9_2 + (sx.q(r11_3) << 2))) * 0x18)
            var_70_1.d = rax_28
            int32_t var_4c
            
            if (r14_4 != rdx_18.d)
                int64_t* r8_10 = r13_1
                int32_t temp1_5
                
                do
                    int64_t i_5 = sx.q(i_4)
                    i_4 = (i_5 + 1).d
                    
                    if (i_4 s> r10_3)
                        sub_1405a4df0(&var_58)
                        r10_3 = var_4c
                        r8_10 = r13_1
                        r15_2 = var_58
                    
                    int64_t rcx_20 = i_5 * 3
                    r15_2[rcx_20 * 2] = data_143a1c6b8
                    r15_2[rcx_20 * 2 + 1] = data_143a1c6b4
                    *(r15_2 + (rcx_20 << 3) + 8) = 0
                    *(r15_2 + (rcx_20 << 3) + 0x10) = 0
                    r15_2[sx.q(i_4 - 1) * 6] = *(*r8_10 + (sx.q(r14_4) << 2))
                    r8_10[1].d
                    temp1_5 = mods.dp.d(sx.q(r14_4 + 1), r8_10[1].d)
                    r14_4 = temp1_5
                while (temp1_5 != arg_10)
                rax_28 = var_70_1.d
                r9_2 = var_68_1
                r11_3 = var_78_1
            
            int32_t r14_5 = r11_3
            
            if (r12_3 != rax_28)
                r14_5 = r13_4
            
            if (r12_3 != rax_28)
                r13_4 = r11_3
            
            int32_t r12_4
            
            if (r12_3 == rax_28)
                r12_4 = r9_2[1].d - 1
            else
                r12_4 = 1
            
            if (r14_5 != r13_4)
                int32_t temp1_6
                
                do
                    int64_t i_6 = sx.q(i_4)
                    i_4 = (i_6 + 1).d
                    
                    if (i_4 s> r10_3)
                        sub_1405a4df0(&var_58)
                        r10_3 = var_4c
                        r9_2 = var_68_1
                        r15_2 = var_58
                    
                    int64_t rcx_26 = i_6 * 3
                    r15_2[rcx_26 * 2] = data_143a1c6b8
                    r15_2[rcx_26 * 2 + 1] = data_143a1c6b4
                    *(r15_2 + (rcx_26 << 3) + 8) = 0
                    *(r15_2 + (rcx_26 << 3) + 0x10) = 0
                    r15_2[sx.q(i_4 - 1) * 6] = *(*r9_2 + (sx.q(r14_5) << 2))
                    r9_2[1].d
                    temp1_6 = mods.dp.d(sx.q(r14_5 + r12_4), r9_2[1].d)
                    r14_5 = temp1_6
                while (temp1_6 != r13_4)
            
            sub_1409b5930(arg1, rsi.d, 0, 0, 0, 0)
            TEB* gsbase
            int32_t* r14_7 =
                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
            
            if (data_143cee688 s> *r14_7)
                _Init_thread_header(&data_143cee688)
                
                if (data_143cee688 == 0xffffffff)
                    atexit(sub_142cb99b0)
                    _Init_thread_footer(&data_143cee688)
            
            int32_t i_3 = data_143cee680
            int32_t rsi_5
            
            if (data_143cee684 s< 0)
                if (i_3 != 0)
                    int64_t* rsi_4 = data_143cee678 + 8
                    int32_t i
                    
                    do
                        sub_1408464b0(rsi_4)
                        rsi_4 = &rsi_4[4]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                bool cond:6_1 = data_143cee684 == 0
                rsi_5 = 0
                data_143cee680 = 0
                
                if (not(cond:6_1))
                    sub_1405a51b0(&data_143cee678, 0)
                    rsi_5 = data_143cee680
            else
                if (i_3 != 0)
                    int64_t* rsi_2 = data_143cee678 + 8
                    int32_t i_1
                    
                    do
                        sub_1408464b0(rsi_2)
                        rsi_2 = &rsi_2[4]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                rsi_5 = 0
            
            bool cond:7_1 = rsi_5 + 1 s<= data_143cee684
            data_143cee680 = rsi_5 + 1
            
            if (not(cond:7_1))
                sub_1405c4e40(&data_143cee678)
            
            int64_t rcx_35 = sx.q(rsi_5) << 5
            int32_t* rcx_36 = rcx_35 + data_143cee678
            
            if (rcx_35 == neg.q(data_143cee678))
                rcx_36 = nullptr
            else
                *rcx_36 = data_143a1c6c4
                *(rcx_36 + 8) = 0
                *(rcx_36 + 0x10) = 0
                rcx_36[6] = data_143a1c6c8
                rcx_36[7].b = 0
            
            *rcx_36 = rbx_3
            sub_1409ac120(&rcx_36[2], &var_58)
            
            if (data_143cee6a0 s> *r14_7)
                _Init_thread_header(&data_143cee6a0)
                
                if (data_143cee6a0 == 0xffffffff)
                    atexit(sub_142cb8ca0)
                    _Init_thread_footer(&data_143cee6a0)
            
            int32_t rax_51 = data_143cee69c
            data_143cee698 = 0
            
            if (rax_51 s< 0 && rax_51 != 0)
                sub_1405dadb0(&data_143cee690, 0)
            
            if (data_143cee6b8 s> *r14_7)
                _Init_thread_header(&data_143cee6b8)
                
                if (data_143cee6b8 == 0xffffffff)
                    atexit(sub_142cb8a80)
                    _Init_thread_footer(&data_143cee6b8)
            
            int32_t rax_53 = data_143cee6b4
            data_143cee6b0 = 0
            
            if (rax_53 s< 0 && rax_53 != 0)
                sub_1405dadb0(&data_143cee6a8, 0)
            
            sub_1409b4ab0(arg1, &data_143cee678, &data_143cee690, &data_143cee6a8)
            *arg4 = *data_143cee690
            result = arg3
            *result = 1
            
            if (i_4 != 0)
                void* rbx_4 = &r15_2[2]
                int32_t i_2
                
                do
                    int64_t rcx_40 = *rbx_4
                    
                    if (rcx_40 != 0)
                        result = sub_140a74f90(rcx_40)
                    
                    rbx_4 += 0x18
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            if (r15_2 != 0)
                return sub_140a74f90(r15_2)

return result
