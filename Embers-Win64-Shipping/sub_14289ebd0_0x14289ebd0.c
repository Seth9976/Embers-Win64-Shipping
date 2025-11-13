// 函数: sub_14289ebd0
// 地址: 0x14289ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void* r14 = *(arg1 + 0xe8)
int32_t rax = sub_142898c70(*(arg1 + 0x98))
int64_t* rax_1 = sub_142898ea0(*(arg1 + 0x98), rax - 1)
sub_1428ae8e0(rax_1, 0xffffffff, 0)
int128_t* rbp = nullptr
int32_t rdi_1 = 0
int32_t r12_2 = rax_1[0x1a].d u>> 0xd & 1
int128_t* var_68 = nullptr
int32_t arg_8 = 0
int32_t r13 = 3

if (rax != 1 || *(arg1 + 0x94) != rax)
    sub_1428a5670(0xb, 0x6a, 0x44, "crypto\x509\x509_vfy.c", 0xb3d)
    *(arg1 + 0xb0) = 1
else
    int128_t* rcx_3 = *(arg1 + 0x10)
    int32_t rsi_1
    rsi_1.b = rcx_3 != 0
    int64_t var_60_1
    int64_t var_58_1
    
    if (r14 == 0)
    label_14289ec85:
        int32_t rdx_1
        
        if (rcx_3 != 0)
            rdx_1 = *(*(arg1 + 0x20) + 0x14)
        
        if (rcx_3 == 0 || test_bit(rdx_1, 0xf))
            rsi_1 |= 2
            var_60_1 = 0
        else
            var_60_1 = 0
            
            if (not(test_bit(rdx_1, 0x14)))
                var_60_1 = 1
        
        var_58_1 = 1
    else
        char rax_2 = (*(r14 + 0x28)).b
        
        if ((3 & rax_2) != 0)
            goto label_14289ec85
        
        var_60_1 = 0
        var_58_1 = 0
        
        if ((rax_2 & 0xc) == 0)
            goto label_14289ec85
    
    int128_t* rax_4
    
    if (rcx_3 != 0)
        rax_4 = sub_142898900(rcx_3)
        var_68 = rax_4
        rbp = rax_4
    
    int32_t var_78_1
    
    if (rcx_3 == 0 || rax_4 != 0)
        if (r14 != 0 && sub_142898c70(*(r14 + 8)) s> 0 && *(r14 + 0x10) != 0)
            if (rbp == 0)
                int128_t* rax_6 = sub_142898ba0()
                var_68 = rax_6
                rbp = rax_6
                
                if (rax_6 == 0)
                    var_78_1 = 0xb6c
                    goto label_14289eced
            
            if (sub_142898c70(*(r14 + 0x10)) s> 0)
                int32_t rax_10
                
                do
                    if (sub_142898d50(rbp, sub_142898ea0(*(r14 + 0x10), rdi_1)) == 0)
                        sub_142898a10(rbp)
                        var_78_1 = 0xb73
                        goto label_14289eced
                    
                    rdi_1 += 1
                    rax_10 = sub_142898c70(*(r14 + 0x10))
                while (rdi_1 s< rax_10)
                rdi_1 = 0
        
        void* rax_11 = *(arg1 + 0x20)
        
        if (*(rax_11 + 0x20) s> 0x3fffffff)
            *(rax_11 + 0x20) = 0x3fffffff
            rax_11 = *(arg1 + 0x20)
        
        int32_t rbp_2 = *(rax_11 + 0x20) + 1
        int32_t arg_10 = rbp_2
        
        if (rsi_1 != 0)
            while (true)
                void* arg_20 = nullptr
                
                if ((rsi_1.b & 2) == 0)
                    goto label_14289f040
                
                int32_t rbp_3 = sub_142898c70(*(arg1 + 0x98))
                int32_t r15_1 = rbp_3
                int32_t rax_14 = rsi_1 & 4
                
                if (rax_14 != 0)
                    r15_1 = rdi_1
                
                int64_t* rax_15 = sub_142898ea0(*(arg1 + 0x98), r15_1 - 1)
                
                if (arg_10 s< rbp_3)
                    goto label_14289efe8
                
                int64_t rdi_2 = *(arg1 + 0x98)
                *(arg1 + 0x98) = 0
                int32_t rax_16 = (*(arg1 + 0x40))(&arg_20, arg1, rax_15)
                *(arg1 + 0x98) = rdi_2
                
                if (rax_16 s< 0)
                    *(arg1 + 0xb0) = 0x46
                    r13 = 2
                    break
                
                if (rax_16 s<= 0)
                    goto label_14289efe1
                
                if (rax_14 != 0)
                    if (rbp_3 s<= r15_1 || r15_1 s<= 0 || r12_2 != 0)
                        sub_1428a5670(0xb, 0x6a, 0x44, "crypto\x509\x509_vfy.c", 0xbca)
                        sub_1428a2c50(arg_20)
                        goto label_14289f1ff
                    
                    rsi_1 &= 0xfffffffb
                    int32_t i_4 = rbp_3 - r15_1
                    uint64_t i_3 = zx.q(i_4)
                    rbp_3 -= i_4
                    uint64_t i
                    
                    do
                        sub_1428a2c50(sub_142898c80(*(arg1 + 0x98)))
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                    *(arg1 + 0x94) = rbp_3
                    
                    if (r14 != 0)
                        if (sub_142898c70(*(r14 + 8)) s> 0 && *(r14 + 0x2c) s>= *(arg1 + 0x94))
                            int64_t rcx_16 = *(r14 + 0x20)
                            *(r14 + 0x2c) = 0xffffffff
                            sub_1428a2c50(rcx_16)
                            *(r14 + 0x20) = i_3
                        
                        if (sub_142898c70(*(r14 + 8)) s> 0 && *(r14 + 0x30) s>= *(arg1 + 0x94))
                            *(r14 + 0x30) = 0xffffffff
                    
                    goto label_14289ef1b
                
                int32_t var_78_2
                
                if (r12_2 == 0)
                label_14289ef1b:
                    void* rdi_3 = arg_20
                    
                    if (sub_142898d50(*(arg1 + 0x98), rdi_3) == 0)
                        sub_1428a2c50(arg_20)
                        var_78_2 = 0xbe8
                        goto label_14289f1ad
                    
                    sub_1428ae8e0(rdi_3, 0xffffffff, 0)
                    r12_2 = *(rdi_3 + 0xd0) u>> 0xd & 1
                    goto label_14289efb0
                
                int32_t temp2_1 = *(arg1 + 0x94)
                bool cond:2_1 = temp2_1 s> rbp_3
                
                if (temp2_1 != rbp_3)
                    goto label_14289efb6
                
                int32_t var_78_3
                
                if (sub_1428a3740(rax_15, arg_20) == 0)
                    sub_1428a2c50(rax_15)
                    void* r8_2 = arg_20
                    rbp_3 -= 1
                    int32_t* rcx_23 = *(arg1 + 0x98)
                    *(arg1 + 0x94) = rbp_3
                    sub_142898dc0(rcx_23, rbp_3, r8_2)
                label_14289efb0:
                    cond:2_1 = *(arg1 + 0x94) s> rbp_3
                label_14289efb6:
                    
                    if (cond:2_1)
                        var_78_3 = 0xc10
                        goto label_14289f1fa
                    
                    rsi_1 &= 0xfffffffe
                    int32_t rax_25 = sub_1428a0c40(arg1, rbp_3)
                    r13 = rax_25
                    
                    if (rax_25 - 1 u<= 1)
                        break
                    
                    if (r12_2 != 0)
                        goto label_14289efe1
                    
                    rdi_1 = arg_8
                else
                    sub_1428a2c50(arg_20)
                label_14289efe1:
                    rdi_1 = arg_8
                label_14289efe8:
                    
                    if ((rsi_1.b & 1) != 0)
                    label_14289f039:
                        rbp_2 = arg_10
                    label_14289f040:
                        
                        if ((rsi_1.b & 1) != 0)
                            int32_t rax_27 = sub_142898c70(*(arg1 + 0x98))
                            
                            if (rax_27 != *(arg1 + 0x94))
                                var_78_3 = 0xc3d
                            label_14289f1fa:
                                sub_1428a5670(0xb, 0x6a, 0x44, "crypto\x509\x509_vfy.c", var_78_3)
                            label_14289f1ff:
                                *(arg1 + 0xb0) = 1
                                r13 = 2
                                break
                            
                            int64_t rax_28 = sub_142898ea0(*(arg1 + 0x98), rax_27 - 1)
                            void* rax_29
                            int128_t* rdi_6
                            
                            if (r12_2 != 0 || rbp_2 s< rax_27)
                                rdi_6 = var_68
                                rax_29 = nullptr
                            else
                                rdi_6 = var_68
                                rax_29 = sub_1428a16f0(arg1, rdi_6, rax_28)
                            
                            arg_20 = rax_29
                            
                            if (rax_29 != 0)
                                sub_142898870(rdi_6, rax_29)
                                
                                if (sub_142898d50(*(arg1 + 0x98), arg_20) == 0)
                                    var_78_2 = 0xc55
                                label_14289f1ad:
                                    sub_1428a5670(0xb, 0x6a, 0x41, "crypto\x509\x509_vfy.c", 
                                        var_78_2)
                                    *(arg1 + 0xb0) = 0x11
                                    r13 = 2
                                    break
                                
                                sub_1428a3ba0(arg_20)
                                void* rdi_7 = arg_20
                                *(arg1 + 0x94) += 1
                                sub_1428ae8e0(rdi_7, 0xffffffff, 0)
                                int32_t rdi_10 = *(rdi_7 + 0xd0) u>> 0xd & 1
                                int32_t rax_32 = sub_14289fed0(arg1, *(arg1 + 0x94) - 1)
                                r13 = rax_32
                                r12_2 = rdi_10
                                
                                if (rax_32 s> 0 && rax_32 s<= 2)
                                    break
                                
                                rdi_1 = arg_8
                            else
                                int32_t rsi_2 = rsi_1 & 0xfffffffe
                                rsi_1 = rsi_2 | 2
                                
                                if (var_58_1 == 0)
                                    rsi_1 = rsi_2
                                
                                rdi_1 = arg_8
                    else
                        int32_t rcx_27 = rsi_1 & 4
                        
                        if (rcx_27 != 0)
                            rdi_1 -= 1
                            arg_8 = rdi_1
                        
                        if (rcx_27 == 0 || rdi_1 s<= 0)
                            if (var_60_1 == 0)
                                break
                            
                            if (rcx_27 != 0)
                                break
                            
                            int32_t rax_26 = *(arg1 + 0x94)
                            
                            if (rax_26 s< 2)
                                break
                            
                            rsi_1 |= 4
                            rdi_1 = rax_26 - 1
                            arg_8 = rdi_1
                            r12_2 = 0
                            goto label_14289f039
                
                if (rsi_1 == 0)
                    break
                
                rbp_2 = arg_10
        
        sub_142898a10(var_68)
        int32_t rax_33 = sub_142898c70(*(arg1 + 0x98))
        int32_t rdi_11 = rax_33
        
        if (rax_33 s<= arg_10 && r13 == 3)
            if (r14 == 0 || (*(r14 + 0x28) & 4) == 0)
                goto label_14289f2d9
            
            int32_t rax_35 = *(arg1 + 0x94) - 1
            void* rbp_4 = *(arg1 + 0xe8)
            void* rax_36 = sub_142898ea0(*(arg1 + 0x98), rax_35)
            int32_t rax_37 = sub_142898c70(*(rbp_4 + 8))
            int32_t rsi_3 = 0
            
            if (rax_37 s<= 0)
            label_14289f2d3:
                r13 = 3
            label_14289f2d9:
                
                if (rdi_11 == *(arg1 + 0x94))
                    r13 = sub_1428a0c40(arg1, rdi_11)
            else
                while (true)
                    char* rax_38 = sub_142898ea0(*(rbp_4 + 8), rsi_3)
                    
                    if (*rax_38 == 2 && rax_38[1] == 1 && rax_38[2] == 0)
                        *(rax_38 + 0x18)
                        
                        if (sub_1428a2410(rax_36) s> 0)
                            sub_1428a2c50(*(rbp_4 + 0x20))
                            *(rbp_4 + 0x20) = 0
                            *(arg1 + 0xf0) = 1
                            *(rbp_4 + 0x2c) = rax_35
                            *(rbp_4 + 0x18) = rax_38
                            int32_t i_2 = sub_142898c70(*(arg1 + 0x98))
                            int32_t i_1 = i_2
                            
                            if (i_2 s> *(arg1 + 0x94))
                                do
                                    sub_1428a2c50(sub_142898c80(*(arg1 + 0x98)))
                                    i_1 -= 1
                                while (i_1 s> *(arg1 + 0x94))
                            
                            r13 = 1
                            break
                    
                    rsi_3 += 1
                    
                    if (rsi_3 s>= rax_37)
                        rdi_11 = rax_33
                        goto label_14289f2d3
        
        if (r13 == 1)
            return 1
        
        if (r13 != 2)
            int32_t rax_41 = sub_142898c70(*(arg1 + 0x98))
            
            if (rax_41 s> arg_10)
                int32_t* rcx_46 = *(arg1 + 0x98)
                *(arg1 + 0xac) = rax_41 - 1
                *(arg1 + 0xb8) = sub_142898ea0(rcx_46, rax_41 - 1)
                *(arg1 + 0xb0) = 0x16
                jump(*(arg1 + 0x38))
            
            if (r14 != 0 && sub_142898c70(*(r14 + 8)) s> 0
                    && ((*(r14 + 0x28) & 3) == 0 || *(r14 + 0x30) s>= 0))
                int32_t* rcx_53 = *(arg1 + 0x98)
                *(arg1 + 0xac) = rax_41 - 1
                *(arg1 + 0xb8) = sub_142898ea0(rcx_53, rax_41 - 1)
                *(arg1 + 0xb0) = 0x41
                jump(*(arg1 + 0x38))
            
            if (r12_2 != 0 && sub_142898c70(*(arg1 + 0x98)) == 1)
                int32_t* rcx_56 = *(arg1 + 0x98)
                *(arg1 + 0xac) = rax_41 - 1
                *(arg1 + 0xb8) = sub_142898ea0(rcx_56, rax_41 - 1)
                *(arg1 + 0xb0) = 0x12
                jump(*(arg1 + 0x38))
            
            int32_t* rcx_58 = *(arg1 + 0x98)
            *(arg1 + 0xac) = rax_41 - 1
            
            if (r12_2 != 0)
                *(arg1 + 0xb8) = sub_142898ea0(rcx_58, rax_41 - 1)
                *(arg1 + 0xb0) = 0x13
                jump(*(arg1 + 0x38))
            
            if (*(arg1 + 0x94) s>= rax_41)
                *(arg1 + 0xb8) = sub_142898ea0(rcx_58, rax_41 - 1)
                *(arg1 + 0xb0) = 0x14
                jump(*(arg1 + 0x38))
            
            *(arg1 + 0xb8) = sub_142898ea0(rcx_58, rax_41 - 1)
            *(arg1 + 0xb0) = 2
            jump(*(arg1 + 0x38))
    else
        var_78_1 = 0xb5b
    label_14289eced:
        sub_1428a5670(0xb, 0x6a, 0x41, "crypto\x509\x509_vfy.c", var_78_1)
        *(arg1 + 0xb0) = 0x11

return 0
