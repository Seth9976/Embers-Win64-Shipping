// 函数: sub_142aa0b30
// 地址: 0x142aa0b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c0 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint64_t rbx = zx.q(arg3)
int32_t var_1c8 = rbx.d
void* rcx

if (arg3 s> 0)
    rcx = *(arg1 + 0x28)

uint64_t result

if (arg3 s<= 0 || rcx == 0)
    int32_t temp0_1 = rbx.d
    bool cond:0_1 = temp0_1 != 0
    
    if (temp0_1 s< 0)
        rbx = -1
        
        do
            rbx += 1
        while (*(arg2 + rbx) != 0)
        
        var_1c8 = rbx.d
        cond:0_1 = rbx.d != 0
    
    if (cond:0_1)
        void* rcx_1 = *(arg1 + 0x58)
        
        if (rcx_1 == 0)
            void* r8_1 = *(arg1 + 0x50)
            
            if (r8_1 == 0 || *(r8_1 + 8) == 0)
                goto label_142aa0c29
            
            int32_t r9
            r9.b = arg4 != 0
            void var_1b8
            sub_142b15620(&var_1b8, arg1, r8_1, r9 + 0x15)
            int32_t var_c0
            
            if (var_c0 == 0)
                sub_142b15d30(&var_1b8)
                rbx = zx.q(var_1c8)
            label_142aa0c29:
                int32_t r14_1 = 1
                
                if (arg4 == 0)
                    r14_1 = arg4
                
                int32_t result_2 = rbx.d
                
                do
                    rbx = zx.q(rbx.d - 1)
                    var_1c8 = rbx.d
                    uint32_t rdx_2 = zx.d(*(sx.q(rbx.d) + arg2))
                    
                    if (rdx_2.b s< 0)
                        rdx_2 = sub_142a9be90(arg2, 0, &var_1c8, rdx_2, 0xfd).d
                        rbx = zx.q(var_1c8)
                    
                    int64_t* rcx_7 = *(arg1 + 0x28)
                    int64_t rax_2
                    
                    if (rcx_7 == 0)
                        void* rcx_8 = *(arg1 + 0x58)
                        
                        if (rcx_8 != 0)
                            rax_2 = sub_142a9f280(rcx_8, rdx_2)
                            rbx = zx.q(var_1c8)
                        else if (rdx_2 s< 0x110000)
                            rax_2.b = sub_142a9f8f0(arg1, rdx_2).b & 1
                        else
                            rax_2.b = 0
                    else
                        rax_2 = (*(*rcx_7 + 8))(rcx_7, rdx_2)
                        rbx = zx.q(var_1c8)
                    
                    if (r14_1 != sx.d(rax_2.b))
                        break
                    
                    result_2 = rbx.d
                while (rbx.d s> 0)
                
                result = zx.q(result_2)
            else
                int32_t result_1 = sub_142b168a0(&var_1b8, arg2, var_1c8, arg4)
                sub_142b15d30(&var_1b8)
                result = zx.q(result_1)
        else
            result = sub_142b168a0(rcx_1, arg2, rbx.d, arg4)
    else
        result = 0
else
    result = sub_142b14fa0(rcx, arg2, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
