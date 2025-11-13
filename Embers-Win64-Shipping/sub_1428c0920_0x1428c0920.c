// 函数: sub_1428c0920
// 地址: 0x1428c0920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0 || arg2 == 0)
    sub_1428a5670(0x10, 0xb2, 0x43, "crypto\ec\ec_key.c", 0x4c)
else
    void* rax_1 = *arg1
    
    if (*arg2 == rax_1)
        goto label_1428c0994
    
    int64_t rdx = *(rax_1 + 0x18)
    
    if (rdx != 0)
        rdx()
    
    int64_t* rax_2 = arg1[3]
    
    if (rax_2 != 0)
        int64_t rdx_1 = *(*rax_2 + 0x170)
        
        if (rdx_1 != 0)
            rdx_1(arg1)
    
    if (sub_1428af710(arg1[1]) != 0)
        arg1[1] = 0
    label_1428c0994:
        int64_t* rcx_2 = arg2[3]
        
        if (rcx_2 == 0)
        label_1428c0a82:
            arg1[6].d = arg2[6].d
            *(arg1 + 0x34) = *(arg2 + 0x34)
            arg1[2].d = arg2[2].d
            *(arg1 + 0x3c) = *(arg2 + 0x3c)
            
            if (sub_1428a5d40(8, &arg1[8], &arg2[8]) != 0)
                int64_t rax_20 = *arg2
                
                if (rax_20 == *arg1)
                    goto label_1428c0ad4
                
                void* rcx_12 = arg2[1]
                int32_t rax_21
                
                if (rcx_12 != 0)
                    rax_21 = sub_1428af800(rcx_12)
                
                if (rcx_12 == 0 || rax_21 != 0)
                    arg1[1] = arg2[1]
                    *arg1 = *arg2
                    rax_20 = *arg2
                label_1428c0ad4:
                    int64_t r8_2 = *(rax_20 + 0x20)
                    int32_t rax_24
                    
                    if (r8_2 != 0)
                        rax_24 = r8_2(arg1, arg2)
                    
                    if (r8_2 == 0 || rax_24 != 0)
                        return arg1
        else
            char* rax_5 = sub_140687ad0(rcx_2)
            sub_1428bee10(arg1[3])
            char** rax_6 = sub_1428befd0(rax_5)
            arg1[3] = rax_6
            
            if (rax_6 != 0 && sub_1428be970(rax_6, arg2[3]) != 0)
                if (arg2[4] == 0)
                label_1428c0a1f:
                    int64_t* rdx_4 = arg2[5]
                    
                    if (rdx_4 == 0)
                        goto label_1428c0a82
                    
                    int64_t* rax_10 = arg1[5]
                    
                    if (rax_10 != 0)
                        goto label_1428c0a4a
                    
                    rax_10 = sub_142890500()
                    arg1[5] = rax_10
                    
                    if (rax_10 != 0)
                        rdx_4 = arg2[5]
                    label_1428c0a4a:
                        
                        if (sub_142890040(rax_10, rdx_4) != 0)
                            int64_t rax_13 = *(*arg2[3] + 0x168)
                            
                            if (rax_13 == 0)
                                goto label_1428c0a82
                            
                            if (rax_13(arg1, arg2) != 0)
                                goto label_1428c0a82
                else
                    sub_1428bf6a0(arg1[4])
                    int64_t* rax_8 = sub_1428bfa80(arg2[3])
                    arg1[4] = rax_8
                    
                    if (rax_8 != 0 && sub_1428bf580(rax_8, arg2[4]) != 0)
                        goto label_1428c0a1f

return 0
