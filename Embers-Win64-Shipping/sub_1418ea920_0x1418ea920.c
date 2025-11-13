// 函数: sub_1418ea920
// 地址: 0x1418ea920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
void var_3b8
sub_1418d0620(&var_3b8, *(arg1 + 0x140), arg2)
int64_t* result = sub_1418ec6f0(arg1 + 0x338)
int64_t* rdi = nullptr
int64_t* result_1 = nullptr
int32_t var_40
int32_t var_3c

if (var_40 != 0 && var_3c != 0)
    int64_t* rax_2 = sub_1418e2530(arg1 + 0x248, *(arg1 + 0x140), &var_3b8)
    rdi = rax_2
    result = sub_1418e21c0(arg1 + 0x248, *(arg1 + 0x140), arg2, &var_3b8, rax_2)
    result_1 = result

if (result_1 != *(arg1 + 0x418) || rdi == 0)
label_1418eaa6d:
    void* rbx_1 = *(arg1 + 0x240)
    
    if (*(rbx_1 + 0x78) != 0)
        result = sub_1418c86c0(rbx_1, 0, 0)
    
    void* rbx_2 = *(rbx_1 + 0x70)
    
    if (*(rbx_2 + 0x2c) == 2)
        result = sub_1418bdeb0(rbx_2)
        *(arg1 + 0x410) = 0
        
        if (data_143efb2f8 != 0)
            sub_1418c8030(*(arg1 + 0x240), nullptr)
            result = sub_1418c2ee0(*(arg1 + 0x240))
            void* rbx_3 = *(arg1 + 0x240)
            
            if (*(rbx_3 + 0x78) != 0)
                result = sub_1418c86c0(rbx_3, 0, 0)
            
            rbx_2 = *(rbx_3 + 0x70)
    
    if (*(arg1 + 0x150) != 0)
        result = sub_1418c21f0(arg1)
        void* rbx_4 = *(arg1 + 0x240)
        *(arg1 + 0x150) = 0
        
        if (*(rbx_4 + 0x78) != 0)
            result = sub_1418c86c0(rbx_4, 0, 0)
        
        rbx_2 = *(rbx_4 + 0x70)
    
    if (rdi != 0 && result_1 != 0)
        if (arg2[0x32] != 0)
            result = sub_1418d99a0(arg1 + 0x248, arg1, *(arg1 + 0x140), rbx_2, arg2, &var_3b8, rdi, 
                result_1)
        else
            int32_t temp0_1 = arg2[0x18].d
            
            if (temp0_1 s> 1)
                result = sub_1418d99a0(arg1 + 0x248, arg1, *(arg1 + 0x140), rbx_2, arg2, &var_3b8, 
                    rdi, result_1)
            else if (temp0_1 == 1 && *arg2 != 0)
                result = sub_1418d99a0(arg1 + 0x248, arg1, *(arg1 + 0x140), rbx_2, arg2, &var_3b8, 
                    rdi, result_1)
else
    void* rdx_3 = *(arg1 + 0x410)
    
    if (rdx_3 == 0 || *(rdx_3 + 0x370) != rdi[0x6e].d)
        goto label_1418eaa6d
    
    uint64_t r9_2 = zx.q(*(rdx_3 + 0x360))
    
    if (r9_2 != 0)
        int64_t r8_3 = 0
        int64_t rcx_5 = 0
        
        while (*(rcx_5 + rdi + 0xe4) != 1)
            if (*(rcx_5 + rdi + 0xec) == 1)
                break
            
            if (*(rcx_5 + rdi + 0xe8) == 0 && *(rcx_5 + rdx_3 + 0xe8) == 1)
                break
            
            if (*(rcx_5 + rdi + 0xf0) == 0 && *(rcx_5 + rdx_3 + 0xf0) == 1)
                break
            
            result = zx.q(*(rcx_5 + rdx_3 + 0xf8))
            
            if (*(rcx_5 + rdi + 0xf8) != result.d)
                break
            
            r8_3 += 1
            rcx_5 += 0x24
            
            if (r8_3 s>= r9_2)
                goto label_1418eab81
        
        goto label_1418eaa6d

label_1418eab81:
__security_check_cookie(rax_1 ^ &var_3f8)
return result
