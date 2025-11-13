// 函数: sub_141bbfa20
// 地址: 0x141bbfa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xd0] == 0 || (*(arg4 + 8) & 0x30) != 0)
    sub_141bbf450(arg1, arg2, arg3, arg4, arg5)
else
    int64_t* rbx_1 = *(arg4 + 0x28)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t rsi
    rsi.b = *(arg4 + 0x18) == data_143e1e188
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t i_2
    
    if (rsi.b == 0)
        int64_t* rbx_6 = *(arg4 + 0x28)
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        rsi.b = *(arg4 + 0x18) == data_143e1e1b8
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp3_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        if (rsi.b == 0)
            sub_141bbf450(arg1, arg2, arg3, arg4, arg5)
        else
            int64_t i = arg1[0xd0]
            
            if (i == 0)
                sub_140e194c0(arg2)
            else
                int64_t* r8_3 = arg1[0xfe]
                int64_t rax_17 = sx.q(arg1[0xff].d)
                int64_t* rbx_7 = r8_3
                i_2 = i
                void* rdx_7 = &r8_3[rax_17]
                int32_t rbx_8
                
                if (r8_3 == rdx_7)
                label_141bbfc8f:
                    rbx_8 = -1
                else
                    while (*rbx_7 != i)
                        rbx_7 = &rbx_7[1]
                        
                        if (rbx_7 == rdx_7)
                            goto label_141bbfc8f
                    
                    rbx_8 = ((rbx_7 - r8_3) s>> 3).d
                
                if ((*(arg1[0x9f] + 0x68))(&arg1[0x9f], zx.q(rbx_8)) == 0)
                    sub_140e194c0(arg2)
                else
                    char rax_21
                    int64_t r8_4
                    rax_21, r8_4 = (*(arg1[0x9f] + 0x60))(&arg1[0x9f], &i_2)
                    
                    if (rax_21 != 0)
                        if (rbx_8 s< arg1[0xff].d - 1)
                            int64_t r9_1 = *arg1
                            (*(r9_1 + 0x2b0))(arg1, arg1[0xfe] + (sx.q(rbx_8 + 1) << 3), arg4, r9_1)
                        
                        sub_140e194c0(arg2)
                    else
                        r8_4.b = 1
                        (*(arg1[0x9f] + 0x50))(&arg1[0x9f], i_2, r8_4)
                        sub_140e194c0(arg2)
    else
        int64_t i_1 = arg1[0xd0]
        
        if (i_1 != 0)
            int64_t* r8 = arg1[0xfe]
            int64_t rax_4 = sx.q(arg1[0xff].d)
            int64_t* rbx_2 = r8
            i_2 = i_1
            void* rdx = &r8[rax_4]
            int32_t rbx_3
            
            if (r8 == rdx)
            label_141bbfae5:
                rbx_3 = -1
            else
                while (*rbx_2 != i_1)
                    rbx_2 = &rbx_2[1]
                    
                    if (rbx_2 == rdx)
                        goto label_141bbfae5
                
                rbx_3 = ((rbx_2 - r8) s>> 3).d
            
            char rax_6 = (*(arg1[0x9f] + 0x68))(&arg1[0x9f], zx.q(rbx_3))
            char rax_8
            
            if (rax_6 != 0)
                rax_8 = (*(arg1[0x9f] + 0x60))(&arg1[0x9f], &i_2)
            
            if (rax_6 == 0 || rax_8 == 0)
                int32_t rax_11 = (*(arg1[0x9f] + 0x88))(&arg1[0x9f], zx.q(rbx_3))
                int32_t rbx_5 = rbx_3 - 1
                
                if (rbx_3 - 1 s>= 0)
                    int32_t temp5_1
                    
                    do
                        int64_t r8_1 = arg1[0x9f]
                        
                        if ((*(r8_1 + 0x88))(&arg1[0x9f], zx.q(rbx_5), r8_1) s< rax_11)
                            int64_t r9 = *arg1
                            (*(r9 + 0x2b0))(arg1, arg1[0xfe] + (sx.q(rbx_5) << 3), arg4, r9)
                            break
                        
                        temp5_1 = rbx_5
                        rbx_5 -= 1
                    while (temp5_1 - 1 s>= 0)
            else
                (*(arg1[0x9f] + 0x50))(&arg1[0x9f], i_2, 0)
        
        *arg2 = 1
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702

return arg2
