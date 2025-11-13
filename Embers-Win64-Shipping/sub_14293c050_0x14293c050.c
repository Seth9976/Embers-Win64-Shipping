// 函数: sub_14293c050
// 地址: 0x14293c050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r15 = 0
void* rdi = *(*(arg1 + 8) + 0x18)
int64_t* result = sub_14296bd40(rdi)

if (result != 0 && *(rdi + 0x18) != 0)
    int32_t rbx_1 = 0
    int32_t* rsi_1 = *(*(arg1 + 8) + 0x10)
    
    if (sub_142898c70(rsi_1) s<= 0)
    label_14293c0de:
        sub_14293c270(*(arg1 + 8))
        r15 = 1
    else
        while (true)
            if (sub_14293bc70(arg1, sub_142898ea0(rsi_1, rbx_1)) s<= 0)
                sub_1428a5670(0x2e, 0x7d, 0x74, "crypto\cms\cms_env.c", 0x365)
                break
            
            rbx_1 += 1
            
            if (rbx_1 s>= sub_142898c70(rsi_1))
                goto label_14293c0de
    
    int64_t rdx_3 = *(rdi + 0x28)
    int64_t rcx_7 = *(rdi + 0x20)
    *(rdi + 0x18) = 0
    sub_1428a6890(rcx_7, rdx_3, "crypto\cms\cms_env.c", 0x36f)
    *(rdi + 0x20) = 0
    *(rdi + 0x28) = 0
    
    if (r15 == 0)
        sub_142899e70(result)
        return 0

return result
