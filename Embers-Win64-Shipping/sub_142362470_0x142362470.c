// 函数: sub_142362470
// 地址: 0x142362470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* rbp = arg1
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f34ba8 s> *rbx_1)
    _Init_thread_header(&data_143f34ba8)
    
    if (data_143f34ba8 == 0xffffffff)
        sub_140b58260(&data_143f34ba0, u"Default Endpoint", 1)
        _Init_thread_footer(&data_143f34ba8)

int64_t rax_2 = *rbp

if (rax_2 == data_143f34ba0 || rax_2 == 0)
    return 0

if (data_143f34bb8 s> *rbx_1)
    _Init_thread_header(&data_143f34bb8)
    
    if (data_143f34bb8 == 0xffffffff)
        sub_140b58260(&data_143f34bb0, u"External Audio Endpoint", 1)
        _Init_thread_footer(&data_143f34bb8)

int64_t rbx_2 = data_143f34bb0
sub_140a387e0()
int64_t* r15 = nullptr
int32_t r12 = 0
int64_t* var_48 = nullptr
int32_t var_3c = 0
void* r8 = data_14399e720
int32_t rdi = 0
int32_t rax_4 = (*(r8 + 8))(&data_14399e720, rbx_2, r8)
int32_t r14 = 0

if (rax_4 s> 0)
    do
        void* r9_1 = data_14399e720
        int64_t rax_5 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, zx.q(r14), r9_1)
        int64_t rbp_1
        
        if (rax_5 == 0)
            rbp_1 = 0
        else
            rbp_1 = rax_5 - 8
        
        int64_t rsi_1 = sx.q(rdi)
        rdi = (rsi_1 + 1).d
        
        if (rdi s> r12)
            sub_1405a4d70(&var_48)
            r12 = var_3c
            r15 = var_48
        
        r14 += 1
        r15[rsi_1] = rbp_1
    while (r14 s< rax_4)
    
    rbp = arg_8

int64_t* rbx_3 = r15
void* rsi_2 = &r15[sx.q(rdi)]
int64_t* result

if (r15 == rsi_2)
label_1423625e0:
    result = nullptr
else
    while (true)
        result = *rbx_3
        
        if (result != 0)
            int64_t rax_9 = *(*(*result + 8))(result, &arg_8)
            
            if (*rbp == rax_9)
                break
        
        rbx_3 = &rbx_3[1]
        
        if (rbx_3 == rsi_2)
            goto label_1423625e0

if (r15 != 0)
    sub_140a74f90(r15)

return result
