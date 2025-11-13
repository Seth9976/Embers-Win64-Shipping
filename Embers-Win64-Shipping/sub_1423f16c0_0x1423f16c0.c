// 函数: sub_1423f16c0
// 地址: 0x1423f16c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = data_14399fa48
int32_t i

for (i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0xc40))
        break
    
    char* r8_1 = *(*(arg1 + 0xc38) + (sx.q(i) << 3))
    char rcx_1 = *r8_1
    bool cond:0_1
    
    if (r10 == 0xffffffff)
        cond:0_1 = rcx_1 != 1
    label_1423f1706:
        
        if (not(cond:0_1))
            void* rcx_2 = *(r8_1 + 0x278)
            
            if (rcx_2 != 0)
                int32_t rax
                rax.b = sub_14243ac50(rcx_2) == 1
                return rax
    else if (rcx_1 == 3)
        cond:0_1 = *(r8_1 + 0x230) != r10
        goto label_1423f1706

i.b = 0
return i
