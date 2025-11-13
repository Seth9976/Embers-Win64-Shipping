// 函数: sub_14230c5d0
// 地址: 0x14230c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = *(arg1 + 0x40) * 2

if (rbx_1 s> *(arg1 + 0x58) - *(arg1 + 0x84))
    sub_1409d93a0(arg1 + 0x50, rbx_1)
    int32_t rax_4
    
    if (rbx_1 u< 4)
        rax_4 = 1
    else
        uint32_t rbx_2 = rbx_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_2 + 8)
        int32_t rcx_1
        
        if (rbx_2 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_2 + 7)
        
        if (rcx_3 == 0)
            rax_4 = 1
        else
            rax_4 = 1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_6 = *(arg1 + 0x98)
    
    if (rcx_6 == 0 || rcx_6 s< rax_4)
        *(arg1 + 0x98) = rax_4
        sub_1405c1850(arg1 + 0x50)

int64_t rbx_4 = 0
int32_t** rdi = *(arg1 + 0x38)
int32_t* result = &rdi[sx.q(*(arg1 + 0x40))]
uint64_t r14_1 = sx.q(*(arg1 + 0x40)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        result = *rdi
        int32_t* result_1 = result
        
        if (result != 0)
            int64_t arg_20 = *(result + 0xd0)
            int64_t* var_50 = &arg_20
            int32_t** var_48_1 = &result_1
            void arg_8
            sub_140a5c490(arg1 + 0x50, &arg_8, &var_50, nullptr)
            result = *(result_1 + 0x30)
            
            if (result != 0)
                int64_t var_58 = *(result + 0x18)
                int64_t* var_40 = &var_58
                int32_t** var_38_1 = &result_1
                void arg_10
                result = sub_140a5c490(arg1 + 0x50, &arg_10, &var_40, nullptr)
        
        rdi = &rdi[1]
        rbx_4 += 1
    while (rbx_4 != r14_1)

return result
