// 函数: sub_14060b6e0
// 地址: 0x14060b6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
int64_t rax_2 = (arg1[1] - r9) s>> 3

if (rax_2 == 0x1fffffffffffffff)
    sub_140610c20()
    noreturn

int64_t rcx_2 = (arg1[2] - r9) s>> 3
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0x1fffffffffffffff - rdx_1)
    int64_t rax_4 = rdx_1 + rcx_2
    int64_t rsi_1 = rax_2 + 1
    
    if (rax_4 u>= rax_2 + 1)
        rsi_1 = rax_4
    
    if (rsi_1 u<= 0x1fffffffffffffff)
        int64_t rsi_2 = rsi_1 << 3
        void* rbx_2
        
        if (rsi_2 u< 0x1000)
            if (rsi_2 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = j_sub_140a82f30(rsi_2)
            
            goto label_14060b7c0
        
        if (rsi_2 + 0x27 u> rsi_2)
            int64_t rax_5 = j_sub_140a82f30(rsi_2 + 0x27)
            
            if (rax_5 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx_2 = (rax_5 + 0x27) & 0xffffffffffffffe0
            *(rbx_2 - 8) = rax_5
        label_14060b7c0:
            void* result = rbx_2 + ((arg2 - r9) s>> 3 << 3)
            *result = *arg3
            void* rcx_5 = rbx_2
            int64_t r8 = arg1[1]
            int64_t rdx_2 = *arg1
            uint32_t count
            
            if (arg2 != r8)
                memmove(rcx_5, rdx_2, arg2.d - rdx_2.d)
                rcx_5 = result + 8
                count = (arg1[1]).d - arg2.d
                rdx_2 = arg2
            else
                count = r8.d - rdx_2.d
            
            memmove(rcx_5, rdx_2, count)
            void* rcx_6 = *arg1
            
            if (rcx_6 == 0)
                goto label_14060b836
            
            if (((arg1[2] - rcx_6) & 0xfffffffffffffff8) u< 0x1000)
                goto label_14060b82d
            
            void* r8_4 = *(rcx_6 - 8)
            
            if (rcx_6 - r8_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_6 = r8_4
        label_14060b82d:
            j_sub_140a74f90(rcx_6)
        label_14060b836:
            *arg1 = rbx_2
            arg1[1] = rbx_2 + ((rax_2 + 1) << 3)
            arg1[2] = rsi_2 + rbx_2
            return result

stdext::threads::_Throw_lock_error()
noreturn
