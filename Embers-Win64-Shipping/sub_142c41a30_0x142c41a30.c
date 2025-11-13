// 函数: sub_142c41a30
// 地址: 0x142c41a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_140dc0ea0(1, 0x48)

if (result == 0)
    return result

*result = 0xffffffff
sub_142c423b0(&result[2], arg1 + 0x28, 0x70726566, 1)
char const* const r11 = "ferp"
int64_t i_1 = 0xc
void* rdi = &result[6]
int64_t i

do
    int32_t rax_2
    
    if ((r11[4] & 1) != 0)
    label_142c41aef:
        rax_2 = 0
    else
        int32_t rdx_1 = *(arg1 + 0x38)
        int32_t r8_1 = 0
        int32_t rdx_2 = rdx_1 - 1
        int32_t r10_1 = *r11
        int64_t rbx_1 = *(arg1 + 0x40)
        
        if (rdx_1 - 1 s< 0)
        label_142c41aef_1:
            rax_2 = 0
        else
            uint64_t rax_1
            
            while (true)
                rax_1 = zx.q((rdx_2 + r8_1) u>> 1)
                int32_t r9_1 = *(rbx_1 + rax_1 * 0x24)
                int32_t rcx_2
                
                if (r10_1 u>= r9_1)
                    rcx_2.b = r10_1 u> r9_1
                
                if (r10_1 u< r9_1 || rcx_2 s< 0)
                    rdx_2 = (rax_1 - 1).d
                else
                    if (rcx_2 s<= 0)
                        break
                    
                    r8_1 = (rax_1 + 1).d
                
                if (r8_1 s> rdx_2)
                    goto label_142c41aef_2
            
            void* rcx_3 = rbx_1 + rax_1 * 0x24
            
            if (rcx_3 == 0)
            label_142c41aef_2:
                rax_2 = 0
            else
                rax_2 = *(rcx_3 + 0x1c)
    
    *rdi = rax_2
    r11 = &r11[8]
    rdi += 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
