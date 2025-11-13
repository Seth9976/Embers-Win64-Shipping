// 函数: ??$_Sort_unchecked@PEAUGSISymbolEntry@@V<lambda_e19a14271c24f61a19fa61e1244ecbc2>@@@std@@YAXPEAUGSISymbolEntry@@0_JV<lambda_e19a14271c24f61a19fa61e1244ecbc2>@@@Z
// 地址: 0x140759f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t arg_18 = rsi
void* rax = *(arg1 + 0x528)

if (rax != 0 && *(rax + 0xa8) != 0)
    void* rax_2 = *(**(rax + 0xa0) + 0x728)
    
    if (rax_2 != 0)
        int64_t* i = *(rax_2 + 0x88)
        int32_t rdi_1 = 0
        int64_t r15_1 = *(rax_2 + 0x10)
        
        for (void* rbp_1 = &i[sx.q(*(rax_2 + 0x90))]; i != rbp_1; i = &i[1])
            int64_t result = *i
            int64_t var_28
            int64_t* rax_5 = sub_140b5e690(sx.q(rdi_1) * 0x38 + *(r15_1 + 0x488), &var_28)
            int16_t* rdx_1
            
            if (arg2[1].d == 0)
                rdx_1 = &data_142d40450
            else
                rdx_1 = *arg2
            
            int16_t* const rcx_3
            
            if (rax_5[1].d == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = *rax_5
            
            int32_t rax_6 = sub_140a54510(rcx_3, rdx_1)
            int64_t rcx_4 = var_28
            rsi.b = rax_6 == 0
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            if (rsi.b != 0)
                return result
            
            rdi_1 += 1

return 0
