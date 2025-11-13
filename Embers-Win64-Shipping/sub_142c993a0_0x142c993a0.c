// 函数: sub_142c993a0
// 地址: 0x142c993a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c99000()
void* lpLibFileName = &__dos_header.e_magic[zx.q(arg1[1])]
void* r14_1 = &__dos_header.e_magic[zx.q(arg1[2])]
void* r9_1 = &__dos_header.e_magic[zx.q(arg1[3])]
void* rcx_1 = &__dos_header.e_magic[zx.q(arg1[4])]
void* r13_1 = &__dos_header.e_magic[zx.q(arg1[5])]
char rax_1 = (*arg1).b
uint64_t arguments
arguments.d = arg1[7]
int32_t var_78 = 0x48
int32_t* var_70 = arg1
struct HINSTANCE__** var_68 = arg2
int128_t var_58
__builtin_memset(&var_58, 0, 0x24)

if ((rax_1 & 1) == 0)
    arguments = &var_78
    sub_142c9930c()
    RaiseException(0xc06d0057, 0, 1, &arguments)
    noreturn

HMODULE rdi = *r14_1
uint64_t r15_3 = zx.q(((arg2 - r9_1) s>> 3).d)
int32_t rax_4 = (*(rcx_1 + (r15_3 << 3)) u>> 0x3f).d ^ 1
var_58.d = rax_4

if (rax_4 == 0)
    var_58:8.d = zx.d(*(rcx_1 + (r15_3 << 3)))
else
    var_58:8.q = zx.q(*(rcx_1 + (r15_3 << 3))) + &__dos_header.e_cblp

HMODULE result = nullptr

if (rdi == 0)
    HMODULE rax_8 = LoadLibraryExA(lpLibFileName, nullptr, 0)
    rdi = rax_8
    
    if (rax_8 == 0)
        enum WIN32_ERROR var_38_1 = GetLastError()
        arguments = &var_78
        sub_142c9930c()
        RaiseException(0xc06d007e, 0, 1, &arguments)
        noreturn
    
    int64_t temp0_1 = *r14_1
    *r14_1 = rdi
    
    if (temp0_1 == rdi)
        FreeLibrary(rdi)

HMODULE var_48_1 = rdi

if (result == 0)
    if (arg1[5] == result.d || arg1[7] == result.d)
    label_142c995be:
        HMODULE result_1 = GetProcAddress(rdi, var_58:8.q)
        result = result_1
        
        if (result_1 == 0)
            enum WIN32_ERROR var_38_2 = GetLastError()
            arguments = &var_78
            sub_142c9930c()
            RaiseException(0xc06d007f, 0, 1, &arguments)
            noreturn
    else
        int32_t* rax_12 = rdi
        
        if (*(rax_12 + rdi) != 0x4550 || *(rax_12 + rdi + 8) != arguments.d
                || rdi != *(rax_12 + rdi + 0x30))
            goto label_142c995be
        
        result = *(r13_1 + (r15_3 << 3))
        
        if (result == 0)
            goto label_142c995be

*arg2 = result
sub_142c9930c()
return result
