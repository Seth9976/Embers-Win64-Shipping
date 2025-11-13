// 函数: sub_141f27c30
// 地址: 0x141f27c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xb0)

if (result == 0 || *(result + 0x14f) != 2)
    result.b = 1
    return result

int128_t zmm6
int128_t var_18 = zmm6

if ((*(arg1 + 0xe8) & 1) != 0)
    void* rsi_1 = *(arg1 + 0xa8)
    
    if (rsi_1 == 0)
        rsi_1 = sub_141ee69e0(arg1)
    
    result = *(arg1 + 0xb8)
    
    if (result == 0 || not(*(rsi_1 + 0x520) f- *(result + 0x26c) <= 0.409999996f))
        void* rcx = *(arg1 + 0xb0)
        uint64_t var_28 = 0
        int32_t var_20 = 0
        void* rdi
        void* arg_18 = rdi
        sub_141f3bc80(rcx, 1, &var_28)
        uint64_t rbx_1 = var_28
        int64_t rbp = rbx_1 + (sx.q(var_20) << 3)
        
        if (rbx_1 == rbp)
        label_141f27d47:
            rdi.b = 1
        else
            while (true)
                rdi = *rbx_1
                
                if (rdi != 0)
                    void* rax_2 = sub_142577430()
                    void* rdx_1 = *(rdi + 0x10)
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s<= *(rdx_1 + 0x38)
                            && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30
                            && (*(rdi + 0x88) & 1) != 0
                            && *(rsi_1 + 0x520) f- *(rdi + 0x26c) <= 0.409999996f)
                        rbx_1 = var_28
                        rdi.b = 0
                        break
                
                rbx_1 += 8
                
                if (rbx_1 == rbp)
                    rbx_1 = var_28
                    goto label_141f27d47
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        return zx.q(rdi.b)

result.b = 0
return result
