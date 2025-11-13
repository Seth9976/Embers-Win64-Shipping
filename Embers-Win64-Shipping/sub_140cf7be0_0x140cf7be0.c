// 函数: sub_140cf7be0
// 地址: 0x140cf7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
char rax = sub_140b5b8a0(*(arg2 + 8), 1)
arg3.b = *(arg2 + 0xc) == 0
char rax_1
int32_t rcx_2

if ((arg3.b & rax) != 0)
    int32_t rcx_1
    rcx_1.b = *(arg2 + 0x28) == 0
    rax_1 = sub_140b5b8a0(*(arg2 + 0x24), 0) & rcx_1.b
    rcx_2.b = *(arg1 + 0x78) == 0

char rax_9
char arg_10

if ((arg3.b & rax) == 0 || zx.d(rax_1) == rcx_2)
    int32_t rdi_3 = *(arg2 + 0xc)
    char rax_11 = sub_140b5b8a0(*(arg2 + 8), 0x22)
    int32_t rcx_7
    rcx_7.b = rdi_3 == 0
    void* rax_12
    
    if ((rcx_7.b & rax_11) != 0)
        rax_12 = *(arg1 + 0x78)
    
    if ((rcx_7.b & rax_11) == 0 || (rax_12 != 0 && *(arg2 + 0x24) != *(rax_12 + 0x18)))
        int32_t rcx_13
        rcx_13.b = *(arg2 + 0xc) == 0
        
        if ((rcx_13.b & sub_140b5b8a0(*(arg2 + 8), 0x17)) != 0)
            void* rdi_5 = *(arg1 + 0x78)
            int64_t* r9_1 = *(*rbx + 8)
            int64_t* rcx_14 = r9_1[1]
            char* rdx_3 = *rcx_14
            
            if (rdi_5 == 0)
                if (&rdx_3[1] u> rcx_14[1])
                    (*(*r9_1 + 0x150))(r9_1, &arg_10, 1)
                else
                    arg_10 = *rdx_3
                    int64_t* rax_24 = r9_1[1]
                    *rax_24 += 1
                
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            if (&rdx_3[1] u> rcx_14[1])
                (*(*r9_1 + 0x150))(r9_1, &arg_10, 1)
            else
                arg_10 = *rdx_3
                int64_t* rax_19 = r9_1[1]
                *rax_19 += 1
            
            char rbx_1 = arg_10
            char rax_21
            
            if (rbx_1 s<= 0xff)
                rax_21 = sub_140be1e00(rdi_5, zx.q(rbx_1))
            
            if (rbx_1 s> 0xff || rax_21 == 0)
                rbx_1 = sub_140bdeca0(rdi_5)
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = rbx_1
            return 2
        
        int32_t rcx_23
        rcx_23.b = *(arg2 + 0xc) == 0
        uint64_t rbx_2
        void* rdi_7
        
        if ((rcx_23.b & sub_140b5b8a0(*(arg2 + 8), 0x16)) != 0)
            rdi_7 = *(arg1 + 0x78)
            int64_t* r9_2 = *(*rbx + 8)
            int64_t* rcx_24 = r9_2[1]
            int16_t* rdx_7 = *rcx_24
            
            if (rdi_7 == 0)
                if (&rdx_7[1] u> rcx_24[1])
                    int16_t* rdx_9 = &arg_10
                    
                    if ((*(r9_2 + 0x29) & 0x20) != 0)
                        sub_140b54000(r9_2, rdx_9, arg6)
                    else
                        (*(*r9_2 + 0x150))(r9_2, rdx_9, 2)
                else
                    arg_10.w = *rdx_7
                    int64_t* rax_33 = r9_2[1]
                    *rax_33 += 2
                
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            if (&rdx_7[1] u> rcx_24[1])
                char* rdx_8 = &arg_10
                
                if ((*(r9_2 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_2, rdx_8, arg6)
                else
                    (*(*r9_2 + 0x150))(r9_2, rdx_8, 2)
            else
                arg_10.w = *rdx_7
                int64_t* rax_30 = r9_2[1]
                *rax_30 += 2
            
            rbx_2 = zx.q(arg_10.w)
            
            if (rbx_2.w s> 0xff)
            label_140cf8294:
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) =
                    zx.b(sub_140bdeca0(rdi_7))
                return 2
            
        label_140cf8283:
            
            if (sub_140be1e00(rdi_7, zx.q(rbx_2.b)) == 0)
                goto label_140cf8294
            
            *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = rbx_2.b
            return 2
        
        int32_t rcx_27
        rcx_27.b = *(arg2 + 0xc) == 0
        
        if ((rcx_27.b & sub_140b5b8a0(*(arg2 + 8), 2)) != 0)
            rdi_7 = *(arg1 + 0x78)
            int64_t* r9_3 = *(*rbx + 8)
            int64_t* rcx_28 = r9_3[1]
            int32_t* rdx_10 = *rcx_28
            
            if (rdi_7 == 0)
                if (&rdx_10[1] u> rcx_28[1])
                    int32_t* rdx_12 = &arg_10
                    
                    if ((*(r9_3 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_3, rdx_12, arg6)
                    else
                        (*(*r9_3 + 0x150))(r9_3, rdx_12, 4)
                else
                    arg_10.d = *rdx_10
                    int64_t* rax_42 = r9_3[1]
                    *rax_42 += 4
                
                *(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = arg_10
                return 2
            
            if (&rdx_10[1] u> rcx_28[1])
                char* rdx_11 = &arg_10
                
                if ((*(r9_3 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_3, rdx_11, arg6)
                else
                    (*(*r9_3 + 0x150))(r9_3, rdx_11, 4)
            else
                arg_10.d = *rdx_10
                int64_t* rax_39 = r9_3[1]
                *rax_39 += 4
            
            rbx_2 = zx.q(arg_10.d)
            
            if (rbx_2.d s> 0xff)
                goto label_140cf8294
            
            goto label_140cf8283
        
        int32_t rcx_31
        rcx_31.b = *(arg2 + 0xc) == 0
        
        if ((rcx_31.b & sub_140b5b8a0(*(arg2 + 8), 0x14)) != 0)
            rdi_7 = *(arg1 + 0x78)
            
            if (rdi_7 == 0)
                sub_140cf0050(&arg_10, arg1, rbx, arg4, arg5, arg6, arg2)
                return 2
            
            int64_t* r9_4 = *(*rbx + 8)
            int64_t* rcx_32 = r9_4[1]
            int64_t* rdx_15 = *rcx_32
            
            if (&rdx_15[1] u> rcx_32[1])
                int64_t* rdx_16 = &arg_10
                
                if ((*(r9_4 + 0x29) & 0x20) != 0)
                    sub_140b540d0(r9_4, rdx_16, arg6)
                else
                    (*(*r9_4 + 0x150))(r9_4, rdx_16, 8)
            else
                arg_10.q = *rdx_15
                int64_t* rax_51 = r9_4[1]
                *rax_51 += 8
            
            rbx_2 = arg_10.q
            
            if (rbx_2 s> 0xff)
                goto label_140cf8294
            
            goto label_140cf8283
        
        int32_t rcx_35
        rcx_35.b = *(arg2 + 0xc) == 0
        bool cond:8_1
        
        if ((rcx_35.b & sub_140b5b8a0(*(arg2 + 8), 0x1a)) != 0)
            rdi_7 = *(arg1 + 0x78)
            
            if (rdi_7 == 0)
                sub_140cef2d0(&arg_10, arg1, rbx, arg4, arg5, arg6, arg2)
                return 2
            
            int64_t* r9_6 = *(*rbx + 8)
            int64_t* rcx_36 = r9_6[1]
            int16_t* rdx_18 = *rcx_36
            
            if (&rdx_18[1] u> rcx_36[1])
                int16_t* rdx_19 = &arg_10
                
                if ((*(r9_6 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_6, rdx_19, arg6)
                    rbx_2 = zx.q(arg_10.w)
                    cond:8_1 = rbx_2.w u> 0xff
                else
                    (*(*r9_6 + 0x150))(r9_6, rdx_19, 2)
                    rbx_2 = zx.q(arg_10.w)
                    cond:8_1 = rbx_2.w u> 0xff
            else
                arg_10.w = *rdx_18
                int64_t* rax_57 = r9_6[1]
                *rax_57 += 2
                rbx_2 = zx.q(arg_10.w)
                cond:8_1 = rbx_2.w u> 0xff
            
            goto label_140cf827b
        
        int32_t rcx_39
        rcx_39.b = *(arg2 + 0xc) == 0
        
        if ((rcx_39.b & sub_140b5b8a0(*(arg2 + 8), 0x19)) != 0)
            rdi_7 = *(arg1 + 0x78)
            
            if (rdi_7 == 0)
                sub_140cef370(&arg_10, arg1, rbx, arg4, arg5, arg6, arg2)
                return 2
            
            int64_t* r9_8 = *(*rbx + 8)
            int64_t* rcx_40 = r9_8[1]
            int32_t* rdx_21 = *rcx_40
            
            if (&rdx_21[1] u> rcx_40[1])
                char* rdx_22 = &arg_10
                
                if ((*(r9_8 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_8, rdx_22, arg6)
                    rbx_2 = zx.q(arg_10.d)
                    cond:8_1 = rbx_2.d u> 0xff
                else
                    (*(*r9_8 + 0x150))(r9_8, rdx_22, 4)
                    rbx_2 = zx.q(arg_10.d)
                    cond:8_1 = rbx_2.d u> 0xff
            else
                arg_10.d = *rdx_21
                int64_t* rax_63 = r9_8[1]
                *rax_63 += 4
                rbx_2 = zx.q(arg_10.d)
                cond:8_1 = rbx_2.d u> 0xff
            
            goto label_140cf827b
        
        int32_t rcx_43
        rcx_43.b = *(arg2 + 0xc) == 0
        
        if ((rcx_43.b & sub_140b5b8a0(*(arg2 + 8), 0x18)) == 0)
            return 0
        
        rdi_7 = *(arg1 + 0x78)
        
        if (rdi_7 == 0)
            sub_140cf0050(&arg_10, arg1, rbx, arg4, arg5, arg6, arg2)
            return 2
        
        int64_t* r9_10 = *(*rbx + 8)
        int64_t* rcx_44 = r9_10[1]
        int64_t* rdx_24 = *rcx_44
        
        if (&rdx_24[1] u> rcx_44[1])
            int64_t* rdx_25 = &arg_10
            
            if ((*(r9_10 + 0x29) & 0x20) != 0)
                sub_140b540d0(r9_10, rdx_25, arg6)
            else
                (*(*r9_10 + 0x150))(r9_10, rdx_25, 8)
        else
            arg_10.q = *rdx_24
            int64_t* rax_69 = r9_10[1]
            *rax_69 += 8
        
        rbx_2 = arg_10.q
        cond:8_1 = rbx_2 u> 0xff
    label_140cf827b:
        
        if (cond:8_1)
            goto label_140cf8294
        
        goto label_140cf8283
    
    rax_9 = sub_140d0ba50(rbx, arg7, arg2)
else
    int32_t rcx_3 = *(arg2 + 0x24)
    int32_t rdi_2 = *(arg2 + 0x28)
    arg_10 = 0
    char rax_3 = sub_140b5b8a0(rcx_3, 0)
    rcx_3.b = rdi_2 == 0
    
    if ((rcx_3.b & rax_3) == 0)
        rax_9 = sub_140d0ba50(rbx, arg7, arg2)
    else
        sub_140cea340()
        
        if (sub_140cc1670(arg1 + 0x10, &data_143e1b820) != 0 && *(arg1 + 0x10) != 0)
            return 0
        
        int64_t* r9 = *(*rbx + 8)
        int64_t* rcx_5 = r9[1]
        char* rdx = *rcx_5
        
        if (&rdx[1] u> rcx_5[1])
            (*(*r9 + 0x150))(r9, &arg_10, 1)
            rax_9 = arg_10
        else
            arg_10 = *rdx
            int64_t* rax_8 = r9[1]
            *rax_8 += 1
            rax_9 = arg_10
*(sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4) = rax_9
return 2
