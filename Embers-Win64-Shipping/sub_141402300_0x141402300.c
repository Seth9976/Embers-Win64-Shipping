// 函数: sub_141402300
// 地址: 0x141402300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg2 + 0x3e8)
void* r8 = arg1

if (result != 0)
    int64_t var_88 = 0
    int64_t var_80_1 = 0
    
    if (&var_88 != arg2 + 0x228)
        int64_t rbx_1 = sx.q(*(arg2 + 0x230))
        int64_t rdi_1 = *(arg2 + 0x228)
        var_80_1.d = rbx_1.d
        
        if (rbx_1.d != 0)
            sub_140638750(&var_88, rbx_1.d, 0)
            memcpy(var_88, rdi_1, (rbx_1 << 2).d)
            r8 = arg1
    
    int32_t* result_1 = result
    int64_t var_a8
    sub_1413be590(&var_a8, &var_88)
    
    if (sub_140a80f40() == 0)
        uint32_t rax_1
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        int32_t var_a0
        int32_t var_9c
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
            void var_38
            void** rax_7 = sub_1413dd7f0(&var_38, nullptr, 0xff)
            void* rdx_5 = *rax_7
            *(rdx_5 + 0x10) = r8
            *(rdx_5 + 0x18) = result_1
            *(rdx_5 + 0x20) = 0
            *(rdx_5 + 0x20) = var_a8
            var_a8 = 0
            *(rdx_5 + 0x28) = var_a0
            *(rdx_5 + 0x2c) = var_9c
            var_a0.q = 0
            void* rcx_14 = *rax_7
            int32_t rax_9 = rax_7[2].d
            int64_t* rdx_6 = rax_7[1]
            int64_t* rbx_2 = *(rcx_14 + 0x38)
            int64_t* arg_20 = rbx_2
            void* rdi_2 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rdi_2 += 1
                rbx_2 = arg_20
            
            result = sub_1407c96b0(rcx_14, rdx_6, rax_9, 1)
            
            if (rbx_2 != 0)
                result = zx.q(*rdi_2)
                *rdi_2 -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(arg_20)
        else
            int32_t* result_2 = result_1
            int64_t var_68 = var_a8
            int32_t var_60_1 = var_a0
            int32_t var_5c_1 = var_9c
            var_a0.q = 0
            var_a8 = 0
            int32_t** var_48 = &result_2
            int64_t* var_40_1 = &var_68
            void arg_18
            result = sub_1413b87a0(r8 + 0x63d8, &arg_18, &var_48, nullptr)
            int64_t rcx_8 = var_68
            
            if (rcx_8 != 0)
                result = sub_140a74f90(rcx_8)
    else
        int64_t* var_58 = &result_1
        int64_t* var_50_1 = &var_a8
        void arg_10
        result = sub_1413b87a0(r8 + 0x63d8, &arg_10, &var_58, nullptr)
    
    int64_t rcx_16 = var_a8
    
    if (rcx_16 != 0)
        result = sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_88
    
    if (rcx_17 != 0)
        return sub_140a74f90(rcx_17)

return result
