// 函数: sub_140b73e20
// 地址: 0x140b73e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
TEB* gsbase

if (data_143e18de8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e18de8)
    
    if (data_143e18de8 == 0xffffffff)
        atexit(sub_142cc0d60)
        _Init_thread_footer(&data_143e18de8)

int32_t rcx_14 = data_143e18de0

if (rcx_14 == 0 || rcx_14 == 1)
    wchar16 var_228[0x108]
    memset(&var_228, 0, 0x208)
    GetTempPathW(0x104, &var_228)
    wchar16 lpszLongPath[0x108]
    memset(&lpszLongPath, 0, 0x208)
    GetLongPathNameW(&var_228, &lpszLongPath, 0x104)
    int32_t rdx_3 = 0
    int32_t rcx_5 = 0
    int32_t var_450_1 = 0
    int32_t var_44c_1 = 0
    int64_t var_458 = 0
    
    if (lpszLongPath[0] != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (lpszLongPath[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_458, rbx_1.d + 1)
            rcx_5 = var_44c_1
            rdx_3 = var_450_1
        
        int32_t rax_5 = rdx_3 + rbx_1.d + 1
        int32_t var_450_2 = rax_5
        
        if (rax_5 s> rcx_5)
            sub_140594770(&var_458)
        
        UnDecorator::getReferenceType(var_458, &lpszLongPath, (rbx_1.d + 1) * 2)
    
    int64_t var_448
    int64_t* rax_6 = sub_140a300d0(&var_458, &var_448, &(*U"{}[\nt")[3], &data_142d5a024, 1)
    
    if (&data_143e18dd8 != rax_6)
        int64_t rcx_10 = data_143e18dd8
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        data_143e18dd8 = *rax_6
        *rax_6 = 0
        data_143e18de0 = rax_6[1].d
        data_143e18de4 = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    int64_t rcx_12 = var_448
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_458
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    rcx_14 = data_143e18de0

int16_t* const result = &data_142d40450

if (rcx_14 != 0)
    result = data_143e18dd8

__security_check_cookie(rax_1 ^ &var_488)
return result
