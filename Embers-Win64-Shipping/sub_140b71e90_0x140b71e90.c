// 函数: sub_140b71e90
// 地址: 0x140b71e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg1
int64_t rax

if (*arg1 != 0x5a4d)
    rax.b = 0
    return 0x5a00

void* r12_1 = sx.q(*(arg1 + 0x3c)) + arg1

if (*r12_1 != 0x4550)
    rax.b = 0
    return 0x5a00

int64_t result = sub_140b70080(arg1, r12_1, zx.q(*(r12_1 + 0x90)))
int32_t rbp = 0
int64_t result_1 = result
int64_t r13 = 0

if (*(r12_1 + 0x94) u> 0)
    int32_t* rcx = nullptr
    
    while (*(rcx + result) != 0 || *(rcx + result + 4) != 0 || *(rcx + result + 8) != 0
            || *(rcx + result + 0xc) != 0 || *(rcx + result + 0x10) != 0)
        int32_t rax_1 = *(rcx + result + 0xc)
        
        if (rax_1 != 0)
            char* rax_2 = sub_140b70080(rbx, r12_1, zx.q(rax_1))
            int64_t var_48 = 0
            int64_t var_40_1 = 0
            int64_t r14_1 = 0
            int32_t rsi_1 = 0
            
            if (rax_2 != 0 && *rax_2 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rax_2[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_48, rbx_1.d + 1)
                    rbp = var_40_1:4.d
                    rsi_1 = var_40_1.d
                    r14_1 = var_48
                
                rsi_1 += rbx_1.d + 1
                var_40_1.d = rsi_1
                
                if (rsi_1 s> rbp)
                    sub_140594770(&var_48)
                    rbp = var_40_1:4.d
                    rsi_1 = var_40_1.d
                    r14_1 = var_48
                
                sub_1405a7220(r14_1, rbx_1.d + 1, rax_2, rbx_1.d + 1, 0x3f)
            
            int64_t rbx_3 = sx.q(arg2[1].d)
            int32_t rax_3 = (rbx_3 + 1).d
            arg2[1].d = rax_3
            
            if (rax_3 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            var_48 = 0
            rbx = arg1
            int64_t* rax_6 = (rbx_3 << 4) + *arg2
            *rax_6 = r14_1
            *(rax_6 + 0xc) = rbp
            rbp = 0
            int64_t var_40_2 = 0
            rax_6[1].d = rsi_1
        
        r13 += 1
        rcx = r13 * 0x14
        result = result_1
        
        if (rcx u>= zx.q(*(r12_1 + 0x94)))
            break

result.b = 1
return result
