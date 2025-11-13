// 函数: sub_1408e8130
// 地址: 0x1408e8130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg1[0x90].b != 0 && arg1[0x86] != 0 && arg1[0x87].b != 0)
    int64_t rsi
    rsi.b = 0
    int32_t i = 0
    arg1[0x89].d = arg2.d
    int128_t zmm6
    
    if (*(arg1 + 0x444) s> 0)
        do
            result, zmm6 = sub_1408e9e40(arg1, i)
            rsi.b |= result.b
            i += 1
        while (i s< *(arg1 + 0x444))
        
        if (rsi.b != 0)
            common_cscanf<char>(arg1)
            result = sub_141ee8690(arg1)
    
    int128_t var_28_1 = zmm6
    
    if (arg3 == 0)
        zmm6 = zx.o(0)
    else
        zmm6 = arg1[0x88].d
    
    void* rbx_1 = arg1[0x7d]
    
    if (rbx_1 != 0)
        char var_64_1 = arg5
        int32_t var_68_1 = arg2.d
        char var_63_1 = arg4
        char rax = sub_140a80f40()
        
        if (rax != 0)
            result = sub_1408e87b0(rbx_1, arg2.d, arg5, arg4, zmm6.d)
        else if (data_143f138f4 != rax)
        label_1408e8257:
            void var_58
            int64_t* rax_2 = sub_1408dfac0(&var_58, nullptr, 0xff)
            void* rcx_4 = *rax_2
            *(rcx_4 + 0x10) = rbx_1.o
            *(rcx_4 + 0x20) = zmm6.d.q
            void* rcx_5 = *rax_2
            int32_t r8 = rax_2[2].d
            int64_t* rdx_2 = rax_2[1]
            int64_t* rbx_2 = *(rcx_5 + 0x30)
            int64_t* var_78_1 = rbx_2
            int32_t* rdi_2 = &rbx_2[9]
            
            if (rbx_2 != 0)
                *rdi_2 += 1
                rbx_2 = var_78_1
            
            result = sub_140778000(rcx_5, rdx_2, r8, 1)
            
            if (rbx_2 != 0)
                result = *rdi_2
                *rdi_2 -= 1
                
                if (result == 1)
                    result = sub_140a2f6e0(var_78_1)
        else if (data_143de5480 == rax)
            result = sub_1408e87b0(rbx_1, arg2.d, arg5, arg4, zmm6.d)
        else
            uint32_t rax_1
            rax_1.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_1.b == 0)
                goto label_1408e8257
            
            result = sub_1408e87b0(rbx_1, arg2.d, arg5, arg4, zmm6.d)

return result
