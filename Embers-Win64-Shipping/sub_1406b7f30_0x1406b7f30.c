// 函数: sub_1406b7f30
// 地址: 0x1406b7f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** lpCriticalSection_1 = arg2
CRITICAL_SECTION* lpCriticalSection = *arg1
int64_t* rdi = nullptr
void*** rbx = nullptr
lpCriticalSection_1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)

if (lpCriticalSection->__offset(0x30).d s> 0)
    int64_t rcx_1 = sx.q(lpCriticalSection->__offset(0x30).d)
    rbx = *(lpCriticalSection->__offset(0x28).q + (rcx_1 << 3) - 8)
    lpCriticalSection->__offset(0x30).d = (rcx_1 - 1).d
else if (*lpCriticalSection->__offset(0x48).q != 0)
    rbx = *(*lpCriticalSection->__offset(0x48).q + 8)
    
    if (rbx[1][2](&rbx[1]) == 0)
        rbx = nullptr
    else
        void* rdx_1 = *lpCriticalSection->__offset(0x48).q
        
        if (rdx_1 != 0)
            int64_t rcx_5 = lpCriticalSection->__offset(0x48).q
            lpCriticalSection->__offset(0x48).q = rdx_1
            *(rdx_1 + 8) = 0
            j_sub_140a74f90(rcx_5)
        
        rbx[1][1](&rbx[1])

LeaveCriticalSection(lpCriticalSection)
void*** arg_8

if (rbx == 0)
    void*** rax_7 = j_sub_140a82f30(zx.q((&rbx[8]).d))
    rbx = rax_7
    arg_8 = rax_7
    
    if (rax_7 == 0)
        rbx = nullptr
    else
        *rbx = &data_142d8de18
        rbx[1] = &data_142d8de60
        __builtin_memset(&rbx[2], 0, 0x14)
        rbx[5] = 0
        rbx[6].d = 0
        rbx[7] = 0

(*rbx[1])(&rbx[1])
int64_t r15 = *arg1
int64_t var_38 = r15
int64_t* rsi = arg1[1]
int64_t* var_30 = rsi

if (rsi != 0)
    *(rsi + 0xc) += 1

void*** rax_9 = j_sub_140a82f30(0x28)
arg_8 = rax_9

if (rax_9 == 0)
    rax_9 = nullptr
    rdi = rsi
else
    rax_9[2] = r15
    rax_9[3] = rsi
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rax_9 = &data_142d8e2e0
    rax_9[4] = rbx

*arg2 = rbx
arg2[1] = rax_9

if (rdi != 0)
    int32_t rax_10 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (rax_10 == 1)
        (*(*rdi + 8))(rdi, 1)

return arg2
