// 函数: sub_1406945d0
// 地址: 0x1406945d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
bool cond:0 = arg1[5] u< 0x10
int64_t* lpMultiByteStr_1 = &arg1[2]
int128_t* result = arg2
int64_t* rsi = arg1
void** ulCookie = arg1
uint8_t* lpMultiByteStr_4 = lpMultiByteStr_1

if (not(cond:0))
    lpMultiByteStr_4 = *lpMultiByteStr_1

void** libFileName
sub_14068c440(&libFileName, 
    sx.q(MultiByteToWideChar(0xfde9, 0, lpMultiByteStr_4, lpMultiByteStr_1[2].d, nullptr, 0)), 0)
void** lpWideCharStr = &libFileName
int64_t var_f0

if (var_f0 u>= 8)
    lpWideCharStr = libFileName

if (lpMultiByteStr_1[3] u>= 0x10)
    lpMultiByteStr_1 = *lpMultiByteStr_1

int32_t cchWideChar
MultiByteToWideChar(0xfde9, 0, lpMultiByteStr_1, lpMultiByteStr_1[2].d, lpWideCharStr, cchWideChar)
int64_t* rdi_1 = *rsi + 0x18

if (rdi_1 != &libFileName)
    sub_14058f000(rdi_1)
    *rdi_1 = libFileName.o
    *(rdi_1 + 0x10) = cchWideChar.o
