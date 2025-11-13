// 函数: sub_142279740
// 地址: 0x142279740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t result = __security_cookie ^ &var_e8
int64_t result_1 = result
int64_t* rcx = *arg1

if (rcx != 0)
    int64_t* rsi_1 = *arg2
    void* rdi_1 = nullptr
    void* var_48_1 = nullptr
    int32_t var_40_1 = 0
    uint64_t r15_2 = sx.q(arg2[1].d) << 3 u>> 3
    int32_t var_3c_1 = 0x10
    
    if (rsi_1 u> &rsi_1[arg2[1]])
        r15_2 = 0
    
    void var_c8
    
    if (r15_2 != 0)
        do
            void* rax_3 = sub_14224f4a0(*rsi_1)
            int64_t rbx_1 = sx.q(var_40_1)
            int32_t rcx_2 = (rbx_1 + 1).d
            var_40_1 = rcx_2
            
            if (rcx_2 s> var_3c_1)
                sub_1407c3c00(&var_c8, rbx_1.d)
            
            void* rdx_1 = &var_c8
            
            if (var_48_1 != 0)
                rdx_1 = var_48_1
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
            *(rdx_1 + (rbx_1 << 3)) = *rax_3
        while (rdi_1 != r15_2)
        
        rcx = *arg1
        rdi_1 = var_48_1
    
    void* rdx_2 = &var_c8
    
    if (rdi_1 != 0)
        rdx_2 = rdi_1
    
    result = (*(*rcx + 0xb8))(rcx, rdx_2, zx.q(var_40_1.w))
    
    if (var_48_1 != 0)
        result = sub_140a74f90(var_48_1)

__security_check_cookie(result_1 ^ &var_e8)
return result
