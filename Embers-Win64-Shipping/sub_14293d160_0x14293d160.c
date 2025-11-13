// 函数: sub_14293d160
// 地址: 0x14293d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0
int32_t rdi = 0

if (sub_142898c70(*(arg1 + 0x18)) s> 0)
    int32_t rax_2
    
    do
        int32_t rcx_2 = *sub_142898ea0(*(arg1 + 0x18), rdi)
        
        if (rcx_2 != 4)
            if (rcx_2 != 3)
                if (rcx_2 == 2 && *arg1 s< 3)
                    *arg1 = 3
            else if (*arg1 s< 4)
                *arg1 = 4
        else if (*arg1 s< 5)
            *arg1 = 5
        
        rdi += 1
        rax_2 = sub_142898c70(*(arg1 + 0x18))
    while (rdi s< rax_2)

int32_t rdi_1 = 0

if (sub_142898c70(*(arg1 + 0x20)) s> 0)
    int32_t rax_5
    
    do
        if (*sub_142898ea0(*(arg1 + 0x20), rdi_1) == 1 && *arg1 s< 5)
            *arg1 = 5
        
        rdi_1 += 1
        rax_5 = sub_142898c70(*(arg1 + 0x20))
    while (rdi_1 s< rax_5)

if (sub_1428a96d0(**(arg1 + 0x10)) != 0x15 && *arg1 s< 3)
    *arg1 = 3

int32_t result = sub_142898c70(*(arg1 + 0x28))

if (result s> 0)
    do
        int32_t* rax_7 = sub_142898ea0(*(arg1 + 0x28), rsi)
        int32_t rdx_4 = *rax_7
        
        if (**(rax_7 + 8) == 1)
            if (rdx_4 s< 3)
                *rax_7 = 3
            
            if (*arg1 s< 3)
                *arg1 = 3
        else if (rdx_4 s< 1)
            *rax_7 = 1
        
        rsi += 1
        result = sub_142898c70(*(arg1 + 0x28))
    while (rsi s< result)

if (*arg1 s< 1)
    *arg1 = 1

return result
