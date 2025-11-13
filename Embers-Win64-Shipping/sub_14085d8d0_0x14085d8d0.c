// 函数: sub_14085d8d0
// 地址: 0x14085d8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
int64_t var_30 = r14
void* r12 = arg2
int32_t result

if ((arg1[0x1b].b & 2) == 0)
label_14085dce6:
    
    if (arg1[0x10].d - *(arg1 + 0xac) s> 0 && (arg1[0x1b].b & 7) != 0)
        sub_14083f210(&arg1[5])
    
    arg1[0x1b].d &= 0xfffffff8
    result.b = 1
else
    void* rcx = *arg1
    
    if (rcx == 0 || *(rcx + 0x4e8) == 0)
        goto label_14085dce6
    
    if (*(rcx + 0x490) != arg1[0xc].d)
        result.b = 0
    else
        int64_t rdi_1 = 0
        char arg_8
        int64_t* arg_20
        
        if (arg2 != 0)
            int64_t rbx_1 = sx.q(arg1[4].d)
            int32_t rax_1 = *(rcx + 0x3fc)
            
            if (rax_1 s> rbx_1.d)
                arg1[4].d = rax_1
                
                if (rax_1 s> *(arg1 + 0x24))
                    sub_140638870(&arg1[3])
                
                memset(arg1[3] + (rbx_1 << 3), 0, sx.q(rax_1 - rbx_1.d) << 3)
                rdi_1 = 0
            else if (rax_1 s< rbx_1.d && rax_1 != rbx_1.d)
                arg1[4].d = rax_1
            
            int32_t i = 0
            
            if (arg1[0xc].d s> 0)
                int64_t rsi_1 = 0
                
                do
                    r14 = sx.q(*(*(*arg1 + 0x488) + rdi_1 + 8))
                    
                    if (r14.d != 0xffffffff)
                        sub_140d3a3a0(&arg_20, *(arg1[0xb] + rsi_1))
                        sub_1408506d0(r12 + 0x100, &arg_8, arg_20)
                        int64_t rax_4 = sx.q(arg_8.d)
                        void* const rcx_6
                        
                        if (rax_4.d == 0xffffffff)
                            rcx_6 = nullptr
                        else
                            rcx_6 = *(r12 + 0x100) + rax_4 * 0x14
                        
                        r12 = arg2
                        int32_t* rax_6 = rcx_6 + 8
                        
                        if (rcx_6 == 0)
                            rax_6 = nullptr
                        
                        int64_t rdx_6
                        
                        if (rax_6 == 0)
                            rdx_6 = 0
                        else
                            rdx_6 = sx.q(*rax_6) + *(r12 + 0xf0)
                        
                        *(arg1[3] + (r14 << 3)) = rdx_6
                    
                    i += 1
                    rdi_1 += 0x38
                    rsi_1 += 8
                while (i s< arg1[0xc].d)
        
        int32_t rdx_7 = *(*arg1 + 0x4a0)
        
        if (rdx_7 s> *(arg1 + 0x14))
            sub_14084edd0(&arg1[1], rdx_7)
        else
            int32_t i_4 = arg1[2].d
            int64_t* rdi_4 = arg1[1]
            
            if (i_4 != 0)
                int32_t i_1
                
                do
                    sub_140745b20(rdi_4)
                    rdi_4 = &rdi_4[2]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            arg1[2].d = 0
        
        void* rax_9 = *arg1
        r14.b = 1
        arg_8 = 1
        int64_t* rsi_2 = *(rax_9 + 0x498)
        void* r13_1 = sx.q(*(rax_9 + 0x4a0)) * 0x38
        arg_20 = rsi_2
        void* r13_2 = r13_1 + rsi_2
        void* var_58_1 = r13_2
        
        if (rsi_2 == r13_2)
            goto label_14085dce6
        
        do
            int64_t* var_50 = nullptr
            int32_t var_48_1 = 0
            char rax_11 = sub_140830e70(rsi_2, &var_50)
            int64_t* rcx_10 = var_50
            
            if (rax_11 == 0 || var_48_1 == 0 || rcx_10 == 0)
                goto label_14085db32
            
            bool cond:5_1
            
            if ((*(*rcx_10 + 0x28))() == 0)
                rcx_10 = var_50
            label_14085db32:
                void* rax_26 = *arg1
                int32_t i_2 = 0
                
                if (*(rax_26 + 0x490) s> 0)
                    void* rcx_12 = nullptr
                    int64_t r13_3 = 0
                    void* var_68_1 = nullptr
                    
                    do
                        int64_t* rcx_13 = rcx_12 + *(rax_26 + 0x488)
                        int64_t* r11_1 = *(arg1[0xb] + r13_3)
                        int64_t* var_60_1 = r11_1
                        
                        if (*rcx_13 == rsi_2[1])
                            int64_t rax_19 = sx.q(rcx_13[1].d)
                            
                            if (rax_19.d != 0xffffffff)
                                r14 = *(arg1[3] + (rax_19 << 3))
                            else
                                r14 = 0
                            
                            int64_t rdi_6 = sx.q(arg1[2].d)
                            int32_t rax_21 = (rdi_6 + 1).d
                            arg1[2].d = rax_21
                            
                            if (rax_21 s> *(arg1 + 0x14))
                                sub_1405a4f90(&arg1[1])
                                r11_1 = var_60_1
                            
                            int64_t rax_22 = arg1[1]
                            int64_t rsi_4 = rdi_6 << 4
                            *(rsi_4 + rax_22) = 0
                            *(rsi_4 + rax_22 + 8) = 0
                            
                            if (r11_1 != 0)
                                (*(*r11_1 + 0x2d0))(r11_1, arg_20, r14, arg1[1] + rsi_4, var_68_1, 
                                    var_60_1, var_58_1)
                            
                            if (rdi_6.d == 0xffffffff)
                                r14 = zx.q(arg_8)
                            else
                                int64_t rax_23 = arg1[1]
                                
                                if (*(rsi_4 + rax_23 + 8) == 0)
                                    r14.b = 0
                                    arg_8 = 0
                                else
                                    int64_t* rcx_17 = *(rsi_4 + rax_23)
                                    
                                    if (rcx_17 == 0)
                                        r14.b = 0
                                        arg_8 = 0
                                    else if ((*(*rcx_17 + 0x28))(rcx_17) != 0)
                                        r14 = zx.q(arg_8)
                                    else
                                        r14.b = 0
                                        arg_8 = 0
                            
                            rsi_2 = arg_20
                        
                        i_2 += 1
                        rax_26 = *arg1
                        rcx_12 = var_68_1 + 0x38
                        r13_3 += 8
                        var_68_1 = rcx_12
                    while (i_2 s< *(rax_26 + 0x490))
                    
                    rcx_10 = var_50
                    r13_2 = var_58_1
                
                cond:5_1 = var_48_1 == 0
                goto label_14085dc47
            
            int64_t rdi_5 = sx.q(arg1[2].d)
            int32_t rax_14 = (rdi_5 + 1).d
            arg1[2].d = rax_14
            
            if (rax_14 s> *(arg1 + 0x14))
                sub_1405a4f90(&arg1[1])
            
            int64_t* rdx_12 = (rdi_5 << 4) + arg1[1]
            *rdx_12 = 0
            rdx_12[1].d = 0
            rcx_10 = var_50
            
            if (&var_50 != rdx_12)
                if (var_48_1 == 0)
                    goto label_14085dc73
                
                if (rcx_10 != 0)
                    (*(*rcx_10 + 0x40))()
                    rcx_10 = var_50
                
                goto label_14085db26
            
        label_14085db26:
            cond:5_1 = var_48_1 == 0
        label_14085dc47:
            
            if (cond:5_1)
            label_14085dc73:
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
            else if (rcx_10 != 0)
                (*(*rcx_10 + 0x38))(rcx_10, 0)
                rcx_10 = var_50
                
                if (rcx_10 != 0)
                    int64_t* rax_28 = sub_140a84c80(rcx_10, 0, 0)
                    rcx_10 = rax_28
                    var_50 = rax_28
                
                int32_t var_48_2 = 0
                goto label_14085dc73
            
            rsi_2 = &rsi_2[7]
            arg_20 = rsi_2
        while (rsi_2 != r13_2)
        
        if (r14.b != 0)
            goto label_14085dce6
        
        int32_t i_5 = arg1[2].d
        int64_t* rdi_7 = arg1[1]
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                sub_140745b20(rdi_7)
                rdi_7 = &rdi_7[2]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        arg1[2].d = 0
        
        if (*(arg1 + 0x14) != 0)
            sub_1405a5410(&arg1[1], 0)
        
        result.b = 0

return result
