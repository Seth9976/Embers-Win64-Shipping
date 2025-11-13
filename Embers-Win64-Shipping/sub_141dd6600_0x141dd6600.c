// 函数: sub_141dd6600
// 地址: 0x141dd6600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char rcx = *(arg1 + 0x5c)
uint64_t result
result.b = rcx u>> 2
result.b &= 1

if (result.b != arg2)
    int32_t rdi_1 = 0
    *(arg1 + 0x5c) = (rcx & 0xfb) | arg2 << 2
    void* var_28_1 = nullptr
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0x18
    void* rax_2 = sub_142459c10()
    void* rbp_1
    
    if (rax_2 == 0)
        rbp_1 = nullptr
    else
        void* rax_3 = sub_142459c10()
        
        if (rax_3 == 0)
            rbp_1 = nullptr
        else
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rax_2 + 0x38))
                rbp_1 = nullptr
            else
                rbp_1 = rax_2
                
                if (*(*(rax_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rbp_1 = nullptr
    
    void var_e8
    void* r8_1 = &var_e8
    int64_t r8_2
    
    if (rbp_1 != sub_142459c10())
        result, r8_2 = sub_1419f71f0(arg1, rax_2, r8_1)
    else
        result, r8_2 = sub_1419f6fe0(arg1, rax_2, r8_1)
    
    if (var_20_1 s> 0)
        int64_t rbx_2 = 0
        
        do
            void* rcx_3 = &var_e8
            
            if (var_28_1 != 0)
                rcx_3 = var_28_1
            
            int64_t* rcx_4 = *(rcx_3 + rbx_2)
            result, r8_2 = (*(*rcx_4 + 0x380))(rcx_4)
            rdi_1 += 1
            rbx_2 += 8
        while (rdi_1 s< var_20_1)
    
    int64_t* rbx_3 = *(arg1 + 0x130)
    
    if (rbx_3 != 0)
        if (rbx_3[0x2f].d s> 0)
            result = rbx_3[0x2e]
            void* rdx_2 = *(result + (sx.q(rbx_3[0x2f].d) << 3) - 8)
            *(rdx_2 + 0x350) |= 2
            *(rdx_2 + 0x10) = 3
            *(rdx_2 + 0x74) = 0xffffffff
        else if (data_143a2d7b4 != 1 || (*(rbx_3 + 0x14c) & 2) == 0)
            r8_2.b = 1
            result = (*(*rbx_3 + 0x468))(rbx_3, 0, r8_2, 0)
            *(rbx_3 + 0x14c) &= 0xfd
            result.b &= 1
            result.b *= 2
            *(rbx_3 + 0x14c) |= result.b
    
    if (var_28_1 != 0)
        result = sub_140a74f90(var_28_1)

__security_check_cookie(rax_1 ^ &var_108)
return result
