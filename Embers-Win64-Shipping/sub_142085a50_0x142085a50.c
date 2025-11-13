// 函数: sub_142085a50
// 地址: 0x142085a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t* r14 = *(arg1 + 0x108)

if (r14 != 0)
    void* r15_1 = *(arg1 + 0x640)
    
    if (r15_1 != 0 && *(r15_1 + 0xc8) != 0)
        int32_t i = 0
        
        if (*(arg1 + 0x668) s> 0)
            int64_t rbp_1 = 0
            
            do
                (*(*r14 + 0x210))(r14, *(*(arg1 + 0x660) + rbp_1), r15_1)
                i += 1
                rbp_1 += 8
            while (i s< *(arg1 + 0x668))

if (*(arg1 + 0x668) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_1 = *(rsi_1 + *(arg1 + 0x660))
        (*(*rcx_1 + 0x30))(rcx_1)
        i_1 += 1
        rsi_1 = &rsi_1[1]
    while (i_1 s< *(arg1 + 0x668))

return sub_1423892a0(arg1) __tailcall
