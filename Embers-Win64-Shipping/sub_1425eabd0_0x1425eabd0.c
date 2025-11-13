// 函数: sub_1425eabd0
// 地址: 0x1425eabd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int32_t* rdi = arg2
uint64_t result

if (arg1 != 0)
    if (rdi == 0)
        rdi = arg1
    
    uint128_t pv_55
    uint128_t pv_56 = pv_55
    
    if (*rdi != arg3)
        sub_1425ec4c0(arg1)
        int32_t rax_2 = *rdi
        char* pv_12
        
        if (rax_2 != 0)
            char* pv_50
            
            if (rax_2 != 1)
                void var_248
                void var_247
                
                if (rax_2 != 2)
                    if (rax_2 != 3)
                        int32_t result_1
                        int16_t* pv_22
                        char* pv_23
                        char* pv_13
                        char* pv_14
                        int32_t result_3
                        
                        if (rax_2 == 0xa)
                            if (arg3 != 1)
                                if (arg3 == 2)
                                    char* pv_33 = sub_1425ec740(*(rdi + 8))
                                    result_3 = 0
                                    pv_14 = pv_33
                                    pv_22 = nullptr
                                    int32_t rcx_28 = 0
                                    int16_t* pv_52
                                    
                                    if (pv_33 == 0)
                                        pv_52 = nullptr
                                    else
                                        int64_t rsi_4 = -1
                                        int64_t rax_5 = -1
                                        
                                        do
                                            rax_5 += 1
                                        while (pv_14[rax_5] != 0)
                                        
                                        char const* const rdx_15
                                        
                                        if (rax_5 u<= 2 || *pv_14 != 0x30 || pv_14[1] != 0x78)
                                            do
                                                rsi_4 += 1
                                            while (pv_14[rsi_4] != 0)
                                            
                                            if (rsi_4 != 0)
                                                rdx_15 = "%I64d"
                                                goto label_1425eb0a2
                                            
                                            pv_52 = nullptr
                                        else
                                            rdx_15 = "0x%I64x"
                                        label_1425eb0a2:
                                            int32_t rax_6 = sub_1425f29b0(pv_14, rdx_15, &pv_22)
                                            pv_52 = pv_22
                                            rcx_28 = rax_6
                                            
                                            if (rax_6 == 0)
                                                pv_52 = nullptr
                                    
                                    if (rcx_28 == 0)
                                        result_3 = 4
                                    
                                    sub_1425ea870(arg1, pv_52)
                                    goto label_1425ebccd
                                
                                if (arg3 != 3)
                                    if (arg3 != 0xb)
                                        goto label_1425eb3e6
                                    
                                    char* rcx_34 = *(rdi + 8)
                                    result_1 = 0
                                    char* pv_34 = sub_1425ec740(rcx_34)
                                    pv_23 = pv_34
                                    pv_13 = pv_34
                                    sub_1425eab10(arg1, *sub_1425ea510(&pv_22, &pv_23, &result_1))
                                label_1425eb3bf:
                                    int16_t* pv_4 = pv_22
                                    
                                    if (pv_4 != 0)
                                        CoTaskMemFree(pv_4)
                                        pv_22 = nullptr
                                    
                                    goto label_1425ebd4f
                                
                                pv_14 = sub_1425ec740(*(rdi + 8))
                                result_3 = 0
                                pv_55 = zx.o(0)
                                int32_t rax_8 = 0
                                pv_22 = (zx.o(0)).q
                                
                                if (pv_14 != 0)
                                    int64_t rsi_5 = -1
                                    
                                    do
                                        rsi_5 += 1
                                    while (pv_14[rsi_5] != 0)
                                    
                                    if (rsi_5 != 0)
                                        rax_8 = sub_1425f29b0(pv_14, "%lf", &pv_22)
                                        
                                        if (rax_8 != 0)
                                            pv_55 = zx.o(pv_22)
                                
                                if (rax_8 == 0)
                                    result_3 = 4
                                
                                sub_1425ea820(arg1, pv_55)
                                goto label_1425ebccd
                            
                            char* rcx_24 = *(rdi + 8)
                            result_1 = 0
                            char* pv_32
                            int64_t r8_10
                            pv_32, r8_10 = sub_1425ec740(rcx_24)
                            pv_22 = pv_32
                            pv_13 = pv_32
                            sub_1425ea780(arg1, sub_1425e9f20(&pv_22, &result_1, r8_10))
                        label_1425ebd4f:
                            
                            if (pv_13 != 0)
                                CoTaskMemFree(pv_13)
                            
                            result = zx.q(result_1)
                        else
                            int32_t lpWideCharStr
                            int32_t var_290
                            wchar16* pv_24
                            int16_t* pv_54
                            
                            if (rax_2 == 0xb)
                                if (arg3 == 1)
                                    int16_t* rcx_37 = *(rdi + 8)
                                    result_1 = 0
                                    char* pv_35 = sub_1425ec7a0(rcx_37)
                                    pv_23 = pv_35
                                    pv_13 = pv_35
                                    int64_t* rax_10
                                    int64_t r8_15
                                    rax_10, r8_15 = sub_1425ea640(&pv_22, &pv_23, &result_1)
                                    char rax_11 = sub_1425e9f20(rax_10, &result_1, r8_15)
                                    int16_t* pv_1 = pv_22
                                    
                                    if (pv_1 != 0)
                                        CoTaskMemFree(pv_1)
                                        pv_22 = nullptr
                                    
                                    sub_1425ea780(arg1, rax_11)
                                    goto label_1425ebd4f
                                
                                wchar16* pv_15
                                int32_t result_2
                                
                                if (arg3 != 2)
                                    if (arg3 == 3)
                                        wchar16* pv_37 = sub_1425ec7a0(*(rdi + 8))
                                        pv_24 = pv_37
                                        pv_15 = pv_37
                                        int64_t* rax_15 = sub_1425ea640(&pv_23, &pv_24, &pv_22)
                                        pv_55 = zx.o(0)
                                        pv_22 = (zx.o(0)).q
                                        result_2 = 0
                                        char* rcx_47 = *rax_15
                                        
                                        if (rcx_47 == 0)
                                            result_2 = 4
                                        else
                                            int64_t rsi_7 = -1
                                            
                                            do
                                                rsi_7 += 1
                                            while (rcx_47[rsi_7] != 0)
                                            
                                            if (rsi_7 == 0)
                                                result_2 = 4
                                            else if (sub_1425f29b0(rcx_47, "%lf", &pv_22) == 0)
                                                result_2 = 4
                                            else
                                                pv_55 = zx.o(pv_22)
                                        
                                        char* pv_3 = pv_23
                                        
                                        if (pv_3 != 0)
                                            CoTaskMemFree(pv_3)
                                            pv_23 = nullptr
                                        
                                        sub_1425ea820(arg1, pv_55)
                                        goto label_1425eb36b
                                    
                                    if (arg3 == 0xa)
                                        int16_t* rcx_50 = *(rdi + 8)
                                        result_1 = 0
                                        char* pv_38 = sub_1425ec7a0(rcx_50)
                                        pv_23 = pv_38
                                        pv_13 = pv_38
                                        sub_1425eaa50(arg1, 
                                            *sub_1425ea640(&pv_22, &pv_23, &result_1))
                                        goto label_1425eb3bf
                                    
                                label_1425eb969:
                                    
                                    if (arg3 == 4)
                                        char* pv_44 = sub_1425ec7a0(*(rdi + 8))
                                        pv_23 = pv_44
                                        pv_14 = pv_44
                                        int64_t* rax_35 = sub_1425ea640(&pv_24, &pv_23, &pv_22)
                                        result_3 = 0
                                        int64_t var_258 = 0
                                        int64_t var_250 = 0
                                        char* rcx_83 = *rax_35
                                        
                                        if (rcx_83 == 0)
                                            result_3 = 4
                                        else
                                            int64_t rsi_18 = -1
                                            
                                            do
                                                rsi_18 += 1
                                            while (rcx_83[rsi_18] != 0)
                                            
                                            if (rsi_18 == 0)
                                                result_3 = 4
                                            else
                                                var_290.q = &var_250:4
                                                lpWideCharStr.q = &var_250
                                                
                                                if (sub_1425f29b0(rcx_83, "%d,%d,%d,%d", &var_258)
                                                        == 0)
                                                    result_3 = 4
                                        
                                        wchar16* pv_6 = pv_24
                                        pv_55 = var_258.o
                                        
                                        if (pv_6 != 0)
                                            CoTaskMemFree(pv_6)
                                        
                                    label_1425eba17:
                                        
                                        if (sub_1425ec4c0(arg1) == 0)
                                            *arg1 = 4
                                            *(arg1 + 8) = pv_55
                                        
                                        goto label_1425ebccd
                                    
                                    if (arg3 != 5)
                                        if (arg3 == 6)
                                            char* pv_46 = sub_1425ec7a0(*(rdi + 8))
                                            pv_23 = pv_46
                                            pv_14 = pv_46
                                            int64_t* rax_41 = sub_1425ea640(&pv_24, &pv_23, &pv_22)
                                            result_3 = 0
                                            pv_22 = nullptr
                                            char* rcx_91 = *rax_41
                                            
                                            if (rcx_91 == 0)
                                                result_3 = 4
                                            else
                                                int64_t rsi_20 = -1
                                                
                                                do
                                                    rsi_20 += 1
                                                while (rcx_91[rsi_20] != 0)
                                                
                                                if (rsi_20 == 0)
                                                    result_3 = 4
                                                else if (sub_1425f29b0(rcx_91, "%d,%d", &pv_22)
                                                        == 0)
                                                    result_3 = 4
                                            
                                            wchar16* pv_8 = pv_24
                                            pv_54 = pv_22
                                            
                                            if (pv_8 != 0)
                                                CoTaskMemFree(pv_8)
                                            
                                        label_1425ebb66:
                                            
                                            if (sub_1425ec4c0(arg1) != 0)
                                                goto label_1425ebccd
                                            
                                            *arg1 = 6
                                            goto label_1425ebcc6
                                        
                                        if (arg3 == 7)
                                            char* pv_47 = sub_1425ec7a0(*(rdi + 8))
                                            pv_23 = pv_47
                                            pv_14 = pv_47
                                            int64_t* rax_44 = sub_1425ea640(&pv_24, &pv_23, &pv_22)
                                            result_3 = 0
                                            pv_22 = nullptr
                                            char* rcx_95 = *rax_44
                                            
                                            if (rcx_95 == 0)
                                                result_3 = 4
                                            else
                                                int64_t rsi_21 = -1
                                                
                                                do
                                                    rsi_21 += 1
                                                while (rcx_95[rsi_21] != 0)
                                                
                                                if (rsi_21 == 0)
                                                    result_3 = 4
                                                else if (sub_1425f29b0(rcx_95, "%d,%d", &pv_22)
                                                        == 0)
                                                    result_3 = 4
                                            
                                            wchar16* pv_9 = pv_24
                                            pv_54 = pv_22
                                            
                                            if (pv_9 != 0)
                                                CoTaskMemFree(pv_9)
                                            
                                        label_1425ebc0a:
                                            
                                            if (sub_1425ec4c0(arg1) != 0)
                                                goto label_1425ebccd
                                            
                                            *arg1 = 7
                                            goto label_1425ebcc6
                                        
                                        if (arg3 == 8)
                                            char* pv_48 = sub_1425ec7a0(*(rdi + 8))
                                            pv_23 = pv_48
                                            pv_14 = pv_48
                                            int64_t* rax_47 = sub_1425ea640(&pv_24, &pv_23, &pv_22)
                                            result_3 = 0
                                            pv_22 = nullptr
                                            char* rcx_99 = *rax_47
                                            
                                            if (rcx_99 == 0)
                                                result_3 = 4
                                            else
                                                int64_t rsi_22 = -1
                                                
                                                do
                                                    rsi_22 += 1
                                                while (rcx_99[rsi_22] != 0)
                                                
                                                if (rsi_22 == 0)
                                                    result_3 = 4
                                                else if (sub_1425f29b0(rcx_99, "%d,%d", &pv_22)
                                                        == 0)
                                                    result_3 = 4
                                            
                                            wchar16* pv_10 = pv_24
                                            pv_54 = pv_22
                                            
                                            if (pv_10 != 0)
                                                CoTaskMemFree(pv_10)
                                            
                                        label_1425ebcb6:
                                            
                                            if (sub_1425ec4c0(arg1) != 0)
                                                goto label_1425ebccd
                                            
                                            *arg1 = 8
                                            goto label_1425ebcc6
                                        
                                        if (arg3 == 9)
                                            int16_t* rcx_102 = *(rdi + 8)
                                            result_1 = 0
                                            char* pv_49 = sub_1425ec7a0(rcx_102)
                                            pv_22 = pv_49
                                            pv_13 = pv_49
                                            int32_t rax_51 = sub_1425ea450(
                                                sub_1425ea640(&pv_23, &pv_22, &result_1), &result_1)
                                            char* pv_11 = pv_23
                                            
                                            if (pv_11 != 0)
                                                CoTaskMemFree(pv_11)
                                            
                                            if (sub_1425ec4c0(arg1) == 0)
                                                *arg1 = 9
                                                arg1[2] = rax_51
                                            
                                            goto label_1425ebd4f
                                        
                                        result = 4
                                    else
                                        char* pv_45 = sub_1425ec7a0(*(rdi + 8))
                                        pv_23 = pv_45
                                        pv_14 = pv_45
                                        int64_t* rax_38 = sub_1425ea640(&pv_24, &pv_23, &pv_22)
                                        result_3 = 0
                                        pv_22 = nullptr
                                        char* rcx_87 = *rax_38
                                        
                                        if (rcx_87 == 0)
                                            result_3 = 4
                                        else
                                            int64_t rsi_19 = -1
                                            
                                            do
                                                rsi_19 += 1
                                            while (rcx_87[rsi_19] != 0)
                                            
                                            if (rsi_19 == 0)
                                                result_3 = 4
                                            else if (sub_1425f29b0(rcx_87, "%d,%d", &pv_22) == 0)
                                                result_3 = 4
                                        
                                        wchar16* pv_7 = pv_24
                                        pv_54 = pv_22
                                        
                                        if (pv_7 != 0)
                                            CoTaskMemFree(pv_7)
                                        
                                    label_1425ebabc:
                                        
                                        if (sub_1425ec4c0(arg1) != 0)
                                            goto label_1425ebccd
                                        
                                        *arg1 = 5
                                    label_1425ebcc6:
                                        *(arg1 + 8) = pv_54
                                    label_1425ebccd:
                                        
                                        if (pv_14 != 0)
                                            CoTaskMemFree(pv_14)
                                        
                                        result = zx.q(result_3)
                                else
                                    wchar16* pv_36 = sub_1425ec7a0(*(rdi + 8))
                                    pv_24 = pv_36
                                    pv_15 = pv_36
                                    int64_t* rax_12 = sub_1425ea640(&pv_23, &pv_24, &pv_22)
                                    result_2 = 0
                                    pv_22 = nullptr
                                    char* rcx_43 = *rax_12
                                    int16_t* pv_53
                                    
                                    if (rcx_43 == 0)
                                        result_2 = 4
                                        pv_53 = nullptr
                                    else
                                        int64_t rsi_6 = -1
                                        int64_t rax_13 = -1
                                        
                                        do
                                            rax_13 += 1
                                        while (rcx_43[rax_13] != 0)
                                        
                                        char* rdx_22
                                        
                                        if (rax_13 u<= 2 || *rcx_43 != 0x30 || rcx_43[1] != 0x78)
                                            do
                                                rsi_6 += 1
                                            while (rcx_43[rsi_6] != 0)
                                            
                                            if (rsi_6 != 0)
                                                rdx_22 = "%I64d"
                                                goto label_1425eb28d
                                            
                                            result_2 = 4
                                            pv_53 = nullptr
                                        else
                                            rdx_22 = "0x%I64x"
                                        label_1425eb28d:
                                            
                                            if (sub_1425f29b0(rcx_43, rdx_22, &pv_22) == 0)
                                                result_2 = 4
                                                pv_53 = nullptr
                                            else
                                                pv_53 = pv_22
                                    
                                    char* pv_2 = pv_23
                                    
                                    if (pv_2 != 0)
                                        CoTaskMemFree(pv_2)
                                        pv_23 = nullptr
                                    
                                    sub_1425ea870(arg1, pv_53)
                                label_1425eb36b:
                                    
                                    if (pv_15 != 0)
                                        CoTaskMemFree(pv_15)
                                    
                                    result = zx.q(result_2)
                            else if (rax_2 == 0xa)
                            label_1425eb3e6:
                                
                                switch (arg3)
                                    case 4
                                        pv_14 = sub_1425ec740(*(rdi + 8))
                                        result_3 = 0
                                        int32_t rax_19 = 0
                                        pv_22 = nullptr
                                        int64_t var_270 = 0
                                        
                                        if (pv_14 != 0)
                                            int64_t rsi_8 = -1
                                            
                                            do
                                                rsi_8 += 1
                                            while (pv_14[rsi_8] != 0)
                                            
                                            if (rsi_8 != 0)
                                                var_290.q = &var_270:4
                                                lpWideCharStr.q = &var_270
                                                rax_19 = sub_1425f29b0(pv_14, "%d,%d,%d,%d", &pv_22)
                                        
                                        pv_55 = pv_22.o
                                        
                                        if (rax_19 == 0)
                                            result_3 = 4
                                        
                                        goto label_1425eba17
                                    case 5
                                        result_3 = 0
                                        pv_14 = sub_1425ec740(*(rdi + 8))
                                        pv_22 = nullptr
                                        pv_54 = nullptr
                                        int32_t rax_21 = 0
                                        
                                        if (pv_14 != 0)
                                            int64_t rsi_9 = -1
                                            
                                            do
                                                rsi_9 += 1
                                            while (pv_14[rsi_9] != 0)
                                            
                                            if (rsi_9 != 0)
                                                rax_21 = sub_1425f29b0(pv_14, "%d,%d", &pv_22)
                                                pv_54 = pv_22
                                        
                                        if (rax_21 == 0)
                                            result_3 = 4
                                        
                                        goto label_1425ebabc
                                    case 6
                                        result_3 = 0
                                        pv_14 = sub_1425ec740(*(rdi + 8))
                                        pv_22 = nullptr
                                        pv_54 = nullptr
                                        int32_t rax_23 = 0
                                        
                                        if (pv_14 != 0)
                                            int64_t rsi_10 = -1
                                            
                                            do
                                                rsi_10 += 1
                                            while (pv_14[rsi_10] != 0)
                                            
                                            if (rsi_10 != 0)
                                                rax_23 = sub_1425f29b0(pv_14, "%d,%d", &pv_22)
                                                pv_54 = pv_22
                                        
                                        if (rax_23 == 0)
                                            result_3 = 4
                                        
                                        goto label_1425ebb66
                                    case 7
                                        result_3 = 0
                                        pv_14 = sub_1425ec740(*(rdi + 8))
                                        pv_22 = nullptr
                                        pv_54 = nullptr
                                        int32_t rax_25 = 0
                                        
                                        if (pv_14 != 0)
                                            int64_t rsi_11 = -1
                                            
                                            do
                                                rsi_11 += 1
                                            while (pv_14[rsi_11] != 0)
                                            
                                            if (rsi_11 != 0)
                                                rax_25 = sub_1425f29b0(pv_14, "%d,%d", &pv_22)
                                                pv_54 = pv_22
                                        
                                        if (rax_25 == 0)
                                            result_3 = 4
                                        
                                        goto label_1425ebc0a
                                    case 8
                                        result_3 = 0
                                        pv_14 = sub_1425ec740(*(rdi + 8))
                                        pv_22 = nullptr
                                        pv_54 = nullptr
                                        int32_t rax_27 = 0
                                        
                                        if (pv_14 != 0)
                                            int64_t rsi_12 = -1
                                            
                                            do
                                                rsi_12 += 1
                                            while (pv_14[rsi_12] != 0)
                                            
                                            if (rsi_12 != 0)
                                                rax_27 = sub_1425f29b0(pv_14, "%d,%d", &pv_22)
                                                pv_54 = pv_22
                                        
                                        if (rax_27 == 0)
                                            result_3 = 4
                                        
                                        goto label_1425ebcb6
                                    case 9
                                        char* pv_39 = sub_1425ec740(*(rdi + 8))
                                        result_3 = 0
                                        pv_14 = pv_39
                                        result_1 = 0
                                        pv_24.d = 0
                                        pv_23.d = 0
                                        pv_22.d = 0
                                        
                                        if (pv_39 == 0)
                                            result_3 = 4
                                            result_1 = 0xff000000
                                        else
                                            int64_t rsi_13 = -1
                                            
                                            do
                                                rsi_13 += 1
                                            while (pv_39[rsi_13] != 0)
                                            
                                            if (rsi_13 == 0)
                                                result_3 = 4
                                                result_1 = 0xff000000
                                            else
                                                var_290.q = &pv_22
                                                lpWideCharStr.q = &pv_23
                                                
                                                if (sub_1425f29b0(pv_14, "%u,%u,%u,%u", &result_1)
                                                        == 0)
                                                    result_3 = 4
                                                    result_1 = 0xff000000
                                                else
                                                    result_1.b = result_1.b
                                                    result_1:1.b = pv_24.b
                                                    result_1:2.b = pv_23.b
                                                    result_1:3.b = pv_22.b
                                        
                                        int32_t result_4 = result_1
                                        
                                        if (sub_1425ec4c0(arg1) == 0)
                                            *arg1 = 9
                                            arg1[2] = result_4
                                        
                                        goto label_1425ebccd
                                
                                result = 4
                            else
                                int64_t* rax_34
                                char* r12_1
                                
                                if (rax_2 != 4)
                                    if (rax_2 == 5)
                                        if (arg3 == 0xa)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rsi_14 = -1
                                            bool cond:10_1
                                            
                                            do
                                                cond:10_1 = *(&var_247 + rsi_14) != 0
                                                rsi_14 += 1
                                            while (cond:10_1)
                                            char* pv_40 = CoTaskMemAlloc(rsi_14 + 1)
                                            pv_12 = pv_40
                                            
                                            if (pv_40 != 0)
                                                char* rdx_28 = &var_248
                                                char i
                                                
                                                do
                                                    i = *rdx_28
                                                    rdx_28[pv_12 - &var_248] = i
                                                    rdx_28 = &rdx_28[1]
                                                while (i != 0)
                                            
                                            sub_1425eaa50(arg1, pv_12)
                                            goto label_1425ec385
                                        
                                    label_1425ebeb6:
                                        
                                        if (arg3 == 0xb)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rcx_115 = -1
                                            
                                            do
                                                rcx_115 += 1
                                            while (*(&var_248 + rcx_115) != 0)
                                            
                                            char* rax_63 = CoTaskMemAlloc(rcx_115 + 1)
                                            r12_1 = rax_63
                                            
                                            if (rax_63 != 0)
                                                void* rdx_48 = &var_248
                                                char i_1
                                                
                                                do
                                                    i_1 = *rdx_48
                                                    *(rax_63 - &var_248 + rdx_48) = i_1
                                                    rdx_48 += 1
                                                while (i_1 != 0)
                                            
                                            pv_22 = nullptr
                                            
                                            if (r12_1 == 0)
                                                goto label_1425ec369
                                            
                                            int64_t rax_65 = -1
                                            
                                            do
                                                rax_65 += 1
                                            while (r12_1[rax_65] != 0)
                                            
                                            if (rax_65 == 0)
                                                goto label_1425ec369
                                            
                                            _configthreadlocale(1)
                                            lpWideCharStr.q = 0
                                            int32_t rax_66 = MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                0xffffffff, lpWideCharStr, 0)
                                            
                                            if (rax_66 == 0)
                                                goto label_1425ec369
                                            
                                            sub_1425f2870(&pv_22, sx.q(rax_66 + 8))
                                            lpWideCharStr.q = pv_22
                                            sub_1425f2870(&pv_22, 
                                                sx.q(MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                    0xffffffff, lpWideCharStr, rax_66 + 8) - 1))
                                            int16_t* pv_18 = pv_22
                                            pv_12 = sub_1425ec7a0(pv_18)
                                            
                                            if (pv_18 != 0)
                                                CoTaskMemFree(pv_18)
                                            
                                            goto label_1425ec36c
                                        
                                        result = 4
                                    else if (rax_2 == 6)
                                        if (arg3 == 0xa)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rsi_15 = -1
                                            bool cond:12_1
                                            
                                            do
                                                cond:12_1 = *(&var_247 + rsi_15) != 0
                                                rsi_15 += 1
                                            while (cond:12_1)
                                            char* pv_41 = CoTaskMemAlloc(rsi_15 + 1)
                                            pv_12 = pv_41
                                            
                                            if (pv_41 != 0)
                                                char* rdx_30 = &var_248
                                                char i_2
                                                
                                                do
                                                    i_2 = *rdx_30
                                                    rdx_30[pv_12 - &var_248] = i_2
                                                    rdx_30 = &rdx_30[1]
                                                while (i_2 != 0)
                                            
                                            sub_1425eaa50(arg1, pv_12)
                                            goto label_1425ec385
                                        
                                    label_1425ebfe6:
                                        
                                        if (arg3 == 0xb)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rcx_122 = -1
                                            
                                            do
                                                rcx_122 += 1
                                            while (*(&var_248 + rcx_122) != 0)
                                            
                                            char* rax_71 = CoTaskMemAlloc(rcx_122 + 1)
                                            r12_1 = rax_71
                                            
                                            if (rax_71 != 0)
                                                void* rdx_51 = &var_248
                                                char i_3
                                                
                                                do
                                                    i_3 = *rdx_51
                                                    *(rax_71 - &var_248 + rdx_51) = i_3
                                                    rdx_51 += 1
                                                while (i_3 != 0)
                                            
                                            pv_22 = nullptr
                                            
                                            if (r12_1 == 0)
                                                goto label_1425ec369
                                            
                                            int64_t rax_73 = -1
                                            
                                            do
                                                rax_73 += 1
                                            while (r12_1[rax_73] != 0)
                                            
                                            if (rax_73 == 0)
                                                goto label_1425ec369
                                            
                                            _configthreadlocale(1)
                                            lpWideCharStr.q = 0
                                            int32_t rax_74 = MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                0xffffffff, lpWideCharStr, 0)
                                            
                                            if (rax_74 == 0)
                                                goto label_1425ec369
                                            
                                            sub_1425f2870(&pv_22, sx.q(rax_74 + 8))
                                            lpWideCharStr.q = pv_22
                                            sub_1425f2870(&pv_22, 
                                                sx.q(MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                    0xffffffff, lpWideCharStr, rax_74 + 8) - 1))
                                            int16_t* pv_19 = pv_22
                                            pv_12 = sub_1425ec7a0(pv_19)
                                            
                                            if (pv_19 != 0)
                                                CoTaskMemFree(pv_19)
                                            
                                            goto label_1425ec36c
                                        
                                        result = 4
                                    else if (rax_2 == 7)
                                        if (arg3 == 0xa)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rsi_16 = -1
                                            bool cond:14_1
                                            
                                            do
                                                cond:14_1 = *(&var_247 + rsi_16) != 0
                                                rsi_16 += 1
                                            while (cond:14_1)
                                            char* pv_42 = CoTaskMemAlloc(rsi_16 + 1)
                                            pv_12 = pv_42
                                            
                                            if (pv_42 != 0)
                                                char* rdx_32 = &var_248
                                                char i_4
                                                
                                                do
                                                    i_4 = *rdx_32
                                                    rdx_32[pv_12 - &var_248] = i_4
                                                    rdx_32 = &rdx_32[1]
                                                while (i_4 != 0)
                                            
                                            sub_1425eaa50(arg1, pv_12)
                                            goto label_1425ec385
                                        
                                    label_1425ec116:
                                        
                                        if (arg3 == 0xb)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rcx_129 = -1
                                            
                                            do
                                                rcx_129 += 1
                                            while (*(&var_248 + rcx_129) != 0)
                                            
                                            char* rax_79 = CoTaskMemAlloc(rcx_129 + 1)
                                            r12_1 = rax_79
                                            
                                            if (rax_79 != 0)
                                                void* rdx_54 = &var_248
                                                char i_5
                                                
                                                do
                                                    i_5 = *rdx_54
                                                    *(rax_79 - &var_248 + rdx_54) = i_5
                                                    rdx_54 += 1
                                                while (i_5 != 0)
                                            
                                            pv_22 = nullptr
                                            
                                            if (r12_1 == 0)
                                                goto label_1425ec369
                                            
                                            int64_t rax_81 = -1
                                            
                                            do
                                                rax_81 += 1
                                            while (r12_1[rax_81] != 0)
                                            
                                            if (rax_81 == 0)
                                                goto label_1425ec369
                                            
                                            _configthreadlocale(1)
                                            lpWideCharStr.q = 0
                                            int32_t rax_82 = MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                0xffffffff, lpWideCharStr, 0)
                                            
                                            if (rax_82 == 0)
                                                goto label_1425ec369
                                            
                                            sub_1425f2870(&pv_22, sx.q(rax_82 + 8))
                                            lpWideCharStr.q = pv_22
                                            sub_1425f2870(&pv_22, 
                                                sx.q(MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                    0xffffffff, lpWideCharStr, rax_82 + 8) - 1))
                                            int16_t* pv_20 = pv_22
                                            pv_12 = sub_1425ec7a0(pv_20)
                                            
                                            if (pv_20 != 0)
                                                CoTaskMemFree(pv_20)
                                            
                                            goto label_1425ec36c
                                        
                                        result = 4
                                    else if (rax_2 == 8)
                                        if (arg3 == 0xa)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rsi_17 = -1
                                            bool cond:17_1
                                            
                                            do
                                                cond:17_1 = *(&var_247 + rsi_17) != 0
                                                rsi_17 += 1
                                            while (cond:17_1)
                                            char* pv_43 = CoTaskMemAlloc(rsi_17 + 1)
                                            pv_12 = pv_43
                                            
                                            if (pv_43 != 0)
                                                char* rdx_34 = &var_248
                                                char i_6
                                                
                                                do
                                                    i_6 = *rdx_34
                                                    rdx_34[pv_12 - &var_248] = i_6
                                                    rdx_34 = &rdx_34[1]
                                                while (i_6 != 0)
                                            
                                            sub_1425eaa50(arg1, pv_12)
                                            goto label_1425ec385
                                        
                                    label_1425ec246:
                                        
                                        if (arg3 == 0xb)
                                            rdi[3]
                                            sub_1425f2950(&var_248, "%d,%d", zx.q(rdi[2]))
                                            int64_t rcx_136 = -1
                                            
                                            do
                                                rcx_136 += 1
                                            while (*(&var_248 + rcx_136) != 0)
                                            
                                            char* rax_87 = CoTaskMemAlloc(rcx_136 + 1)
                                            r12_1 = rax_87
                                            
                                            if (rax_87 != 0)
                                                char* rdx_57 = &var_248
                                                char i_7
                                                
                                                do
                                                    i_7 = *rdx_57
                                                    rdx_57[rax_87 - &var_248] = i_7
                                                    rdx_57 = &rdx_57[1]
                                                while (i_7 != 0)
                                            
                                            pv_22 = nullptr
                                            
                                            if (r12_1 == 0)
                                                goto label_1425ec369
                                            
                                            int64_t rax_89 = -1
                                            
                                            do
                                                rax_89 += 1
                                            while (r12_1[rax_89] != 0)
                                            
                                            if (rax_89 == 0)
                                                goto label_1425ec369
                                            
                                            _configthreadlocale(1)
                                            lpWideCharStr.q = 0
                                            int32_t rax_90 = MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                0xffffffff, lpWideCharStr, 0)
                                            
                                            if (rax_90 == 0)
                                                goto label_1425ec369
                                            
                                            sub_1425f2870(&pv_22, sx.q(rax_90 + 8))
                                            lpWideCharStr.q = pv_22
                                            sub_1425f2870(&pv_22, 
                                                sx.q(MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                    0xffffffff, lpWideCharStr, rax_90 + 8) - 1))
                                            int16_t* pv_21 = pv_22
                                            pv_12 = sub_1425ec7a0(pv_21)
                                            
                                            if (pv_21 != 0)
                                                CoTaskMemFree(pv_21)
                                            
                                            goto label_1425ec36c
                                        
                                        result = 4
                                    else if (rax_2 != 9)
                                        switch (rax_2)
                                            case 4
                                                goto label_1425ebd6c
                                            case 5
                                                goto label_1425ebeb6
                                            case 6
                                                goto label_1425ebfe6
                                            case 7
                                                goto label_1425ec116
                                            case 8
                                                goto label_1425ec246
                                            case 0xb
                                                goto label_1425eb969
                                        
                                        if (rax_2 == 9 && arg3 == 0xb)
                                            goto label_1425ec3be
                                        
                                        result = 4
                                    else
                                        if (arg3 == 0xa)
                                            pv_22.d = 0
                                            rax_34 = sub_1425e9da0(&pv_23, &rdi[2], &pv_22)
                                            goto label_1425eb93e
                                        
                                        if (arg3 != 0xb)
                                            result = 4
                                        else
                                        label_1425ec3be:
                                            *(rdi + 9)
                                            uint32_t var_290_12 = zx.d(*(rdi + 0xb))
                                            uint32_t var_298 = zx.d(*(rdi + 0xa))
                                            pv_22.d = 0
                                            sub_1425f2950(&var_248, "%d,%d,%d,%d", zx.q(rdi[2].b))
                                            int64_t rsi_23 = -1
                                            bool cond:18_1
                                            
                                            do
                                                cond:18_1 = *(&var_247 + rsi_23) != 0
                                                rsi_23 += 1
                                            while (cond:18_1)
                                            char* pv = CoTaskMemAlloc(rsi_23 + 1)
                                            
                                            if (pv != 0)
                                                char* rdx_60 = &var_248
                                                char i_8
                                                
                                                do
                                                    i_8 = *rdx_60
                                                    rdx_60[pv - &var_248] = i_8
                                                    rdx_60 = &rdx_60[1]
                                                while (i_8 != 0)
                                            
                                            pv_23 = pv
                                            sub_1425ea510(&pv_24, &pv_23, &pv_22)
                                            
                                            if (pv != 0)
                                                CoTaskMemFree(pv)
                                            
                                            wchar16* pv_16 = pv_24
                                            sub_1425eab10(arg1, pv_16)
                                            
                                            if (pv_16 != 0)
                                                CoTaskMemFree(pv_16)
                                            
                                            result = zx.q(pv_22.d)
                                else if (arg3 != 0xa)
                                label_1425ebd6c:
                                    
                                    if (arg3 != 0xb)
                                        result = 4
                                    else
                                        rdi[3]
                                        int32_t var_290_1 = rdi[5]
                                        int32_t lpWideCharStr_1 = rdi[4]
                                        sub_1425f2950(&var_248, "%d,%d,%d,%d", zx.q(rdi[2]))
                                        int64_t rcx_108 = -1
                                        
                                        do
                                            rcx_108 += 1
                                        while (*(&var_248 + rcx_108) != 0)
                                        
                                        char* rax_55 = CoTaskMemAlloc(rcx_108 + 1)
                                        r12_1 = rax_55
                                        
                                        if (rax_55 != 0)
                                            void* rdx_45 = &var_248
                                            char i_9
                                            
                                            do
                                                i_9 = *rdx_45
                                                *(rax_55 - &var_248 + rdx_45) = i_9
                                                rdx_45 += 1
                                            while (i_9 != 0)
                                        
                                        pv_22 = nullptr
                                        
                                        if (r12_1 != 0)
                                            int64_t rax_57 = -1
                                            
                                            do
                                                rax_57 += 1
                                            while (r12_1[rax_57] != 0)
                                            
                                            if (rax_57 == 0)
                                                goto label_1425ec369
                                            
                                            _configthreadlocale(1)
                                            lpWideCharStr_1.q = 0
                                            int32_t rax_58 = MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                0xffffffff, lpWideCharStr_1, 0)
                                            
                                            if (rax_58 == 0)
                                                goto label_1425ec369
                                            
                                            sub_1425f2870(&pv_22, sx.q(rax_58 + 8))
                                            lpWideCharStr_1.q = pv_22
                                            sub_1425f2870(&pv_22, 
                                                sx.q(MultiByteToWideChar(0xfde9, 0, r12_1, 
                                                    0xffffffff, lpWideCharStr_1, rax_58 + 8) - 1))
                                            int16_t* pv_17 = pv_22
                                            pv_12 = sub_1425ec7a0(pv_17)
                                            
                                            if (pv_17 != 0)
                                                CoTaskMemFree(pv_17)
                                            
                                            goto label_1425ec36c
                                        
                                    label_1425ec369:
                                        pv_12 = sub_1425ec7a0(nullptr)
                                    label_1425ec36c:
                                        
                                        if (r12_1 == 0)
                                            goto label_1425ec37a
                                        
                                        CoTaskMemFree(r12_1)
                                    label_1425ec37a:
                                        pv_50 = pv_12
                                    label_1425ec380:
                                        sub_1425eab10(arg1, pv_50)
                                    label_1425ec385:
                                        
                                        if (pv_12 == 0)
                                            result = 0
                                        else
                                            CoTaskMemFree(pv_12)
                                            result = 0
                                else
                                    pv_22.d = 0
                                    rax_34 = sub_1425e9e60(&pv_23, &rdi[2], &pv_22)
                                label_1425eb93e:
                                    sub_1425eaa50(arg1, *rax_34)
                                    char* pv_5 = pv_23
                                    
                                    if (pv_5 == 0)
                                        result = zx.q(pv_22.d)
                                    else
                                        CoTaskMemFree(pv_5)
                                        result = zx.q(pv_22.d)
                    else if (arg3 != 1)
                        if (arg3 != 2)
                            if (arg3 == 0xa)
                                sub_1425f2950(&var_248, "%lf", *(rdi + 8))
                                int64_t rsi_3 = -1
                                bool cond:5_1
                                
                                do
                                    cond:5_1 = *(&var_247 + rsi_3) != 0
                                    rsi_3 += 1
                                while (cond:5_1)
                                char* pv_31 = CoTaskMemAlloc(rsi_3 + 1)
                                pv_12 = pv_31
                                
                                if (pv_31 != 0)
                                    char* rdx_11 = &var_248
                                    char i_10
                                    
                                    do
                                        i_10 = *rdx_11
                                        rdx_11[pv_12 - &var_248] = i_10
                                        rdx_11 = &rdx_11[1]
                                    while (i_10 != 0)
                                
                                sub_1425eaa50(arg1, pv_12)
                                goto label_1425ec385
                            
                            result = 4
                        else
                            sub_1425ea870(arg1, int.q(fconvert.t(*(rdi + 8))))
                            result = 0
                    else if (0.0 f== *(rdi + 8))
                        sub_1425ea780(arg1, false)
                        result = 0
                    else
                        sub_1425ea780(arg1, arg3.b)
                        result = 0
                else if (arg3 == 1)
                    sub_1425ea780(arg1, *(rdi + 8) != 0)
                    result = 0
                else if (arg3 != 3)
                    if (arg3 == 0xa)
                        sub_1425f2950(&var_248, "%I64d", *(rdi + 8))
                        int64_t rsi_1 = -1
                        bool cond:4_1
                        
                        do
                            cond:4_1 = *(&var_247 + rsi_1) != 0
                            rsi_1 += 1
                        while (cond:4_1)
                        char* pv_29 = CoTaskMemAlloc(rsi_1 + 1)
                        pv_12 = pv_29
                        
                        if (pv_29 != 0)
                            char* rdx_6 = &var_248
                            char i_11
                            
                            do
                                i_11 = *rdx_6
                                rdx_6[pv_12 - &var_248] = i_11
                                rdx_6 = &rdx_6[1]
                            while (i_11 != 0)
                        
                        sub_1425eaa50(arg1, pv_12)
                        goto label_1425ec385
                    
                    if (arg3 == 0xb)
                        _fprintf_l(&var_248, 0xff, u"%I64d", *(rdi + 8))
                        int64_t rsi_2 = -1
                        bool cond:6_1
                        
                        do
                            int16_t var_246[0x47]
                            cond:6_1 = var_246[rsi_2] != 0
                            rsi_2 += 1
                        while (cond:6_1)
                        char* pv_30 = CoTaskMemAlloc((rsi_2 << 1) + 2)
                        pv_12 = pv_30
                        
                        if (pv_30 != 0)
                            int16_t* rdx_8 = &var_248
                            int16_t i_12
                            
                            do
                                i_12 = *rdx_8
                                *(rdx_8 + pv_12 - &var_248) = i_12
                                rdx_8 = &rdx_8[1]
                            while (i_12 != 0)
                        
                        goto label_1425ec37a
                    
                    result = 4
                else
                    uint128_t zmm1
                    zmm1.q = float.d(*(rdi + 8))
                    sub_1425ea820(arg1, zmm1)
                    result = 0
            else if (arg3 == 2)
                int64_t r14_1
                r14_1.b = rdi[2].b != 0
                sub_1425ea870(arg1, r14_1)
                result = 0
            else if (arg3 != 3)
                if (arg3 == 0xa)
                    char const* const rcx_8 = "false"
                    
                    if (rdi[2].b != 0)
                        rcx_8 = "true"
                    
                    char* pv_27 = sub_1425ec740(rcx_8)
                    pv_12 = pv_27
                    sub_1425eaa50(arg1, pv_27)
                    goto label_1425ec385
                
                if (arg3 == 0xb)
                    int16_t* rcx_10 = u"false"
                    
                    if (rdi[2].b != 0)
                        rcx_10 = u"true"
                    
                    char* pv_28 = sub_1425ec7a0(rcx_10)
                    pv_12 = pv_28
                    pv_50 = pv_28
                    goto label_1425ec380
                
                result = 4
            else
                int32_t r14_2
                r14_2.b = rdi[2].b != 0
                sub_1425ea820(arg1, _mm_cvtepi32_pd(zx.q(r14_2)))
                result = 0
        else if (arg3 == 1)
            sub_1425ea780(arg1, 0)
            result = 0
        else if (arg3 == 2)
            sub_1425ea870(arg1, 0)
            result = 0
        else if (arg3 != 3)
            if (arg3 == 0xa)
                char* pv_25 = CoTaskMemAlloc(zx.q(arg3 - 9))
                pv_12 = pv_25
                
                if (pv_25 != 0)
                    char* pv_51 = pv_25
                    void* rax_3 = &data_1437020ab - pv_51
                    char i_13
                    
                    do
                        i_13 = *(pv_51 + rax_3)
                        *pv_51 = i_13
                        pv_51 = &pv_51[1]
                    while (i_13 != 0)
                
                sub_1425eaa50(arg1, pv_12)
                goto label_1425ec385
            
            if (arg3 == 0xb)
                char* pv_26 = CoTaskMemAlloc(zx.q(arg3 - 9))
                pv_12 = pv_26
                
                if (pv_26 != 0)
                    int16_t* const rdx_3 = &data_142d40450
                    int16_t i_14
                    
                    do
                        i_14 = *rdx_3
                        *(rdx_3 + pv_26 - &data_142d40450) = i_14
                        rdx_3 = &rdx_3[1]
                    while (i_14 != 0)
                
                goto label_1425ec37a
            
            result = 4
        else
            sub_1425ea820(arg1, zx.o(0))
            result = 0
    else if (arg1 == rdi)
        result = 0
    else
        result = sub_1425ec530(arg1, rdi)
else
    result = zx.q((arg1 + 7).d)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
