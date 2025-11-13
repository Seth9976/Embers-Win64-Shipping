// 函数: sub_14058da10
// 地址: 0x14058da10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0x3fffffffffffffff)
    sub_14058ac50()
    noreturn

int64_t rcx_2 = (arg1[2] - *arg1) s>> 2
int64_t r14_2 = (arg1[1] - *arg1) s>> 2
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0x3fffffffffffffff - rdx_1)
    int64_t rsi_1 = rdx_1 + rcx_2
    
    if (rsi_1 u< arg2)
        rsi_1 = arg2
    label_14058da84:
        int64_t rsi_2 = rsi_1 << 2
        void* const rbx_2
        
        if (rsi_2 u< 0x1000)
            if (rsi_2 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = j_sub_140a82f30(rsi_2)
            
            goto label_14058dae2
        
        if (rsi_2 + 0x27 u> rsi_2)
            int64_t rax_1 = j_sub_140a82f30(rsi_2 + 0x27)
            
            if (rax_1 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx_2 = (rax_1 + 0x27) & 0xffffffffffffffe0
            *(rbx_2 - 8) = rax_1
        label_14058dae2:
            memset(rbx_2 + (r14_2 << 2), 0, (arg2 - r14_2) << 2)
            int64_t rdx_2 = *arg1
            memmove(rbx_2, rdx_2, (arg1[1]).d - rdx_2.d)
            void* rcx_7 = *arg1
            
            if (rcx_7 == 0)
                goto label_14058db40
            
            if (((arg1[2] - rcx_7) & 0xfffffffffffffffc) u< 0x1000)
                goto label_14058db2d
            
            void* r8_6 = *(rcx_7 - 8)
            
            if (rcx_7 - r8_6 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_7 = r8_6
        label_14058db2d:
            j_sub_140a74f90(rcx_7)
        label_14058db40:
            *arg1 = rbx_2
            arg1[1] = rbx_2 + (arg2 << 2)
            void* result = rsi_2 + rbx_2
            arg1[2] = result
            return result
    else if (rsi_1 u<= 0x3fffffffffffffff)
        goto label_14058da84

stdext::threads::_Throw_lock_error()
noreturn
