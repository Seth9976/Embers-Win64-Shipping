// 函数: sub_142879ea0
// 地址: 0x142879ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t rsi = arg1[0x1d4]
int64_t rbp = 0
int64_t rdi = 0
int32_t var_40_1
int32_t r9_1

if (sub_1428639d0(arg1) != 0)
    if (arg2 != 0)
        int64_t rax_2 = 0xfffc
        int32_t r14 = 0
        
        if (rsi != 0)
            rax_2 = 0xfffe
        
        int64_t r12 = rax_2 - 2
        
        if ((arg1[0x172].b & 0x80) == 0)
            r12 = rax_2
        
        int32_t rax_3 = sub_142898c70(arg2)
        int32_t var_40_2
        int64_t arg_20
        
        if (rax_3 s> 0)
            while (rbp u< r12)
                void* rax_4 = sub_142898ea0(arg2, r14)
                
                if (sub_142863410(arg1, rax_4, 0x10001, 0) == 0)
                    int64_t r9_2 = *(arg1 + 8)
                    
                    if ((*(r9_2 + 0x98))(rax_4, arg3, &arg_20, r9_2) == 0)
                        var_40_2 = 0xeb4
                        goto label_14287a0bc
                    
                    if (rdi == 0)
                        void* rax_8 = *(arg1 + 0xa8)
                        
                        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                            int32_t rcx_7 = *(rax_8 + 0x340)
                            
                            if (*(rax_4 + 0x30) s>= rcx_7 && *(rax_4 + 0x2c) s<= rcx_7)
                                rdi = 1
                        else
                            int32_t rdx_3 = *(rax_8 + 0x340)
                            int32_t rcx_6 = *(rax_4 + 0x38)
                            int32_t rax_9 = rdx_3
                            
                            if (rcx_6 == 0x100)
                                rcx_6 = 0xff00
                            
                            if (rdx_3 == 0x100)
                                rax_9 = 0xff00
                            
                            if (rcx_6 s<= rax_9)
                                int32_t rax_10 = *(rax_4 + 0x34)
                                
                                if (rax_10 == 0x100)
                                    rax_10 = 0xff00
                                
                                if (rdx_3 == 0x100)
                                    rdx_3 = 0xff00
                                
                                if (rax_10 s>= rdx_3)
                                    rdi = 1
                    
                    rbp += arg_20
                
                r14 += 1
                
                if (r14 s>= sub_142898c70(arg2))
                    break
        
        if (rax_3 s<= 0 || rbp == 0 || rdi == 0)
            sub_142856580(arg1, 0x50, 0x1a9, 0xb5, "ssl\statem\statem_clnt.c", 0xeca)
            
            if (rdi == 0)
                sub_1428a4880(1)
        else
            int32_t rax_13
            
            if (rsi == 0)
                rax_13 = (*(*(arg1 + 8) + 0x98))(&data_143b84b90, arg3, &arg_20)
            
            if (rsi != 0 || rax_13 != 0)
                int32_t rax_15
                
                if ((arg1[0x172].b & 0x80) != 0)
                    rax_15 = (*(*(arg1 + 8) + 0x98))(&data_143b84be0, arg3, &arg_20)
                
                if ((arg1[0x172].b & 0x80) == 0 || rax_15 != 0)
                    return 1
                
                var_40_2 = 0xee4
            else
                var_40_2 = 0xeda
            
        label_14287a0bc:
            sub_142856580(arg1, 0x50, 0x1a9, 0x44, "ssl\statem\statem_clnt.c", var_40_2)
        
        return 0
    
    var_40_1 = 0xe91
    r9_1 = (&arg2[0x11]).d
else
    var_40_1 = 0xe8b
    r9_1 = 0xbf

sub_142856580(arg1, 0x50, 0x1a9, r9_1, "ssl\statem\statem_clnt.c", var_40_1)
return 0
