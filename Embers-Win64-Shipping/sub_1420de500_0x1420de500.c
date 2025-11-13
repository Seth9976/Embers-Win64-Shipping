// 函数: sub_1420de500
// 地址: 0x1420de500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* r14 = *(arg1 + 0x98)
int64_t* result = &r14[sx.q(*(arg1 + 0xa0))]
uint64_t r15_1 = sx.q(*(arg1 + 0xa0)) << 3 u>> 3

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rdi_1 = *r14
        
        if ((*(rdi_1 + 0xba) & 2) == 0)
            int64_t var_38
            sub_140d30800(rdi_1 + 0x38, &var_38)
            int64_t var_28
            int64_t* rax_1 = sub_140baf760(&var_28, &var_38)
            int16_t* rdx_2
            
            if (rax_1[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rax_1
            
            void arg_8
            result = sub_140b58260(&arg_8, rdx_2, 1)
            *(rdi_1 + 0x138) = *result
            int64_t rcx_4 = var_28
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = var_38
            
            if (rcx_5 != 0)
                result = sub_140a74f90(rcx_5)
            
            *(rdi_1 + 0xba) |= 2
        
        if (*(rdi_1 + 0x138) == arg2)
            int64_t* rcx_6 = rdi_1 + 0xe8
            
            if (arg3 == 0)
                rcx_6 = rdi_1 + 0xf8
            
            result = sub_1405a9f90(rcx_6, 0)
        
        r14 = &r14[1]
        rsi += 1
    while (rsi != r15_1)

return result
