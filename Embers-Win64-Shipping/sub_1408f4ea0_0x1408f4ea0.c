// 函数: sub_1408f4ea0
// 地址: 0x1408f4ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cec570 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cec570)
    
    if (data_143cec570 == 0xffffffff)
        sub_140b58260(&data_143cec568, u"MagicLeapARPinFeature", 1)
        _Init_thread_footer(&data_143cec570)

int64_t rbx = data_143cec568
sub_140a387e0()
int64_t result = 0
int64_t* var_48 = nullptr
int32_t var_3c = 0
void* r8 = data_14399e720
int64_t* r14 = nullptr
int32_t rdi = 0
int32_t r13 = 0
int32_t rax_2 = (*(r8 + 8))(&data_14399e720, rbx, r8)
int32_t r15 = 0

if (rax_2 s> 0)
    do
        void* r9_1 = data_14399e720
        int64_t rax_3 = (*(r9_1 + 0x10))(&data_14399e720, rbx, zx.q(r15), r9_1)
        int64_t rbp_1 = rax_3 - 8
        
        if (rax_3 == 0)
            rbp_1 = 0
        
        int64_t rsi_1 = sx.q(rdi)
        rdi = (rsi_1 + 1).d
        
        if (rdi s> r13)
            sub_1405a4d70(&var_48)
            r13 = var_3c
            r14 = var_48
        
        r15 += 1
        r14[rsi_1] = rbp_1
    while (r15 s< rax_2)
    
    if (rdi s> 0)
        result = *r14

if (r14 != 0)
    sub_140a74f90(r14)

return result
