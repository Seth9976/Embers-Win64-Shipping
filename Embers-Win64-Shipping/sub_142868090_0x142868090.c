// 函数: sub_142868090
// 地址: 0x142868090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*(arg1 + 0x98) = 0
int32_t rax_4
bool cond:0_1

switch (arg1[0x17] - 0x13)
    case 0
        if (sub_142856dc0(arg1) != 1)
            return 3
        
        rax_4 = sub_142882cb0(arg1)
    label_142868335:
        
        if (rax_4 == 0)
            return 0
    case 2
        if (sub_142856dc0(arg1) != 1)
            return 3
        
        int32_t rax_6
        
        if (*arg1 != 0x100)
            rax_6 = sub_142882cb0(arg1)
        
        if (*arg1 != 0x100 && rax_6 == 0)
            return 0
        
        arg1[0x178] = 1
    case 3
        int32_t* rcx_4 = *(arg1 + 8)
        
        if ((*(*(rcx_4 + 0xc0) + 0x60) & 8) == 0)
            int32_t rax_9 = *rcx_4
            
            if (rax_9 s>= 0x304 && rax_9 != 0x10000)
                if (arg1[0x136] == 1)
                    cond:0_1 = (arg1[0x171] & 0x100000) != 0
                    goto label_1428682f8
                
                if (rax_9 != 0x10000 && ((arg1[0x171] & 0x100000) == 0 || arg1[0x136] == 2))
                    goto label_14286817e
    case 6
        cond:0_1 = arg1[0x1d6] != 3
    label_1428682f8:
        
        if (not(cond:0_1))
            goto label_142868301
    case 7
    label_142868301:
        
        if (sub_142856dc0(arg1) != 1)
            return 3
    case 0xe
        SetLastError(NO_ERROR)
        int32_t* rcx_21 = *(arg1 + 8)
        
        if ((*(*(rcx_21 + 0xc0) + 0x60) & 8) == 0)
            int32_t rax_33 = *rcx_21
            
            if (rax_33 s>= 0x304 && rax_33 != 0x10000 && sub_142856dc0(arg1) != 1)
                if (sub_14284fa70(arg1, 0) == 5)
                    enum WIN32_ERROR rax_36 = GetLastError()
                    
                    if (rax_36 == ERROR_SHARING_VIOLATION || rax_36 == ERROR_DRIVE_LOCKED)
                        arg1[0xa] = 1
                        return 2
                
                return 3
    case 0x10
    label_14286817e:
        
        if (arg1[0x136] != 1)
            int32_t* rcx_6 = *(arg1 + 8)
            void* rax_12 = *(rcx_6 + 0xc0)
            int32_t rcx_7
            
            if ((*(rax_12 + 0x60) & 8) == 0)
                rcx_7 = *rcx_6
            
            if ((*(rax_12 + 0x60) & 8) == 0 && rcx_7 s>= 0x304 && rcx_7 != 0x10000)
                if ((*(rax_12 + 0x10))(arg1) != 0)
                    int64_t r8_1 = *(*(arg1 + 8) + 0xc0)
                    
                    if ((*(r8_1 + 0x20))(arg1, 0xa2, r8_1) != 0)
                        int32_t rax_17
                        
                        if (arg1[0x1ba] != 2)
                            int64_t r8_2 = *(*(arg1 + 8) + 0xc0)
                            rax_17 = (*(r8_2 + 0x20))(arg1, 0xa1, r8_2)
                        
                        if (arg1[0x1ba] == 2 || rax_17 != 0)
                            arg1[0x20] = 1
                            return 2
                
                return 0
            
            if ((*(rax_12 + 0x20))(arg1, 0x22) == 0)
                return 0
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                sub_14286f430(arg1, 2)
        else if (sub_142856dc0(arg1) == 0)
            return 3
    case 0x11
        if (sub_142856dc0(arg1) != 1)
            return 3
        
        int32_t* rax_23 = *(arg1 + 8)
        void* r10_1 = *(rax_23 + 0xc0)
        
        if ((*(r10_1 + 0x60) & 8) == 0)
            int32_t rcx_15 = *rax_23
            
            if (rcx_15 s>= 0x304 && rcx_15 != 0x10000)
                if ((*(r10_1 + 0x18))(arg1, &arg1[0x6b], &arg1[0x5b], 0, *(arg1 + 0x508) + 8) == 0)
                    return 0
                
                int64_t r8_4 = *(*(arg1 + 8) + 0xc0)
                rax_4 = (*(r8_4 + 0x20))(arg1, 0x122, r8_4)
                goto label_142868335
    case 0x17
        int32_t rax_30 = sub_142856dc0(arg1)
        
        if (rax_30 != 1)
            return 3
        
        rax_4 = sub_142862cb0(arg1, rax_30)
        goto label_142868335

return 2
