// 函数: sub_142c59a50
// 地址: 0x142c59a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[4]

if (rdi != 0)
    EnterCriticalSection(rdi[3])
    int32_t rbx_1 = rdi[4].d
    rdi[4].d = 1
    LeaveCriticalSection(rdi[3])
    
    if (rbx_1 != 0)
        if (*rdi != 0)
            sub_142c71730(rdi)
        
        CRITICAL_SECTION* lpCriticalSection = rdi[3]
        
        if (lpCriticalSection != 0)
            DeleteCriticalSection(lpCriticalSection)
            data_143ccb8a0(rdi[3])
        
        data_143ccb8a0(rdi[5])
        void* rcx_6 = rdi[7]
        
        if (rcx_6 != 0)
            sub_142c710d0(rcx_6)
        
        memset(&rdi[3], 0, 0x60)
        data_143ccb8a0(arg1[4])
    else
        CloseHandle(*rdi)

int64_t rcx_9 = *arg1
arg1[4] = 0
int64_t result = data_143ccb8a0(rcx_9)
*arg1 = 0
return result
