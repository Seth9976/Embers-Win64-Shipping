// 函数: sub_1406b03c0
// 地址: 0x1406b03c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t lpdwProcessId

if (GetWindowThreadProcessId(arg1, &lpdwProcessId) == *(arg2 + 0xe8))
    void** rdi_1 = *(arg2 + 0x40)
    int32_t var_20_1 = 0
    void** rcx = rdi_1
    void** rax_1 = rdi_1[1]
    void** var_28 = rax_1
    
    while (*(rax_1 + 0x19) == 0)
        var_28 = rax_1
        
        if (rax_1[4] u>= arg1)
            rcx = rax_1
            int32_t var_20_3 = 1
            rax_1 = *rax_1
        else
            rax_1 = rax_1[2]
            int32_t var_20_2 = 0
    
    if (*(rcx + 0x19) != 0 || arg1 u< rcx[4])
        if (*(arg2 + 0x48) == 0x666666666666666)
            sub_14061d880()
            noreturn
        
        void** rax_2 = j_sub_140a82f30(0x28)
        int128_t zmm0_1 = var_28.o
        rax_2[4] = arg1
        *rax_2 = rdi_1
        rax_2[1] = rdi_1
        rax_2[2] = rdi_1
        rax_2[3].w = 0
        var_28.o = zmm0_1
        sub_14061d540(arg2 + 0x40, &var_28, rax_2)

return 1
