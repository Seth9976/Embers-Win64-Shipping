// 函数: sub_141c99e40
// 地址: 0x141c99e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, u"BlueprintCore", 0)
int32_t* result_2 = result

if (result != 0)
    void* rax_1 = sub_140bdf2e0()
    void* rcx_1 = *(result_2 + 0x10)
    result = rax_1 + 0x30
    int64_t rdx_1 = sx.q(result[2])
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        int64_t rbx_1 = *(result_2 + 0x18)
        int32_t var_28
        sub_14090a150(arg1 + 0x6c0, &var_28)
        int64_t* var_20
        *var_20 = rbx_1
        var_20[1].d = 0xffffffff
        void arg_10
        sub_1407ec830(arg1 + 0x6c0, &arg_10, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_20, 
            var_28, nullptr)
        int64_t* var_38 = nullptr
        int32_t result_1 = 0
        sub_140d3c7c0(result_2, &var_38, 1)
        int64_t* rdi_2 = var_38
        result = sx.q(result_1)
        void* r14_1 = &rdi_2[result]
        
        if (rdi_2 != r14_1)
            do
                int64_t rbx_4 = *(*rdi_2 + 0x18)
                sub_14090a150(arg1 + 0x6c0, &var_28)
                *var_20 = rbx_4
                var_20[1].d = 0xffffffff
                result = sub_1407ec830(arg1 + 0x6c0, &arg_10, 
                    (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d), var_20, var_28, nullptr)
                rdi_2 = &rdi_2[1]
            while (rdi_2 != r14_1)
            
            rdi_2 = var_38
        
        if (rdi_2 != 0)
            return sub_140a74f90(rdi_2)

return result
