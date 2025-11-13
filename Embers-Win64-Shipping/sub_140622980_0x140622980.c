// 函数: sub_140622980
// 地址: 0x140622980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *arg3
void* rbx = nullptr
int64_t r12 = arg3[1]
void* rdi = nullptr
void* r15 = nullptr
void* rbp = nullptr
int128_t zmm6
zmm6.d = fconvert.s(arg2)

if (r14 == r12)
    goto label_140622a28

int64_t rsi_2 = r12 - r14

if (rsi_2 u< 0x1000)
    if (rsi_2 != 0)
        rdi = j_sub_140a82f30(rsi_2)
    
    goto label_140622a0b

if (rsi_2 + 0x27 u<= rsi_2)
    stdext::threads::_Throw_lock_error()
    noreturn

int64_t rax_1 = j_sub_140a82f30(rsi_2 + 0x27)

if (rax_1 != 0)
    rdi = (rax_1 + 0x27) & 0xffffffffffffffe0
    *(rdi - 8) = rax_1
label_140622a0b:
    rbp = rdi + rsi_2
    memmove(rdi, r14, rsi_2.d)
    r15 = rdi - r14 + r12
label_140622a28:
    void** result = j_sub_140a82f30(0x28)
    void** result_1 = result
    
    if (result == 0)
        goto label_140622ada
    
    result[1].d = zmm6.d
    *result = nullptr
    __builtin_memset(&result[2], 0, 0x18)
    
    if (rdi == r15)
        goto label_140622ac6
    
    int64_t r14_2 = r15 - rdi
    
    if (r14_2 u< 0x1000)
        if (r14_2 != 0)
            rbx = j_sub_140a82f30(r14_2)
        
        goto label_140622a9a
    
    if (r14_2 + 0x27 u<= r14_2)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    int64_t rax_3 = j_sub_140a82f30(r14_2 + 0x27)
    
    if (rax_3 != 0)
        rbx = (rax_3 + 0x27) & 0xffffffffffffffe0
        *(rbx - 8) = rax_3
    label_140622a9a:
        result_1[2] = rbx
        result_1[3] = rbx
        result_1[4] = rbx + r14_2
        int64_t rbx_2 = result_1[2]
        memmove(rbx_2, rdi, r14_2.d)
        result_1[3] = rbx_2 - rdi + r15
    label_140622ac6:
        result = *(arg1 + 0x120)
        *(arg1 + 0x120) = result_1
        *result = result_1
    label_140622ada:
        
        if (rdi == 0)
            return result
        
        if (rbp - rdi u< 0x1000)
            return j_sub_140a74f90(rdi)
        
        void* rcx_6 = *(rdi - 8)
        
        if (rdi - rcx_6 - 8 u<= 0x1f)
            return j_sub_140a74f90(rcx_6)

_invalid_parameter_noinfo_noreturn()
noreturn
