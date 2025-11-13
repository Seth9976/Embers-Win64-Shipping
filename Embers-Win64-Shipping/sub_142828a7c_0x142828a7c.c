// 函数: sub_142828a7c
// 地址: 0x142828a7c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x10)
int64_t rcx = 1

if (r8 != 0)
    rcx = r8

while (true)
    int64_t rdi_2 = rcx - r8
    
    if (rdi_2 u>= arg2 && rcx u>= 8)
        int64_t rsi = *(arg1 + 0x18)
        
        if (rcx u> 0x1fffffffffffffff)
            stdext::threads::_Throw_lock_error()
            noreturn
        
        void* rax_2 = sub_14058b9f0(rcx << 3)
        int64_t r9 = *(arg1 + 8)
        int64_t rax_3 = j_std::_Uninitialized_copy<struct CHN* __ptr64* __ptr64,class std::allocator<struct CHN* __ptr64> >(
            r9 + (rsi << 3), r9 + (*(arg1 + 0x10) << 3), rax_2 + (rsi << 3))
        int64_t rcx_4 = *(arg1 + 8)
        void* rax_5
        
        if (rsi u> rdi_2)
            j_std::_Uninitialized_copy<struct CHN* __ptr64* __ptr64,class std::allocator<struct CHN* __ptr64> >(
                rcx_4, rcx_4 + (rdi_2 << 3), rax_3)
            int64_t rax_6 = *(arg1 + 8)
            rax_5 = j_std::_Uninitialized_copy<struct CHN* __ptr64* __ptr64,class std::allocator<struct CHN* __ptr64> >(
                rax_6 + (rdi_2 << 3), rax_6 + (rsi << 3), rax_2)
            rsi = rdi_2
        else
            sub_14282577c(
                j_std::_Uninitialized_copy<struct CHN* __ptr64* __ptr64,class std::allocator<struct CHN* __ptr64> >(
                    rcx_4, rcx_4 + (rsi << 3), rax_3), 
                rdi_2 - rsi)
            rax_5 = rax_2
        
        int64_t result = sub_14282577c(rax_5, rsi)
        void* rcx_8 = *(arg1 + 8)
        
        if (rcx_8 != 0)
            result = sub_14058ba50(rcx_8, *(arg1 + 0x10) << 3)
        
        *(arg1 + 0x10) += rdi_2
        *(arg1 + 8) = rax_2
        return result
    
    if (0x2e8ba2e8ba2e8ba - rcx u< rcx)
        break
    
    rcx *= 2

sub_141782510()
noreturn
