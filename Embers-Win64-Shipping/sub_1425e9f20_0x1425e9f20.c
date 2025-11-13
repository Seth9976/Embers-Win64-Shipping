// 函数: sub_1425e9f20
// 地址: 0x1425e9f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int32_t arg_8 = 0
char* pv = sub_1425ec740(*arg1)
int64_t pv_1 = CoTaskMemAlloc(5)

if (pv_1 != 0)
    char const* const rdx = "true"
    char const i
    
    do
        i = *rdx
        *(rdx + pv_1 - "true") = i
        rdx = &rdx[1]
    while (i != 0)

int64_t pv_5
uint64_t rbp
int32_t rsi_1

if (pv == 0)
    if (pv_1 != 0)
        goto label_1425e9fdb
    
    pv_5 = arg_8.q
    rsi_1 = (&pv[1]).d
    rbp = zx.q(rsi_1.b)
else if (pv_1 == 0)
label_1425e9fdb:
    int64_t pv_7 = CoTaskMemAlloc(5)
    pv_5 = pv_7
    
    if (pv_7 != 0)
        char const* const rcx_1 = "True"
        char const i_1
        
        do
            i_1 = *rcx_1
            *(rcx_1 + pv_7 - "True") = i_1
            rcx_1 = &rcx_1[1]
        while (i_1 != 0)
    
    if (pv == 0)
        if (pv_5 != 0)
            goto label_1425ea063
        
        rsi_1 = (&pv[3]).d
        rbp.b = 1
    else if (pv_5 == 0)
    label_1425ea063:
        int64_t rax = CoTaskMemAlloc(5)
        
        if (rax != 0)
            char const* const rdx_5 = "TRUE"
            char const i_2
            
            do
                i_2 = *rdx_5
                *(rdx_5 + rax - "TRUE") = i_2
                rdx_5 = &rdx_5[1]
            while (i_2 != 0)
        
        arg3 = rax
        
        if (pv == 0)
            if (rax != 0)
                goto label_1425ea0dc
            
            rsi_1 = (&pv[7]).d
            rbp.b = 1
        else if (rax == 0)
        label_1425ea0dc:
            int64_t rax_2 = CoTaskMemAlloc(2)
            
            if (rax_2 != 0)
                void* const rdx_8 = &data_143702518
                char i_3
                
                do
                    i_3 = *rdx_8
                    *(rdx_8 + rax_2 - &data_143702518) = i_3
                    rdx_8 += 1
                while (i_3 != 0)
            
            arg_8.q = rax_2
            rsi_1 = 0xf
            bool cond:0_1
            
            if (pv != 0)
                if (rax_2 != 0)
                    void* pv_10 = pv
                    uint32_t i_4
                    uint32_t rdx_9
                    
                    do
                        rdx_9 = zx.d(*pv_10)
                        i_4 = zx.d(*(pv_10 + rax_2 - pv))
                        
                        if (rdx_9 != i_4)
                            break
                        
                        pv_10 += 1
                    while (i_4 != 0)
                    
                    cond:0_1 = rdx_9 - i_4 != 0
                    goto label_1425ea145
                
                rbp.b = 0
            else
                cond:0_1 = rax_2 != 0
            label_1425ea145:
                
                if (cond:0_1)
                    rbp.b = 0
                else
                    rbp.b = 1
        else
            rsi_1 = 7
            char* pv_9 = pv
            uint32_t i_5
            uint32_t rdx_6
            
            do
                rdx_6 = zx.d(*pv_9)
                i_5 = zx.d(*(pv_9 + rax - pv))
                
                if (rdx_6 != i_5)
                    break
                
                pv_9 = &pv_9[1]
            while (i_5 != 0)
            
            if (rdx_6 - i_5 != 0)
                goto label_1425ea0dc
            
            rbp.b = 1
    else
        rsi_1 = 3
        char* pv_8 = pv
        uint32_t i_6
        uint32_t r8_5
        
        do
            r8_5 = zx.d(*pv_8)
            i_6 = zx.d(*(pv_8 + pv_5 - pv))
            
            if (r8_5 != i_6)
                break
            
            pv_8 = &pv_8[1]
        while (i_6 != 0)
        
        if (r8_5 - i_6 != 0)
            goto label_1425ea063
        
        rbp.b = 1
else
    rsi_1 = 1
    char* pv_6 = pv
    uint32_t i_7
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*pv_6)
        i_7 = zx.d(*(pv_6 + pv_1 - pv))
        
        if (rdx_1 != i_7)
            break
        
        pv_6 = &pv_6[1]
    while (i_7 != 0)
    
    if (rdx_1 - i_7 != 0)
        goto label_1425e9fdb
    
    pv_5 = arg_8.q
    rbp.b = 1

if ((rsi_1.b & 8) != 0)
    int64_t pv_3 = arg_8.q
    rsi_1 &= 0xfffffff7
    
    if (pv_3 != 0)
        CoTaskMemFree(pv_3)

if ((rsi_1.b & 4) != 0)
    rsi_1 &= 0xfffffffb
    
    if (arg3 != 0)
        CoTaskMemFree(arg3)

if ((rsi_1.b & 2) != 0)
    rsi_1 &= 0xfffffffd
    
    if (pv_5 != 0)
        CoTaskMemFree(pv_5)

if (pv_1 != 0)
    CoTaskMemFree(pv_1)

