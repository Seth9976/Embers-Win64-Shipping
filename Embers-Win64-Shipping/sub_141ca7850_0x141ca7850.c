// 函数: sub_141ca7850
// 地址: 0x141ca7850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t rdi = *arg2
int64_t var_58 = 0

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    memcpy(var_58, rdi, rbx * 2)
else
    int32_t var_4c_1 = 0

char rax
int32_t rcx_3
rax, rcx_3 = sub_140a237d0(&var_58, &data_142d5a024, 1)
int64_t var_48

if (rax == 0)
    int64_t rbx_1 = var_58
    var_48 = 0
    sub_1405a4c70(&var_48, sbb.d(rcx_3, rcx_3, rbx != 0) + 2 + rbx, 0)
    memcpy(var_48, rbx_1, rbx * 2)
    sub_140a20ba0(&var_48, &data_142d5a024, 1)
    int64_t rcx_8 = var_58
    int64_t rbx_2 = var_48
    var_48 = 0
    int32_t var_40_1
    var_40_1.q = 0
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    var_58 = rbx_2
    int32_t var_3c
    int32_t var_4c_2 = var_3c

uint64_t result = *(arg1 + 0x4e8)

if (result != 0)
    void* r14_2 = *(result + 0xb8)
    
    if (r14_2 != 0)
        int32_t rcx_10 = EnterCriticalSection(r14_2 + 8)
        int64_t rdi_3 = var_58
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        var_48 = 0
        int32_t var_40_2 = rbx
        sub_1405a4c70(&var_48, sbb.d(rcx_10, rcx_10, rbx != 0) + 2 + rbx, 0)
        memcpy(var_48, rdi_3, rbx * 2)
        sub_140a2cf70(&var_48, &data_142d40450, 0)
        int64_t var_28
        int64_t* rax_5 = sub_140baee70(&var_28, &var_48, &var_38)
        int64_t rsi_2 = sx.q(*(r14_2 + 0x50))
        int32_t rcx_16 = (rsi_2 + 1).d
        *(r14_2 + 0x50) = rcx_16
        
        if (rcx_16 s> *(r14_2 + 0x54))
            sub_1405a4f90(r14_2 + 0x48)
        
        int64_t* rcx_20 = (rsi_2 << 4) + *(r14_2 + 0x48)
        *rcx_20 = 0
        *rcx_20 = *rax_5
        *rax_5 = 0
        rcx_20[1].d = rax_5[1].d
        result = zx.q(*(rax_5 + 0xc))
        *(rcx_20 + 0xc) = result.d
        rax_5[1] = 0
        int64_t rcx_21 = var_28
        
        if (rcx_21 != 0)
            result = sub_140a74f90(rcx_21)
        
        int64_t rcx_22 = var_48
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        int64_t rcx_23 = var_38
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        if (r14_2 != -8)
            result = LeaveCriticalSection(r14_2 + 8)

int64_t rcx_25 = var_58

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
