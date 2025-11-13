// 函数: sub_1406eb230
// 地址: 0x1406eb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rbx = data_143cdf678

if (rbx[0xa] == 0)
    int64_t rax_2 = *rbx
    rbx[0xa] = (*(rax_2 + 0x20))(rax_2)

int32_t* rdx = rbx[8]
void* result = zx.q(rbx[6].d)
void** const var_60 = &data_142d96870
int32_t var_68 = result.d
void* var_58 = &rbx[6]
void** const* var_28 = &var_60
void** const* rcx_2

if (rdx == rbx[9])
    result = sub_1406e87c0(&rbx[7], rdx, &var_68)
    rcx_2 = var_28
else
    *rdx = result.d
    *(rdx + 0x40) = 0
    rcx_2 = var_28
    
    if (rcx_2 != 0)
        result = &var_60
        int64_t var_28_1
        
        if (rcx_2 != &var_60)
            *(rdx + 0x40) = rcx_2
            rcx_2 = nullptr
            var_28_1 = 0
        else
            result = (*rcx_2)[1](rcx_2, &rdx[2])
            *(rdx + 0x40) = result
            rcx_2 = var_28
            
            if (rcx_2 != 0)
                void** const* rdx_2
                rdx_2.b = rcx_2 != &var_60
                result = (*rcx_2)[4](rcx_2, rdx_2)
                rcx_2 = nullptr
                var_28_1 = 0
    
    rbx[8] += 0x48

if (rcx_2 != 0)
    void** const* rdx_3
    rdx_3.b = rcx_2 != &var_60
    result = (*rcx_2)[4](rcx_2, rdx_3)

rbx[6].d += 1
__security_check_cookie(rax_1 ^ &var_88)
return result
