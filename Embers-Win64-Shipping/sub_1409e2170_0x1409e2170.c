// 函数: sub_1409e2170
// 地址: 0x1409e2170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
TEB* gsbase
int32_t* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cedef0 s> *r15_1)
    _Init_thread_header(&data_143cedef0)
    
    if (data_143cedef0 == 0xffffffff)
        atexit(sub_142cba460)
        _Init_thread_footer(&data_143cedef0)

int32_t i_5 = data_143cedee8
int32_t rsi

if (data_143cedeec s>= 0)
    if (i_5 != 0)
        int64_t* rdi_2 = data_143cedee0 + 8
        int32_t i
        
        do
            int64_t rcx = *rdi_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rdi_2 = &rdi_2[4]
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    rsi = 0
    goto label_1409e2202

if (i_5 != 0)
    int64_t* rdi_4 = data_143cedee0 + 8
    int32_t i_1
    
    do
        int64_t rcx_8 = *rdi_4
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rdi_4 = &rdi_4[4]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

bool cond:1_1 = data_143cedeec == 0
rsi = 0
data_143cedee8 = 0

if (cond:1_1)
label_1409e2202:
    int32_t i_4 = 1 - rsi
    int32_t rax_2 = rsi + i_4
    bool cond:2_1 = rax_2 s<= data_143cedeec
    data_143cedee8 = rax_2
    
    if (not(cond:2_1))
        sub_1405c4e40(&data_143cedee0)
    
    int32_t* rdx_4 = (sx.q(rsi) << 5) + data_143cedee0
    
    if (i_4 != 0)
        void* rcx_1 = &rdx_4[5]
        int32_t i_2
        
        do
            rcx_1 += 0x20
            *rdx_4 = data_143a1c6b4
            rdx_4 = &rdx_4[8]
            *(rcx_1 - 0x2c) = 0
            *(rcx_1 - 0x24) = 0
            *(rcx_1 - 0x1c) = data_143a1c6b8
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
else
    sub_1405a51b0(&data_143cedee0, 0)
    rsi = data_143cedee8
    
    if (rsi s< 1)
        goto label_1409e2202
    
    if (rsi s> 1 && rsi != 1)
        int32_t i_6 = rsi - 1
        int64_t* rdi_6 = data_143cedee0 + 0x28
        int32_t i_3
        
        do
            int64_t rcx_9 = *rdi_6
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rdi_6 = &rdi_6[4]
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
        int32_t rax_12 = data_143cedee8
        int32_t rcx_11 = rax_12 - (rsi - 1)
        
        if (rcx_11 != 1)
            int64_t rcx_13 = data_143cedee0
            memmove(rcx_13 + 0x20, (sx.q(rsi) << 5) + rcx_13, (rcx_11 - 1) << 5)
            rax_12 = data_143cedee8
        
        data_143cedee8 = rax_12 - (rsi - 1)
        sub_1405dad20(&data_143cedee0)

int32_t var_20 = rbx.d
*data_143cedee0 = *(arg1[5][7] + rbx * 0x18)
void* rcx_3 = arg1[5]
int64_t var_28 = data_143cedee0 + 8
var_28.o = var_28.o
sub_14099a420(rcx_3 + 0x1a8, &var_28)

if (data_143cedf08 s> *r15_1)
    _Init_thread_header(&data_143cedf08)
    
    if (data_143cedf08 == 0xffffffff)
        atexit(sub_142cb8ea0)
        _Init_thread_footer(&data_143cedf08)

sub_1409b5360(arg1, &data_143cedee0, &data_143cedef8)
return sub_1409d9000(arg1, rbx.d, *data_143cedef8, arg3) __tailcall
