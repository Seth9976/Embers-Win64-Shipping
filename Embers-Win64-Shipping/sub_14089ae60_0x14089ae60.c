// 函数: sub_14089ae60
// 地址: 0x14089ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST)
arg1[0x3c] = GetCurrentThreadId()
data_143ceaab0(arg1)
bool cond:0 = arg1[8] == 0
int64_t r15 = *(arg1 + 0x10)
int64_t r12 = *(arg1 + 0x18)
arg1[0x2a] = 0
int32_t rsi

if (cond:0)
    rsi = arg1[3]
else
    rsi = arg1[0xe]

uint32_t c = zx.d(*(arg1 + 7))
int32_t dwMilliseconds = divs.dp.d(sx.q(zx.d(arg1[2].w) * 0x3e8), *arg1)

while (arg1[0x33] != 0)
    int64_t rdi_1
    
    if (arg1[8] == 0)
        int64_t rax_6 = data_143ceaac8(arg1)
        rdi_1 = rax_6
        
        if (rax_6 == 0)
            rdi_1 = *(arg1 + 0xd8)
        
        goto label_14089af1e
    
    rdi_1 = *(arg1 + 0x30)
    
    if (rdi_1 != 0)
    label_14089af1e:
        CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xe0)
        
        if (lpCriticalSection != 0)
            EnterCriticalSection(lpCriticalSection)
        
        if (arg1[0x34] == 0)
            r15(r12, rdi_1, zx.q(rsi))
        else
            memset(rdi_1, c, sx.q(rsi))
        
        CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0xe0)
        
        if (lpCriticalSection_1 != 0)
            LeaveCriticalSection(lpCriticalSection_1)
        
        if (arg1[8] != 0)
            int64_t rax_7 = data_143ceaac8(arg1)
            rdi_1 = rax_7
            
            if (rax_7 == 0)
                rdi_1 = *(arg1 + 0xd8)
            
            memcpy(rdi_1, *(arg1 + 0x30), arg1[0xf])
        
        if (rdi_1 == *(arg1 + 0xd8))
            Sleep(dwMilliseconds)
        else
            data_143ceaac0(arg1)
            data_143ceaab8(arg1)

data_143ceaad0(arg1)

if (arg1[0x2a] == 1)
    free(*(arg1 + 0xb0))

return 0
