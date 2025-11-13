// 函数: sub_1409b4110
// 地址: 0x1409b4110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* arg_18 = arg3
int64_t i_9 = sx.q(arg2[1].d)
int32_t* rsi = nullptr
int32_t** r15 = arg4
uint64_t* rbp = arg3
arg3[1].d = 0
int64_t* r12 = arg2
void*** r14 = arg1

if (i_9.d s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, i_9.d)

TEB* gsbase
int32_t* rax_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cee538 s> *rax_2)
    _Init_thread_header(&data_143cee538)
    
    if (data_143cee538 == 0xffffffff)
        atexit(sub_142cb84b0)
        _Init_thread_footer(&data_143cee538)

int32_t rax_4 = data_143cee534
int32_t i_6 = data_143cee530

if (rax_4 s< 0)
    if (i_6 != 0)
        int64_t* rbx_4 = data_143cee528 + 8
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_4
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_4 = &rbx_4[4]
            i = i_6
            i_6 -= 1
        while (i != 1)
        rax_4 = data_143cee534
    
    data_143cee530 = 0
    
    if (rax_4 != 0)
        sub_1405a51b0(&data_143cee528, 0)
else
    if (i_6 != 0)
        int64_t* rbx_2 = data_143cee528 + 8
        int32_t i_1
        
        do
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_2 = &rbx_2[4]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    data_143cee530 = 0

int64_t i_10 = i_9

if (i_9.d s> 0)
    void* r14_1 = nullptr
    int32_t r15_1 = 1
    int64_t i_8 = i_9
    int64_t i_2
    
    do
        int64_t r9 = *arg2
        int32_t rdi = *(r14_1 + r9 + 4)
        int64_t rcx_4 = sx.q(mods.dp.d(sx.q(r15_1), i_9.d)) * 3
        int32_t rax_10 = data_143a1c6b4
        int32_t rbx_5 = *(r9 + (rcx_4 << 3) + 4)
        int64_t* r10_1 = arg1[5]
        
        if (rdi == rax_10)
            rdi = *(r10_1[7] + sx.q(*(r14_1 + r9)) * 0x18)
        
        if (rbx_5 == rax_10)
            rbx_5 = *(r10_1[7] + sx.q(*((rcx_4 << 3) + r9)) * 0x18)
        
        int32_t var_68
        sub_141cdf680(r10_1, &var_68, rdi, rbx_5)
        
        if (var_68 == data_143a1c6bc)
            int64_t rbp_1 = sx.q(data_143cee530)
            int32_t rax_13 = (rbp_1 + 1).d
            bool cond:1_1 = rax_13 s<= data_143cee534
            data_143cee530 = rax_13
            
            if (not(cond:1_1))
                sub_1405c4e40(&data_143cee528)
            
            int32_t* rcx_11 = (rbp_1 << 5) + data_143cee528
            *rcx_11 = data_143a1c6b4
            rcx_11[1] = data_143a1c6b4
            *(rcx_11 + 8) = 0
            *(rcx_11 + 0x10) = 0
            rcx_11[6] = data_143a1c6bc
            int32_t* rcx_14 = (sx.q(data_143cee530 - 1) << 5) + data_143cee528
            *rcx_14 = rdi
            rcx_14[1] = rbx_5
        
        r15_1 += 1
        r14_1 += 0x18
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)
    rbp = arg_18
    r15 = arg4
    r12 = arg2
    r14 = arg1

if (data_143cee530 s> 0)
    sub_1409b37f0(r14, &data_143cee528, rbp)

int32_t rax_19 = r15[1].d

if (i_9.d s> rax_19)
    r15[1].d = i_9.d
    
    if (i_9.d s> *(r15 + 0xc))
        sub_1405a4cf0(r15)
else if (i_9.d s< rax_19 && rax_19 != i_9.d)
    r15[1].d = i_9.d
    sub_1405dac90(r15)

int32_t* r14_2 = rax_2

if (data_143cee550 s> *r14_2)
    _Init_thread_header(&data_143cee550)
    
    if (data_143cee550 == 0xffffffff)
        atexit(sub_142cba3a0)
        _Init_thread_footer(&data_143cee550)

