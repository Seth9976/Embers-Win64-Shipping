// 函数: sub_1409e1670
// 地址: 0x1409e1670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r15 = arg3
int64_t* rbx = arg2
void*** rbp = arg1
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

uint64_t rcx_1 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int64_t r12 = *(ThreadLocalStoragePointer + (rcx_1 << 3))
int64_t var_70 = r12

if (data_143cee430 s> *(0x14 + r12))
    _Init_thread_header(&data_143cee430)
    
    if (data_143cee430 == 0xffffffff)
        data_143cee420 = 0
        data_143cee428.q = 0
        atexit(sub_142cb9770)
        _Init_thread_footer(&data_143cee430)

int32_t i_5 = data_143cee428

if (data_143cee42c s< 0)
    if (i_5 != 0)
        int64_t* rbx_4 = data_143cee420 + 8
        int32_t i
        
        do
            sub_1408464b0(rbx_4)
            rbx_4 = &rbx_4[4]
            i = i_5
            i_5 -= 1
        while (i != 1)
        rbx = arg2
    
    bool cond:1_1 = data_143cee42c == 0
    data_143cee428 = 0
    
    if (not(cond:1_1))
        sub_1405a51b0(&data_143cee420, 0)
else
    if (i_5 != 0)
        int64_t* rbx_2 = data_143cee420 + 8
        int32_t i_1
        
        do
            sub_1408464b0(rbx_2)
            rbx_2 = &rbx_2[4]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        rbx = arg2
    
    data_143cee428 = 0

int32_t* r14 = *rbx
int32_t* var_88 = r14
void* rax_3 = &r14[sx.q(rbx[1].d) * 6]

