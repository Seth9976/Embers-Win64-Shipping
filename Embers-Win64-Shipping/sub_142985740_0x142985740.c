// 函数: sub_142985740
// 地址: 0x142985740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_38 = -2
void** rsi = arg1
int64_t r15 = arg1[1]
int64_t rax = *arg1
int64_t r14_2 = (r15 - rax) s>> 3
int64_t rcx_2 = (arg1[2] - rax) s>> 3

if (arg2 u<= rcx_2)
    if (arg2 u> r14_2)
        int64_t count = (arg2 - r14_2) << 3
        memset(r15, 0, count)
        int64_t rax_8 = count + r15
        rsi[1] = rax_8
        return rax_8
    
    if (arg2 != r14_2)
        rax += arg2 << 3
        rsi[1] = rax
    
    return rax

if (arg2 u> 0x1fffffffffffffff)
    sub_14175ce00()
    noreturn

uint64_t rdx_1 = rcx_2 u>> 1
int64_t rax_2

if (rcx_2 u<= 0x1fffffffffffffff - rdx_1)
    rax_2 = rdx_1 + rcx_2
    
    if (rax_2 u< arg2)
        rax_2 = arg2
else
    rax_2 = arg2

int64_t arg_20 = rax_2
int64_t r15_1 = rax_2 << 3
int64_t rdx_2 = r15_1
void* const rbx_1

if (rax_2 u<= 0x1fffffffffffffff)
    if (rdx_2 u>= 0x1000)
        goto label_1429857e9
    
    if (rdx_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = j_sub_140a82f30(rdx_2)
else
    rdx_2 = -1
label_1429857e9:
    int64_t rcx_3 = rdx_2 + 0x27
    
    if (rcx_3 u<= rdx_2)
        rcx_3 = -1
    
    int64_t rax_3 = j_sub_140a82f30(rcx_3)
    
    if (rax_3 == 0)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx_1 = (rax_3 + 0x27) & 0xffffffffffffffe0
    *(rbx_1 - 8) = rax_3

void* const arg_10 = rbx_1
memset(rbx_1 + (r14_2 << 3), 0, (arg2 - r14_2) << 3)
void* rdx_3 = *rsi
memmove(rbx_1, rdx_3, (rsi[1]).d - rdx_3.d)
void* rcx_7 = *rsi

if (rcx_7 != 0)
    if (((rsi[2] - rcx_7) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8_5 = *(rcx_7 - 8)
        
        if (rcx_7 - r8_5 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = r8_5
    
    j_sub_140a74f90(rcx_7)

*rsi = rbx_1
rsi[1] = rbx_1 + (arg2 << 3)
void* rax_7 = r15_1 + rbx_1
rsi[2] = rax_7
return rax_7
