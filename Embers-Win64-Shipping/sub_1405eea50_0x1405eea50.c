// 函数: sub_1405eea50
// 地址: 0x1405eea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** lpCriticalSection_1 = arg2
int64_t var_48 = -2
CRITICAL_SECTION* lpCriticalSection = *arg1
int64_t* rbx = nullptr
void*** rsi = nullptr
lpCriticalSection_1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)

if (lpCriticalSection->__offset(0x30).d s> 0)
    int64_t rdx = sx.q(lpCriticalSection->__offset(0x30).d)
    rsi = *(lpCriticalSection->__offset(0x28).q + (rdx << 3) - 8)
    lpCriticalSection->__offset(0x30).d = (rdx - 1).d
else if (*lpCriticalSection->__offset(0x48).q != 0)
    rsi = *(*lpCriticalSection->__offset(0x48).q + 8)
    
    if (rsi[1][2](&rsi[1]) == 0)
        rsi = nullptr
    else
        void* rdx_1 = *lpCriticalSection->__offset(0x48).q
        
        if (rdx_1 != 0)
            int64_t rcx_4 = lpCriticalSection->__offset(0x48).q
            lpCriticalSection->__offset(0x48).q = rdx_1
            *(rdx_1 + 8) = 0
            j_sub_140a74f90(rcx_4)
        
        rsi[1][1](&rsi[1])

LeaveCriticalSection(lpCriticalSection)

if (rsi == 0)
    rsi = sub_1405f17c0()

int64_t rdx_3 = rsi[1]
(*rdx_3)(&rsi[1], rdx_3)
int64_t r15 = *arg1
int64_t var_40 = r15
int64_t* rdi = arg1[1]
int64_t* var_38 = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1

void*** rax_9 = j_sub_140a82f30(0x28)
void*** arg_8 = rax_9

if (rax_9 == 0)
    rax_9 = nullptr
    rbx = rdi
else
    rax_9[2] = r15
    rax_9[3] = rdi
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rax_9 = &data_142d62d30
    rax_9[4] = rsi

*arg2 = rsi
arg2[1] = rax_9

if (rbx != 0)
    int32_t rax_10 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rax_10 == 1)
        (*(*rbx + 8))(rbx, 1)

return arg2