if (r14 != rax_3)
    do
        int64_t rbx_5 = sx.q(*r14)
        
        if (data_143cee448 s> *(0x14 + r12))
            _Init_thread_header(&data_143cee448)
            
            if (data_143cee448 == 0xffffffff)
                data_143cee438 = 0
                data_143cee440.q = 0
                atexit(sub_142cb9230)
                _Init_thread_footer(&data_143cee448)
        
        bool cond:3_1 = data_143cee444 s>= 0
        data_143cee440 = 0
        
        if (not(cond:3_1))
            sub_1405dadb0(&data_143cee438, 0)
        
        void* rdi = rbp[5]
        int64_t rsi_1 = rbx_5 * 0x28
        int64_t r10_1 = sx.q(*(*(rdi + 0xe0) + rsi_1 + 8))
        
        if (r10_1.d s<= data_143cee440)
            int32_t rax_6 = data_143cee440
            
            if (r10_1.d s< rax_6)
                int32_t rbx_7 = rax_6 - r10_1.d
                
                if (rax_6 != r10_1.d)
                    int32_t rax_7 = rax_6 - rbx_7
                    
                    if (rax_7 != r10_1.d)
                        int64_t r9_1 = data_143cee438
                        memmove(r9_1 + (r10_1 << 2), r9_1 + (sx.q(rbx_7 + r10_1.d) << 2), 
                            (rax_7 - r10_1.d) << 2)
                    
                    data_143cee440 -= rbx_7
                    sub_1405dac90(&data_143cee438)
        else
            bool cond:5_1 = r10_1.d s<= data_143cee444
            data_143cee440 = r10_1.d
            
            if (not(cond:5_1))
                sub_1405a4cf0(&data_143cee438)
        
        int64_t* rax_10 = *(rdi + 0xe0)
        int64_t r8_2 = 0
        int32_t* r9_2 = rax_10[rbx_5 * 5]
        uint64_t r10_3 = sx.q(rax_10[rbx_5 * 5 + 1].d) << 2 u>> 2
        
        if (r9_2 u> &r9_2[sx.q(*(&rax_10[rbx_5 * 5] + 8))])
            r10_3 = 0
        
        if (r10_3 != 0)
            do
                int64_t rax_13 = sx.q(*r9_2)
                r9_2 = &r9_2[1]
                *(data_143cee438 + (r8_2 << 2)) = *(*(rdi + 0x38) + rax_13 * 0x18)
                r8_2 += 1
            while (r8_2 != r10_3)
        
        int32_t rax_15 = r14[4]
        int32_t i_2 = 0
        int32_t r13_1 = -1
        int32_t i_3 = 0
        int32_t r12_1 = -1
        
        if (rax_15 + 1 s> 0)
            int32_t i_6 = rax_15 - 1
            int64_t r10_4 = rsi_1 + 0x20
            int64_t var_80_1 = r10_4
            int32_t* r11_1 = 0x14 + *(ThreadLocalStoragePointer + (rcx_1 << 3))
            int32_t* var_78_1 = r11_1
            
            do
                int32_t* r9_3 = data_143cee438
                int32_t i_4 = i_6
                
                if (i_2 s<= i_6)
                    i_4 = i_2
                
                int32_t* rdi_1 = r9_3
                void* r8_3 = &r9_3[sx.q(data_143cee440)]
                int32_t* rcx_11 = *(r14 + 8) + (sx.q(i_4) << 3)
                int32_t rdi_2
                
                if (r9_3 == r8_3)
                label_1409e19d3:
                    rdi_2 = -1
                else
                    while (*rdi_1 != *rcx_11)
                        rdi_1 = &rdi_1[1]
                        
                        if (rdi_1 == r8_3)
                            goto label_1409e19d3
                    
                    rdi_2 = ((rdi_1 - r9_3) s>> 2).d
                
                int32_t* rbx_8 = r9_3
                int32_t rbx_9
                
                if (r9_3 == r8_3)
                label_1409e19ed:
                    rbx_9 = -1
                else
                    while (*rbx_8 != rcx_11[1])
                        rbx_8 = &rbx_8[1]
                        
                        if (rbx_8 == r8_3)
                            goto label_1409e19ed
                    
                    rbx_9 = ((rbx_8 - r9_3) s>> 2).d
                
                int64_t rsi_2 = sx.q(data_143cee428)
                int32_t rax_21 = (rsi_2 + 1).d
                bool cond:10_1 = rax_21 s<= data_143cee42c
                data_143cee428 = rax_21
                
                if (not(cond:10_1))
                    sub_1405c4e40(&data_143cee420)
                    r10_4 = var_80_1
                    r11_1 = var_78_1
                
                int64_t r15_2 = rsi_2 << 5
                int32_t* r15_3 = r15_2 + data_143cee420
                int32_t rsi_3
                
                if (r15_2 == neg.q(data_143cee420))
                    rsi_3 = 0
                    r15_3 = nullptr
                else
                    rsi_3 = 0
                    *r15_3 = data_143a1c6c4
                    *(r15_3 + 8) = 0
                    *(r15_3 + 0x10) = 0
                    r15_3[6] = data_143a1c6c8
                    r15_3[7].b = 0
                
                *r15_3 = *(rbp[5][0x1c] + r10_4)
                r15_3[7].b = 0
                
                if (data_143cee460 s> *r11_1)
                    _Init_thread_header(&data_143cee460)
                    
                    if (data_143cee460 == 0xffffffff)
                        data_143cee450 = 0
                        data_143cee458.q = 0
                        atexit(sub_142cb92b0)
                        _Init_thread_footer(&data_143cee460)
                
                int32_t rcx_14 = data_143cee45c
                
                if (rcx_14 s< 0)
                    data_143cee458 = 0
                    
                    if (rcx_14 != 0)
                        sub_1405dadb0(&data_143cee450, 0)
                        rcx_14 = data_143cee45c
                        rsi_3 = data_143cee458
                
                int32_t rbp_1 = rbx_9
                int32_t r14_1 = rdi_2
                
                if (rdi_2 s< rbx_9)
                    rbp_1 = rdi_2
                
                if (rdi_2 s< rbx_9)
                    r14_1 = rbx_9
                
                int32_t var_94 = rbp_1
                int32_t var_98 = r14_1
                
                if (i_3 == 0)
                    data_143cee458 = rsi_3 + 1
                    
                    if (rsi_3 + 1 s> rcx_14)
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (sx.q(rsi_3) << 2)) = rbp_1
                    int64_t rbx_16 = sx.q(data_143cee458)
                    int32_t rax_50 = (rbx_16 + 1).d
                    bool cond:14_1 = rax_50 s<= data_143cee45c
                    data_143cee458 = rax_50
                    
                    if (not(cond:14_1))
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (rbx_16 << 2)) = r14_1
                    data_143cee440
                    int32_t temp1_3 = mods.dp.d(sx.q(r14_1 + 1), data_143cee440)
                    int32_t rdi_5 = temp1_3
                    
                    if (temp1_3 != rbp_1)
                        int32_t temp1_4
                        
                        do
                            int64_t rbx_17 = sx.q(data_143cee458)
                            int32_t rax_55 = (rbx_17 + 1).d
                            bool cond:19_1 = rax_55 s<= data_143cee45c
                            data_143cee458 = rax_55
                            
                            if (not(cond:19_1))
                                sub_1405a4cf0(&data_143cee450)
                            
                            *(data_143cee450 + (rbx_17 << 2)) = rdi_5
                            data_143cee440
                            temp1_4 = mods.dp.d(sx.q(rdi_5 + 1), data_143cee440)
                            rdi_5 = temp1_4
                        while (temp1_4 != rbp_1)
                else if (i_3 == rax_15)
                    data_143cee458 = rsi_3 + 1
                    
                    if (rsi_3 + 1 s> rcx_14)
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (sx.q(rsi_3) << 2)) = r14_1
                    int64_t rbx_14 = sx.q(data_143cee458)
                    int32_t rax_38 = (rbx_14 + 1).d
                    bool cond:16_1 = rax_38 s<= data_143cee45c
                    data_143cee458 = rax_38
                    
                    if (not(cond:16_1))
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (rbx_14 << 2)) = rbp_1
                    data_143cee440
                    int32_t temp1_1 = mods.dp.d(sx.q(rbp_1 + 1), data_143cee440)
                    int32_t rdi_4 = temp1_1
                    
                    if (temp1_1 != r14_1)
                        int32_t temp1_2
                        
                        do
                            int64_t rbx_15 = sx.q(data_143cee458)
                            int32_t rax_43 = (rbx_15 + 1).d
                            bool cond:23_1 = rax_43 s<= data_143cee45c
                            data_143cee458 = rax_43
                            
                            if (not(cond:23_1))
                                sub_1405a4cf0(&data_143cee450)
                            
                            *(data_143cee450 + (rbx_15 << 2)) = rdi_4
                            data_143cee440
                            temp1_2 = mods.dp.d(sx.q(rdi_4 + 1), data_143cee440)
                            rdi_4 = temp1_2
                        while (temp1_2 != r14_1)
                else
                    int32_t* r14_2 = &var_94
                    
                    if (rdi_2 s>= rbx_9)
                        r14_2 = &var_98
                    
                    data_143cee458 = rsi_3 + 1
                    
                    if (rsi_3 + 1 s> rcx_14)
                        sub_1405a4cf0(&data_143cee450)
                    
                    int32_t* rsi_4 = &var_98
                    *(data_143cee450 + (sx.q(rsi_3) << 2)) = *r14_2
                    int64_t rbx_11 = sx.q(data_143cee458)
                    
                    if (rdi_2 s>= rbx_9)
                        rsi_4 = &var_94
                    
                    int32_t rax_30 = (rbx_11 + 1).d
                    bool cond:18_1 = rax_30 s<= data_143cee45c
                    data_143cee458 = rax_30
                    
                    if (not(cond:18_1))
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (rbx_11 << 2)) = *rsi_4
                    int64_t rbx_12 = sx.q(data_143cee458)
                    int32_t rax_32 = (rbx_12 + 1).d
                    bool cond:20_1 = rax_32 s<= data_143cee45c
                    data_143cee458 = rax_32
                    
                    if (not(cond:20_1))
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (rbx_12 << 2)) = r12_1
                    int64_t rbx_13 = sx.q(data_143cee458)
                    int32_t rax_34 = (rbx_13 + 1).d
                    bool cond:21_1 = rax_34 s<= data_143cee45c
                    data_143cee458 = rax_34
                    
                    if (not(cond:21_1))
                        sub_1405a4cf0(&data_143cee450)
                    
                    *(data_143cee450 + (rbx_13 << 2)) = r13_1
                
                int32_t rax_60 = data_143cee458
                
                if (rax_60 s> r15_3[5])
                    sub_1405a5130(&r15_3[2], rax_60)
                    rax_60 = data_143cee458
                
                int32_t* r14_3 = data_143cee450
                int64_t rbp_2 = 0
                uint64_t r15_5 = sx.q(rax_60) << 2 u>> 2
                
                if (r14_3 u> &r14_3[sx.q(rax_60)])
                    r15_5 = 0
                
                if (r15_5 != 0)
                    do
                        int64_t rbx_18 = sx.q(r15_3[4])
                        int64_t rsi_5 = sx.q(*r14_3)
                        int32_t rax_63 = (rbx_18 + 1).d
                        r15_3[4] = rax_63
                        
                        if (rax_63 s> r15_3[5])
                            sub_1405a4df0(&r15_3[2])
                        
                        int32_t* rax_64 = *(r15_3 + 8) + rbx_18 * 0x18
                        
                        if (rax_64 == 0)
                            rax_64 = nullptr
                        else
                            *rax_64 = data_143a1c6b8
                            rax_64[1] = data_143a1c6b4
                            *(rax_64 + 8) = 0
                            *(rax_64 + 0x10) = 0
                        
                        rax_64[1] = data_143a1c6b4
                        int64_t* rdx_28 = arg1[5][0x1c]
                        int32_t* r8_4
                        
                        if (rsi_5.d s< 0 || rsi_5.d s>= rdx_28[rbx_5 * 5 + 1].d)
                            r8_4 = &data_143a1c6b8
                        else
                            r8_4 = rdx_28[rbx_5 * 5] + (rsi_5 << 2)
                        
                        r14_3 = &r14_3[1]
                        rbp_2 += 1
                        *rax_64 = *r8_4
                    while (rbp_2 != r15_5)
                    
                    r14_3 = data_143cee450
                
                i_2 = i_3 + 1
                r13_1 = *r14_3
                r12_1 = r14_3[1]
                rbp = arg1
                r14 = var_88
                r10_4 = var_80_1
                i_6 = rax_15 - 1
                r11_1 = var_78_1
                i_3 = i_2
            while (i_2 s< rax_15 + 1)
        
        r12 = var_70
        r14 = &r14[6]
        var_88 = r14
    while (r14 != rax_3)
    
    r15 = arg3
    rbx = arg2

