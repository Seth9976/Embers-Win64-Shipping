// 函数: sub_14062d390
// 地址: 0x14062d390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rbp = &data_142d40450
arg1[1].d
char rax_2 = (*(*rax + 0x178))()

if (rax_2 != 0)
    sub_140a20b00(arg1, U"\", 1)
    int32_t rax_3 = arg2[1].d
    int32_t r8 = rax_3 - 1
    
    if (rax_3 == 0)
        r8 = 0
    
    sub_140a20ba0(arg1, *arg2, r8)
    
    if (arg4 == 0)
        int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
        arg1[1].d
        rax_2 = (*(*rax_4 + 0x70))()
    
    if (arg4 != 0 || rax_2 == 0)
        if (arg1[1].d != 0)
            rbp = *arg1
        
        sub_140a464c0()
        char result = sub_140b27210(arg3, rbp, 0, &data_14399ea08, 0)
        int64_t rcx_6 = *arg1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *arg2
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *arg3
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        return result

int64_t rcx_2 = *arg1

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg2

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg3

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return 0
