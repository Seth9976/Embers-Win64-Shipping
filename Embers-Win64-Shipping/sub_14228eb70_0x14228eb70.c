// 函数: sub_14228eb70
// 地址: 0x14228eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t var_48 = __security_cookie ^ &var_1c8
int32_t rdi = 0
int64_t result

while (true)
    if (rdi s< 0 || rdi s>= *(arg1 + 0x30))
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    int64_t* rbx_2 = sx.q(rdi) * 0x158 + *(arg1 + 0x28)
    void* rsi_1 = &rbx_2[6]
    int64_t var_1a8_1 = *rbx_2
    int32_t rax_2 = rbx_2[1].d
    int64_t var_19c_1 = *(rbx_2 + 0xc)
    int32_t var_194_1 = *(rbx_2 + 0x14)
    int64_t var_190_1 = rbx_2[3]
    int32_t var_188_1 = rbx_2[4].d
    int64_t var_184_1 = *(rbx_2 + 0x24)
    int32_t var_17c_1 = *(rbx_2 + 0x2c)
    void* var_b8_1 = nullptr
    int64_t r14_1 = sx.q(*(rsi_1 + 0xc8))
    void* r12_1 = *(rsi_1 + 0xc0)
    int32_t var_b0_1 = r14_1.d
    
    if (r14_1.d != 0)
        void var_178
        sub_142152c20(&var_178, r14_1.d, 0)
        void* rcx_1 = &var_178
        
        if (r12_1 != 0)
            rsi_1 = r12_1
        
        if (var_b8_1 != 0)
            rcx_1 = var_b8_1
        
        memcpy(rcx_1, rsi_1, (r14_1 * 0xc).d)
    else
        int32_t var_ac_1 = 0x10
    
    int32_t var_a8_1 = rbx_2[0x20].d
    int64_t var_a0 = rbx_2[0x21]
    int64_t var_98 = rbx_2[0x22]
    int64_t var_90_1 = rbx_2[0x23]
    int64_t var_88_1 = rbx_2[0x24]
    int32_t var_80_1 = rbx_2[0x25].d
    int32_t var_7c_1 = *(rbx_2 + 0x12c)
    int32_t var_78_1 = rbx_2[0x26].d
    int32_t var_74_1 = *(rbx_2 + 0x134)
    int32_t var_70_1 = rbx_2[0x27].d.d
    int128_t var_6c_1 = *(rbx_2 + 0x13c)
    int64_t var_5c_1 = *(rbx_2 + 0x14c)
    (*(*arg2 + 0x38))(arg2, &var_a0, arg1, 0, var_1a8_1, rax_2)
    (*(*arg2 + 0x38))(arg2, &var_98, arg1, 0)
    
    if (var_b8_1 != 0)
        sub_140a74f90(var_b8_1)
    
    rdi += 1

__security_check_cookie(var_48 ^ &var_1c8)
return result
