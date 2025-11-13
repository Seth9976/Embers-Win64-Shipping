// 函数: sub_141dcf670
// 地址: 0x141dcf670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_30 = 0
void* rcx = nullptr
void* var_38 = nullptr
int32_t var_2c = 0x18
void var_f8

if (arg1 != 0)
    void* rax_2 = sub_142459c10()
    void* const rsi_1
    
    if (rax_2 == 0)
        rsi_1 = nullptr
    else
        void* rax_3 = sub_142459c10()
        
        if (rax_3 == 0)
            rsi_1 = nullptr
        else
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rax_2 + 0x38))
                rsi_1 = nullptr
            else
                rsi_1 = rax_2
                
                if (*(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rsi_1 = nullptr
    
    void* r8_1 = &var_f8
    
    if (rsi_1 != sub_142459c10())
        sub_1419f71f0(arg1, rax_2, r8_1)
    else
        sub_1419f6fe0(arg1, rax_2, r8_1)
    
    rcx = var_38

void* rdi_1 = &var_f8
int64_t rsi_2 = 0

if (rcx != 0)
    rdi_1 = rcx

int64_t rbp = sx.q(var_30) << 3
void* result = rdi_1 + rbp
uint64_t rbp_1 = rbp u>> 3

if (rdi_1 u> result)
    rbp_1 = 0

if (rbp_1 != 0)
    do
        int64_t* rbx_2 = *rdi_1
        int64_t rdx
        rdx.b = 1
        (*(*rbx_2 + 0x3b0))(rbx_2, rdx)
        int32_t rax_9 = *(rbx_2 + 0xc)
        
        if (rax_9 s>= data_143e1d9b4)
            result = nullptr
        else
            uint32_t rdx_3 = zx.d(rax_9.w)
            
            if (rax_9 s< 0)
                rax_9 += 0xffff
                rdx_3 -= 0x10000
            
            result = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
        
        *(result + 8) |= 0x20000000
        rdi_1 += 8
        rsi_2 += 1
    while (rsi_2 != rbp_1)
    
    rcx = var_38

if (rcx != 0)
    result = sub_140a74f90(rcx)

__security_check_cookie(rax_1 ^ &var_118)
return result
