// 函数: sub_1408974b0
// 地址: 0x1408974b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rax = arg1[1]
int64_t* rcx = *arg1
int64_t rbp_2 = (rax - rcx) s>> 3

if (rbp_2 u>= arg2)
    return sub_140896080(rcx, rax, &arg_18)

if (arg2 u<= 0x1fffffffffffffff)
    int64_t rsi_1 = arg2 << 3
    void* i
    
    if (rsi_1 u< 0x1000)
        if (rsi_1 == 0)
            i = nullptr
        else
            i = j_sub_140a82f30(rsi_1)
        
        goto label_14089754b
    
    if (rsi_1 + 0x27 u> rsi_1)
        int64_t rax_1 = j_sub_140a82f30(rsi_1 + 0x27)
        
        if (rax_1 == 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        i = (rax_1 + 0x27) & 0xffffffffffffffe0
        *(i - 8) = rax_1
    label_14089754b:
        
        if (rbp_2 != 0)
            void* rcx_3 = *arg1
            
            if (rbp_2 << 3 u>= 0x1000)
                void* r8 = *(rcx_3 - 8)
                
                if (rcx_3 - r8 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_3 = r8
            
            j_sub_140a74f90(rcx_3)
        
        void* result = rsi_1 + i
        *arg1 = i
        arg1[1] = result
        arg1[2] = result
        
        for (; i != result; i += 8)
            *i = arg3
        
        return result

stdext::threads::_Throw_lock_error()
noreturn
