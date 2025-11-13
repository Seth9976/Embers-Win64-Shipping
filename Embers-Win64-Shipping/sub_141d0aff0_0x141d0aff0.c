// 函数: sub_141d0aff0
// 地址: 0x141d0aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140a7b0a0()

if (rax != 0)
    sub_140a8dc00(rax, 0)

sub_140af2b60()
char rax_1 = sub_140b21a10(&data_143dbb3f0, u"unloadpakentryfilenames")
void* rcx_2 = data_143ddb400
char arg_10 = rax_1
sub_140af2fd0(rcx_2, &data_14321db98, UnloadPakEntryFilenamesIfPossible", &arg_10, &data_143de5780)
int64_t* rsi = nullptr
int64_t* var_38

if (arg_10 == 0)
label_141d0b080:
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"unloadpakentries") != 0)
        goto label_141d0b09c
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"nounloadpakentries") != 0)
        goto label_141d0b080
    
label_141d0b09c:
    void* rcx_3 = data_143ddb400
    var_38 = nullptr
    int32_t i_2 = 0
    sub_140af2c50(rcx_3, &data_14321db98, 
        DirectoryRootsToKeepInMemoryWhenUnloadingPakEntryFilenames", &var_38, &data_143de5780)
    sub_141d13a80(sub_140a744f0(&data_143db7b00, u"PakFile"), &var_38)
    int32_t i_1 = i_2
    int64_t* rbx_1 = var_38
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_38
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

sub_140af2b60()
char rax_5 = sub_140b21a10(&data_143dbb3f0, u"shrinkpakentries")
void* rcx_7 = data_143ddb400
char arg_18 = rax_5
sub_140af2fd0(rcx_7, &data_14321db98, u"ShrinkPakEntriesMemoryUsage", &arg_18, &data_143de5780)

if (arg_18 != 0)
    int64_t* rax_6 = sub_140a744f0(&data_143db7b00, u"PakFile")
    var_38 = nullptr
    int32_t r14_1 = 0
    int32_t var_30_1 = 0
    EnterCriticalSection(&rax_6[7])
    int64_t rdi_1 = sx.q(rax_6[3].d)
    int32_t rbp_1 = 0
    int32_t temp0_1 = rdi_1.d
    
    if (temp0_1 != 0)
        if (temp0_1 s> 0)
            sub_1405a5410(&var_38, rdi_1.d)
            r14_1 = var_30_1
            rsi = var_38
        
        memcpy(&rsi[sx.q(r14_1) * 2], rax_6[2], (rdi_1 << 4).d)
        rbp_1 = r14_1 + rdi_1.d
    
    if (rax_6 != -0x38)
        LeaveCriticalSection(&rax_6[7])
    
    int64_t* rbx_3 = rsi
    void* rdi_4 = &rsi[sx.q(rbp_1) * 2]
    
    if (rsi != rdi_4)
        do
            int64_t* rcx_14 = _mm_bsrli_si128(*rbx_3, 8).q
            
            if (rcx_14[0x2a].b == 0)
                sub_141d11250(rcx_14)
            
            rbx_3 = &rbx_3[2]
        while (rbx_3 != rdi_4)
    
    if (rsi != 0)
        sub_140a74f90(rsi)

void* result = sub_140a7b0a0()

if (result == 0)
    return result

return sub_140a89de0(result, 0)
