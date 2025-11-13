// 函数: sub_1428508c0
// 地址: 0x1428508c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = sub_14289a500(&data_1434eb590)

if (rax == 0)
    sub_1428a5670((rax + 0x14).d, 0xc0, (rax + 7).d, "ssl\ssl_lib.c", 0x539)
    return 0

sub_14289a4d0(rax, 0x68, 0, arg2)
int64_t rax_2

if (rax == *(arg1 + 0x10))
    void* rcx_2 = *(arg1 + 0x20)
    
    if (rcx_2 == 0)
        rax_2 = *(arg1 + 0x18)
    else
        rax_2 = sub_14289a660(rcx_2)

if (rax != *(arg1 + 0x10) || rax != rax_2)
    sub_14289aa00(rax)
    void* rcx_4 = *(arg1 + 0x20)
    
    if (rax != *(arg1 + 0x10))
        int64_t rax_5
        
        if (rcx_4 == 0)
            rax_5 = *(arg1 + 0x18)
        else
            rax_5 = sub_14289a660(rcx_4)
        
        int64_t rax_6
        int64_t rsi_1
        
        if (rax == rax_5)
            void* rcx_8 = *(arg1 + 0x20)
            rsi_1 = *(arg1 + 0x10)
            
            if (rcx_8 == 0)
                rax_6 = *(arg1 + 0x18)
            else
                rax_6 = sub_14289a660(rcx_8)
        
        if (rax != rax_5 || rsi_1 == rax_6)
            sub_142899f50(*(arg1 + 0x10))
            *(arg1 + 0x10) = rax
            sub_142850540(arg1, rax)
        else
            sub_142899f50(*(arg1 + 0x10))
            *(arg1 + 0x10) = rax
    else
        if (rcx_4 != 0)
            *(arg1 + 0x18) = sub_14289a670(*(arg1 + 0x18))
        
        sub_142899f50(*(arg1 + 0x18))
        int64_t* rcx_7 = *(arg1 + 0x20)
        *(arg1 + 0x18) = rax
        
        if (rcx_7 != 0)
            *(arg1 + 0x18) = sub_14289a6f0(rcx_7, rax)

return 1
