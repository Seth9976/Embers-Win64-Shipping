// 函数: sub_14287b020
// 地址: 0x14287b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = *(*(*(arg1 + 0xa8) + 0x238) + 0x1c)
int32_t rax_1

if ((rdi & 0x1c8) != 0)
    rax_1 = sub_14287a4d0(arg1, arg2)

if ((rdi & 0x1c8) == 0 || rax_1 != 0)
    int32_t rax_2
    bool cond:0_1
    
    if ((rdi.b & 0x41) == 0)
        void* const arg_8
        
        if ((rdi & 0x102) != 0)
            void* rax_4 = *(arg1 + 0xa8)
            int32_t* rdi_1 = nullptr
            arg_8 = nullptr
            int32_t* rbp_1 = *(rax_4 + 0x408)
            int32_t var_30_1
            int32_t* rcx_1
            
            if (rbp_1 != 0)
                int32_t* rax_5 = sub_142872de0(rbp_1)
                rdi_1 = rax_5
                
                if (rax_5 == 0)
                    var_30_1 = 0xbfd
                    goto label_14287b0da
                
                void* rax_6 = sub_142896670(rdi_1)
                rcx_1 = arg1
                
                if (rax_6 == 0)
                    var_30_1 = 0xc05
                    goto label_14287b0f2
                
                if (sub_142872740(rcx_1, rdi_1, rbp_1, 0) == 0)
                    sub_1428965a0(rdi_1)
                    cond:0_1 = true
                else
                    int64_t* arg_18
                    sub_1428c1700(rax_6, &arg_18, nullptr)
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(sub_142890560(arg_18) + 7)
                    
                    if (sub_142873ff0(arg2, sx.q((temp3_1 + (temp2_1 & 7)) s>> 3), &arg_8, 2) == 0)
                        var_30_1 = 0xc13
                        goto label_14287b0da
                    
                    sub_14288fba0(arg_18, arg_8)
                    sub_1428965a0(rdi_1)
                    cond:0_1 = false
            else
                var_30_1 = 0xbf6
            label_14287b0da:
                rcx_1 = arg1
            label_14287b0f2:
                sub_142856580(rcx_1, 0x50, 0x194, 0x44, "ssl\statem\statem_clnt.c", var_30_1)
                sub_1428965a0(rdi_1)
                cond:0_1 = true
            goto label_14287b089
        
        if ((rdi.b & 0x84) == 0)
            if ((rdi.b & 0x10) != 0)
                rax_2 = sub_14287a160(arg1, arg2)
                goto label_14287b087
            
            if ((rdi.b & 0x20) == 0)
                if ((rdi.b & 8) != 0)
                    return 1
                
                sub_142856580(arg1, 0x50, 0x1e8, 0x44, "ssl\statem\statem_clnt.c", 0xd0d)
            else
                int64_t* rcx_19 = *(arg1 + 0x7c8)
                arg_8 = nullptr
                int32_t rax_24
                
                if (rcx_19 != 0)
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(sub_142890560(rcx_19) + 7)
                    rax_24 = sub_142873ff0(arg2, sx.q((temp1_1 + (temp0_1 & 7)) s>> 3), &arg_8, 2)
                
                if (rcx_19 == 0 || rax_24 == 0)
                    sub_142856580(arg1, 0x50, 0x19a, 0x44, "ssl\statem\statem_clnt.c", 0xcd9)
                else
                    sub_14288fba0(*(arg1 + 0x7c8), arg_8)
                    sub_1428a6780(*(*(arg1 + 0x508) + 0x1b8))
                    *(*(arg1 + 0x508) + 0x1b8) = sub_1428a6ba0(*(arg1 + 0x7a0))
                    
                    if (*(*(arg1 + 0x508) + 0x1b8) != 0)
                        return 1
                    
                    sub_142856580(arg1, 0x50, 0x19a, 0x41, "ssl\statem\statem_clnt.c", 0xce2)
        else
            void* rax_14 = *(arg1 + 0xa8)
            int32_t r14_2 = 0
            arg_8 = nullptr
            int32_t* rbp_2 = *(rax_14 + 0x408)
            
            if (rbp_2 != 0)
                int32_t* rax_15 = sub_142872de0(rbp_2)
                
                if (rax_15 != 0)
                    int32_t rax_16
                    int512_t zmm0_1
                    rax_16, zmm0_1 = sub_142872740(arg1, rax_15, rbp_2, 0)
                    
                    if (rax_16 != 0)
                        int64_t rax_17 = sub_142896830(rax_15, &arg_8, zmm0_1)
                        
                        if (rax_17 != 0)
                            int32_t rax_18 = sub_142874080(arg2, arg_8, rax_17, 1)
                            
                            if (rax_18 != 0)
                                r14_2 = 1
                            else
                                sub_142856580(arg1, rax_18 + 0x50, 0x195, rax_18 + 0x44, 
                                    "ssl\statem\statem_clnt.c", 0xc4b)
                        else
                            sub_142856580(arg1, (rax_17 + 0x50).d, 0x195, (rax_17 + 0x10).d, 
                                "ssl\statem\statem_clnt.c", 0xc45)
                else
                    sub_142856580(arg1, (&rax_15[0x14]).d, 0x195, (rax_15 + 0x41).d, 
                        "ssl\statem\statem_clnt.c", 0xc37)
                
                sub_1428a6780(arg_8)
                sub_1428965a0(rax_15)
                cond:0_1 = r14_2 == 0
                goto label_14287b089
            
            sub_142856580(arg1, 0x50, 0x195, 0x44, "ssl\statem\statem_clnt.c", 0xc30)
    else
        rax_2 = sub_14287a790(arg1, arg2)
    label_14287b087:
        cond:0_1 = rax_2 == 0
    label_14287b089:
        
        if (not(cond:0_1))
            return 1

void* rcx_27 = *(arg1 + 0xa8)
sub_1428a6890(*(rcx_27 + 0x2b8), *(rcx_27 + 0x2c0), "ssl\statem\statem_clnt.c", 0xd13)
*(*(arg1 + 0xa8) + 0x2b8) = 0
void* rcx_29 = *(arg1 + 0xa8)
sub_1428a6890(*(rcx_29 + 0x2c8), *(rcx_29 + 0x2d0), "ssl\statem\statem_clnt.c", 0xd16)
*(*(arg1 + 0xa8) + 0x2c8) = 0
return 0
