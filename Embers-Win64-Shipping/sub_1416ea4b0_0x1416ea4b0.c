// 函数: sub_1416ea4b0
// 地址: 0x1416ea4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rdi = 0
void* const var_78
int64_t* var_58
int64_t i

if (arg3 != 0)
    var_58 = arg1
    int64_t* var_50_2
    __builtin_memset(&var_50_2, 0, 0x15)
    int32_t var_38_1 = 0
    result = sub_141750820(&var_58)
    
    while (i != 0)
        sub_1416eaf20(*arg2, *arg2[1], &i, arg2[2], arg2[3], arg2[4], arg2[5])
        int64_t* rdx_3 = var_50_2
        
        if (rdx_3 != 0)
            int32_t var_30
            int32_t rax_5 = var_30 + 1
            var_30 = rax_5
            
            if (rax_5 s>= rdx_3[1].d)
                var_38_1 += 1
                result = sub_141750820(&var_58)
            else
                void** rdx_4 = *(*rdx_3 + (sx.q(rax_5) << 3))
                void* rcx_7 = *rdx_4
                int32_t var_70_1 = rdx_4[1].d
                
                if (rcx_7 == 0)
                    result = nullptr
                    var_78 = rcx_7
                    char var_6c_2 = 0
                    i.o = var_78.o
                else
                    result = zx.q(*(rcx_7 + 0x40))
                    char var_6c_1 = result.b
                    var_78 = rcx_7
                    i.o = var_78.o
        else
            int32_t var_40_1
            result = zx.q(var_40_1 + 1)
            var_40_1 = result.d
            int32_t var_34
            
            if (result.d s>= var_34)
                var_38_1 += 1
                result = sub_141750820(&var_58)
else
    int32_t i_1 = 0
    
    if (arg1[1].d s> 0)
        int64_t r14 = 0
        
        do
            void*** rdx_1 = *arg1 + r14
            void* rcx = rdx_1[1]
            int32_t rbx_1
            
            if (rcx == 0)
                result = *rdx_1
                rbx_1 = result[3].d
            else
                rbx_1 = *(rcx + 8)
            
            if (rbx_1 != 0)
                var_58 = arg2
                i.d = rdi
                int64_t* rdx_2
                
                if (rcx == 0)
                    void*** var_50_1 = rdx_1
                    int64_t (* var_68)(int64_t* arg1, int32_t* arg2)
                    rdx_2 = &var_68
                    var_68 = sub_141733ec0
                    int64_t** var_60_1 = &var_58
                else
                    rbx_1 = *(rcx + 8)
                    rdx_2 = &var_78
                    void* var_50 = rcx
                    var_78 = &data_141733e80
                    int32_t var_70
                    var_70.q = &var_58
                
                result = sub_14077b750(rbx_1, rdx_2, 0)
                rdi += rbx_1
            
            i_1 += 1
            r14 += 0x10
        while (i_1 s< arg1[1].d)
return result
