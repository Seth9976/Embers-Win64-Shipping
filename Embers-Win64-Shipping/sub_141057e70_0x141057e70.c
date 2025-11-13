// 函数: sub_141057e70
// 地址: 0x141057e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r13 = **(arg1 + 0x20)
int64_t* rax_6 = (*(*arg2 + 8))(arg2)
void* const rsi

if (rax_6 == 0)
    rsi = nullptr
else
    int64_t rdx = *rax_6
    void* rax_7 = (*(rdx + 0x48))(rax_6, rdx)
    rsi = rax_7
    
    if (rax_7 != 0 && data_1439c7a34 u> 1)
        void* rcx_2 = *(rax_7 + 0xe8)
        
        if (rcx_2 != rax_7)
            rsi = rcx_2
        
        if (rsi != 0)
            while (*(*(rsi + 8) + 0x18) != arg4)
                rsi = *(rsi + 0xb8)
                
                if (rsi == 0)
                    break

int64_t* rax_10 = (*(*arg2 + 8))(arg2)
int32_t i
void* const rdi

if (rax_10 == 0)
    rdi = nullptr
    i = arg5
else
    int64_t rdx_1 = *rax_10
    void* rax_11 = (*(rdx_1 + 0x48))(rax_10, rdx_1)
    rdi = rax_11
    
    if (rax_11 == 0 || data_1439c7a34 u<= 1)
        i = arg5
    else
        void* rax_12 = *(rax_11 + 0xe8)
        
        if (rax_12 != rdi)
            rdi = rax_12
        
        if (rdi == 0)
            i = arg5
        else
            i = arg5
            
            while (*(*(rdi + 8) + 0x18) != i)
                rdi = *(rdi + 0xb8)
                
                if (rdi == 0)
                    break

uint64_t rcx_6 = zx.q(arg4)
void* r14 = rsi + 0x58
int32_t rbx_2 = 1 << rcx_6.b | 1 << (i u% 0x20)

if (rsi == 0)
    r14 = 0xc0

sub_141037220(**(*(r13 + (rcx_6 << 3) + 0x9d8) + 0x6d8) + 0x1c0, *r14, 0x800, 0)
void* rsi_1 = rdi + 0x58

if (rdi == 0)
    rsi_1 = 0xc0

sub_141037220(**(*(r13 + (zx.q(arg5) << 3) + 0x9d8) + 0x6d8) + 0x1c0, *rsi_1, 0x400, 0)
sub_141056b90(arg1, rbx_2)
int32_t r9 = arg3[1]
int32_t var_64 = arg3[2]
int32_t var_60 = arg3[3]
void* rax_19 = *r14
int32_t var_70 = *arg3
int32_t var_6c = r9
int32_t var_68 = 0
int32_t var_5c = 1
void* rax_20 = *rsi_1
int64_t var_d0 = *(rax_19 + 0x20)
int32_t var_c8 = 0
int32_t var_c0 = 0
uint64_t rax_21 = zx.q(arg4)

if (arg6 != 0)
    rax_21 = zx.q(arg5)

int64_t var_a0 = *(rax_20 + 0x20)
int32_t var_98 = 0
int32_t var_90 = 0
int32_t* var_f8 = &var_70
int64_t* var_100 = &var_d0
int32_t var_108 = 0
void* rdi_1 = **(*(r13 + (rax_21 << 3) + 0x9d8) + 0x6d8)
int64_t* rcx_17 = *(*(rdi_1 + 0x1c8) + 0x30)
(*(*rcx_17 + 0x80))(rcx_17, &var_a0)
*(rdi_1 + 0x3b90) += 1
int64_t result = sub_141056b90(arg1, rbx_2)
__security_check_cookie(rax_1 ^ &var_128)
return result
