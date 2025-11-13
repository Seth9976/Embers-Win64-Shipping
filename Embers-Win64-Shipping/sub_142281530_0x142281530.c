// 函数: sub_142281530
// 地址: 0x142281530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t* rdx = nullptr
int32_t rcx = 4
uint64_t* var_20 = nullptr
int32_t i_2 = 0
int32_t var_14 = 4
uint64_t result = *(arg1 + 0x98)
uint64_t result_1

if (result != 0)
    i_2 = 1
    result_1 = result
    *(result + 0x48) += 1
    rcx = var_14
    rdx = var_20

void* r8 = *(arg1 + 0x88)

if (r8 != 0)
    int64_t i_3 = sx.q(i_2)
    result = zx.q((i_3 + 1).d)
    i_2 = result.d
    
    if (result.d s> rcx)
        result = sub_14083a490(&result_1, i_3.d)
        r8 = *(arg1 + 0x88)
        rdx = var_20
    
    uint64_t* rcx_2 = &result_1
    
    if (rdx != 0)
        rcx_2 = rdx
    
    rcx_2[i_3] = r8
    
    if (r8 != 0)
        *(r8 + 0x48) += 1
    
    rdx = var_20

if (i_2 != 0)
    int64_t* rax_2 = sub_140a242a0()
    int64_t r9_1 = *rax_2
    result = (*(r9_1 + 0x48))(rax_2, &result_1, 2, r9_1)
    rdx = var_20

int32_t i_1 = i_2
uint64_t* rbx_1 = &result_1

if (rdx != 0)
    rbx_1 = rdx

if (i_1 != 0)
    int32_t i
    
    do
        uint64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            result = zx.q(*(rcx_4 + 0x48))
            *(rcx_4 + 0x48) -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_4)
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdx = var_20

if (rdx != 0)
    result = sub_140a74f90(rdx)

__security_check_cookie(rax_1 ^ &var_68)
return result
