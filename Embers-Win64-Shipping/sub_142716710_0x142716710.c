// 函数: sub_142716710
// 地址: 0x142716710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88
sub_140ba6bd0(arg1 + 0x78, &var_88, arg2)
int64_t rax = sx.q(var_88)
void* const result

if (rax.d == 0xffffffff)
    result = nullptr
else
    result = rax * 0x38 + *(arg1 + 0x78)

int64_t* rdi = result + 8

if (result == 0)
    rdi = nullptr

if (*(arg1 + 0xd8) != 0 && rdi != 0 && rdi[3].d s>= 0)
    int64_t var_60_1 = 0
    int64_t* var_58_1 = nullptr
    void var_68
    sub_1426fb510(arg1, arg2, &var_68)
    int64_t rax_2 = *rdi
    void* rax_3 = rdi[1]
    void* var_78_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int64_t* rbx_1 = _mm_bsrli_si128(var_60_1.o, 8).q
    var_60_1.o = rax_2.o
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi[4].d &= 0xfffffffd
    int32_t var_24
    rdi[4].d |= var_24 u>> 2 & 2
    result = sub_1426176a0(*(arg1 + 0xd8), rdi[3].d, &var_68)
    
    if (var_58_1 != 0)
        var_58_1[1].d -= 1
        
        if (var_58_1[1].d == 1)
            result = (**var_58_1)(var_58_1)
            int32_t temp3_1 = *(var_58_1 + 0xc)
            *(var_58_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*(*var_58_1 + 8))(var_58_1, 1)

return result
