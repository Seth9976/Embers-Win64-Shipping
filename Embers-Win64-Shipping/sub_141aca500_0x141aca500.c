// 函数: sub_141aca500
// 地址: 0x141aca500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_14083ad30(arg1 + 0x48, 0)

int64_t var_28
int64_t* result = sub_141e42610(arg3, &var_28)
int32_t var_20
int32_t r9 = var_20
int64_t r8 = var_28

if (r9 s> 0)
    int64_t rsi_1 = 0
    
    do
        uint64_t rdx_1 = zx.q(*(rsi_1 + r8 + 8))
        
        if (rdx_1.d s< *(arg2 + 0xc8))
            result = *(arg2 + 0xc0)
            
            if (*(result + (rdx_1 << 1)) != 0xffff)
                int64_t rbp_1 = sx.q(*(arg1 + 0x50))
                int32_t var_34_1 = rbx
                int32_t var_30_1 = 0
                int32_t rax = (rbp_1 + 1).d
                *(arg1 + 0x50) = rax
                
                if (rax s> *(arg1 + 0x54))
                    sub_14083a7e0(arg1 + 0x48)
                
                int64_t rcx_3 = *(arg1 + 0x48)
                int64_t rdx_4 = rbp_1 * 3
                result = nullptr
                *(rcx_3 + (rdx_4 << 2)) = rdx_1.w.q
                *(rcx_3 + (rdx_4 << 2) + 8) = 0
                r9 = var_20
                r8 = var_28
        
        rbx += 1
        rsi_1 += 0xc
    while (rbx s< r9)

if (r8 == 0)
    return result

return sub_140a74f90(r8)
