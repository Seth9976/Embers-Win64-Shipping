// 函数: sub_14101c0a0
// 地址: 0x14101c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)
int32_t r10_1 = 1 << r11.b ^ arg2
int64_t r14_1 = r11 * 0x50
int64_t* rbx_1 = *(arg1 + 0xa8) + r14_1

if (rbx_1[1].d != *(rbx_1 + 0x34))
    void* rcx_1 = rbx_1[8]
    void* r8 = &rbx_1[7]
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(rbx_1[9].d) - 1) & sx.q(r10_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *rbx_1
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_2 = i_1 * 3
            
            if (*(r8_1 + (rcx_2 << 2)) == r10_1)
                if (i != 0xffffffff)
                    int32_t* rdi_1 = r8_1 + i_1 * 0xc
                    
                    if (rdi_1 != 0)
                        if (arg2 u<= r10_1)
                            r10_1 = arg2
                        
                        sub_14101c0a0(arg1, zx.q(r10_1), zx.q((r11 + 1).d))
                        return sub_14090a370(*(arg1 + 0xa8) + r14_1, *rdi_1)
                
                break
            
            i = *(r8_1 + (rcx_2 << 2) + 4)
        while (i != 0xffffffff)

int32_t var_28
sub_1409afd50(rbx_1, &var_28)
int32_t rax_2 = var_28
int32_t* var_20
*var_20 = arg2
var_20[1] = 0xffffffff
void arg_10
return sub_140752f60(rbx_1, &arg_10, arg2, var_20, rax_2, nullptr)
