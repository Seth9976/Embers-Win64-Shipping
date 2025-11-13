// 函数: sub_14068b180
// 地址: 0x14068b180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0xfffffffffffffff)
    sub_140610c20()
    noreturn

int64_t rcx_2 = (arg1[2] - *arg1) s>> 4
int64_t rbp_2 = (arg1[1] - *arg1) s>> 4
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0xfffffffffffffff - rdx_1)
    int64_t rbx_1 = rdx_1 + rcx_2
    
    if (rbx_1 u< arg2)
        rbx_1 = arg2
    label_14068b1f5:
        int64_t rbx_2 = rbx_1 << 4
        void* const rsi_2
        
        if (rbx_2 u< 0x1000)
            if (rbx_2 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = j_sub_140a82f30(rbx_2)
            
            goto label_14068b24f
        
        if (rbx_2 + 0x27 u> rbx_2)
            int64_t rax_1 = j_sub_140a82f30(rbx_2 + 0x27)
            
            if (rax_1 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rsi_2 = (rax_1 + 0x27) & 0xffffffffffffffe0
            *(rsi_2 - 8) = rax_1
        label_14068b24f:
            
            if (arg2 != rbp_2)
                memset((rbp_2 << 4) + rsi_2, 0, (arg2 - rbp_2) << 4)
            
            int64_t rdx_2 = *arg1
            memmove(rsi_2, rdx_2, (arg1[1]).d - rdx_2.d)
            void* rcx_9 = *arg1
            
            if (rcx_9 == 0)
                goto label_14068b2ac
            
            if (((arg1[2] - rcx_9) & 0xfffffffffffffff0) u< 0x1000)
                goto label_14068b2a2
            
            void* r8_6 = *(rcx_9 - 8)
            
            if (rcx_9 - r8_6 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_9 = r8_6
        label_14068b2a2:
            j_sub_140a74f90(rcx_9)
        label_14068b2ac:
            void* result = rbx_2 + rsi_2
            *arg1 = rsi_2
            arg1[1] = (arg2 << 4) + rsi_2
            arg1[2] = result
            return result
    else if (rbx_1 u<= 0xfffffffffffffff)
        goto label_14068b1f5

stdext::threads::_Throw_lock_error()
noreturn
