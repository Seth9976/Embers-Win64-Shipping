// 函数: sub_140bc54b0
// 地址: 0x140bc54b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[3].d

if (((rdx u>> 0x10).b & 1) != 0)
    return sub_140aa6880(data_143e1a8d8, arg1) __tailcall

int64_t rbx = sx.q(arg1[1].d)
int16_t* var_28
int32_t rdi_1

if (rbx.d != 0xffffffff)
    AcquireSRWLockShared(&data_143e1a888)
    void* rax_2 = sub_140bcf240(&data_1439a9a00, (rbx << 4) + data_1439a9a50)
    var_28 = nullptr
    int32_t rsi_1 = *(rax_2 + 8)
    int64_t r14_1 = *rax_2
    
    if (rsi_1 != 0)
        sub_1405a4c70(&var_28, rsi_1, 0)
        memcpy(var_28, r14_1, rsi_1 * 2)
    else
        int32_t var_1c_1 = 0
    
    ReleaseSRWLockShared(&data_143e1a888)
    rdx = arg1[3].d
    rdi_1 = rsi_1
else
    var_28 = nullptr
    rdi_1 = 0
    int32_t var_20
    var_20.q = 0

int16_t* var_18
int32_t var_10
int32_t var_c

if (((rdx u>> 0xb).b & 1) != 0)
    sub_140b0f020(&var_18, &var_28, &data_143e1a878)
else if (((rdx u>> 8).b & 1) != 0)
    int64_t* r8_3
    
    if ((not.b(rdx.b) & 1) == 0)
        r8_3 = &data_143e1a868
        
        if (((rdx u>> 0xc).b & 1) == 0)
            r8_3 = &data_143e1a858
    else
        r8_3 = &data_143e1a848
    
    sub_140b0f020(&var_18, &var_28, r8_3)
else
    int16_t* rsi_2 = var_28
    var_18 = nullptr
    var_10 = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_18, rdi_1, 0)
        memcpy(var_18, rsi_2, rdi_1 * 2)
    else
        var_c = 0

int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

var_28 = var_18
int32_t var_1c_2 = var_c
sub_140a464c0()
int16_t* const rdx_10 = &data_142d40450

if (var_10 != 0)
    rdx_10 = var_28

char const (* r8_6)[0x4] = data_14399ea08
char rax_11 = (*(r8_6 + 0x48))(&data_14399ea08, rdx_10, r8_6)
int16_t* rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rax_11)
