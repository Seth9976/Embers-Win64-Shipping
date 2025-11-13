// 函数: sub_1429d4af0
// 地址: 0x1429d4af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_5 = 0
*(arg1 + 0x40) = 0

if (*(arg1 + 0x24) != 0)
    int32_t r9_1 = 0
    int64_t i = 0
    int32_t r11_2 = ((*(arg1 + 0x80) - *(arg1 + 0x78)) s>> 2).d
    
    if (r11_2 s> 0)
        do
            *(*(arg1 + 0x78) + (i << 2)) = r9_1
            r9_1 += 1
            i += 1
        while (i s< sx.q(r11_2))
    
    *(arg1 + 0x28) = r11_2
    int32_t r10_2 = 0
    *(arg1 + 0x44) = 0
    int64_t i_1 = 0
    int32_t r8_2 = ((*(arg1 + 0x98) - *(arg1 + 0x90)) s>> 2).d
    
    if (r8_2 s> 0)
        do
            *(*(arg1 + 0x90) + (i_1 << 2)) = r10_2
            r10_2 += 1
            i_1 += 1
        while (i_1 s< sx.q(r8_2))
    
    *(arg1 + 0x2c) = r8_2
    int64_t i_2 = 0
    *(arg1 + 0x48) = r8_2
    int32_t r10_5 = ((*(arg1 + 0xc8) - *(arg1 + 0xc0)) s>> 2).d
    
    if (r10_5 s> 0)
        do
            *(*(arg1 + 0xc0) + (i_2 << 2)) = r8_2
            r8_2 += 1
            i_2 += 1
        while (i_2 s< sx.q(r10_5))
    
    int32_t r9_2 = 0
    *(arg1 + 0x30) = r10_5
    int64_t i_3 = 0
    
    if (*(arg1 + 0x25) == 0)
        *(arg1 + 0x54) = 0
        int32_t r11_13 = ((*(arg1 + 0xf8) - *(arg1 + 0xf0)) s>> 2).d
        
        if (r11_13 s> 0)
            do
                *(*(arg1 + 0xf0) + (i_3 << 2)) = r9_2
                r9_2 += 1
                i_3 += 1
            while (i_3 s< sx.q(r11_13))
        
        int64_t i_4 = 0
        int32_t r9_7 = *(arg1 + 0x54) + r11_13
        *(arg1 + 0x3c) = r11_13
        *(arg1 + 0x4c) = r9_7
        int32_t r11_16 = ((*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2).d
        
        if (r11_16 s> 0)
            do
                *(*(arg1 + 0xa8) + (i_4 << 2)) = r9_7
                r9_7 += 1
                i_4 += 1
            while (i_4 s< sx.q(r11_16))
        
        int32_t r8_6 = *(arg1 + 0x4c) + r11_16
        *(arg1 + 0x34) = r11_16
        *(arg1 + 0x50) = r8_6
        int32_t r10_15 = ((*(arg1 + 0xe0) - *(arg1 + 0xd8)) s>> 2).d
        
        if (r10_15 s> 0)
            do
                *(*(arg1 + 0xd8) + (i_5 << 2)) = r8_6
                r8_6 += 1
                i_5 += 1
            while (i_5 s< sx.q(r10_15))
        
        *(arg1 + 0x38) = r10_15
        return 
    
    *(arg1 + 0x4c) = 0
    int32_t r11_7 = ((*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2).d
    
    if (r11_7 s> 0)
        do
            *(*(arg1 + 0xa8) + (i_3 << 2)) = r9_2
            r9_2 += 1
            i_3 += 1
        while (i_3 s< sx.q(r11_7))
    
    int64_t i_6 = 0
    int32_t r9_4 = *(arg1 + 0x4c) + r11_7
    *(arg1 + 0x34) = r11_7
    *(arg1 + 0x50) = r9_4
    int32_t r11_10 = ((*(arg1 + 0xe0) - *(arg1 + 0xd8)) s>> 2).d
    
    if (r11_10 s> 0)
        do
            *(*(arg1 + 0xd8) + (i_6 << 2)) = r9_4
            r9_4 += 1
            i_6 += 1
        while (i_6 s< sx.q(r11_10))
    
    int32_t r8_4 = *(arg1 + 0x50) + r11_10
    *(arg1 + 0x38) = r11_10
    *(arg1 + 0x54) = r8_4
    int32_t r10_10 = ((*(arg1 + 0xf8) - *(arg1 + 0xf0)) s>> 2).d
    
    if (r10_10 s> 0)
        do
            *(*(arg1 + 0xf0) + (i_5 << 2)) = r8_4
            r8_4 += 1
            i_5 += 1
        while (i_5 s< sx.q(r10_10))
    
    *(arg1 + 0x3c) = r10_10
    return 

int32_t r8_7 = 0
int32_t i_7 = 0

if (((*(arg1 + 0x80) - *(arg1 + 0x78)) s>> 2).d s> 0)
    int64_t r10_16 = 0
    
    do
        int32_t* r9_9 = *(arg1 + 0x78)
        int32_t rax_4
        
        if (*(r9_9 + r10_16) == 0)
            rax_4 = -1
        else
            rax_4 = r8_7
            r8_7 += 1
        
        *(r9_9 + r10_16) = rax_4
        i_7 += 1
        r10_16 += 4
    while (i_7 s< ((*(arg1 + 0x80) - *(arg1 + 0x78)) s>> 2).d)

*(arg1 + 0x28) = r8_7
int32_t i_8 = 0
*(arg1 + 0x44) = 0
int32_t r8_8 = 0

if (((*(arg1 + 0x98) - *(arg1 + 0x90)) s>> 2).d s> 0)
    int64_t r10_17 = 0
    
    do
        int32_t* r9_10 = *(arg1 + 0x90)
        int32_t rax_11
        
        if (*(r9_10 + r10_17) == 0)
            rax_11 = -1
        else
            rax_11 = r8_8
            r8_8 += 1
        
        *(r9_10 + r10_17) = rax_11
        i_8 += 1
        r10_17 += 4
    while (i_8 s< ((*(arg1 + 0x98) - *(arg1 + 0x90)) s>> 2).d)

*(arg1 + 0x2c) = r8_8
int32_t r9_11 = 0
*(arg1 + 0x48) = r8_8
int32_t i_9 = 0

if (((*(arg1 + 0xc8) - *(arg1 + 0xc0)) s>> 2).d s> 0)
    int64_t r11_17 = 0
    
    do
        int32_t* r10_18 = *(arg1 + 0xc0)
        int32_t rax_18
        
        if (*(r10_18 + r11_17) == 0)
            rax_18 = -1
        else
            rax_18 = r9_11 + r8_8
            r9_11 += 1
        
        *(r10_18 + r11_17) = rax_18
        i_9 += 1
        r11_17 += 4
    while (i_9 s< ((*(arg1 + 0xc8) - *(arg1 + 0xc0)) s>> 2).d)

int32_t r8_9 = 0
*(arg1 + 0x30) = r9_11
int32_t i_10 = 0

if (*(arg1 + 0x25) == 0)
    *(arg1 + 0x54) = 0
    
    if (((*(arg1 + 0xf8) - *(arg1 + 0xf0)) s>> 2).d s> 0)
        int64_t r10_21 = 0
        
        do
            int32_t* r9_15 = *(arg1 + 0xf0)
            int32_t rax_45
            
            if (*(r9_15 + r10_21) == 0)
                rax_45 = -1
            else
                rax_45 = r8_9
                r8_9 += 1
            
            *(r9_15 + r10_21) = rax_45
            i_10 += 1
            r10_21 += 4
        while (i_10 s< ((*(arg1 + 0xf8) - *(arg1 + 0xf0)) s>> 2).d)
    
    int32_t i_11 = 0
    int32_t rbx_3 = *(arg1 + 0x54) + r8_9
    *(arg1 + 0x3c) = r8_9
    *(arg1 + 0x4c) = rbx_3
    int32_t r8_12 = 0
    
    if (((*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2).d s> 0)
        int64_t r10_22 = 0
        
        do
            int32_t* r9_16 = *(arg1 + 0xa8)
            int32_t rax_52
            
            if (*(r9_16 + r10_22) == 0)
                rax_52 = -1
            else
                rax_52 = r8_12 + rbx_3
                r8_12 += 1
            
            *(r9_16 + r10_22) = rax_52
            i_11 += 1
            r10_22 += 4
        while (i_11 s< ((*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2).d)
    
    int32_t i_12 = 0
    int32_t r11_21 = *(arg1 + 0x4c) + r8_12
    *(arg1 + 0x34) = r8_12
    *(arg1 + 0x50) = r11_21
    
    if (((*(arg1 + 0xe0) - *(arg1 + 0xd8)) s>> 2).d s> 0)
        int64_t r9_17 = 0
        
        do
            int32_t* r8_13 = *(arg1 + 0xd8)
            int32_t rax_59
            
            if (*(r8_13 + r9_17) == 0)
                rax_59 = -1
            else
                rax_59 = i_5.d + r11_21
                i_5 = zx.q(i_5.d + 1)
            
            *(r8_13 + r9_17) = rax_59
            i_12 += 1
            r9_17 += 4
        while (i_12 s< ((*(arg1 + 0xe0) - *(arg1 + 0xd8)) s>> 2).d)
    
    *(arg1 + 0x38) = i_5.d
    return 

*(arg1 + 0x4c) = 0

if (((*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2).d s> 0)
    int64_t r10_19 = 0
    
    do
        int32_t* r9_12 = *(arg1 + 0xa8)
        int32_t rax_25
        
        if (*(r9_12 + r10_19) == 0)
            rax_25 = -1
        else
            rax_25 = r8_9
            r8_9 += 1
        
        *(r9_12 + r10_19) = rax_25
        i_10 += 1
        r10_19 += 4
    while (i_10 s< ((*(arg1 + 0xb0) - *(arg1 + 0xa8)) s>> 2).d)

int32_t i_13 = 0
int32_t rbx_1 = *(arg1 + 0x4c) + r8_9
*(arg1 + 0x34) = r8_9
*(arg1 + 0x50) = rbx_1
int32_t r8_10 = 0

if (((*(arg1 + 0xe0) - *(arg1 + 0xd8)) s>> 2).d s> 0)
    int64_t r10_20 = 0
    
    do
        int32_t* r9_13 = *(arg1 + 0xd8)
        int32_t rax_32
        
        if (*(r9_13 + r10_20) == 0)
            rax_32 = -1
        else
            rax_32 = r8_10 + rbx_1
            r8_10 += 1
        
        *(r9_13 + r10_20) = rax_32
        i_13 += 1
        r10_20 += 4
    while (i_13 s< ((*(arg1 + 0xe0) - *(arg1 + 0xd8)) s>> 2).d)

int32_t i_14 = 0
int32_t r11_19 = *(arg1 + 0x50) + r8_10
*(arg1 + 0x38) = r8_10
*(arg1 + 0x54) = r11_19

if (((*(arg1 + 0xf8) - *(arg1 + 0xf0)) s>> 2).d s> 0)
    int64_t r9_14 = 0
    
    do
        int32_t* r8_11 = *(arg1 + 0xf0)
        int32_t rax_39
        
        if (*(r8_11 + r9_14) == 0)
            rax_39 = -1
        else
            rax_39 = i_5.d + r11_19
            i_5 = zx.q(i_5.d + 1)
        
        *(r8_11 + r9_14) = rax_39
        i_14 += 1
        r9_14 += 4
    while (i_14 s< ((*(arg1 + 0xf8) - *(arg1 + 0xf0)) s>> 2).d)

*(arg1 + 0x3c) = i_5.d
