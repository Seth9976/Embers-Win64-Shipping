// 函数: sub_140b61850
// 地址: 0x140b61850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8d8
int64_t rax_1 = __security_cookie ^ &var_8d8
uint8_t* r15 = arg7
int16_t* r14 = arg3
HANDLE var_8a0 = arg8
sub_140a40760(r15)
*(r15 + 0x940c) = arg2
*(r15 + 0x9618) = arg1
int64_t rbx
rbx.b = arg10 == 1
*(r15 + 0x9404) = arg5
*(r15 + 0x9408) = arg4
char var_8a8 = 1
char var_8a7 = 1
char var_8a6 = 0

if (sub_140af87b0() != 0)
    rbx.b |= sub_140a4aa30()

uint64_t rcx_2 = data_143ddb400

if (rcx_2 != 0)
    sub_140af2fd0(rcx_2, /Script/UnrealEd.CrashReportsPrivacySettings", bSendUnattendedBugReports", 
        &var_8a8, &data_143de57c0)
    sub_140af2fd0(data_143ddb400, /Script/UnrealEd.AnalyticsPrivacySettings", bSendUsageData", 
        &var_8a7, &data_143de57c0)
    
    if (arg10 != 1)
        sub_140af2fd0(data_143ddb400, CrashReportClient", bImplicitSend", &var_8a6, &data_143de5780)

char rax_8

if (sub_1405949a0() == 0)
    rax_8 = var_8a8
    rcx_2 = zx.q(var_8a7)
else
    rax_8 = 0
    rcx_2.b = 0
    var_8a8 = 0
    var_8a7 = 0

