// 函数: sub_141dbb300
// 地址: 0x141dbb300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t result

if ((*(arg1 + 0x5a) & 4) != 0)
    void* rdi_1 = nullptr
    void* i_1 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0x18
    void* rax_2 = sub_142486350()
    
    if (rax_2 != 0)
        void* rax_3 = sub_142459c10()
        
        if (rax_3 != 0)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s<= *(rax_2 + 0x38) && *(*(rax_2 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
                rdi_1 = rax_2
    
    void var_108
    void* r8 = &var_108
    
    if (rdi_1 != sub_142459c10())
        sub_1419f71f0(arg1, rax_2, r8)
    else
        sub_1419f6fe0(arg1, rax_2, r8)
    
    void* i = &var_108
    
    if (i_1 != 0)
        i = i_1
    
    for (void* r8_1 = i + (sx.q(var_40_1) << 3); i != r8_1; i += 8)
        int64_t* rdx_3 = *i
        
        if ((*(rdx_3 + 0x8a) & 1) != 0)
            int512_t zmm1
            zmm1.o = arg2
            result = (*(*rdx_3 + 0x528))(rdx_3, zmm1, arg3)
            
            if (i_1 != 0)
                result = sub_140a74f90(i_1)
            
            goto label_141dbb420
    
    if (i_1 != 0)
        sub_140a74f90(i_1)

result = (*(*arg1 + 0x5f8))(arg1, arg3, arg3 + 0xc)
label_141dbb420:
__security_check_cookie(rax_1 ^ &var_128)
return result