int32_t* result = zx.q(data_143cee54c)
int32_t i_7 = data_143cee548

if (result.d s< 0)
    if (i_7 != 0)
        int64_t* rbx_9 = data_143cee540 + 8
        int32_t i_3
        
        do
            int64_t rcx_21 = *rbx_9
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            rbx_9 = &rbx_9[4]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        result = zx.q(data_143cee54c)
    
    data_143cee548 = 0
    
    if (result.d != 0)
        result = sub_1405a51b0(&data_143cee540, 0)
else
    if (i_7 != 0)
        int64_t* rbx_7 = data_143cee540 + 8
        int32_t i_4
        
        do
            int64_t rcx_20 = *rbx_7
            
            if (rcx_20 != 0)
                result = sub_140a74f90(rcx_20)
            
            rbx_7 = &rbx_7[4]
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)
    
    data_143cee548 = 0

int64_t rbp_2 = 0

if (i_9.d s> 0)
    int32_t* r14_3 = nullptr
    
    do
        (*r15)[rbp_2] = *(r14_3 + *r12)
        int64_t rcx_23 = *r12
        result = zx.q(data_143a1c6b8)
        
        if (*(r14_3 + rcx_23) == result.d)
            int64_t rdi_1 = sx.q(data_143cee548)
            int32_t rbx_10 = *(r14_3 + rcx_23 + 4)
            int32_t rax_24 = (rdi_1 + 1).d
            bool cond:3_1 = rax_24 s<= data_143cee54c
            data_143cee548 = rax_24
            
            if (not(cond:3_1))
                sub_1405c4e40(&data_143cee540)
            
            int32_t* rcx_26 = (rdi_1 << 5) + data_143cee540
            *rcx_26 = data_143a1c6b4
            *(rcx_26 + 8) = 0
            *(rcx_26 + 0x10) = 0
            rcx_26[6] = data_143a1c6b8
            int32_t* rcx_29 = (sx.q(data_143cee548 - 1) << 5) + data_143cee540
            *rcx_29 = rbx_10
            void* rcx_31 = *r12 + 8 + r14_3
            
            if (&rcx_29[2] != rcx_31)
                int64_t r15_2 = sx.q(*(rcx_31 + 8))
                int64_t r12_1 = *rcx_31
                int32_t r8_3 = rcx_29[5]
                rcx_29[4] = r15_2.d
                
                if (r15_2.d != 0 || r8_3 != 0)
                    sub_1409da0d0(&rcx_29[2], r15_2.d, r8_3)
                    memcpy(*(rcx_29 + 8), r12_1, (r15_2 * 0x60).d)
                else
                    rcx_29[5] = 0
                
                r12 = arg2
                r15 = arg4
            
            sub_1409afd50(&arg1[0x99], &i_10)
            int32_t rax_30 = i_10.d
            int32_t* var_50
            *var_50 = rbx_10
            var_50[1] = 0xffffffff
            result = sub_1409b8a30(&arg1[0x99], &arg_18, rbx_10, var_50, rax_30, nullptr)
        
        rbp_2 += 1
        r14_3 = &r14_3[6]
    while (rbp_2 s< i_9)
    
    r14_2 = rax_2

if (data_143cee548 s> 0)
    if (data_143cee568 s> *r14_2)
        _Init_thread_header(&data_143cee568)
        
        if (data_143cee568 == 0xffffffff)
            atexit(sub_142cb8ec0)
            _Init_thread_footer(&data_143cee568)
    
    bool cond:4_1 = i_9.d s<= data_143cee564
    data_143cee560 = 0
    
    if (not(cond:4_1))
        sub_1405dadb0(&data_143cee558, i_9.d)
    
    sub_1409b5360(arg1, &data_143cee540, &data_143cee558)
    int32_t* i_5 = *r15
    result = sx.q(r15[1].d)
    
    for (void* r8_7 = &i_5[result]; i_5 != r8_7; i_5 = &i_5[1])
        result = zx.q(data_143a1c6b8)
        
        if (*i_5 == result.d)
            result = data_143cee558
            int32_t rcx_37 = *(rsi + result)
            rsi = &rsi[1]
            *i_5 = rcx_37

return result
