// 函数: sub_14089a4d0
// 地址: 0x14089a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0

if (data_143ceaef0 != 0 && data_143ceaa90 != 0)
    int32_t i = 0
    int64_t* rbx_1 = &data_143ceab30
    
    do
        if (*rbx_1 != 0)
            void* rcx = (&data_143ceab30)[zx.q(i)]
            
            if (rcx != 0)
                sub_14089b2a0(rcx)
                *rbx_1 = 0
        
        i += 1
        rbx_1 = &rbx_1[1]
    while (i u< 0x10)
    
    data_143ceaaf0()
    int64_t i_4 = sx.q(data_143ceab18)
    
    if (i_4.d s> 0 && data_143ceab10 != 0)
        int64_t i_1 = i_4
        
        if (i_4.d != 0)
            do
                i_1 -= 1
                free(*(data_143ceab10 + (i_1 << 3)))
            while (i_1 != 0)
    
    free(data_143ceab10)
    int64_t i_5 = sx.q(data_143ceab28)
    data_143ceab10 = 0
    data_143ceab18 = 0
    
    if (i_5.d s> 0 && data_143ceab20 != 0)
        int64_t i_2 = i_5
        
        if (i_5.d != 0)
            do
                i_2 -= 1
                free(*(data_143ceab20 + (i_2 << 3)))
            while (i_2 != 0)
    
    free(data_143ceab20)

memset(&data_143ceaa90, 0, 0xa0)
void** const rsi_1 = &data_142dfaf48
__builtin_memset(&data_143ceab30, 0, 0x80)

do
    void* rbx_2 = *rsi_1
    
    if (rbx_2 == 0)
        memset(&data_143ceaa90, 0, 0xa0)
        return 0xffffffff
    
    bool cond:1_1
    
    if (arg1 == 0)
        cond:1_1 = *(rbx_2 + 0x18) != 0
    else
        uint64_t _MaxCount = -1
        
        do
            _MaxCount += 1
        while (arg1[_MaxCount] != 0)
        
        cond:1_1 = strncmp(*rbx_2, arg1, _MaxCount) != 0
    
    if (not(cond:1_1))
        memset(&data_143ceaa90, 0, 0xa0)
        data_143ceaa90 = *rbx_2
        data_143ceaa98 = *(rbx_2 + 8)
        i_3 = (*(rbx_2 + 0x10))(&data_143ceaaa0)
    
    rsi_1 = &rsi_1[1]
while (i_3 == 0)

void (* rax_6)(void (* arg1)()) = data_143ceaaa0

if (rax_6 == 0)
    rax_6 = _guard_check_icall

data_143ceaaa0 = rax_6
int64_t (* rax_7)() = data_143ceaaa8

if (rax_7 == 0)
    rax_7 = sub_14089a880

data_143ceaaa8 = rax_7
void (* rax_8)(void (* arg1)()) = data_143ceaab0

if (rax_8 == 0)
    rax_8 = _guard_check_icall

data_143ceaab0 = rax_8
void (* rax_9)(void (* arg1)()) = data_143ceaab8

if (rax_9 == 0)
    rax_9 = _guard_check_icall

data_143ceaab8 = rax_9
void (* rax_10)(void (* arg1)()) = data_143ceaac0

if (rax_10 == 0)
    rax_10 = _guard_check_icall

data_143ceaac0 = rax_10
int64_t (* rax_11)() = data_143ceaac8

if (rax_11 == 0)
    rax_11 = sub_140592360

data_143ceaac8 = rax_11
void (* rax_12)(void (* arg1)()) = data_143ceaad0

if (rax_12 == 0)
    rax_12 = _guard_check_icall

data_143ceaad0 = rax_12
void (* rax_13)(void (* arg1)()) = data_143ceaad8

if (rax_13 == 0)
    rax_13 = _guard_check_icall

data_143ceaad8 = rax_13
void (* rax_14)(void* arg1) = data_143ceaae0

if (rax_14 == 0)
    rax_14 = sub_14089a840

data_143ceaae0 = rax_14
void (* rax_15)(void* arg1) = data_143ceaae8

if (rax_15 == 0)
    rax_15 = sub_14089a890

data_143ceaae8 = rax_15
void (* rax_16)(void (* arg1)()) = data_143ceaaf0

if (rax_16 == 0)
    rax_16 = _guard_check_icall

data_143ceaaf0 = rax_16
return 0
