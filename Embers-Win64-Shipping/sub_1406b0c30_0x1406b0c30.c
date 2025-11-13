// 函数: sub_1406b0c30
// 地址: 0x1406b0c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_70 = 0
int64_t var_68 = 0xf
char procName = 0
int64_t var_48 = 0xf
int64_t var_50 = 0xb
void* libFileName_1
__builtin_strncpy(&libFileName_1, "shell32.dll", 0xc)
HMODULE rax_2 = LoadLibraryA(&libFileName_1)

if (var_48 u>= 0x10)
    void* libFileName_2 = libFileName_1
    void* libFileName_5 = libFileName_2
    
    if (var_48 + 1 u>= 0x1000)
        libFileName_2 = *(libFileName_2 - 8)
        
        if (libFileName_5 - libFileName_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(libFileName_2)

int64_t var_50_1 = 0
int64_t var_48_1 = 0xf
libFileName_1.b = 0
PSTR lpProcName = j_sub_140a82f30(0x20)
int64_t var_90 = 0x1b
int64_t var_88 = 0x1f
__builtin_strncpy(lpProcName, "SHCreateItemFrom", 0x10)
*(lpProcName + 0x10) = 0x4e676e6973726150
*(lpProcName + 0x18) = 0x6d61
lpProcName[0x1a] = 0x65
lpProcName[0x1b] = 0
PSTR libFileName = lpProcName
int64_t rax_5 = GetProcAddress(rax_2, lpProcName)

if (var_88 u>= 0x10)
    PSTR libFileName_3 = libFileName
    PSTR libFileName_6 = libFileName_3
    
    if (var_88 + 1 u>= 0x1000)
        libFileName_3 = *(libFileName_3 - 8)
        
        if (libFileName_6 - libFileName_3 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(libFileName_3)

int64_t var_88_1 = 0xf
int64_t var_90_1 = 0
libFileName.b = 0

if (rax_5 != 0)
    int64_t* rcx_2 = arg1 + 0x38
    
    if (*(arg1 + 0x50) u>= 8)
        rcx_2 = *rcx_2
    
    int64_t* var_d8
    
    if (rax_5(rcx_2, 0, &data_142d8b2f0, &var_d8) s>= 0)
        int64_t rax_9 = *arg3
        int64_t* rdx_5 = var_d8
        
        if (arg4 == 0)
            (*(rax_9 + 0x58))(arg3, rdx_5)
        else
            (*(rax_9 + 0x60))(arg3, rdx_5)
        
        int64_t* rcx_4 = var_d8
        (*(*rcx_4 + 0x10))(rcx_4)
    
    (*(*arg3 + 0x48))(arg3, 0x20)
    int64_t* rdx_6 = arg1 + 0x18
    
    if (*(arg1 + 0x30) u>= 8)
        rdx_6 = *rdx_6
    
    (*(*arg3 + 0x88))(arg3, rdx_6)
    uint128_t var_c0_1
    uint128_t var_b0_1
    int64_t* var_c8
    
    if ((*(*arg3 + 0x18))(arg3, GetActiveWindow()) s< 0)
        var_b0_1 = var_70.o
        var_c0_1 = procName.o
    else if ((*(*arg3 + 0xa0))(arg3, &var_c8) s< 0)
        var_b0_1 = var_70.o
        var_c0_1 = procName.o
    else
        int64_t* rcx_9 = var_c8
        int64_t var_d0 = 0
        (*(*rcx_9 + 0x28))(rcx_9, 0x80058000, &var_d0)
        int64_t* rcx_10 = var_c8
        (*(*rcx_10 + 0x10))(rcx_10)
        int64_t rdx_9 = var_d0
        
        if (rdx_9 == 0)
            var_b0_1 = var_70.o
            var_c0_1 = procName.o
        else
            int32_t cchWideChar = 0
            void* r8_1 = -ffffffffffffffff
            int64_t var_68_1 = 7
            procName.w = 0
            
            do
                r8_1 += 1
            while (*(rdx_9 + (r8_1 << 1)) != 0)
            
            sub_140593700(&procName, rdx_9, r8_1)
            char* lpWideCharStr = &procName
            
            if (var_68_1 u>= 8)
                lpWideCharStr = procName.q
            
            int64_t var_90_2 = 0
            uint64_t rdx_10 = sx.q(WideCharToMultiByte(0xfde9, 0, lpWideCharStr, cchWideChar, 
                nullptr, 0, nullptr, nullptr))
            int64_t var_88_2 = 0xf
            libFileName.b = 0
            sub_140610c40(&libFileName, rdx_10, 0)
            PSTR* lpMultiByteStr = &libFileName
            wchar16* lpWideCharStr_1 = &procName
            
            if (var_88_2 u>= 0x10)
                lpMultiByteStr = libFileName
            
            if (var_68_1 u>= 8)
                lpWideCharStr_1 = procName.q
            
            WideCharToMultiByte(0xfde9, 0, lpWideCharStr_1, cchWideChar, lpMultiByteStr, 
                var_90_2.d, nullptr, nullptr)
            libFileName.b = 0
            var_c0_1 = libFileName.o
            int64_t var_90_3 = 0
            int64_t var_88_3 = 0xf
            var_b0_1 = var_90_2.o
            
            if (var_68_1 u>= 8)
                void* rcx_13 = procName.q
                void* rax_21 = rcx_13
                
                if ((var_68_1 << 1) + 2 u>= 0x1000)
                    rcx_13 = *(rcx_13 - 8)
                    
                    if (rax_21 - rcx_13 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_13)
            
            libFileName = 0x6c642e3233656c6f
            char var_98_1 = 0x6c
            int64_t var_88_4 = 0xf
            int64_t var_90_4 = 9
            char var_97_1 = 0
            HMODULE rax_24 = LoadLibraryA(&libFileName)
            
            if (var_88_4 u>= 0x10)
                PSTR libFileName_4 = libFileName
                PSTR libFileName_7 = libFileName_4
                
                if (var_88_4 + 1 u>= 0x1000)
                    libFileName_4 = *(libFileName_4 - 8)
                    
                    if (libFileName_7 - libFileName_4 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(libFileName_4)
            
            int32_t var_78
            __builtin_strncpy(&var_78, "mFree", 6)
            int64_t var_90_5 = 0
            int64_t var_88_5 = 0xf
            libFileName.b = 0
            int64_t var_68_2 = 0xf
            int64_t var_70_1 = 0xd
            procName.q = 0x654d6b7361546f43
            int64_t rax_27 = GetProcAddress(rax_24, &procName)
            rax_27(var_d0)
            
            if (var_68_2 u>= 0x10)
                void* rcx_17 = procName.q
                void* rax_28 = rcx_17
                
                if (var_68_2 + 1 u>= 0x1000)
                    rcx_17 = *(rcx_17 - 8)
                    
                    if (rax_28 - rcx_17 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_17)
            
            if (rax_24 != 0)
                FreeLibrary(rax_24)
    int64_t rdx_18 = *arg3
    (*(rdx_18 + 0x10))(arg3, rdx_18)
    *arg2 = var_c0_1
    arg2[1] = var_b0_1
else
    *(arg2 + 0x18) = 0xf
    arg2[1].q = 0
    *arg2 = 0

if (rax_2 != 0)
    FreeLibrary(rax_2)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
