// 函数: sub_140cd80c0
// 地址: 0x140cd80c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* rdi = *(arg1 + 0x10)
uint64_t r15
r15.b = arg1 != 0
void var_1c8

if (rdi != sub_140bdfab0())
    int64_t var_208 = 0
    int32_t var_200_1 = 0
    void** const var_1f8
    std::exception::exception(&var_1f8)
    var_1f8 = &data_142ea5430
    int64_t* var_1e0_1 = &var_208
    void* rax_3 = sub_140bdf2e0()
    void* r8_1 = arg1
    void* rax_4
    int64_t rcx_1
    
    if (rax_3 != 0)
        rcx_1 = sx.q(*(rax_3 + 0x38))
        rax_4 = *(r8_1 + 0x10)
    
    if (rax_3 == 0 || rcx_1.d s> *(rax_4 + 0x38)
            || *(*(rax_4 + 0x30) + (rcx_1 << 3)) != rax_3 + 0x30)
        int64_t* var_1f0
        int64_t* r12_1 = var_1f0
        
        if (r12_1 == 0)
            sub_140d1e450(&var_1f8)
            r8_1 = arg1
            r12_1 = var_1f0
        
        int64_t rsi_1 = r12_1[0x12]
        int64_t rbp_1 = r12_1[0xf]
        int64_t r14_1 = r12_1[0x13]
        int64_t rdi_1 = r12_1[0x14]
        r12_1[0x12] = r8_1
        (*(*r12_1 + 0x78))(r12_1, 0)
        r12_1[0x13] = 0
        r12_1[0x14] = 0
        void** var_1c0
        sub_140ce9c80(arg1, *SymBuffer::end(sub_140b4cb20(&var_1c0, r12_1), &var_1c8))
        sub_140b4cbb0(&var_1c0)
        r12_1[0x12] = rsi_1
        (*(*r12_1 + 0x78))(r12_1, rbp_1)
        r12_1[0x13] = r14_1
        r12_1[0x14] = rdi_1
        r8_1 = arg1
    
    sub_140cb0920(r8_1, &var_1f8, r8_1)
    r15 = zx.q(r15.b)
    
    if (var_200_1 != 0)
        r15 = 0
    
    sub_140d16360(&var_1f8)
    int64_t rcx_11 = var_208
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

uint64_t result

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    result = zx.q(r15.b)
else
    char result_1 = r15.b
    
    if (*(arg1 + 0x18) != *sub_140bdd7d0(rdi, &var_1c8))
        result_1 = 0
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_228)
return result
