// 函数: sub_1426af380
// 地址: 0x1426af380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s< 0 || arg4 s>= *(arg1 + 0x60))
    void* const* result
    result.b = 0
    return result

uint64_t r15
r15.b = 1
void* rdi_2 = sx.q(arg4) * 0x30 + *(arg1 + 0x58)
int32_t rcx = *(rdi_2 + 0x18)

if (rcx == 0)
    return 1

int32_t rax_3 = *(rdi_2 + 0x28)
int64_t r10_2 = sx.q(arg3) * 0x58 + *(arg2 + 0x110)
int32_t rbx_1 = 0
int64_t var_58_1 = r10_2

if (rax_3 != 0)
    int64_t var_50
    __builtin_memset(&var_50, 0, 0x20)
    int32_t i = 0
    uint32_t var_64 = 0xffffffff
    int32_t var_60 = 0xffffffff
    char arg_20 = 1
    
    if (rax_3 s> 0)
        char var_65
        char r12_1 = var_65
        char* r14_1 = nullptr
        int64_t var_40
        
        do
            int64_t rax_6 = *(rdi_2 + 0x20)
            char rcx_2 = r14_1[rax_6]
            void* rdx_1 = &r14_1[rax_6]
            int64_t var_48_1
            
            if (rcx_2 u>= 2)
                int16_t rax_7 = *(rdx_1 + 2)
                r12_1 &= 0xfe
                char var_66_1 = rcx_2
                char var_65_1 = r12_1
                var_48_1.d = rbx_1 + 1
                
                if (rbx_1 + 1 s> var_48_1:4.d)
                    sub_1405a4cf0(&var_50)
                
                *(var_50 + (sx.q(rbx_1) << 2)) = rax_7.d
                sub_140a20ba0(&var_40, &data_142e61d38, 2)
                rbx_1 = var_48_1.d
                r10_2 = var_58_1
            else if (rcx_2 == 1)
                if (rbx_1 == 0)
                    rcx_2 = 0
                    arg4.b = 0
                else
                    arg4 = zx.d(*(var_50 + (sx.q(rbx_1 - 1) << 2) + 3))
                    rcx_2 = arg4.b
                    arg4.b u>>= 1
                    rcx_2 &= 1
                    arg4.b &= 1
                
                if (arg_20 != 0)
                    arg_20 = 0
                    var_64 = zx.d(*(rdx_1 + 2))
                
                if (rcx_2 == 0)
                    int64_t* rcx_8 = *(*(rdi_2 + 0x10) + (zx.q(*(rdx_1 + 2)) << 3))
                    arg4 = zx.d(sub_1426c3430(rcx_8, arg2, zx.q(*(rcx_8 + 0x52)) + *(r10_2 + 0x30)))
                
                char rax_15
                rax_15, arg4 =
                    sub_1426c2ac0(arg2, &var_40, &var_50, arg4.b, &var_60, &var_64, &arg_20)
                rbx_1 = var_48_1.d
                r15 = zx.q(rax_15)
                
                if (rbx_1 == 0)
                    break
                
                r10_2 = var_58_1
            i += 1
            r14_1 = &r14_1[4]
        while (i s< *(rdi_2 + 0x28))
        
        int64_t rcx_10 = var_40
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_50
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
else if (rcx s> 0)
    int64_t* rsi_1 = nullptr
    
    while (true)
        int64_t* rcx_1 = *(rsi_1 + *(rdi_2 + 0x10))
        
        if (rcx_1 != 0 && sub_1426c3430(rcx_1, arg2, zx.q(*(rcx_1 + 0x52)) + *(r10_2 + 0x30)) != 0)
            rbx_1 += 1
            rsi_1 = &rsi_1[1]
            
            if (rbx_1 s>= *(rdi_2 + 0x18))
                break
            
            r10_2 = var_58_1
            continue
        
        r15.b = 0
        break

return zx.q(r15.b)
