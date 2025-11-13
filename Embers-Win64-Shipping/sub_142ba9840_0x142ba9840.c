// 函数: sub_142ba9840
// 地址: 0x142ba9840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x204)

if (rbx == 3)
    *(arg1 + 0x18) = 0x9c
    return 

void* r11 = *(arg1 + 0x248)
uint64_t r8 = zx.q(*(arg1 + 0x240))
int32_t i = *arg2
void* rdx = r11 + r8 * 0x18
bool cond:0 = r11 != rdx

if (r11 u< rdx)
    while (*(r11 + 0xc) != i)
        r11 += 0x18
        
        if (r11 u>= rdx)
            break
    
    cond:0 = r11 != rdx

if (cond:0)
    goto label_142ba98b8

if (r8.d u< *(arg1 + 0x244))
    *(arg1 + 0x240) = (r8 + 1).d
label_142ba98b8:
    
    if (i u<= 0xffff)
        *r11 = rbx
        uint32_t rdx_1 = zx.d(i.w)
        *(r11 + 0xc) = rdx_1
        int32_t rax_2 = *(arg1 + 0x210) + 1
        *(r11 + 0x10) = 1
        *(r11 + 4) = rax_2
        *(r11 + 0x14) = 0
        
        if (i u> *(arg1 + 0x260))
            *(arg1 + 0x260) = rdx_1
        
        if (sub_142bacca0(arg1).b == 0)
            while (true)
                uint32_t rax_4 = zx.d(*(arg1 + 0x218))
                
                if (rax_4 != 0x2c)
                    if (rax_4 == 0x2d)
                        *(r11 + 8) = *(arg1 + 0x210)
                        return 
                    
                    if (rax_4 != 0x89)
                        if (sub_142bacca0(arg1) != 0)
                            return 
                        
                        continue
                
                *(arg1 + 0x18) = 0x89
                break
        
        return 

*(arg1 + 0x18) = 0x8c
