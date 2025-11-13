// 函数: sub_140cb20b0
// 地址: 0x140cb20b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) != 0 && *(arg1 + 0x78) != 0)
    int32_t rcx
    rcx.b = *(arg2 + 0xc) == 0
    char arg_8
    
    if ((rcx.b & sub_140b5b8a0(arg2[1].d, 1)) != 0)
        int32_t rcx_1 = *(arg2 + 0x24)
        int32_t rdi_2 = arg2[5].d
        arg_8 = 0
        char rax_2 = sub_140b5b8a0(rcx_1, 0)
        rcx_1.b = rdi_2 == 0
        
        if ((rcx_1.b & rax_2) == 0)
            arg_8 = sub_140d0ba50(arg3, arg6, arg2)
        else
            sub_140cea340()
            void* rcx_2
            
            if (*(arg1 + 0x18) == 0)
                rcx_2 = *(arg1 + 0x10)
            
            if (*(arg1 + 0x18) != 0 || rcx_2 == 0 || (data_143e1b828 & *(*(rcx_2 + 8) + 0x10)) == 0)
                int64_t* r9 = *(*arg3 + 8)
                int64_t* rcx_5 = r9[1]
                char* rdx_1 = *rcx_5
                
                if (&rdx_1[1] u> rcx_5[1])
                    (*(*r9 + 0x150))(r9, &arg_8, 1)
                else
                    arg_8 = *rdx_1
                    int64_t* rax_8 = r9[1]
                    *rax_8 += 1
            else
                int64_t var_a0_1 = arg2[1]
                void* rax_4 = *(arg1 + 0x80)
                int32_t var_68_1 = 0xffffffff
                int64_t var_a8 = 0
                char var_98_1 = 0
                int64_t var_94
                __builtin_memset(&var_94, 0, 0x2c)
                int64_t var_60_1 = -1
                int64_t var_58
                __builtin_memset(&var_58, 0, 0x11)
                int64_t var_44_1 = 0
                int64_t var_3c_1 = 0
                int64_t var_84_1 = *(rax_4 + 0x18)
                int32_t var_68_2 = 0
                arg_8 = sub_140d0ba50(arg3, arg6, &var_a8)
        
        int64_t* rcx_8 = *(arg1 + 0x78)
        (*(*rcx_8 + 0x150))(rcx_8, sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4, 
            zx.q(arg_8))
        return 2
    
    int32_t rcx_9
    rcx_9.b = *(arg2 + 0xc) == 0
    
    if ((rcx_9.b & sub_140b5b8a0(arg2[1].d, 0x17)) != 0)
        void* rsi_1 = *(arg1 + 0x80)
        int64_t* rdi_4 = *(arg1 + 0x78)
        int64_t r12_2 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_1 = *(*arg3 + 8)
        int64_t* rcx_10 = r9_1[1]
        char* rdx_6 = *rcx_10
        
        if (&rdx_6[1] u> rcx_10[1])
            (*(*r9_1 + 0x150))(r9_1, &arg_8, 1)
        else
            arg_8 = *rdx_6
            int64_t* rax_24 = r9_1[1]
            *rax_24 += 1
        
        int64_t rbx_1 = sx.q(arg_8)
        arg5.o = zx.o(0)
        arg5.q = float.d(rbx_1)
        char rax_27 = (*(*rdi_4 + 0x188))(rdi_4, arg5)
        char rax_28
        
        if (rax_27 != 0)
            rax_28 = sub_140be1e00(rsi_1, rbx_1)
        
        if (rax_27 == 0 || rax_28 == 0)
            rbx_1 = sub_140bdeca0(rsi_1)
        
        int64_t r9_2 = *rdi_4
        (*(r9_2 + 0x148))(rdi_4, r12_2, rbx_1, r9_2)
        return 2
    
    int32_t rcx_16
    rcx_16.b = *(arg2 + 0xc) == 0
    
    if ((rcx_16.b & sub_140b5b8a0(arg2[1].d, 0x16)) != 0)
        void* rsi_2 = *(arg1 + 0x80)
        int64_t* rdi_6 = *(arg1 + 0x78)
        int64_t r12_4 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_3 = *(*arg3 + 8)
        int64_t* rcx_17 = r9_3[1]
        int16_t* rdx_10 = *rcx_17
        
        if (&rdx_10[1] u> rcx_17[1])
            char* rdx_11 = &arg_8
            
            if ((*(r9_3 + 0x29) & 0x20) != 0)
                sub_140b54000(r9_3, rdx_11, arg5)
            else
                (*(*r9_3 + 0x150))(r9_3, rdx_11, 2)
        else
            arg_8.w = *rdx_10
            int64_t* rax_38 = r9_3[1]
            *rax_38 += 2
        
        int64_t rbx_2 = sx.q(arg_8.w)
        arg5.o = zx.o(0)
        arg5.q = float.d(rbx_2)
        char rax_41 = (*(*rdi_6 + 0x188))(rdi_6, arg5)
        char rax_42
        
        if (rax_41 != 0)
            rax_42 = sub_140be1e00(rsi_2, rbx_2)
        
        if (rax_41 == 0 || rax_42 == 0)
            rbx_2 = sub_140bdeca0(rsi_2)
        
        int64_t r9_4 = *rdi_6
        (*(r9_4 + 0x148))(rdi_6, r12_4, rbx_2, r9_4)
        return 2
    
    int32_t rcx_23
    rcx_23.b = *(arg2 + 0xc) == 0
    
    if ((rcx_23.b & sub_140b5b8a0(arg2[1].d, 2)) != 0)
        void* rsi_3 = *(arg1 + 0x80)
        int64_t* rdi_8 = *(arg1 + 0x78)
        int64_t r12_6 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_5 = *(*arg3 + 8)
        int64_t* rcx_24 = r9_5[1]
        int32_t* rdx_14 = *rcx_24
        
        if (&rdx_14[1] u> rcx_24[1])
            char* rdx_15 = &arg_8
            
            if ((*(r9_5 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_5, rdx_15, arg5)
            else
                (*(*r9_5 + 0x150))(r9_5, rdx_15, 4)
        else
            arg_8.d = *rdx_14
            int64_t* rax_52 = r9_5[1]
            *rax_52 += 4
        
        int64_t rbx_3 = sx.q(arg_8.d)
        arg5.o = zx.o(0)
        arg5.q = float.d(rbx_3)
        char rax_55 = (*(*rdi_8 + 0x188))(rdi_8, arg5)
        char rax_56
        
        if (rax_55 != 0)
            rax_56 = sub_140be1e00(rsi_3, rbx_3)
        
        if (rax_55 == 0 || rax_56 == 0)
            rbx_3 = sub_140bdeca0(rsi_3)
        
        int64_t r9_6 = *rdi_8
        (*(r9_6 + 0x148))(rdi_8, r12_6, rbx_3, r9_6)
        return 2
    
    int32_t rcx_30
    rcx_30.b = *(arg2 + 0xc) == 0
    
    if ((rcx_30.b & sub_140b5b8a0(arg2[1].d, 0x14)) != 0)
        void* rsi_4 = *(arg1 + 0x80)
        int64_t* rdi_10 = *(arg1 + 0x78)
        int64_t r12_8 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_7 = *(*arg3 + 8)
        int64_t* rcx_31 = r9_7[1]
        int64_t* rdx_18 = *rcx_31
        
        if (&rdx_18[1] u> rcx_31[1])
            int64_t* rdx_19 = &arg_8
            
            if ((*(r9_7 + 0x29) & 0x20) != 0)
                sub_140b540d0(r9_7, rdx_19, arg5)
            else
                (*(*r9_7 + 0x150))(r9_7, rdx_19, 8)
        else
            arg_8.q = *rdx_18
            int64_t* rax_66 = r9_7[1]
            *rax_66 += 8
        
        int64_t rbx_4 = arg_8.q
        arg5.o = zx.o(0)
        arg5.q = float.d(rbx_4)
        char rax_69 = (*(*rdi_10 + 0x188))(rdi_10, arg5)
        char rax_70
        
        if (rax_69 != 0)
            rax_70 = sub_140be1e00(rsi_4, rbx_4)
        
        if (rax_69 == 0 || rax_70 == 0)
            rbx_4 = sub_140bdeca0(rsi_4)
        
        int64_t r9_8 = *rdi_10
        (*(r9_8 + 0x148))(rdi_10, r12_8, rbx_4, r9_8)
        return 2
    
    int32_t rcx_37
    rcx_37.b = *(arg2 + 0xc) == 0
    uint64_t rbx_5
    void* rsi_5
    int64_t* rdi_12
    int64_t r12_10
    
    if ((rcx_37.b & sub_140b5b8a0(arg2[1].d, 0x1a)) != 0)
        rsi_5 = *(arg1 + 0x80)
        rdi_12 = *(arg1 + 0x78)
        r12_10 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_9 = *(*arg3 + 8)
        int64_t* rcx_38 = r9_9[1]
        int16_t* rdx_22 = *rcx_38
        
        if (&rdx_22[1] u> rcx_38[1])
            char* rdx_23 = &arg_8
            
            if ((*(r9_9 + 0x29) & 0x20) != 0)
                sub_140b54000(r9_9, rdx_23, arg5)
                rbx_5 = zx.q(arg_8.w)
            else
                (*(*r9_9 + 0x150))(r9_9, rdx_23, 2)
                rbx_5 = zx.q(arg_8.w)
        else
            arg_8.w = *rdx_22
            int64_t* rax_80 = r9_9[1]
            *rax_80 += 2
            rbx_5 = zx.q(arg_8.w)
        
        goto label_140cb275c
    
    int32_t rcx_40
    rcx_40.b = *(arg2 + 0xc) == 0
    
    if ((rcx_40.b & sub_140b5b8a0(arg2[1].d, 0x19)) != 0)
        rsi_5 = *(arg1 + 0x80)
        rdi_12 = *(arg1 + 0x78)
        r12_10 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_10 = *(*arg3 + 8)
        int64_t* rcx_41 = r9_10[1]
        int32_t* rdx_24 = *rcx_41
        
        if (&rdx_24[1] u> rcx_41[1])
            char* rdx_25 = &arg_8
            
            if ((*(r9_10 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_10, rdx_25, arg5)
                rbx_5 = zx.q(arg_8.d)
            else
                (*(*r9_10 + 0x150))(r9_10, rdx_25, 4)
                rbx_5 = zx.q(arg_8.d)
        else
            arg_8.d = *rdx_24
            int64_t* rax_90 = r9_10[1]
            *rax_90 += 4
            rbx_5 = zx.q(arg_8.d)
        
        goto label_140cb275c
    
    int32_t rcx_43
    rcx_43.b = *(arg2 + 0xc) == 0
    
    if ((rcx_43.b & sub_140b5b8a0(arg2[1].d, 0x18)) != 0)
        rsi_5 = *(arg1 + 0x80)
        rdi_12 = *(arg1 + 0x78)
        r12_10 = sx.q(*(arg1 + 0x4c)) + sx.q(arg2[8].d * *(arg1 + 0x3c)) + arg4
        int64_t* r9_11 = *(*arg3 + 8)
        int64_t* rcx_44 = r9_11[1]
        int64_t* rdx_26 = *rcx_44
        
        if (&rdx_26[1] u> rcx_44[1])
            int64_t* rdx_27 = &arg_8
            
            if ((*(r9_11 + 0x29) & 0x20) != 0)
                sub_140b540d0(r9_11, rdx_27, arg5)
            else
                (*(*r9_11 + 0x150))(r9_11, rdx_27, 8)
        else
            arg_8.q = *rdx_26
            int64_t* rax_100 = r9_11[1]
            *rax_100 += 8
        
        rbx_5 = arg_8.q
    label_140cb275c:
        arg5.o = zx.o(0)
        arg5.q = float.d(rbx_5)
        
        if (rbx_5 s< 0)
            arg5.q = arg5.q f+ 1.8446744073709552e+19
        
        char rax_103 = (*(*rdi_12 + 0x188))(rdi_12, arg5)
        char rax_104
        
        if (rax_103 != 0)
            rax_104 = sub_140be1e00(rsi_5, rbx_5)
        
        if (rax_103 == 0 || rax_104 == 0)
            rbx_5 = sub_140bdeca0(rsi_5)
        
        int64_t r9_12 = *rdi_12
        (*(r9_12 + 0x150))(rdi_12, r12_10, rbx_5, r9_12)
        return 2

return 0
