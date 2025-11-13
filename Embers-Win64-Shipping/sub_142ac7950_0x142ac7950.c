// 函数: sub_142ac7950
// 地址: 0x142ac7950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_8 = rdi
*(arg1 + 0x520) = 0
int64_t i = 0
void* r14 = arg1 + 0x4f0

do
    void* rsi_1 = *r14
    rdi.b = 0
    int32_t j = 0
    
    if (*(rsi_1 + 8) s> 0)
        do
            int32_t rcx_1 = *(sub_142ae72d0(rsi_1, j) + 0x10)
            
            if (rcx_1 != 0)
                if (rdi.b != 0)
                    *(arg1 + 0x520) = 1
                    goto label_142ac79f5
                
                if (rcx_1 == 1)
                    rdi = zx.q(rcx_1.b)
            else if (rdi.b != 0)
                break
            
            j += 1
        while (j s< *(rsi_1 + 8))
    
    if (*(arg1 + 0x520) != 0)
        break
    
    i += 1
    r14 += 8
while (i s< 6)

label_142ac79f5:
