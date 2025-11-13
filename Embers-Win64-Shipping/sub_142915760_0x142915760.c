// 函数: sub_142915760
// 地址: 0x142915760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rsi = arg1[5]

if (**arg1 == 0x390)
    void* rbp_1 = *(arg1[2] + 0x28)
    int64_t* rcx = *(rbp_1 + 0x60)
    
    if (rcx == 0)
        return 1
    
    int32_t arg_8
    void* arg_10
    int64_t arg_18
    
    if (sub_1429100e0(rcx, &arg_10, &arg_18, &arg_8) != 0)
        int32_t rax_3 = sub_1428916c0(arg_10)
        int32_t rdi_2 = sub_142897860(rbp_1) - rax_3
        int32_t rcx_4 = rdi_2 - 1
        bool cond:0_1 = (sub_142897530(rbp_1) & 7) != 1
        int32_t rax_6 = arg_8
        
        if (cond:0_1)
            rcx_4 = rdi_2
        
        if (rax_6 s<= rcx_4)
            *(rsi + 0x34) = rax_6
            *(rsi + 0x20) = arg_10
            *(rsi + 0x28) = arg_18
            *(rsi + 0x30) = arg_8
            return 1
        
        sub_1428a5670(4, 0xa5, 0x96, "crypto\rsa\rsa_pmeth.c", 0x334)

return 0
