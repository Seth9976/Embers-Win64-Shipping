// 函数: sub_141c5cd30
// 地址: 0x141c5cd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_11 = zx.q(arg3)
void* r13 = (&data_143a13c20)[sx.q(arg3) - 1]
uint64_t rax

if (arg2 != 1)
    if (arg2 != 4)
        if (arg2 == 6 && arg4 == 0)
            int32_t* r15_1 = (&data_143a13c60)[sx.q(arg3) - 1]
            uint64_t* rbx_7 = ((sx.q(arg3) - 1) << 4) + data_143f34e10
            rax = zx.q(*(rbx_7 + 0xc))
            rbx_7[1].d = 0
            
            if (rax.d s< 0 && rax.d != 0)
                sub_1405dadb0(rbx_7, 0)
            
            int64_t i_10 = 6
            int64_t i
            
            do
                if (i_11.d s> 0)
                    int32_t* rsi_3 = r15_1
                    uint64_t j_2 = i_11
                    uint64_t j
                    
                    do
                        int64_t rdi_14 = sx.q(rbx_7[1].d)
                        int32_t rax_20 = (rdi_14 + 1).d
                        rbx_7[1].d = rax_20
                        
                        if (rax_20 s> *(rbx_7 + 0xc))
                            sub_1406105e0(rbx_7)
                        
                        rax = zx.q(*rsi_3)
                        rsi_3 = &rsi_3[6]
                        *(*rbx_7 + (rdi_14 << 2)) = rax.d
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                r15_1 = &r15_1[1]
                i = i_10
                i_10 -= 1
            while (i != 1)
        
        int64_t i_14 = sx.q(arg2)
        
        if (arg2 s> 0)
            int64_t i_1
            
            do
                if (i_11.d s> 0)
                    void* rsi_4 = r13
                    uint64_t j_3 = i_11
                    uint64_t j_1
                    
                    do
                        int64_t rdi_15 = sx.q(arg5[1].d)
                        int32_t rax_21 = (rdi_15 + 1).d
                        arg5[1].d = rax_21
                        
                        if (rax_21 s> *(arg5 + 0xc))
                            sub_1406105e0(arg5)
                        
                        rax = zx.q(*rsi_4)
                        rsi_4 += 0x20
                        *(*arg5 + (rdi_15 << 2)) = rax.d
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                r13 += 4
                i_1 = i_14
                i_14 -= 1
            while (i_1 != 1)
    else if (i_11.d s> 0)
        void* rsi_2 = r13
        uint64_t i_13 = i_11
        uint64_t i_9 = i_11
        uint64_t i_2
        
        do
            int64_t rdi_10 = sx.q(arg5[1].d)
            int32_t rax_13 = (rdi_10 + 1).d
            arg5[1].d = rax_13
            
            if (rax_13 s> *(arg5 + 0xc))
                sub_1406105e0(arg5)
            
            int32_t rax_14 = *rsi_2
            rsi_2 += 0x20
            *(*arg5 + (rdi_10 << 2)) = rax_14
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
        uint64_t i_15 = i_9
        uint64_t i_3
        
        do
            int64_t rdi_11 = sx.q(arg5[1].d)
            int32_t rax_15 = (rdi_11 + 1).d
            arg5[1].d = rax_15
            
            if (rax_15 s> *(arg5 + 0xc))
                sub_1406105e0(arg5)
            
            int32_t rax_16 = *(i_15 + r13 + 4)
            i_15 += 0x20
            *(*arg5 + (rdi_11 << 2)) = rax_16
            i_3 = i_11
            i_11 -= 1
        while (i_3 != 1)
        uint64_t i_16 = i_9
        uint64_t i_12 = i_13
        uint64_t i_4
        
        do
            int64_t rdi_12 = sx.q(arg5[1].d)
            int32_t rax_17 = (rdi_12 + 1).d
            arg5[1].d = rax_17
            
            if (rax_17 s> *(arg5 + 0xc))
                sub_1406105e0(arg5)
            
            int32_t rax_18 = *(i_16 + r13 + 0x10)
            i_16 += 0x20
            *(*arg5 + (rdi_12 << 2)) = rax_18
            i_4 = i_12
            i_12 -= 1
        while (i_4 != 1)
        uint64_t i_5
        
        do
            int64_t rdi_13 = sx.q(arg5[1].d)
            int32_t rax_19 = (rdi_13 + 1).d
            arg5[1].d = rax_19
            
            if (rax_19 s> *(arg5 + 0xc))
                sub_1406105e0(arg5)
            
            rax = zx.q(*(i_9 + r13 + 0x14))
            i_9 += 0x20
            *(*arg5 + (rdi_13 << 2)) = rax.d
            i_5 = i_13
            i_13 -= 1
        while (i_5 != 1)