else if (var_f0 u>= 8)
    void** libFileName_1 = libFileName
    void** libFileName_5 = libFileName_1
    
    if ((var_f0 << 1) + 2 u>= 0x1000)
        libFileName_1 = libFileName_1[-1]
        
        if (libFileName_5 - libFileName_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(libFileName_1)

void* lpMultiByteStr_2 = &rsi[6]
void* lpMultiByteStr_5 = lpMultiByteStr_2

if (rsi[9] u>= 0x10)
    lpMultiByteStr_5 = *lpMultiByteStr_2

void* rbx_1 = lpMultiByteStr_2 + 0x10
sub_14068c440(&libFileName, 
    sx.q(MultiByteToWideChar(0xfde9, 0, lpMultiByteStr_5, *(lpMultiByteStr_2 + 0x10), nullptr, 0)), 
    0)
void*** lpWideCharStr_1 = &libFileName

if (var_f0 u>= 8)
    lpWideCharStr_1 = libFileName

if (*(lpMultiByteStr_2 + 0x18) u>= 0x10)
    lpMultiByteStr_2 = *lpMultiByteStr_2

MultiByteToWideChar(0xfde9, 0, lpMultiByteStr_2, *rbx_1, lpWideCharStr_1, cchWideChar)
int64_t* rdi_3 = *rsi + 0x38

if (rdi_3 != &libFileName)
    sub_14058f000(rdi_3)
    *rdi_3 = libFileName.o
    *(rdi_3 + 0x10) = cchWideChar.o
else if (var_f0 u>= 8)
    void** libFileName_2 = libFileName
    void** libFileName_6 = libFileName_2
    
    if ((var_f0 << 1) + 2 u>= 0x1000)
        libFileName_2 = libFileName_2[-1]
        
        if (libFileName_6 - libFileName_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(libFileName_2)

void* lpMultiByteStr_3 = &rsi[0xa]
void* lpMultiByteStr_6 = lpMultiByteStr_3

if (rsi[0xd] u>= 0x10)
    lpMultiByteStr_6 = *lpMultiByteStr_3

void* rbx_2 = lpMultiByteStr_3 + 0x10
void** lpWideCharStr_5
sub_14068c440(&lpWideCharStr_5, 
    sx.q(MultiByteToWideChar(0xfde9, 0, lpMultiByteStr_6, *(lpMultiByteStr_3 + 0x10), nullptr, 0)), 
    0)
void** lpWideCharStr_2 = &lpWideCharStr_5
int64_t var_70

if (var_70 u>= 8)
    lpWideCharStr_2 = lpWideCharStr_5

if (*(lpMultiByteStr_3 + 0x18) u>= 0x10)
    lpMultiByteStr_3 = *lpMultiByteStr_3

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int32_t cchWideChar_2
MultiByteToWideChar(0xfde9, 0, lpMultiByteStr_3, *rbx_2, lpWideCharStr_2, cchWideChar_2)
uint64_t procName
PSTR lpProcName_3
wchar16 var_a8
void** lpWideCharStr_7

if (rsi[1].d != 2)
    int128_t var_208 = zx.o(0)
    var_208.d = 0x98
    int128_t var_1f8
    __builtin_memset(&var_1f8, 0, 0x28)
    int128_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x24)
    int128_t var_198
    __builtin_memset(&var_198, 0, 0x28)
    var_208:8.q = GetActiveWindow()
    void** lpWideCharStr_6 = &lpWideCharStr_5
    int64_t var_d8_1 = 0
    
    if (var_70 u>= 8)
        lpWideCharStr_6 = lpWideCharStr_5
    
    var_1f8:8.q = lpWideCharStr_6
    int64_t var_d0_1 = 7
    int16_t var_e8 = 0
    int16_t* rax_42 = public: static struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M * __cdecl phmap::allocator_traits<class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M>>::allocate(class std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, unsigned __int64)'::`2'::M> &, unsigned __int64)(
        &var_e8, 0x10408)
    int64_t var_d8_2 = 0x10400
    int64_t var_d0_2 = 0x10407
    __builtin_memset(rax_42, 0, 0x20800)
    rax_42[0x10400] = 0
    int16_t* rcx_22 = &var_e8
    
    if (var_d0_2 u>= 8)
        rcx_22 = rax_42
    
    var_e8.q = rax_42
    void* rdx_32 = *rsi
    int16_t* var_1d8_1 = rcx_22
    var_1d8_1:8.d = var_d8_2.d
    int128_t var_1b8
    
    if (*(rdx_32 + 0x48) != 0)
        void* lpFileName = rdx_32 + 0x38
        
        if (*(rdx_32 + 0x50) u>= 8)
            lpFileName = *lpFileName
        
        uint32_t rax_44 = GetFileAttributesW(lpFileName)
        
        if (rax_44 == 0xffffffff || (rax_44.b & 0x10) == 0)
            rdx_32 = *rsi
            void* rcx_23 = rdx_32 + 0x38
            
            if (*(rdx_32 + 0x48) u> var_d8_2)
                if (*(rcx_23 + 0x18) u>= 8)
                    rcx_23 = *rcx_23
                
                var_1c8.q = rcx_23
                var_1c8:8.d = *(rdx_32 + 0x48)
            else
                if (*(rcx_23 + 0x18) u>= 8)
                    rcx_23 = *rcx_23
                
                int16_t* rdx_33 = var_1d8_1
                int64_t i = 0x10401
                
                while (i != -0x7ffefbfd)
                    int16_t rax_48 = *rcx_23
                    
                    if (rax_48 == 0)
                        break
                    
                    *rdx_33 = rax_48
                    rcx_23 += 2
                    rdx_33 = &rdx_33[1]
                    int64_t i_1 = i
                    i -= 1
                    
                    if (i_1 == 1)
                        break
                
                int16_t* rax_49 = &rdx_33[-1]
                
                if (i != 0)
                    rax_49 = rdx_33
                
                *rax_49 = 0
                rdx_32 = *rsi
        else
            rdx_32 = *rsi
            void* rax_45 = rdx_32 + 0x38
            
            if (*(rdx_32 + 0x50) u>= 8)
                rax_45 = *rax_45
            
            var_1b8.q = rax_45
    
    void* rdx_34 = rdx_32 + 0x18
    
    if (*(rdx_34 + 0x18) u>= 8)
        rdx_34 = *rdx_34
    
    var_1b8:8.q = rdx_34
    int32_t var_1a8_1 = 0x80008
    cchWideChar.q = 0
    int64_t var_f0_3 = 0xf
    libFileName.b = 0
    sub_14058ad40(&libFileName, "comdlg32.dll", 0xc)
    PSTR lpLibFileName = &libFileName
    
    if (var_f0_3 u>= 0x10)
        lpLibFileName = libFileName
    
    HMODULE rax_51 = LoadLibraryA(lpLibFileName)
    
    if (var_f0_3 u>= 0x10)
        void** libFileName_4 = libFileName
        void** libFileName_8 = libFileName_4
        
        if (var_f0_3 + 1 u>= 0x1000)
            libFileName_4 = libFileName_4[-1]
            
            if (libFileName_8 - libFileName_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(libFileName_4)
    
    char rax_54 = rsi[0xe].b
    cchWideChar.q = 0
    int64_t var_f0_4 = 0xf
    libFileName.b = 0
    
    if (rsi[1].d != 1)
        int32_t rax_71 = var_1a8_1
        
        if ((rax_54 & 1) != 0)
            rax_71 |= 0x200
        
        var_1a8_1 = rax_71 | 0x800
        uint64_t ulCookie_1
        sub_14068f800(&ulCookie_1)
        int64_t var_118_10 = 0
        int64_t var_110_9 = 0xf
        procName.b = 0
        sub_14058ad40(&procName, "GetOpenFileNameW", 0x10)
        PSTR lpProcName_2 = &procName
        
        if (var_110_9 u>= 0x10)
            lpProcName_2 = procName
        
        int64_t rax_73 = GetProcAddress(rax_51, lpProcName_2)
        
        if (var_110_9 u>= 0x10)
            uint64_t procName_6 = procName
            uint64_t procName_15 = procName_6
            
            if (var_110_9 + 1 u>= 0x1000)
                procName_6 = *(procName_6 - 8)
                
                if (procName_15 - procName_6 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(procName_6)
        
        int64_t var_118_11 = 0
        int64_t var_110_10 = 0xf
        procName.b = 0
        
        if (rax_73(&var_208) != 0)
            int16_t* r14_3 = &var_e8
            int64_t r12_2 = 0
            int64_t var_118_12 = 0
            
            if (var_d0_2 u>= 8)
                r14_3 = var_e8.q
            
            int64_t r13_1 = 0xf
            int64_t var_110_11 = 0xf
            procName.b = 0
            
            if (*r14_3 != 0)
                while (true)
                    int64_t var_b0_3 = 7
                    int64_t var_b8_3 = 0
                    void* r8_6 = -ffffffffffffffff
                    lpProcName_3.w = 0
                    
                    do
                        r8_6 += 1
                    while (r14_3[r8_6] != 0)
                    
                    sub_140593700(&lpProcName_3, r14_3, r8_6)
                    sub_1406b16a0(&var_a8, &lpProcName_3)
                    
                    if (var_b0_3 u>= 8)
                        PSTR lpProcName_5 = lpProcName_3
                        PSTR lpProcName_8 = lpProcName_5
                        
                        if ((var_b0_3 << 1) + 2 u>= 0x1000)
                            lpProcName_5 = *(lpProcName_5 - 8)
                            
                            if (lpProcName_8 - lpProcName_5 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        j_sub_140a74f90(lpProcName_5)
                    
                    int64_t rax_84 = -1
                    bool cond:20_1
                    
                    do
                        cond:20_1 = r14_3[rax_84 + 1] != 0
                        rax_84 += 1
                    while (cond:20_1)
                    r14_3 = &r14_3[rax_84]
                    
                    if ((ulCookie[0xe].b & 1) != 0)
                        r14_3 = &r14_3[1]
                    
                    int32_t var_240_5
                    char var_228
                    int64_t var_98
                    int64_t var_90
                    
                    if ((ulCookie[0xe].b & 1) == 0 || *r14_3 == 0 || r12_2 != 0)
                        if (0x7fffffffffffffff - r12_2 u< var_98)
                            sub_1405871e0()
                            noreturn
                        
                        uint64_t procName_9 = &procName
                        wchar16* rax_90 = &var_a8
                        
                        if (r13_1 u>= 0x10)
                            procName_9 = procName
                        
                        if (var_90 u>= 0x10)
                            rax_90 = var_a8.q
                        
                        var_240_5.q = rax_90
                        sub_14068c320(&lpProcName_3, zx.q(var_228), &procName, procName_9, r12_2, 
                            var_240_5, var_98)
                        int64_t* rcx_50 = *ulCookie + 0x58
                        int128_t* rdx_67 = rcx_50[1]
                        
                        if (rdx_67 == rcx_50[2])
                            sub_140689000(rcx_50, rdx_67, &lpProcName_3)
                            
                            if (var_b0_3 u>= 0x10)
                                PSTR lpProcName_6 = lpProcName_3
                                PSTR lpProcName_9 = lpProcName_6
                                
                                if (var_b0_3 + 1 u>= 0x1000)
                                    lpProcName_6 = *(lpProcName_6 - 8)
                                
                                if (var_b0_3 + 1 u>= 0x1000
                                        && lpProcName_9 - lpProcName_6 - 8 u> 0x1f)
                                    _invalid_parameter_noinfo_noreturn()
                                    noreturn
                                
                                j_sub_140a74f90(lpProcName_6)
                        else
                            *rdx_67 = lpProcName_3.o
                            rdx_67[1] = var_b8_3.o
                            rcx_50[1] += 0x20
                    else
                        if (0x7fffffffffffffff - var_98 u< 1)
                            sub_1405871e0()
                            noreturn
                        
                        wchar16* r9_9 = &var_a8
                        
                        if (var_90 u>= 0x10)
                            r9_9 = var_a8.q
                        
                        var_240_5.q = &data_142d63b88
                        sub_14068c320(&lpProcName_3, zx.q(var_228), &var_a8, r9_9, var_98, 
                            var_240_5, 1)
                        
                        if (r13_1 u< 0x10)
                            procName.o = lpProcName_3.o
                            var_118_12.o = var_b8_3.o
                        else
                            uint64_t procName_7 = procName
                            uint64_t procName_16 = procName_7
                            
                            if (r13_1 + 1 u>= 0x1000)
                                procName_7 = *(procName_7 - 8)
                            
                            if (r13_1 + 1 u>= 0x1000 && procName_16 - procName_7 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                            
                            j_sub_140a74f90(procName_7)
                            procName.o = lpProcName_3.o
                            var_118_12.o = var_b8_3.o
                    sub_14058a4d0(&var_a8)
                    r13_1 = var_110_11
                    
                    if (*r14_3 == 0)
                        break
                    
                    r12_2 = var_118_12
                
                result = arg2
            
            *(result + 0x18) = 0xf
            result[1].q = 0
            *result = 0
            sub_14058ad40(result, &data_1437020ab, 0)
            
            if (r13_1 u>= 0x10)
                uint64_t procName_8 = procName
                uint64_t procName_17 = procName_8
                
                if (r13_1 + 1 u>= 0x1000)
                    procName_8 = *(procName_8 - 8)
                
                if (r13_1 + 1 u>= 0x1000 && procName_17 - procName_8 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(procName_8)
            
            DeactivateActCtx(0, ulCookie_1)
            
            if (rax_51 != 0)
                FreeLibrary(rax_51)
            
            if (var_d0_2 u>= 8)
                public: void __cdecl std::allocator<struct `void __cdecl phmap::container_internal::Deallocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, void *, unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, void *, unsigned __int64)'::`2'::M *const, unsigned __int64)(
                    &var_e8, var_e8.q, var_d0_2 + 1)
            
            int64_t var_d8_6 = 0
            int64_t var_d0_6 = 7
            var_e8 = 0
            
            if (var_70 u>= 8)
                public: void __cdecl std::allocator<struct `void __cdecl phmap::container_internal::Deallocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, void *, unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<2, class std::allocator<unsigned short>>(class std::allocator<unsigned short> *, void *, unsigned __int64)'::`2'::M *const, unsigned __int64)(
                    &lpWideCharStr_5, lpWideCharStr_5, var_70 + 1)
        else
            result[1].q = 0
            *(result + 0x18) = 0xf
            *result = 0
            sub_14058ad40(result, &data_1437020ab, 0)
            DeactivateActCtx(0, ulCookie_1)
            
            if (rax_51 != 0)
                FreeLibrary(rax_51)
            
            if (var_d0_2 u>= 8)
                void* rcx_42 = var_e8.q
                void* rax_77 = rcx_42
                
                if ((var_d0_2 << 1) + 2 u>= 0x1000)
                    rcx_42 = *(rcx_42 - 8)
                
                if ((var_d0_2 << 1) + 2 u>= 0x1000 && rax_77 - rcx_42 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(rcx_42)
            
            int64_t var_d8_5 = 0
            int64_t var_d0_5 = 7
            var_e8 = 0
            
            if (var_70 u>= 8)
                lpWideCharStr_7 = lpWideCharStr_5
                void** lpWideCharStr_12 = lpWideCharStr_7
                
                if ((var_70 << 1) + 2 u< 0x1000)
                    j_sub_140a74f90(lpWideCharStr_7)
                else
                    lpWideCharStr_7 = lpWideCharStr_7[-1]
                    
                    if (lpWideCharStr_12 - lpWideCharStr_7 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    j_sub_140a74f90(lpWideCharStr_7)
    else
        if ((rax_54 & 2) == 0)
            var_1a8_1 |= 2
        
        sub_14068f800(&ulCookie)
        int64_t var_118_6 = 0
        int64_t var_110_5 = 0xf
        procName.b = 0
        sub_14058ad40(&procName, "GetSaveFileNameW", 0x10)
        uint64_t lpProcName_1 = &procName
        
        if (var_110_5 u>= 0x10)
            lpProcName_1 = procName
        
        int64_t rax_55 = GetProcAddress(rax_51, lpProcName_1)
        
        if (var_110_5 u>= 0x10)
            uint64_t procName_4 = procName
            uint64_t procName_13 = procName_4
            
            if (var_110_5 + 1 u>= 0x1000)
                procName_4 = *(procName_4 - 8)
                
                if (procName_13 - procName_4 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(procName_4)
        
        int64_t var_118_7 = 0
        int64_t var_110_6 = 0xf
        procName.b = 0
        
        if (rax_55(&var_208) != 0)
            int16_t* rdx_44 = &var_e8
            int64_t var_118_8 = 0
            void* r15_1 = -ffffffffffffffff
            
            if (var_d0_2 u>= 8)
                rdx_44 = var_e8.q
            
            int64_t var_110_7 = 7
            procName.w = 0
            
            do
                r15_1 += 1
            while (rdx_44[r15_1] != 0)
            
            sub_140593700(&procName, rdx_44, r15_1)
            result = arg2
            sub_1406b16a0(result, &procName)
            
            if (var_110_7 u>= 8)
                uint64_t procName_5 = procName
                uint64_t procName_14 = procName_5
                
                if ((var_110_7 << 1) + 2 u>= 0x1000)
                    procName_5 = *(procName_5 - 8)
                
                if ((var_110_7 << 1) + 2 u>= 0x1000 && procName_14 - procName_5 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(procName_5)
            
            int64_t var_118_9 = 0
            int64_t var_110_8 = 7
            procName.w = 0
            DeactivateActCtx(0, ulCookie)
            
            if (rax_51 != 0)
                FreeLibrary(rax_51)
            
            if (var_d0_2 u>= 8)
                void* rcx_35 = var_e8.q
                void* rax_66 = rcx_35
                
                if ((var_d0_2 << 1) + 2 u>= 0x1000)
                    rcx_35 = *(rcx_35 - 8)
                
                if ((var_d0_2 << 1) + 2 u>= 0x1000 && rax_66 - rcx_35 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(rcx_35)
            
            int64_t var_d8_4 = 0
            int64_t var_d0_4 = 7
            var_e8 = 0
            
            if (var_70 u>= 8)
                lpWideCharStr_7 = lpWideCharStr_5
                void** lpWideCharStr_11 = lpWideCharStr_7
                
                if ((var_70 << 1) + 2 u< 0x1000)
                    j_sub_140a74f90(lpWideCharStr_7)
                else
                    lpWideCharStr_7 = lpWideCharStr_7[-1]
                    
                    if (lpWideCharStr_11 - lpWideCharStr_7 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    j_sub_140a74f90(lpWideCharStr_7)
        else
            result[1].q = 0
            *(result + 0x18) = 0xf
            *result = 0
            sub_14058ad40(result, &data_1437020ab, 0)
            DeactivateActCtx(0, ulCookie)
            
            if (rax_51 != 0)
                FreeLibrary(rax_51)
            
            if (var_d0_2 u>= 8)
                void* rcx_31 = var_e8.q
                void* rax_59 = rcx_31
                
                if ((var_d0_2 << 1) + 2 u>= 0x1000)
                    rcx_31 = *(rcx_31 - 8)
                
                if ((var_d0_2 << 1) + 2 u>= 0x1000 && rax_59 - rcx_31 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                j_sub_140a74f90(rcx_31)
            
            int64_t var_d8_3 = 0
            int64_t var_d0_3 = 7
            var_e8 = 0
            
            if (var_70 u>= 8)
                lpWideCharStr_7 = lpWideCharStr_5
                void** lpWideCharStr_10 = lpWideCharStr_7
                
                if ((var_70 << 1) + 2 u< 0x1000)
                    j_sub_140a74f90(lpWideCharStr_7)
                else
                    lpWideCharStr_7 = lpWideCharStr_7[-1]
                    
                    if (lpWideCharStr_10 - lpWideCharStr_7 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    j_sub_140a74f90(lpWideCharStr_7)
else
    int64_t var_f0_1 = 0xf
    libFileName = 0x6c642e3233656c6f
    char var_100_1 = 0x6c
    cchWideChar.q = 9
    char var_ff_1 = 0
    HMODULE rax_12 = LoadLibraryA(&libFileName)
    
    if (var_f0_1 u>= 0x10)
        void** libFileName_3 = libFileName
        void** libFileName_7 = libFileName_3
        
        if (var_f0_1 + 1 u>= 0x1000)
            libFileName_3 = libFileName_3[-1]
            
            if (libFileName_7 - libFileName_3 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(libFileName_3)
    
    int32_t var_120
    __builtin_strncpy(&var_120, "lizeEx", 7)
    cchWideChar.q = 0
    int64_t var_f0_2 = 0xf
    int64_t var_118_1
    __builtin_memcpy(&var_118_1, 
        "\x0e\x00\x00\x00\x00\x00\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
    procName = 0x616974696e496f43
    int32_t rax_16 = GetProcAddress(rax_12, &procName)(0, 2)
    int64_t var_110
    
    if (var_110 u>= 0x10)
        uint64_t procName_1 = procName
        uint64_t procName_10 = procName_1
        
        if (var_110 + 1 u>= 0x1000)
            procName_1 = *(procName_1 - 8)
            
            if (procName_10 - procName_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(procName_1)
    
    char rcx_10 = data_143cde026
    
    if (rcx_10 == 0)
        goto label_140694ac8
    
    PSTR lpProcName = j_sub_140a82f30(0x20)
    int64_t var_b8_1 = 0x10
    int64_t var_b0_1 = 0x1f
    __builtin_strncpy(lpProcName, "CoCreateInstance", 0x11)
    lpProcName_3 = lpProcName
    int32_t rax_20 =
        GetProcAddress(rax_12, lpProcName)(&data_1434cb210, 0, 1, &data_142d8b5e0, &ulCookie)
    
    if (var_b0_1 u>= 0x10)
        PSTR lpProcName_4 = lpProcName_3
        PSTR lpProcName_7 = lpProcName_4
        
        if (var_b0_1 + 1 u>= 0x1000)
            lpProcName_4 = *(lpProcName_4 - 8)
            
            if (lpProcName_7 - lpProcName_4 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(lpProcName_4)
    
    if (rax_20 s< 0)
        rcx_10 = data_143cde026
    label_140694ac8:
        struct BROWSEINFOW lpbi
        lpbi.hwndOwner = 0
        lpbi.lpfn = sub_1406affa0
        uint128_t zmm0_3 = zx.o(0)
        lpbi.lParam = *rsi
        lpbi.pidlRoot = 0
        lpbi.pszDisplayName = zmm0_3.q
        lpbi.lpszTitle = zmm0_3:8.q
        lpbi.ulFlags.q = 0
        lpbi.iImage.q = 0
        
        if (rcx_10 != 0)
            int32_t rax_26 = 0
            
            if (rax_16 == 0)
                rax_26 = 0x40
            
            lpbi.ulFlags = rax_26 | 0x14
        
        struct ITEMIDLIST* pidl = SHBrowseForFolderW(&lpbi)
        int64_t var_b0_2 = 0xf
        lpProcName_3.b = 0
        
        if (pidl == 0)
            zmm7 = 0.o
            zmm6 = lpProcName_3.o
        else
            wchar16* pszPath = j_sub_140a82f30(0x208)
            SHGetPathFromIDListW(pidl, pszPath)
            int64_t var_110_1 = 0xf
            int64_t var_118_2 = 0xd
            __builtin_strncpy(&procName, "CoTaskMemFree", 0xe)
            GetProcAddress(rax_12, &procName)(pidl)
            
            if (var_110_1 u>= 0x10)
                uint64_t procName_2 = procName
                uint64_t procName_11 = procName_2
                
                if (var_110_1 + 1 u>= 0x1000)
                    procName_2 = *(procName_2 - 8)
                    
                    if (procName_11 - procName_2 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(procName_2)
            
            int32_t cchWideChar_1 = 0
            void* r15 = -ffffffffffffffff
            int64_t var_90_1 = 7
            var_a8 = 0
            
            do
                r15 += 1
            while (pszPath[r15] != 0)
            
            sub_140593700(&var_a8, pszPath, r15)
            int16_t* lpWideCharStr_3 = &var_a8
            
            if (var_90_1 u>= 8)
                lpWideCharStr_3 = var_a8.q
            
            int64_t var_118_3 = 0
            int64_t rdx_23 = sx.q(WideCharToMultiByte(0xfde9, 0, lpWideCharStr_3, cchWideChar_1, 
                nullptr, 0, nullptr, nullptr))
            int64_t var_110_2 = 0xf
            procName.b = 0
            sub_140610c40(&procName, rdx_23, 0)
            uint64_t* lpMultiByteStr = &procName
            wchar16* lpWideCharStr_4 = &var_a8
            
            if (var_110_2 u>= 0x10)
                lpMultiByteStr = procName
            
            if (var_90_1 u>= 8)
                lpWideCharStr_4 = var_a8.q
            
            WideCharToMultiByte(0xfde9, 0, lpWideCharStr_4, cchWideChar_1, lpMultiByteStr, 
                var_118_3.d, nullptr, nullptr)
            zmm7 = var_118_3.o
            int64_t var_118_4 = 0
            int64_t var_110_3 = 0xf
            zmm6 = procName.o
            procName.b = 0
            
            if (var_90_1 u>= 8)
                void* rcx_17 = var_a8.q
                void* rax_33 = rcx_17
                
                if ((var_90_1 << 1) + 2 u>= 0x1000)
                    rcx_17 = *(rcx_17 - 8)
                    
                    if (rax_33 - rcx_17 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_17)
            
            j_sub_140a74f90(pszPath)
            result = arg2
        
        if (rax_16 == 0)
            int32_t var_120_1
            __builtin_strncpy(&var_120_1, "ialize", 7)
            int64_t var_110_4 = 0xf
            int64_t var_118_5 = 0xe
            procName = 0x74696e696e556f43
            GetProcAddress(rax_12, &procName)()
            
            if (var_110_4 u>= 0x10)
                uint64_t procName_3 = procName
                uint64_t procName_12 = procName_3
                
                if (var_110_4 + 1 u>= 0x1000)
                    procName_3 = *(procName_3 - 8)
                    
                    if (procName_12 - procName_3 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(procName_3)
        
        *result = zmm6
        result[1] = zmm7
        
        if (rax_12 != 0)
            FreeLibrary(rax_12)
        
        if (var_70 u>= 8)
            lpWideCharStr_7 = lpWideCharStr_5
            void** lpWideCharStr_9 = lpWideCharStr_7
            
            if ((var_70 << 1) + 2 u>= 0x1000)
                lpWideCharStr_7 = lpWideCharStr_7[-1]
                
                if (lpWideCharStr_9 - lpWideCharStr_7 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(lpWideCharStr_7)
    else
        sub_1406b0c30(*rsi, result, ulCookie, rsi[0xe].b u>> 2 & 1)
        
        if (rax_12 != 0)
            FreeLibrary(rax_12)
        
        if (var_70 u>= 8)
            lpWideCharStr_7 = lpWideCharStr_5
            void** lpWideCharStr_8 = lpWideCharStr_7
            
            if ((var_70 << 1) + 2 u>= 0x1000)
                lpWideCharStr_7 = lpWideCharStr_7[-1]
                
                if (lpWideCharStr_8 - lpWideCharStr_7 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(lpWideCharStr_7)
__security_check_cookie(rax_1 ^ &var_268)
return result
