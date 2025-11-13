// 函数: sub_141048e20
// 地址: 0x141048e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint32_t r8 = zx.d(arg2[1])
int32_t buffer2 = 0
int32_t var_64 = 0
int32_t rdx = 4
int32_t rdi = 2
int32_t rax_2

if (r8 == 1)
    rax_2 = 3
else if (r8 == 2)
    rax_2 = 2
else if (r8 == 3)
    rax_2 = 4
else
    rax_2 = 1

uint32_t rcx = zx.d(arg2[2])
int32_t var_74 = rax_2
int32_t rax_3

if (rcx == 1)
    rax_3 = 3
else if (rcx == 2)
    rax_3 = 2
else if (rcx == 3)
    rax_3 = 4
else
    rax_3 = 1

uint32_t rcx_3 = zx.d(arg2[3])
int32_t var_70 = rax_3

if (rcx_3 == 1)
    rdx = 3
else if (rcx_3 == 2)
    rdx = 2
else if (rcx_3 != 3)
    rdx = 1

int32_t r14 = *(arg2 + 0x10)
int32_t var_6c = rdx
int32_t var_68 = *(arg2 + 4)
TEB* gsbase

if (data_143e2b900 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b900)
    
    if (data_143e2b900 == 0xffffffff)
        int64_t* rcx_23 = data_143db18d0
        
        if (rcx_23 == 0)
            sub_140a53c40()
            rcx_23 = data_143db18d0
        
        int64_t* rax_22 = (*(*rcx_23 + 0xb0))(rcx_23, u"r.MaxAnisotropy", 1)
        int64_t rax_20
        
        if (rax_22 == 0)
            rax_20 = 0
        else
            int64_t rdx_11 = *rax_22
            rax_20 = (*(rdx_11 + 0x58))(rax_22, rdx_11)
        
        data_143e2b8f8 = rax_20
        _Init_thread_footer(&data_143e2b900)

int64_t rsi = data_143e2b8f8
int64_t rcx_8

if (data_143de5480 == 0)
    rcx_8 = 0
else
    rcx_8.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_9 = *(rsi + (rcx_8 << 2))

if (r14 s> 0)
    rcx_9 = r14

int32_t rax_7

if (rcx_9 s>= 1)
    rax_7 = 0x10
    
    if (rcx_9 s< 0x10)
        rax_7 = rcx_9
else
    rax_7 = 1

char rdx_1 = *arg2
char rcx_10 = arg2[0x18]
int32_t var_4c = *(arg2 + 8)
int32_t var_48 = *(arg2 + 0xc)
int32_t var_64_1 = rax_7

if (rdx_1 == 0)
    buffer2 = sbb.d(rax_7, rax_7, rcx_10 != 0) & 0x80
else
    int32_t buffer2_1
    
    if (rdx_1 == 1)
        buffer2_1 = 0x14
        
        if (rcx_10 != 0)
            buffer2_1 = 0x94
        
        buffer2 = buffer2_1
    else if (rdx_1 == 2)
    label_141048f92:
        buffer2_1 = 0x15
        
        if (rcx_10 != 0)
            buffer2_1 = 0x95
        
        buffer2 = buffer2_1
    else if (rdx_1 u> 2 && rdx_1 u<= 4)
        if (rax_7 == 1)
            goto label_141048f92
        
        buffer2_1 = 0x55
        
        if (rcx_10 != 0)
            buffer2_1 = 0xd5
        
        buffer2 = buffer2_1

int32_t var_a0 = *(arg2 + 0x14)
int128_t var_98
sub_140acc920(&var_98, &var_a0)
int128_t var_5c = var_98

if (arg2[0x18] != 1)
    rdi = 1

int32_t var_60 = rdi
EnterCriticalSection(&data_143e2c5a0)
void* const buffer1

if (*(arg1 + 0x738) == *(arg1 + 0x764))
label_141049070:
    buffer1 = nullptr
else
    void* rcx_12 = *(arg1 + 0x770)
    void* r8_3 = arg1 + 0x768
    
    if (rcx_12 != 0)
        r8_3 = rcx_12
    
    int32_t rbx_1 = *(r8_3 + (((sx.q(*(arg1 + 0x778)) - 1) & sx.q(buffer2)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_141049070_1:
        buffer1 = nullptr
    else
        int64_t r14_1 = *(arg1 + 0x730)
        
        while (true)
            buffer1 = r14_1 + sx.q(rbx_1) * 0x48
            
            if (memcmp(buffer1, &buffer2, 0x34) == 0)
                break
            
            rbx_1 = *(buffer1 + 0x40)
            
            if (rbx_1 == 0xffffffff)
                goto label_141049070_2
        
        if (rbx_1 == 0xffffffff)
        label_141049070_2:
            buffer1 = nullptr

void* rax_14 = buffer1 + 0x38

if (buffer1 == 0)
    rax_14 = nullptr

void*** result

if (rax_14 == 0)
    void*** result_2 = j_sub_140a82f30(0x40)
    result = result_2
    
    if (result_2 == 0)
        result = nullptr
    else
        int16_t rax_15 = *(arg1 + 0x780)
        *result = &data_142d3ff08
        result[1].d = 0
        *(result + 0xc) = 0
        result[2].w = 0x100
        result[3] = arg1
        result[4] = 0
        result[5].b = 1
        *result = &data_142f00928
        *(result + 0x3c) = rax_15
        result[6] = 0
        void var_80
        int64_t* rax_16 = sub_141013ee0(&result[3][0x56], &var_80, &result[7])
        void* rcx_17 = result[3]
        int64_t r8_5 = *rax_16
        result[6] = r8_5
        sub_141060120(rcx_17, &buffer2, r8_5)
    
    void*** result_1 = result
    
    if (result != 0)
        result[1].d += 1
    
    sub_14103b1f0(arg1 + 0x730, &buffer2, &result_1)
    void*** result_3 = result_1
    
    if (result_3 != 0)
        result_3[1].d -= 1
        
        if (result_3[1].d == 1)
            int64_t* result_4 = result_1
            char rax_17
            
            if (result_4[2].b == 0 && data_143f0f1d0 == 0)
                rax_17 = sub_1405949a0()
            
            if (result_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
                int64_t r8_7 = *result_4
                (*r8_7)(result_4, 1, r8_7)
            else
                bool z_1
                
                if (0 == *(result_4 + 0xc))
                    *(result_4 + 0xc) = 1
                    z_1 = true
                else
                    *(result_4 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, result_1)
    
    *(arg1 + 0x780) += 1
else
    result = *rax_14

LeaveCriticalSection(&data_143e2c5a0)
__security_check_cookie(rax_1 ^ &var_c8)
return result
