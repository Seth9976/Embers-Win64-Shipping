// 函数: sub_142892810
// 地址: 0x142892810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t i_2 = 0
*arg3 = 0
char* rbx = arg2
void* rax = *arg1

if ((*(rax + 0x10) & 0x100000) != 0)
    int32_t rax_1 = (*(rax + 0x20))(arg1, arg4, 0, 0)
    
    if (rax_1 s>= 0)
        *arg3 = rax_1
        return 1
    
    return 0

uint64_t rbp_1 = zx.q(*(rax + 4))

if ((*(arg1 + 0x6c) & 0x100) == 0)
    if (rbp_1.d u<= 1)
        *arg3 = i_2
    else
        if (*(arg1 + 0x14) != 0 || arg1[0xf].d == 0)
            sub_1428a5670(6, 0x65, 0x6d, "crypto\evp\evp_enc.c", 0x20e)
            return 0
        
        if (rbp_1.d u> 0x20)
            sub_1428bc530()
            noreturn
        
        uint32_t rdx_1 = zx.d(*(zx.q((rbp_1 - 1).d) + arg1 + 0x80))
        int32_t var_18_1
        
        if (rdx_1 == 0 || rdx_1 s> rbp_1.d)
            var_18_1 = 0x219
        label_142892969:
            sub_1428a5670(6, 0x65, 0x64, "crypto\evp\evp_enc.c", var_18_1)
            return 0
        
        if (rdx_1 != 0)
            while (true)
                rbp_1 = zx.q((rbp_1 - 1).d)
                
                if (zx.d(*(rbp_1 + arg1 + 0x80)) != rdx_1)
                    var_18_1 = 0x21e
                    break
                
                i_2 += 1
                
                if (i_2 s>= rdx_1)
                    goto label_14289290b
            
            goto label_142892969
        
    label_14289290b:
        i_2 = *(*arg1 + 4) - rdx_1
        int64_t i_1 = sx.q(i_2)
        
        if (i_2 s> 0)
            void* rsi_1 = arg1 - rbx
            int64_t i
            
            do
                *rbx = *(rsi_1 + rbx + 0x80)
                rbx = &rbx[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *arg3 = i_2
else if (*(arg1 + 0x14) != 0)
    sub_1428a5670(6, 0x65, 0x8a, "crypto\evp\evp_enc.c", 0x206)
    return 0

return 1