if (data_143cee478 s> *(0x14 + r12))
    _Init_thread_header(&data_143cee478)
    
    if (data_143cee478 == 0xffffffff)
        data_143cee468 = 0
        data_143cee470.q = 0
        atexit(sub_142cb9470)
        _Init_thread_footer(&data_143cee478)

int32_t rdx_31 = data_143cee474
data_143cee470 = 0

if (rdx_31 s< 0 && rdx_31 != 0)
    sub_1405dadb0(&data_143cee468, 0)
    rdx_31 = data_143cee474

int32_t rax_68 = rbx[1].d

if (rax_68 s> rdx_31)
    sub_1405dadb0(&data_143cee468, rax_68)
    rax_68 = rbx[1].d
    rdx_31 = data_143cee474

int32_t* rbx_19 = *rbx
void* rsi_6 = &rbx_19[sx.q(rax_68) * 6]

if (rbx_19 != rsi_6)
    while (true)
        int64_t rdi_7 = sx.q(data_143cee470)
        int32_t rax_70 = (rdi_7 + 1).d
        data_143cee470 = rax_70
        
        if (rax_70 s> rdx_31)
            sub_1405a4cf0(&data_143cee468)
        
        int32_t rcx_29 = *rbx_19
        rbx_19 = &rbx_19[6]
        *(data_143cee468 + (rdi_7 << 2)) = rcx_29
        
        if (rbx_19 == rsi_6)
            break
        
        rdx_31 = data_143cee474