else if (i_11.d == arg2)
    int64_t rdi_1 = sx.q(arg5[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg5[1].d = rax_1
    
    if (rax_1 s> *(arg5 + 0xc))
        sub_1406105e0(arg5)
    
    *(*arg5 + (rdi_1 << 2)) = 0x3f800000
else if ((i_11.d == 3 || i_11.d s> 4) && arg4 != 0)
    int32_t i_6 = 0
    
    if (i_11.d s> 0)
        do
            int64_t rdi_2 = sx.q(arg5[1].d)
            int32_t rcx_1 = *(arg5 + 0xc)
            int32_t rax_2 = (rdi_2 + 1).d
            arg5[1].d = rax_2
            
            if (i_6 != 2)
                if (rax_2 s> rcx_1)
                    sub_1406105e0(arg5)
                
                *(*arg5 + (rdi_2 << 2)) = 0
            else
                if (rax_2 s> rcx_1)
                    sub_1406105e0(arg5)
                
                *(*arg5 + (rdi_2 << 2)) = 0x3f800000
            
            i_6 += 1
        while (i_6 s< i_11.d)
else
    int32_t rcx_4 = sx.d(*(arg1 + 0x8d0))
    
    if (rcx_4 == 0)
        int64_t rdi_7 = sx.q(arg5[1].d)
        int32_t rax_9 = (rdi_7 + 1).d
        arg5[1].d = rax_9
        
        if (rax_9 s> *(arg5 + 0xc))
            sub_1406105e0(arg5)
        
        *(*arg5 + (rdi_7 << 2)) = 0x3f000000
        int64_t rdi_8 = sx.q(arg5[1].d)
        int32_t rax_11 = (rdi_8 + 1).d
        arg5[1].d = rax_11
        
        if (rax_11 s> *(arg5 + 0xc))
            sub_1406105e0(arg5)
        
        *(*arg5 + (rdi_8 << 2)) = 0x3f000000
    else if (rcx_4 == 1)
        int64_t rdi_5 = sx.q(arg5[1].d)
        int32_t rax_6 = (rdi_5 + 1).d
        arg5[1].d = rax_6
        
        if (rax_6 s> *(arg5 + 0xc))
            sub_1406105e0(arg5)
        
        *(*arg5 + (rdi_5 << 2)) = 0x3f34fdf4
        int64_t rdi_6 = sx.q(arg5[1].d)
        int32_t rax_8 = (rdi_6 + 1).d
        arg5[1].d = rax_8
        
        if (rax_8 s> *(arg5 + 0xc))
            sub_1406105e0(arg5)
        
        *(*arg5 + (rdi_6 << 2)) = 0x3f34fdf4
    else if (rcx_4 == 2)
        int64_t rdi_3 = sx.q(arg5[1].d)
        int32_t rax_3 = (rdi_3 + 1).d
        arg5[1].d = rax_3
        
        if (rax_3 s> *(arg5 + 0xc))
            sub_1406105e0(arg5)
        
        *(*arg5 + (rdi_3 << 2)) = 0x3f800000
        int64_t rdi_4 = sx.q(arg5[1].d)
        int32_t rax_5 = (rdi_4 + 1).d
        arg5[1].d = rax_5
        
        if (rax_5 s> *(arg5 + 0xc))
            sub_1406105e0(arg5)
        
        *(*arg5 + (rdi_4 << 2)) = 0x3f800000
    
    if (i_11.d s> 2)
        int32_t* rsi_1 = r13 + 0x40
        uint64_t i_8 = zx.q((i_11 - 2).d)
        uint64_t i_7
        
        do
            int64_t rdi_9 = sx.q(arg5[1].d)
            int32_t rax_12 = (rdi_9 + 1).d
            arg5[1].d = rax_12
            
            if (rax_12 s> *(arg5 + 0xc))
                sub_1406105e0(arg5)
            
            rax = zx.q(*rsi_1)
            rsi_1 = &rsi_1[8]
            *(*arg5 + (rdi_9 << 2)) = rax.d
            i_7 = i_8
            i_8 -= 1
        while (i_7 != 1)
