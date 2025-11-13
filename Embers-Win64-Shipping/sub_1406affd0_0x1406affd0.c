// 函数: sub_1406affd0
// 地址: 0x1406affd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t var_18 = 0xf
void* libFileName
__builtin_strncpy(&libFileName, "comdlg32.dll", 0xd)
int64_t var_20 = 0xc
HMODULE hLibModule = LoadLibraryA(&libFileName)

if (var_18 u>= 0x10)
    void* libFileName_1 = libFileName
    void* libFileName_2 = libFileName_1
    
    if (var_18 + 1 u>= 0x1000)
        libFileName_1 = *(libFileName_1 - 8)
        
        if (libFileName_2 - libFileName_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(libFileName_1)

int64_t var_18_1 = 0xf
int64_t var_20_1 = 0
libFileName.b = 0
uint32_t uSize = GetSystemDirectoryA(nullptr, 0)
int64_t var_40 = 0
int64_t var_38 = 0xf
uint8_t var_50 = 0
sub_140610c40(&var_50, zx.q(uSize), 0)
uint8_t* lpBuffer = &var_50

if (var_38 u>= 0x10)
    lpBuffer = var_50.q

GetSystemDirectoryA(lpBuffer, uSize)
ACTCTXA actCtx
actCtx.lpSource = "shell32.dll"
actCtx.cbSize = 0x38
uint8_t* rax_4 = &var_50
actCtx.dwFlags = 0xc

if (var_38 u>= 0x10)
    rax_4 = var_50.q

actCtx.lpAssemblyDirectory = rax_4
actCtx.wProcessorArchitecture = 0
actCtx.wLangId = 0
actCtx.lpResourceName = 0x7c
actCtx.lpApplicationName = 0
actCtx.hModule = 0
HANDLE result = CreateActCtxA(&actCtx)

if (var_38 u>= 0x10)
    void* rcx_3 = var_50.q
    void* rax_5 = rcx_3
    
    if (var_38 + 1 u>= 0x1000)
        rcx_3 = *(rcx_3 - 8)
        
        if (rax_5 - rcx_3 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_3)

int64_t var_40_1 = 0
int64_t var_38_1 = 0xf
var_50 = 0

if (hLibModule != 0)
    FreeLibrary(hLibModule)

__security_check_cookie(rax_1 ^ &var_a8)
return result
