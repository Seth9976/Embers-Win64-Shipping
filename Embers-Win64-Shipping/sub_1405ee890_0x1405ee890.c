// 函数: sub_1405ee890
// 地址: 0x1405ee890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** lpCriticalSection_1 = arg2
int64_t var_48 = -2
CRITICAL_SECTION* lpCriticalSection = *arg1
int64_t* rdi = nullptr
void*** rbx = nullptr
lpCriticalSection_1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)

if (lpCriticalSection->__offset(0x30).d s> 0)
    int64_t rdx = sx.q(lpCriticalSection->__offset(0x30).d)
    rbx = *(lpCriticalSection->__offset(0x28).q + (rdx << 3) - 8)
    lpCriticalSection->__offset(0x30).d = (rdx - 1).d
else if (*lpCriticalSection->__offset(0x48).q != 0)
    rbx = *(*lpCriticalSection->__offset(0x48).q + 8)
    
    if (rbx[1][2](&rbx[1]) == 0)
        rbx = nullptr
    else
        void* rdx_1 = *lpCriticalSection->__offset(0x48).q
        
        if (rdx_1 != 0)
            int64_t rcx_4 = lpCriticalSection->__offset(0x48).q
            lpCriticalSection->__offset(0x48).q = rdx_1
            *(rdx_1 + 8) = 0
            j_sub_140a74f90(rcx_4)
        
        rbx[1][1](&rbx[1])

LeaveCriticalSection(lpCriticalSection)
void*** arg_8

if (rbx == 0)
    void*** rax_8 = j_sub_140a82f30(zx.q((&rbx[8]).d))
    rbx = rax_8
    arg_8 = rax_8
    
    if (rax_8 == 0)
        rbx = nullptr
    else
        *rbx = &data_142d5f070
        rbx[1] = &data_142d5f0b8
        __builtin_memset(&rbx[2], 0, 0x14)
        rbx[5] = 0
        rbx[6].d = 0
        rbx[7] = 0

(*rbx[1])(&rbx[1])
int64_t r15 = *arg1
int64_t var_40 = r15
int64_t* rsi = arg1[1]
int64_t* var_38 = rsi

if (rsi != 0)
    *(rsi + 0xc) += 1

void*** rax_10 = j_sub_140a82f30(0x28)
arg_8 = rax_10

if (rax_10 == 0)
    rax_10 = nullptr
    rdi = rsi
else
    rax_10[2] = r15
    rax_10[3] = rsi
    rax_10[1].d = 1
    *(rax_10 + 0xc) = 1
    *rax_10 = &data_142d62d40
    rax_10[4] = rbx

*arg2 = rbx
arg2[1] = rax_10

if (rdi != 0)
    int32_t rax_11 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rax_11 == 1)
        (*(*rdi + 8))(rdi, 1)

return arg2
