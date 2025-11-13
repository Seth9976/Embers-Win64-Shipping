// 函数: sub_14285e150
// 地址: 0x14285e150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
int32_t rax_1

if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
    rax_1 = *rcx

int64_t rax_7

if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0 || rax_1 s< 0x304 || rax_1 == 0x10000)
    rax_7 = sx.q(sub_142899cf0(*(*(arg1 + 0xa8) + 0xe0), 3, 0, arg3))
    
    if (rax_7 == 0)
        sub_142856580(arg1, 0x50, 0x24c, 0x44, "ssl\statem\statem_lib.c", 0xd2)
        return 0
else
    __builtin_strncpy(arg2, "                                                                ", 
        0x40)
    
    if (*(arg1 + 0x5c) - 0x27 u<= 1)
        char const (* rcx_2)[0x22] = data_143b81600
        void* rdx_1 = arg2 - rcx_2
        char const i
        
        do
            i = *rcx_2
            *(rdx_1 + rcx_2 + 0x40) = i
            rcx_2 = &(*rcx_2)[1]
        while (i != 0)
    else
        char const (* rcx_1)[0x22] = data_143b81608
        void* rdx = arg2 - rcx_1
        char const i_1
        
        do
            i_1 = *rcx_1
            *(rdx + rcx_1 + 0x40) = i_1
            rcx_1 = &(*rcx_1)[1]
        while (i_1 != 0)
    
    int32_t rax_4 = *(arg1 + 0x5c)
    int64_t rax_6
    
    if (rax_4 == 0x27 || rax_4 == 0x1d)
        memcpy(arg2 + 0x62, arg1 + 0x490, (*(arg1 + 0x4d0)).d)
        rax_6 = *(arg1 + 0x4d0)
    else
        int64_t arg_8
        
        if (sub_142851d80(arg1, arg2 + 0x62, 0x40, &arg_8) == 0)
            return 0
        
        rax_6 = arg_8
    
    *arg3 = arg2
    rax_7 = rax_6 + 0x62

*arg4 = rax_7
return 1
