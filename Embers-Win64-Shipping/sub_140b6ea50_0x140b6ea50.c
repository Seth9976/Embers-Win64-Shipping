// 函数: sub_140b6ea50
// 地址: 0x140b6ea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int16_t* lpFileName_3 = nullptr
uint64_t rdi
rdi.b = 0
int16_t* lpFileName_1 = nullptr
int64_t var_2c0 = 0
int32_t rsi = 0
int32_t r13 = 0
int32_t rax_2

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&lpFileName_1, rbx_1.d + 1)
        r13 = var_2c0:4.d
        rsi = var_2c0.d
        lpFileName_3 = lpFileName_1
    
    rsi += rbx_1.d + 1
    var_2c0.d = rsi
    
    if (rsi s> r13)
        sub_140594770(&lpFileName_1)
        r13 = var_2c0:4.d
        rsi = var_2c0.d
        lpFileName_3 = lpFileName_1
    
    UnDecorator::getReferenceType(lpFileName_3, arg2, (rbx_1.d + 1) * 2)
    rax_2 = 4

if (arg2 == 0 || *arg2 == 0 || rsi == 0)
    rax_2 = 5

int32_t rdx_3 = rsi + rax_2
int16_t* lpFileName_4 = lpFileName_3
int32_t var_2ac = r13

if (rdx_3 s> r13)
    sub_1405947f0(&lpFileName_4, rdx_3)

sub_140a2cf70(&lpFileName_4, &data_142e5ff88, 3)
int16_t* const lpFileName = &data_142d40450
int16_t* lpFileName_6 = &data_142d40450

if (rsi != 0)
    lpFileName_6 = lpFileName_4

sub_140b74300(arg1, &lpFileName_1, lpFileName_6, 0)

if (var_2c0.d != 0)
    lpFileName = lpFileName_1

WIN32_FIND_DATAW findFileData
HANDLE hFindFile = FindFirstFileW(lpFileName, &findFileData)
int16_t* lpFileName_2 = lpFileName_1

if (lpFileName_2 != 0)
    sub_140a74f90(lpFileName_2)

if (hFindFile != -1)
    rdi.b = 1
    BOOL i
    
    do
        wchar16 rcx_7 = findFileData.cFileName[0]
        wchar16 rax_3 = findFileData.cFileName[1]
        
        if ((rcx_7 != 0x2e || rax_3 != 0)
                && (rcx_7 != 0x2e || rax_3 != 0x2e || findFileData.cFileName[2] != 0))
            rdi = zx.q((*arg3)(*(arg3 + 8), &findFileData))
        
        if (rdi.b == 0)
            break
        
        i = FindNextFileW(hFindFile, &findFileData)
    while (i != 0)
    FindClose(hFindFile)

int16_t* lpFileName_5 = lpFileName_4

if (lpFileName_5 != 0)
    sub_140a74f90(lpFileName_5)

__security_check_cookie(rax_1 ^ &var_2e8)
return zx.q(rdi.b)
