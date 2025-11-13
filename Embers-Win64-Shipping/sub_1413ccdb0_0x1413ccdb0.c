// 函数: sub_1413ccdb0
// 地址: 0x1413ccdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_58
sub_141228a60(&var_58, arg2)
*(arg2 + 0x28) = sub_1413cc430(arg1 + 0xee8, &var_58)
void* rax_3 = *(arg2 + 0x20)

if (*(rax_3 + 0x13c) == 0)
    char rax_4
    
    if ((*(rax_3 + 0x138) & 4) != 0)
        rax_4 = sub_14122cc00(arg2)
    
    if ((*(rax_3 + 0x138) & 4) == 0 || rax_4 == 0)
        if (*(arg1 + 0xf98) == 0)
            *(arg1 + 0xf98) = arg2
        
        if (*(arg1 + 8) s< 3)
            int64_t* rcx_3 = *(arg2 + 0x20)
            char rax_6 = (*(*rcx_3 + 0x98))(rcx_3)
            char rdx_1 = *(*(arg2 + 0x20) + 0x13d)
            int32_t rcx_6
            
            if (rdx_1 == 0)
                rcx_6 = -1
            else
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_forward(zx.d(rdx_1))
                rcx_6 = temp0_1
            
            if (rcx_6 s>= 0)
                int64_t rax_7 = sx.q(rcx_6)
                
                if (*(arg1 + (rax_7 << 3) + 0xfa0) == 0)
                    *(arg1 + (rax_7 << 3) + 0xfa0) = arg2
                    
                    if ((*(*(arg2 + 0x20) + 0x138) & 8) == 0 || rax_6 != 0)
                        *(arg1 + 0xf78) = 1

if (sub_1410a09e0((*U"1111")[sx.q(*(arg1 + 8))]) != 0)
    void* rax_11 = *(arg2 + 0x20)
    
    if ((*(rax_11 + 0x138) & 0x10) != 0 || *(rax_11 + 0x128) != 0)
        sub_1413d15b0(arg1, arg2)

void* rcx_9 = *(arg2 + 0x20)

if ((*(rcx_9 + 0x13a) & 1) != 0)
    uint64_t rdx_3 = zx.q(*(rcx_9 + 0x13b))
    void* rax_12 = *(arg1 + (rdx_3 << 3) + 0xfb8)
    void* rax_13
    int128_t zmm6
    
    if (rax_12 != 0)
        rax_13 = *(rax_12 + 0x20)
        zmm6.d = (*(rcx_9 + 0x34)).d f* 0.589999974f
        zmm6.d = zmm6.d f+ *(rcx_9 + 0x30) * 0.300000012f
        zmm6.d = zmm6.d f+ *(rcx_9 + 0x38) * 0.109999999f
    
    if (rax_12 == 0 || not(zmm6.d f<= *(rax_13 + 0x34) * 0.589999974f
            + *(rax_13 + 0x30) * 0.300000012f + *(rax_13 + 0x38) * 0.109999999f))
        *(arg1 + (rdx_3 << 3) + 0xfb8) = arg2

int64_t result = sub_14121c3c0(arg2)
__security_check_cookie(rax_1 ^ &var_78)
return result