sub_1409b6930(rbp, &data_143cee468, 0, 0, 0, 0)

if (data_143cee490 s> *(0x14 + r12))
    _Init_thread_header(&data_143cee490)
    
    if (data_143cee490 == 0xffffffff)
        data_143cee480 = 0
        data_143cee488.q = 0
        atexit(sub_142cb8c00)
        _Init_thread_footer(&data_143cee490)

int32_t rax_73 = data_143cee48c
data_143cee488 = 0

if (rax_73 s< 0 && rax_73 != 0)
    sub_1405dadb0(&data_143cee480, 0)

if (data_143cee4a8 s> *(0x14 + r12))
    _Init_thread_header(&data_143cee4a8)
    
    if (data_143cee4a8 == 0xffffffff)
        data_143cee498 = 0
        data_143cee4a0.q = 0
        atexit(&data_142cb89c0)
        _Init_thread_footer(&data_143cee4a8)

int32_t rax_75 = data_143cee4a4
data_143cee4a0 = 0

if (rax_75 s< 0 && rax_75 != 0)
    sub_1405dadb0(&data_143cee498, 0)

int64_t result = sub_1409b4ab0(rbp, &data_143cee420, &data_143cee480, &data_143cee498)
int64_t rbx_20 = sx.q(data_143cee4a0)

if (rbx_20.d != 0)
    int32_t rax_76 = r15[1].d
    int32_t rdx_34 = rax_76 + rbx_20.d
    
    if (rdx_34 s> *(r15 + 0xc))
        sub_1405dadb0(r15, rdx_34)
        rax_76 = r15[1].d
    
    result = memcpy(*r15 + (sx.q(rax_76) << 2), data_143cee498, (rbx_20 << 2).d)
    r15[1].d += rbx_20.d

return result
