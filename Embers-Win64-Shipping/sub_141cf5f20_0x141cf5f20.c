// 函数: sub_141cf5f20
// 地址: 0x141cf5f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*arg1)
uint64_t rbx
rbx.b = 0

if (r9.d != 0)
    int32_t* rdi_1 = data_143a21128 + (sx.q(not.d(data_143a2114c)) & r9) * 0xc
    int32_t* r10_4
    
    if (arg4 << arg6.b s< 0)
        r10_4 = &rdi_1[2]
        
        if (arg6 != arg7)
            goto label_141cf6026
        
        int32_t i = *r10_4
        
        if (i == 0)
        label_141cf5ff1:
            rbx.b = 0
        else
            do
                void* rcx_13 = (sx.q(i) & sx.q(not.d(*(arg2 + 0x24)))) * 0x30 + *arg2
                
                if (i == arg3)
                    rbx.b = 1
                    *r10_4 = *(rcx_13 + 0x20)
                    *(rcx_13 + 0x20) = 0
                    goto label_141cf6036
                
                i = *(rcx_13 + 0x20)
                r10_4 = rcx_13 + 0x20
            while (i != 0)
            
            rbx.b = 0
    else
        void* rcx_7
        int32_t* r8_1
        
        if (arg5 << arg6.b s< 0)
            int32_t i_1 = rdi_1[1]
            r8_1 = &rdi_1[1]
            
            if (i_1 == 0)
            label_141cf5ff1_1:
                rbx.b = 0
            else
                do
                    rcx_7 = (sx.q(i_1) & sx.q(not.d(*(arg2 + 0x24)))) * 0x30 + *arg2
                    
                    if (i_1 == arg3)
                        goto label_141cf5ffb
                    
                    i_1 = *(rcx_7 + 0x20)
                    r8_1 = rcx_7 + 0x20
                while (i_1 != 0)
                
                rbx.b = 0
        else if (arg6 != arg7)
            r10_4 = rdi_1
        label_141cf6026:
            char rax_12 = sub_141cf5f20(r10_4, arg2, zx.q(arg3), arg4, arg5, arg6 + 1, arg7)
            rbx = zx.q(rax_12)
            
            if (rax_12 != 0)
            label_141cf6036:
                
                if (*rdi_1 == 0 && rdi_1[1] == 0 && rdi_1[2] == 0)
                    int64_t rsi_1 = sx.q(data_143a21140)
                    int32_t rdi_4 = not.d(data_143a2114c) & *arg1
                    int32_t rax_13 = (rsi_1 + 1).d
                    bool cond:0_1 = rax_13 s<= data_143a21144
                    data_143a21140 = rax_13
                    
                    if (not(cond:0_1))
                        sub_1405a4cf0(&data_143a21138)
                    
                    *(data_143a21138 + (rsi_1 << 2)) = rdi_4
                    
                    if (data_143a21140 + 1 == data_143a21130.d)
                        bool cond:1_1 = data_143a21130:4.d == 0
                        data_143a21130.d = 0
                        
                        if (not(cond:1_1))
                            sub_14083ad30(&data_143a21128, 0)
                        
                        bool cond:2_1 = data_143a21144 == 0
                        data_143a21140 = 0
                        int64_t r8_3
                        
                        if (not(cond:2_1))
                            sub_1405dadb0(&data_143a21138, 0)
                            r8_3 = sx.q(data_143a21140)
                        
                        int32_t rdi_5
                        
                        if (cond:2_1 || r8_3.d == 0)
                            rdi_5 = data_143a21130.d
                            bool cond:3_1 = rdi_5 + 1 s<= data_143a21130:4.d
                            data_143a21130.d = rdi_5 + 1
                            
                            if (not(cond:3_1))
                                sub_14083a7e0(&data_143a21128)
                        else
                            rdi_5 = *(data_143a21138 + (r8_3 << 2) - 4)
                            data_143a21140 = r8_3.d - 1
                            sub_1405dac90(&data_143a21138)
                        
                        int64_t rdx_5 = sx.q(rdi_5) * 3
                        int64_t rcx_15 = data_143a21128
                        *(rcx_15 + (rdx_5 << 2)) = 0
                        *(rcx_15 + (rdx_5 << 2) + 8) = 0
                    
                    *arg1 = 0
        else
            int32_t rdx_1 = *rdi_1
            r8_1 = rdi_1
            
            if (rdx_1 != 0)
                while (true)
                    rcx_7 = (sx.q(rdx_1) & sx.q(not.d(*(arg2 + 0x24)))) * 0x30 + *arg2
                    
                    if (rdx_1 == arg3)
                    label_141cf5ffb:
                        rbx.b = 1
                        *r8_1 = *(rcx_7 + 0x20)
                        *(rcx_7 + 0x20) = 0
                        break
                    
                    rdx_1 = *(rcx_7 + 0x20)
                    r8_1 = rcx_7 + 0x20
                    
                    if (rdx_1 == 0)
                        goto label_141cf5ff1_2
                
                goto label_141cf6036
            
        label_141cf5ff1_2:
            rbx.b = 0

return zx.q(rbx.b)
