// 函数: sub_141891ce0
// 地址: 0x141891ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0
int16_t* const rdx

if (*(arg1 + 0x20) == 0)
    rdx = &data_142d40450
else
    rdx = *(arg1 + 0x18)

sub_140b1f370(&var_38, rdx, 0, 0)
int64_t* var_48 = nullptr
int32_t var_40 = 0
int32_t result = sub_140a2cec0(&var_38, &var_48, 1)
int64_t* rbx = var_48
int64_t rdi = sx.q(var_40)
void* r12_2 = &rbx[rdi * 2]

if (rbx != r12_2)
    do
        _DeleteExceptionPtr(rbx)
        int32_t rcx_3 = rbx[1].d
        result = rcx_3 - 1
        int32_t rdi_1 = rcx_3 - 1
        
        if (rcx_3 == 0)
            result = 0
        
        if (rcx_3 == 0)
            rdi_1 = -1
        
        if (result s> 0)
            int32_t rsi_1 = *(arg1 + 0x10)
            
            if (rcx_3 == 0)
                rdi_1 = 0
            
            int32_t rax_1
            
            if (rsi_1 == 0)
                rax_1 = rsi_1 + 2
            
            if (rsi_1 != 0 || rdi_1 == 0xffffffff)
                rax_1 = 1
            
            int64_t var_58 = 0
            int32_t rcx_4 = rdi_1 + rax_1
            int64_t r15_1 = *(arg1 + 8)
            
            if (rsi_1 != 0 || rcx_4 != 0)
                sub_1405a4c70(&var_58, rsi_1 + rcx_4, 0)
                memcpy(var_58, r15_1, rsi_1 * 2)
            else
                int32_t var_4c_1 = rcx_4
            
            sub_140a2cf70(&var_58, *rbx, rdi_1)
            sub_140b21570(&var_58)
            int64_t rdi_2 = sx.q(arg2[1].d)
            result = (rdi_2 + 1).d
            arg2[1].d = result
            
            if (result s> *(arg2 + 0xc))
                result = sub_1405a4f90(arg2)
            
            int64_t* rdi_4 = (rdi_2 << 4) + *arg2
            *rdi_4 = 0
            int64_t r15_2 = var_58
            rdi_4[1].d = rsi_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(rdi_4, rsi_1, 0)
                result = memcpy(*rdi_4, r15_2, rsi_1 * 2)
            else
                *(rdi_4 + 0xc) = 0
            
            int64_t rcx_12 = var_58
            
            if (rcx_12 != 0)
                result = sub_140a74f90(rcx_12)
        
        rbx = &rbx[2]
    while (rbx != r12_2)
    
    rdi = zx.q(var_40)
    rbx = var_48

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t rcx_13 = *rbx
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        rbx = &rbx[2]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)
    rbx = var_48

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_15 = var_38

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
