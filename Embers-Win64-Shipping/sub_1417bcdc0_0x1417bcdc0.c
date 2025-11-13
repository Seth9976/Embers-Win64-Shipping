// 函数: sub_1417bcdc0
// 地址: 0x1417bcdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t result = *(arg1 + 0x350)

if (result != 0)
    int64_t* var_20_1 = nullptr
    int32_t var_14_1 = 4
    int32_t i_2 = 1
    uint64_t result_1 = result
    *(result + 0x48) += 1
    int64_t* rax_2 = sub_140a242a0()
    int64_t r9_1 = *rax_2
    result = (*(r9_1 + 0x48))(rax_2, &result_1, 0xff, r9_1)
    int64_t* rcx_1 = var_20_1
    int64_t* rbx_1 = &result_1
    int32_t i_1 = i_2
    
    if (rcx_1 != 0)
        rbx_1 = rcx_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                result = zx.q(rcx_2[9].d)
                rcx_2[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_2)
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_1 = var_20_1
    
    if (rcx_1 != 0)
        result = sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_68)
return result
