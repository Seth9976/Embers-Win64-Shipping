// 函数: sub_142863520
// 地址: 0x142863520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (*(*(arg1 + 0x488) + 0x18) == 2)
    return sub_1428c1b70() __tailcall

void* rcx_1 = *(arg1 + 0xa8)
void* rax_2 = *(rcx_1 + 0x238)
int32_t rbx_1

if ((*(rax_2 + 0x20) & 0x14) != 0)
    rbx_1 = 0x80
    
    if (*(rax_2 + 0x44) != 0x100)
        rbx_1 = 0x50
    
    goto label_142863592

void* rcx_2 = *(rcx_1 + 0x2e0)

if (rcx_2 != 0)
    rbx_1 = sub_142896b50(*(rcx_2 + 8))
label_142863592:
    
    if (rbx_1 s< 0x80)
        if (rbx_1 s< 0x70)
            return sub_1428c1b70() __tailcall
        
        return sub_1428c1bf0() __tailcall
    
    void* result = sub_1428c1750()
    
    if (result != 0)
        int64_t* rax_4 = sub_142890500()
        int32_t rax_5
        
        if (rax_4 != 0)
            rax_5 = sub_142890900(rax_4, 2)
        
        if (rax_4 == 0 || rax_5 == 0)
            sub_1428c1620(result)
        else
            int64_t* rax_6
            
            if (rbx_1 s< 0xc0)
                rax_6 = sub_1428bdcf0(nullptr)
            else
                rax_6 = sub_1428bdd20(nullptr)
            
            if (rax_6 != 0 && sub_1428c1a70(result, rax_6, nullptr, rax_4) != 0)
                return result
            
            sub_1428c1620(result)
            sub_1428901a0(rax_6)
        
        sub_1428901a0(rax_4)

return 0