if (rbx.b == 0 || rax_8 != 0)
    r15[0x9412] = rcx_2.b
    r15[0x9411] = rax_8
    void* rcx_5 = r15 - r14
    r15[0x9413] = var_8a6
    r15[0x9410] = rbx.b
    r15[0x9825] = data_143de5432
    int16_t i
    
    do
        i = *r14
        *(r14 + rcx_5) = i
        r14 = &r14[1]
    while (i != 0)
    char r13_1 = data_143db7a58
    int64_t rsi_1 = 0
    int32_t i_1 = 0
    uint32_t rax_11 = GetCurrentProcessId()
    uint32_t rbx_1 = rax_11
    uint32_t rax_12 = GetCurrentThreadId()
    uint32_t rdi_2 = rax_12
    uint32_t var_8a4 = rax_12
    HANDLE rax_13 = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0)
    void* var_48_1 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0x100
    void var_848
    
    if (rax_13 != -1)
        struct THREADENTRY32 lpte
        lpte.dwSize = 0x1c
        
        if (Thread32First(rax_13, &lpte) != 0)
            do
                if (lpte.th32OwnerProcessID == rbx_1)
                    uint32_t th32ThreadID = lpte.th32ThreadID
                    
                    if (th32ThreadID != rdi_2)
                        HANDLE hThread = OpenThread(THREAD_SUSPEND_RESUME, 0, th32ThreadID)
                        
                        if (hThread != 0)
                            SuspendThread(hThread)
                            int64_t rbx_2 = sx.q(var_40_1)
                            int32_t rcx_8 = (rbx_2 + 1).d
                            var_40_1 = rcx_8
                            
                            if (rcx_8 s> var_3c_1)
                                sub_140b632b0(&var_848, rbx_2.d)
                            
                            void* rcx_10 = &var_848
                            
                            if (var_48_1 != 0)
                                rcx_10 = var_48_1
                            
                            *(rcx_10 + (rbx_2 << 3)) = hThread
                            rbx_1 = rax_11
                        
                        rdi_2 = var_8a4
                        th32ThreadID = lpte.th32ThreadID
                    
                    *(r15 + (zx.q(i_1) << 2) + 0x1000) = th32ThreadID
                    int16_t* rcx_11
                    
                    if (th32ThreadID == data_143de5470)
                        rcx_11 = u"GameThread"
                    else if (r13_1 == 0)
                        rcx_11 = u"Unavailable"
                    else
                        sub_140a755d0()
                        int16_t** rax_17 = sub_140a7c900(&data_143db7b50, lpte.th32ThreadID)
                        
                        if (rax_17[1].d s> 1)
                            rcx_11 = *rax_17
                        else
                            rcx_11 = u"Unknown"
                    
                    void* rdx_5 = (zx.q(i_1 << 6) << 1) + 0x1400 - rcx_11 + r15
                    int16_t j
                    
                    do
                        j = *rcx_11
                        *(rcx_11 + rdx_5) = j
                        rcx_11 = &rcx_11[1]
                    while (j != 0)
                    i_1 += 1
                
                if (Thread32Next(rax_13, &lpte) == 0)
                    break
            while (i_1 u< 0x100)
    
    *(r15 + 0x9400) = i_1
    CloseHandle(rax_13)
    int32_t rdx_7 = data_143df1a30
    int16_t* var_888 = nullptr
    int32_t var_880_1 = 0
    
    if (sub_140a41470(&r15[0xa3d0], rdx_7, &var_888) != 0)
        int16_t* const rcx_15 = &data_142d40450
        
        if (var_880_1 != 0)
            rcx_15 = var_888
        
        int64_t rdx_9 = r15 - rcx_15
        int16_t i_2
        
        do
            i_2 = *rcx_15
            *(rcx_15 + rdx_9 + 0x9620) = i_2
            rcx_15 = &rcx_15[1]
        while (i_2 != 0)
        sub_140a421d0(&var_888)
    
    uint32_t dwProcessId = GetProcessId(*arg6)
    
    if (dwProcessId != 0)
        AllowSetForegroundWindow(dwProcessId)
    
    void* rbx_3 = &r15[0x13460]
    dwProcessId.b = 1
    
    if (r15 == rbx_3)
    label_140b61c79:
        var_8a4 = 0
        var_8a0 = nullptr
        rbx_3.b = 0
        int64_t var_898_1 = 0x10
        sub_1405daba0(&var_8a0)
        HANDLE rax_22 = var_8a0
        *rax_22 = 0
        *(rax_22 + 8) = 0
        
        if (sub_140b6ba90(arg6, &var_8a4) == 0)
            while (rbx_3.b == 0)
                if (sub_140b720a0(arg9, &var_8a0) != 0)
                    HANDLE rax_25 = var_8a0
                    
                    if (*rax_25 == 0xd && *(rax_25 + 1) == 0xe && *(rax_25 + 2) == 0xa)
                        rbx_3 = zx.q(rbx_3.b)
                        
                        if (*(rax_25 + 3) == 0xd)
                            rbx_3 = 1
                
                if (sub_140b6ba90(arg6, &var_8a4) != 0)
                    break
        
        HANDLE rcx_25 = var_8a0
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
    else
        HANDLE r14_1 = var_8a0
        
        do
            if (dwProcessId.b == 0)
                goto label_140b61d17
            
            var_8a4 = 0
            dwProcessId = sub_140b74690(r14_1, r15, rbx_3.d - r15.d, &var_8a4)
            r15 = &r15[sx.q(var_8a4)]
        while (r15 != rbx_3)
        
        if (dwProcessId.b != 0)
            goto label_140b61c79
    
label_140b61d17:
    void* rcx_28 = var_48_1
    void* rdi_5 = &var_848
    
    if (rcx_28 != 0)
        rdi_5 = rcx_28
    
    int64_t r14_3 = sx.q(var_40_1) << 3
    uint64_t r14_4 = r14_3 u>> 3
    
    if (rdi_5 u> rdi_5 + r14_3)
        r14_4 = 0
    
    if (r14_4 != 0)
        do
            HANDLE rbx_4 = *rdi_5
            ResumeThread(rbx_4)
            CloseHandle(rbx_4)
            rsi_1 += 1
            rdi_5 += 8
        while (rsi_1 != r14_4)
        
        rcx_28 = var_48_1
    
    int16_t* rax_29 = var_888
    
    if (rax_29 != 0)
        sub_140a74f90(rax_29)
        rcx_28 = var_48_1
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)

__security_check_cookie(rax_1 ^ &var_8d8)
return 0xffffffff
