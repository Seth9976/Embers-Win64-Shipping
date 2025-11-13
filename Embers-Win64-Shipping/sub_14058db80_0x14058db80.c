// 函数: sub_14058db80
// 地址: 0x14058db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_3 = ((arg1[2] - *arg1) s>> 3) * -0x5555555555555555
int64_t r14_3 = ((arg1[1] - *arg1) s>> 3) * -0x5555555555555555
uint64_t rdx_1 = rcx_3 u>> 1

if (rcx_3 u<= 0xaaaaaaaaaaaaaaa - rdx_1)
    int64_t rax_1 = rdx_1 + rcx_3
    void* const rbx_1
    int64_t rsi_1
    
    if (rax_1 u< 0x12)
        rsi_1 = 0x1b0
        rbx_1 = j_sub_140a82f30(0x1b0)
    label_14058dc5f:
        void* rcx_6 = rbx_1 + r14_3 * 0x18
        int64_t i_1 = 0x12 - r14_3
        
        if (0x12 != r14_3)
            int64_t i
            
            do
                __builtin_memset(rcx_6, 0, 0x18)
                rcx_6 += 0x18
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int64_t* rcx_7 = *arg1
        int64_t r8_1 = arg1[1]
        
        if (rcx_7 != r8_1)
            int64_t* rdx_2 = rbx_1 + 0x10
            
            do
                rdx_2[-2] = 0
                rdx_2[-1] = 0
                *rdx_2 = 0
                rdx_2 = &rdx_2[3]
                rdx_2[-5] = *rcx_7
                rdx_2[-4] = rcx_7[1]
                rdx_2[-3] = rcx_7[2]
                __builtin_memset(rcx_7, 0, 0x18)
                rcx_7 = &rcx_7[3]
            while (rcx_7 != r8_1)
            
            rcx_7 = *arg1
        
        if (rcx_7 == 0)
            goto label_14058dd37
        
        sub_14058d8f0(rcx_7, arg1[1])
        void* rcx_8 = *arg1
        
        if (((arg1[2] - rcx_8) s>> 3) * 8 u< 0x1000)
            goto label_14058dd26
        
        void* r8_2 = *(rcx_8 - 8)
        
        if (rcx_8 - r8_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_8 = r8_2
    label_14058dd26:
        j_sub_140a74f90(rcx_8)
    label_14058dd37:
        *arg1 = rbx_1
        arg1[1] = rbx_1 + 0x1b0
        void* result = rsi_1 + rbx_1
        arg1[2] = result
        return result
    
    if (rax_1 u<= 0xaaaaaaaaaaaaaaa)
        rsi_1 = rax_1 * 0x18
        
        if (rsi_1 u< 0x1000)
            if (rsi_1 == 0)
                rbx_1 = nullptr
            else
                rbx_1 = j_sub_140a82f30(rsi_1)
            
            goto label_14058dc5f
        
        if (rsi_1 + 0x27 u> rsi_1)
            int64_t rax_4 = j_sub_140a82f30(rsi_1 + 0x27)
            
            if (rax_4 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx_1 = (rax_4 + 0x27) & 0xffffffffffffffe0
            *(rbx_1 - 8) = rax_4
            goto label_14058dc5f

stdext::threads::_Throw_lock_error()
noreturn
