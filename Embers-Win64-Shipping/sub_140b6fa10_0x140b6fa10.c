// 函数: sub_140b6fa10
// 地址: 0x140b6fa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rbx = arg1[1].d
int64_t rdi = *arg1
int16_t* lpLibFileName_3 = nullptr
int16_t* lpLibFileName_2 = nullptr
int32_t var_b0 = rbx

if (rbx != 0)
    sub_1405a4c70(&lpLibFileName_2, rbx, 0)
    memcpy(lpLibFileName_2, rdi, rbx * 2)
    lpLibFileName_3 = lpLibFileName_2
    rbx = var_b0
else
    int32_t var_ac_1 = 0

int64_t var_c8 = 0
int16_t* const r14 = &data_142d40450
int32_t rdx_2 = 0
int16_t* const lpLibFileName_7 = &data_142d40450
int32_t var_c0 = 0

if (rbx != 0)
    lpLibFileName_7 = lpLibFileName_3

int32_t rcx_2 = 0
int32_t var_bc = 0
int64_t rdi_1 = -1

if (lpLibFileName_7 != 0 && *lpLibFileName_7 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (lpLibFileName_7[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_c8, rbx_1.d + 1)
        rcx_2 = var_bc
        rdx_2 = var_c0
    
    int32_t rax_2 = rdx_2 + rbx_1.d + 1
    int32_t var_c0_1 = rax_2
    
    if (rax_2 s> rcx_2)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, lpLibFileName_7, (rbx_1.d + 1) * 2)

char rax_3 = sub_140b16090(&var_c8)
int64_t rcx_7 = var_c8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (rax_3 != 0)
    int64_t* rax_4 = sub_140b11c80(&var_c8, &lpLibFileName_2)
    
    if (&lpLibFileName_2 != rax_4)
        int16_t* lpLibFileName_4 = lpLibFileName_2
        
        if (lpLibFileName_4 != 0)
            sub_140a74f90(lpLibFileName_4)
        
        lpLibFileName_2 = *rax_4
        *rax_4 = 0
        var_b0 = rax_4[1].d
        int32_t var_ac_2 = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    int64_t rcx_10 = var_c8
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int16_t* lpLibFileName_6 = &data_142d40450
    int32_t rdx_6 = 0
    int64_t var_98 = 0
    
    if (var_b0 != 0)
        lpLibFileName_6 = lpLibFileName_2
    
    int32_t rcx_11 = 0
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x24)
    int64_t rsi = 0
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_64_1 = 0
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    int64_t* var_a8 = nullptr
    int32_t i_2 = 0
    var_c8 = 0
    int32_t var_c0_2 = 0
    int32_t var_bc_1 = 0
    
    if (lpLibFileName_6 != 0 && *lpLibFileName_6 != 0)
        do
            rdi_1 += 1
        while (lpLibFileName_6[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_c8, rdi_1.d + 1)
            rcx_11 = var_bc_1
            rdx_6 = var_c0_2
            rsi = var_c8
        
        int32_t rax_7 = rdx_6 + rdi_1.d + 1
        int32_t var_c0_3 = rax_7
        
        if (rax_7 s> rcx_11)
            sub_140594770(&var_c8)
            rsi = var_c8
        
        UnDecorator::getReferenceType(rsi, lpLibFileName_6, (rdi_1.d + 1) * 2)
    
    sub_140b722a0(&var_c8, arg2, &var_a8, &var_98)
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    int32_t i_1 = i_2
    int32_t rsi_1 = 0
    
    if (i_1 s> 0)
        int64_t rdi_3 = 0
        
        do
            int64_t* rax_8 = var_a8
            PWSTR lpModuleName
            
            if (*(rax_8 + rdi_3 + 8) == 0)
                lpModuleName = &data_142d40450
            else
                lpModuleName = *(rax_8 + rdi_3)
            
            if (GetModuleHandleW(lpModuleName) == 0)
                int64_t* rax_10 = var_a8
                PWSTR lpLibFileName
                
                if (*(rax_10 + rdi_3 + 8) == 0)
                    lpLibFileName = &data_142d40450
                else
                    lpLibFileName = *(rax_10 + rdi_3)
                
                if (LoadLibraryW(lpLibFileName) == 0)
                    sub_140b6fdb0(&var_a8[sx.q(rsi_1) * 2])
            
            i_1 = i_2
            rsi_1 += 1
            rdi_3 += 0x10
        while (rsi_1 s< i_1)
    
    int64_t* rdi_4 = var_a8
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_20 = *rdi_4
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            rdi_4 = &rdi_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdi_4 = var_a8
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_14059ad90(&var_98, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_25 = var_98
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)

int16_t* lpLibFileName_1 = &data_142d40450

if (var_b0 != 0)
    lpLibFileName_1 = lpLibFileName_2

HMODULE result = LoadLibraryW(lpLibFileName_1)

if (result == 0)
    sub_140a464c0()
    
    if (arg1[1].d != 0)
        r14 = *arg1
    
    if ((*(data_14399ea08 + 0x48))(&data_14399ea08, r14) != 0)
        sub_140b6fdb0(arg1)

int16_t* lpLibFileName_5 = lpLibFileName_2

if (lpLibFileName_5 != 0)
    sub_140a74f90(lpLibFileName_5)

__security_check_cookie(rax_1 ^ &var_e8)
return result
