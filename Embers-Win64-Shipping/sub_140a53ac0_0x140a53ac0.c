// 函数: sub_140a53ac0
// 地址: 0x140a53ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int64_t rbx = 0
uint64_t rcx = zx.q(data_14401b1a0)
data_143db4010 = 0

if (data_143db48c8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143db48c8)
    
    if (data_143db48c8 == 0xffffffff)
        data_143db48c0 = 0
        void*** rax_2 = j_sub_140a82f30(0x838)
        void*** rax_3
        
        if (rax_2 == 0)
            rax_3 = nullptr
        else
            rax_3 = sub_140b0b0f0(rax_2, nullptr, 0, 0)
        
        int64_t* rcx_6 = data_143db48c0
        data_143db48c0 = rax_3
        
        if (rcx_6 != 0)
            (**rcx_6)(rcx_6, 1)
        
        atexit(sub_142cbd0d0)
        _Init_thread_footer(&data_143db48c8)

int64_t* rdi = data_143db48c0
sub_140b19e60()
sub_140b0e310(&data_1439a8bd0, rdi)
int64_t* var_18 = nullptr
int32_t var_10 = 0
sub_140a48000(&var_18)
int64_t* r14 = var_18
int64_t* rsi = r14
void* rcx_3 = &r14[sx.q(var_10)]
uint64_t rbp_3 = (rcx_3 - r14 + 7) u>> 3

if (r14 u> rcx_3)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t* rdi_1 = *rsi
        sub_140b19e60()
        sub_140b0e310(&data_1439a8bd0, rdi_1)
        rbx += 1
        rsi = &rsi[1]
    while (rbx != rbp_3)

sub_140b19e60()
int64_t result = sub_140b0e310(&data_1439a8bd0, nullptr)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
