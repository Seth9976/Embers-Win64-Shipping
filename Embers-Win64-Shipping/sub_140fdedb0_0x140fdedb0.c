// 函数: sub_140fdedb0
// 地址: 0x140fdedb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rbx = *(arg1 + 0x40f4)
void var_68

if (rbx != 0)
    memcpy(&var_68, arg1 + 0x26e8, rbx << 3)

int64_t* rcx_1 = *(arg1 + 0x150)
int32_t result = (*(*rcx_1 + 0x108))(rcx_1, zx.q(rbx), &var_68, *(arg1 + 0x27c0))

if (arg2 != 0)
    void* rdi_1 = arg1 + 0x2728
    int64_t i_1 = 8
    int64_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        *rdi_1 = 0
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            rbx_1[1].d -= 1
            
            if (result == 1)
                char rax_3
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_3 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                    result = (**rbx_1)(rbx_1, 1)
                else
                    result = 0
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        result = *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        result = sub_1405dcc10(&data_143f02390, rbx_1)
        
        *(rdi_1 + 0x40) = 0
        rdi_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(arg1 + 0x27a8) = 0
    *(arg1 + 0x27b0) = 0

__security_check_cookie(rax_1 ^ &var_98)
return result
