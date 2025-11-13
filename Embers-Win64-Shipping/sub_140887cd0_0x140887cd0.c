// 函数: sub_140887cd0
// 地址: 0x140887cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_58 = arg4
sub_1419d21e0(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
void* r15 = data_143ce5ab0
int32_t result_1 = 0
int32_t* rdx = *r8

if (&rdx[1] u> r8[1])
    int32_t* rdx_1 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result_1 = *rdx
    *r8 += 4

*(arg1 + 0x90) = 0
uint64_t result = zx.q(result_1)

if (result.d s> *(arg1 + 0x94))
    sub_1405c5570(arg1 + 0x88, result.d)
    result = zx.q(result_1)

int32_t r14 = 0

if (result.d s> 0)
    do
        uint64_t var_38 = 0
        int32_t var_30_1 = 0
        arg3 = sub_140a1d9d0(arg2, &var_38, arg3)
        int16_t* const rsi_1 = &data_142d40450
        int32_t rdx_4 = 0
        int64_t var_48 = 0
        
        if (var_30_1 != 0)
            rsi_1 = var_38
        
        int32_t rcx_3 = 0
        int32_t var_40_1 = 0
        int32_t var_3c_1 = 0
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rsi_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_1.d + 1)
                rcx_3 = var_3c_1
                rdx_4 = var_40_1
            
            int32_t rax_4 = rbx_1.d + 1 + rdx_4
            int32_t var_40_2 = rax_4
            
            if (rax_4 s> rcx_3)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, rsi_1, (rbx_1.d + 1) * 2)
        
        int64_t* rcx_7
        
        if (*(r15 + 0x20) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(r15 + 0x18)
        
        int64_t rax_6 = (*(*rcx_7 + 0x48))(rcx_7, &var_48)
        int64_t rcx_8 = var_48
        
        if (rcx_8 != 0)
            arg3 = sub_140a74f90(rcx_8)
        
        int64_t rbx_3 = sx.q(*(arg1 + 0x90))
        int32_t rax_7 = (rbx_3 + 1).d
        *(arg1 + 0x90) = rax_7
        
        if (rax_6 == 0)
            if (rax_7 s> *(arg1 + 0x94))
                sub_1405a4d70(arg1 + 0x88)
            
            result = *(arg1 + 0x88)
            *(result + (rbx_3 << 3)) = 0
        else
            if (rax_7 s> *(arg1 + 0x94))
                sub_1405a4d70(arg1 + 0x88)
            
            result = *(arg1 + 0x88)
            *(result + (rbx_3 << 3)) = rax_6
        
        uint64_t rcx_11 = var_38
        
        if (rcx_11 != 0)
            result, arg3 = sub_140a74f90(rcx_11)
        
        r14 += 1
    while (r14 s< result_1)

return result
