// 函数: sub_142c59b30
// 地址: 0x142c59b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t rbp = arg1[0xb]
void var_28
int512_t entry_zmm2
sub_142c564b0(&var_28, 0xc, "%d", zx.q(arg1[3].d), entry_zmm2)
int32_t rax_2 = sub_142c71120(arg1[2], &var_28, &arg1[5], &arg1[4])
int32_t rdi = rax_2

if (rax_2 != 0)
    if (WSAGetLastError() != WSA_WAIT_EVENT_0)
        rdi = WSAGetLastError()
    
    if (rdi == 0)
        rdi = 8
    
    *(arg1 + 0x1c) = rdi

EnterCriticalSection(*arg1)
CRITICAL_SECTION* lpCriticalSection = *arg1

if (arg1[1].d == 0)
    arg1[1].d = 1
    LeaveCriticalSection(lpCriticalSection)
else
    LeaveCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = *arg1
    
    if (lpCriticalSection_1 != 0)
        DeleteCriticalSection(lpCriticalSection_1)
        data_143ccb8a0(*arg1)
    
    data_143ccb8a0(arg1[2])
    void* rcx_5 = arg1[4]
    
    if (rcx_5 != 0)
        sub_142c710d0(rcx_5)
    
    memset(arg1, 0, 0x60)
    data_143ccb8a0(rbp)

__security_check_cookie(rax_1 ^ &var_48)
return 0
