// 函数: sub_14192e890
// 地址: 0x14192e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14193d1f0()
int64_t rdi = 0
int32_t arg_10

if (data_1439c77d0 != 0)
    void* rbx_1 = *arg1
    sub_14193d1f0()
    sub_14193a5e0(&data_1439c7730, &arg_10, rbx_1 + 0x450)
    int64_t rax_1 = sx.q(arg_10)
    void* const result
    
    if (rax_1.d == 0xffffffff)
        result = nullptr
    else
        result = rax_1 * 0x88 + data_1439c7730
    
    int64_t* rcx = result + 0x78
    
    if (result == 0)
        rcx = nullptr
    
    if (rcx != 0 && *rcx != 0)
        return result

int64_t rdx_2 = sx.q(data_143eff900)
int64_t rbx_2 = data_143eff7d8
*(&data_143eff8b0 + (rdx_2 << 3)) = *arg1
int32_t rdx_3 = rdx_2.d + 1

if (rdx_3 == 0xa)
    rdx_3 = 0

bool cond:0 = data_143de5480 == 0
data_143eff900 = rdx_3

if (not(cond:0))
    rdi.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_2 + (rdi << 2)) != 0)
    sub_14193d1f0()
    
    if (data_1439c77d0 != 0)
        TEB* gsbase
        
        if (data_143eff8a8
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143eff8a8)
            
            if (data_143eff8a8 == 0xffffffff)
                sub_141929790(&data_143eff880)
                atexit(&data_142cee460)
                _Init_thread_footer(&data_143eff8a8)
        
        bool cond:1_1 = data_143eff638 != 0
        void* rbx_3 = *arg1
        void* arg_18 = rbx_3
        
        if (cond:1_1)
            if (*(rbx_3 + 0x668) s>= 0)
                sub_1409740e0(sx.q(*(rbx_3 + 0x668)) * 0x58 + data_143eff880 + 8, rbx_3)
                *(rbx_3 + 0x668) = 0xffffffff
            
            sub_140ca9be0(sx.q(data_143eff89c) * 0x58 + data_143eff880 + 8, &arg_10, &arg_18, 
                nullptr)
            *(rbx_3 + 0x668) = data_143eff89c
        else
            sub_14193d1f0()
            sub_141939ed0(&data_1439c76c0, rbx_3 + 0x450)

return sub_141910700(*(*arg1 + 0x5e8)) __tailcall
