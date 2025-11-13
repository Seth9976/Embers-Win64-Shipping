// 函数: sub_142002f00
// 地址: 0x142002f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_948
int64_t rax_1 = __security_cookie ^ &var_948
int64_t r14 = arg2
arg2.b = 1
uint64_t result = sub_140bacf70(arg1, arg2.b, nullptr)

if (result.b != 0)
    int32_t var_85c_1 = 0x10
    void* var_868_1 = nullptr
    int32_t var_860_1 = 0
    void var_918
    void var_8e8
    sub_141ff7e10(&var_918, arg1, &var_8e8)
    void* rcx_1 = var_868_1
    void* rdi_1 = &var_8e8
    
    if (rcx_1 != 0)
        rdi_1 = rcx_1
    
    void* rsi_1 = rdi_1 + (sx.q(var_860_1) << 3)
    
    if (rdi_1 != rsi_1)
        do
            int16_t var_858[0x410]
            sub_140b63d10(rdi_1, &var_858)
            uint64_t rax_2
            int32_t rdx_3
            rax_2, rdx_3 = sub_140d1fe00(nullptr, &var_858)
            uint64_t rbx_1 = rax_2
            
            if (rax_2 == 0)
                rbx_1 = sub_140d23fd0(nullptr, &var_858, 0, nullptr, 0)
            else
                sub_140cdbab0(rax_2, rdx_3)
            
            if (rbx_1 != 0)
                int32_t var_910 = arg3
                int32_t* var_8f8_1 = &var_910
                int64_t var_908_1 = r14
                int64_t (* var_900)(int32_t* arg1, int64_t* arg2) = sub_141ffd190
                int64_t var_928
                var_928.d = 0
                sub_140d3bfe0(rbx_1, &var_900, 1, 0, var_928.d)
            
            rdi_1 += 8
        while (rdi_1 != rsi_1)
        
        rcx_1 = var_868_1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_948)
return result
