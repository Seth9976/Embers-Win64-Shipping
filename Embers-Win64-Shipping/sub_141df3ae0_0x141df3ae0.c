// 函数: sub_141df3ae0
// 地址: 0x141df3ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int32_t i = 0

if (*(arg1 + 0x80) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rcx = *(r14_1 + *(arg1 + 0x78))
        
        if (rcx != 0)
            sub_141e14330(rcx, arg2)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x80))

int32_t i_1 = 0

if (*(arg1 + 0xe0) s> 0)
    do
        (*(*arg2 + 0x38))(arg2, (sx.q(i_1) << 5) + *(arg1 + 0xd8), 0, 0)
        i_1 += 1
    while (i_1 s< *(arg1 + 0xe0))

if (*(arg1 + 0xf0) s> 0)
    do
        (*(*arg2 + 0x38))(arg2, (sx.q(i_2) << 5) + *(arg1 + 0xe8), 0, 0)
        i_2 += 1
    while (i_2 s< *(arg1 + 0xf0))

int64_t* rcx_3 = *(arg1 + 0x240)

if (rcx_3 != 0)
    (*(*rcx_3 + 0xa0))(rcx_3, arg1, arg2)

return sub_140594850() __tailcall