if (rbp.b == 0)
    int64_t pv_2 = CoTaskMemAlloc(6)
    
    if (pv_2 != 0)
        char const* const rdx_11 = "false"
        char const i_8
        
        do
            i_8 = *rdx_11
            *(rdx_11 + pv_2 - "false") = i_8
            rdx_11 = &rdx_11[1]
        while (i_8 != 0)
    
    int32_t rsi_3 = (rsi_1 & 0xfffffffe) | 0x10
    
    if (pv == 0)
        if (pv_2 != 0)
            goto label_1425ea249
        
        pv_5 = arg_8.q
        rbp.b = 1
    else if (pv_2 == 0)
    label_1425ea249:
        int64_t pv_12 = CoTaskMemAlloc(6)
        pv_5 = pv_12
        
        if (pv_12 != 0)
            char const* const rcx_5 = "False"
            char const i_9
            
            do
                i_9 = *rcx_5
                *(rcx_5 + pv_12 - "False") = i_9
                rcx_5 = &rcx_5[1]
            while (i_9 != 0)
        
        rsi_3 |= 0x20
        
        if (pv == 0)
            if (pv_5 != 0)
                goto label_1425ea2c4
            
            rbp.b = 1
        else if (pv_5 == 0)
        label_1425ea2c4:
            int64_t rax_4 = CoTaskMemAlloc(6)
            
            if (rax_4 != 0)
                char const* const rdx_16 = "FALSE"
                char const i_10
                
                do
                    i_10 = *rdx_16
                    *(rdx_16 + rax_4 - "FALSE") = i_10
                    rdx_16 = &rdx_16[1]
                while (i_10 != 0)
            
            rsi_3 |= 0x40
            arg3 = rax_4
            
            if (pv == 0)
                if (rax_4 != 0)
                    goto label_1425ea33f
                
                rbp.b = 1
            else if (rax_4 == 0)
            label_1425ea33f:
                int64_t rax_6 = CoTaskMemAlloc(2)
                
                if (rax_6 != 0)
                    wchar32 const* const rdx_17 = &(*U""\tv 0")[4]
                    char i_11
                    
                    do
                        i_11 = *rdx_17
                        *(rdx_17 + rax_6 - &(*U""\tv 0")[4]) = i_11
                        rdx_17 += 1
                    while (i_11 != 0)
                
                rsi_3 |= 0x80
                arg_8.q = rax_6
                bool cond:1_1
                
                if (pv != 0)
                    if (rax_6 != 0)
                        char* pv_15 = pv
                        uint32_t i_12
                        uint32_t rdx_18
                        
                        do
                            rdx_18 = zx.d(*pv_15)
                            i_12 = zx.d(*(pv_15 + rax_6 - pv))
                            
                            if (rdx_18 != i_12)
                                break
                            
                            pv_15 = &pv_15[1]
                        while (i_12 != 0)
                        
                        cond:1_1 = rdx_18 - i_12 != 0
                        goto label_1425ea3a5
                    
                    rbp.b = 0
                else
                    cond:1_1 = rax_6 != 0
                label_1425ea3a5:
                    
                    if (cond:1_1)
                        rbp.b = 0
                    else
                        rbp.b = 1
            else
                char* pv_14 = pv
                uint32_t i_13
                uint32_t r8_17
                
                do
                    r8_17 = zx.d(*pv_14)
                    i_13 = zx.d(*(pv_14 + rax_4 - pv))
                    
                    if (r8_17 != i_13)
                        break
                    
                    pv_14 = &pv_14[1]
                while (i_13 != 0)
                
                if (r8_17 - i_13 != 0)
                    goto label_1425ea33f
                
                rbp.b = 1
        else
            char* pv_13 = pv
            uint32_t i_14
            uint32_t r8_15
            
            do
                r8_15 = zx.d(*pv_13)
                i_14 = zx.d(*(pv_13 + pv_5 - pv))
                
                if (r8_15 != i_14)
                    break
                
                pv_13 = &pv_13[1]
            while (i_14 != 0)
            
            if (r8_15 - i_14 != 0)
                goto label_1425ea2c4
            
            rbp.b = 1
    else
        char* pv_11 = pv
        uint32_t i_15
        uint32_t rdx_12
        
        do
            rdx_12 = zx.d(*pv_11)
            i_15 = zx.d(*(pv_11 + pv_2 - pv))
            
            if (rdx_12 != i_15)
                break
            
            pv_11 = &pv_11[1]
        while (i_15 != 0)
        
        if (rdx_12 - i_15 != 0)
            goto label_1425ea249
        
        pv_5 = arg_8.q
        rbp.b = 1
    
    if (rsi_3.b s< 0)
        int64_t pv_4 = arg_8.q
        rsi_3 &= 0xffffff7f
        
        if (pv_4 != 0)
            CoTaskMemFree(pv_4)
    
    if ((rsi_3.b & 0x40) != 0)
        rsi_3 &= 0xffffffbf
        
        if (arg3 != 0)
            CoTaskMemFree(arg3)
    
    if ((rsi_3.b & 0x20) != 0 && pv_5 != 0)
        CoTaskMemFree(pv_5)
    
    if (pv_2 != 0)
        CoTaskMemFree(pv_2)
    
    pv_5.b = 0
    
    if (rbp.b == 0)
        *arg2 = 4
else
    pv_5.b = 1

if (pv != 0)
    CoTaskMemFree(pv)

return zx.q(pv_5.b)
