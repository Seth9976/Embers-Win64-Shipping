// 函数: sub_140a4c140
// 地址: 0x140a4c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_38 = 0
int64_t var_30 = 0
int32_t r10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r10 = var_30:4.d
        rdx = var_30.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_30.d = rax_1
    
    if (rax_1 s> r10)
        sub_140594770(&var_38)
    
    memcpy(var_38, arg2, (rbx_1.d + 1) * 2)

int64_t var_28
int64_t* rax_2
int64_t r8_2
rax_2, r8_2 = sub_140b1a660(&var_28, &var_38)
int16_t* const rdx_4

if (rax_2[1].d == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *rax_2

r8_2.b = 1
(*(*arg1 + 0x58))(arg1, rdx_4, r8_2)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t r8_3 = *rax_4
int128_t zmm6 = 0x3f000000

if ((*(r8_3 + 0x70))(rax_4, arg2, r8_3) == 0 || arg4 == 0)
label_140a4c2b1:
    int64_t* rax_10 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int64_t r9 = *rax_10
    
    if ((*(r9 + 0x90))(rax_10, arg2, arg3, r9) != 0)
        return 1
    
    if (arg5 == 0)
        int32_t rbx_4 = 0xa
        GetLastError()
        
        while (true)
            rbx_4 -= 1
            zmm6 = sub_140b73230(zmm6)
            int64_t* rax_11 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int64_t r9_1 = *rax_11
            
            if ((*(r9_1 + 0x90))(rax_11, arg2, arg3, r9_1) != 0)
                return 1
            
            GetLastError()
            
            if (rbx_4 == 0)
                return 0
else
    int64_t* rax_6 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int64_t r8_4 = *rax_6
    
    if ((*(r8_4 + 0x80))(rax_6, arg2, r8_4) != 0 || arg5 != 0)
        goto label_140a4c2b1
    
    zmm6 = sub_140b73230(0x3f000000)
    int64_t* rax_8 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int64_t r8_5 = *rax_8
    
    if ((*(r8_5 + 0x80))(rax_8, arg2, r8_5) != 0)
        goto label_140a4c2b1

return 0
