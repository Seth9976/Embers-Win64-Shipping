// 函数: sub_14287abc0
// 地址: 0x14287abc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = *(arg1 + 0x508)

if (sub_142873d70(arg2, 0x4000) == 0)
    sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 0x45d)
    return 0

int32_t rax_2 = sub_14285f5d0(arg1)

if (rax_2 != 0)
    sub_142856580(arg1, 0x50, 0x1e7, rax_2, "ssl\statem\statem_clnt.c", 0x465)
    return 0

int32_t rax_4

if (rdi != 0)
    rax_4 = sub_14285f6a0(arg1, *rdi, nullptr)

if (rdi != 0 && rax_4 != 0)
    if (sub_1428576c0(rdi) != 0 || arg1[0x136] != 0)
        goto label_14287acbe
    
    goto label_14287acad

if (arg1[0x136] != 0)
label_14287acbe:
    int64_t rdi_1 = 0x20
    uint8_t* r8_2 = *(arg1 + 0xa8) + 0xb8
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
        for (char* i = nullptr; i u< 0x20; i = &i[1])
            if (*(i + r8_2) != 0)
                goto label_14287ad2f
        
        goto label_14287ad0a
    
    if (arg1[0x136] != 0)
    label_14287ad2f:
        int32_t rax_9 = sub_142873b60(arg2, arg1[0x179], 2)
        int32_t rax_10
        
        if (rax_9 != 0)
            rax_10 = sub_142873970(arg2, *(arg1 + 0xa8) + 0xb8, 0x20)
        
        if (rax_9 == 0 || rax_10 == 0)
            sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 0x4b2)
        else
            int32_t* rax_11 = *(arg1 + 0x508)
            void* rbp_1 = &rax_11[0x26]
            
            if (arg1[0xf] == 0 && *rax_11 != 0x304)
                rdi_1 = *(rax_11 + 0x90)
                
                if (*arg1 == 0x304)
                    *(arg1 + 0x550) = rdi_1
                    memcpy(&arg1[0x14c], rbp_1, rdi_1.d)
                
                goto label_14287adf3
            
            if (*arg1 != 0x304 || (arg1[0x171] & 0x100000) == 0)
                rdi_1 = 0
            label_14287adf3:
                
                if (sub_142873e80(arg2, 1) == 0)
                label_14287afc9:
                    sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 0x4d5)
                else
                    int32_t rax_14
                    
                    if (rdi_1 != 0)
                        rax_14 = sub_142873970(arg2, rbp_1, rdi_1)
                    
                    if (rdi_1 != 0 && rax_14 == 0)
                        goto label_14287afc9
                    
                    if (sub_1428736e0(arg2) == 0)
                        goto label_14287afc9
                    
                    int32_t rax_17
                    int64_t r8_5
                    
                    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                        void* rdx_6 = *(arg1 + 0xb0)
                        r8_5 = *(rdx_6 + 0x100)
                        
                        if (r8_5 u<= 0x100)
                            rax_17 = sub_142874080(arg2, rdx_6, r8_5, 1)
                    
                    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0
                            || (r8_5 u<= 0x100 && rax_17 != 0))
                        if (sub_142873e80(arg2, 2) != 0)
                            if (sub_142879ea0(arg1, sub_14284fa00(arg1), arg2) != 0)
                                if (sub_1428736e0(arg2) != 0)
                                    if (sub_142873e80(arg2, 1) != 0)
                                        if (sub_14285eb60(arg1) == 0)
                                        label_14287af78:
                                            int32_t rax_30 = sub_142873b60(arg2, 0, 1)
                                            int32_t rax_31
                                            
                                            if (rax_30 != 0)
                                                rax_31 = sub_1428736e0(arg2)
                                            
                                            if (rax_30 == 0 || rax_31 == 0)
                                                sub_142856580(arg1, 0x50, 0x1e7, 0x44, 
                                                    "ssl\statem\statem_clnt.c", 0x50e)
                                            else if (sub_142875910(arg1, arg2, 0x80, 0, 0) != 0)
                                                return 1
                                        else
                                            int32_t* rcx_22 = *(*(arg1 + 0x598) + 0x100)
                                            
                                            if (rcx_22 == 0 || (
                                                    (*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0
                                                    && *(*(arg1 + 0xa8) + 0x340) s>= 0x304))
                                                goto label_14287af78
                                            
                                            int32_t rax_27 = sub_142898c70(rcx_22)
                                            int32_t rdi_2 = 0
                                            
                                            if (rax_27 s<= 0)
                                                goto label_14287af78
                                            
                                            while (sub_142873b60(arg2, 
                                                    *sub_142898ea0(*(*(arg1 + 0x598) + 0x100), 
                                                        rdi_2), 
                                                    1) != 0)
                                                rdi_2 += 1
                                                
                                                if (rdi_2 s>= rax_27)
                                                    goto label_14287af78
                                            
                                            sub_142856580(arg1, 0x50, 0x1e7, 0x44, 
                                                "ssl\statem\statem_clnt.c", 0x505)
                                    else
                                        sub_142856580(arg1, 0x50, 0x1e7, 0x44, 
                                            "ssl\statem\statem_clnt.c", 0x4f8)
                                else
                                    sub_142856580(arg1, 0x50, 0x1e7, 0x44, 
                                        "ssl\statem\statem_clnt.c", 0x4f1)
                        else
                            sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 
                                0x4e7)
                    else
                        sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 0x4df)
            else
                bool cond:2_1 = arg1[0x136] != 0
                rbp_1 = &arg1[0x14c]
                *(arg1 + 0x550) = 0x20
                
                if (cond:2_1)
                    goto label_14287adf3
                
                if (sub_142897af0(rbp_1, 0x20) s> 0)
                    goto label_14287adf3
                
                sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 0x4c2)
    else
    label_14287ad0a:
        
        if (sub_1428729e0(arg1, 0, r8_2, 0x20, 0) s> 0)
            goto label_14287ad2f
        
        sub_142856580(arg1, 0x50, 0x1e7, 0x44, "ssl\statem\statem_clnt.c", 0x48a)
else
label_14287acad:
    
    if (sub_142857f80(arg1, 0) != 0)
        goto label_14287acbe

return 0
