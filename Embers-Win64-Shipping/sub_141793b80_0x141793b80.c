// 函数: sub_141793b80
// 地址: 0x141793b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rdi = 0
int64_t (* var_78)(void* arg1, int32_t* arg2)
int64_t* var_58

if (arg3 != 0)
    var_58 = arg1
    int64_t* var_50_2
    __builtin_memset(&var_50_2, 0, 0x15)
    int32_t var_38_1 = 0
    result = sub_141750820(&var_58)
    void* i_2
    void* i = i_2
    
    if (i != 0)
        int64_t* r11_1 = var_50_2
        
        do
            int64_t rcx_3 = *(i + 0x3c8)
            uint64_t* r8 = *(i + 0x28)
            int32_t var_40_1
            int64_t rax = sx.q(var_40_1)
            int64_t r9_2 = rax * 2
            int64_t rax_1 = rax * 3
            int64_t rdx_3 = rax_1 << 2
            *(r8 + rdx_3) = *(rcx_3 + (rax_1 << 2))
            *(r8 + rdx_3 + 8) = *(rcx_3 + rdx_3 + 8)
            *(*(i + 0x68) + (r9_2 << 3)) = *(*(i + 0x3e0) + (r9_2 << 3))
            
            if (r11_1 != 0)
                int32_t var_30
                int32_t rax_6 = var_30 + 1
                var_30 = rax_6
                
                if (rax_6 s>= r11_1[1].d)
                label_141793cfd:
                    var_38_1 += 1
                    result = sub_141750820(&var_58)
                    r11_1 = var_50_2
                    i = i_2
                else
                    int64_t (** rdx_4)(void* arg1, int32_t* arg2) = *(*r11_1 + (sx.q(rax_6) << 3))
                    int64_t (* rcx_7)(void* arg1, int32_t* arg2) = *rdx_4
                    int32_t var_70_1 = rdx_4[1].d
                    
                    if (rcx_7 == 0)
                        result = nullptr
                        var_78 = rcx_7
                        char var_6c_2 = 0
                        i_2.o = var_78.o
                    else
                        result = zx.q(*(rcx_7 + 0x40))
                        char var_6c_1 = result.b
                        var_78 = rcx_7
                        i_2.o = var_78.o
                    
                    i = i_2
            else
                result = zx.q(var_40_1 + 1)
                var_40_1 = result.d
                int32_t var_34
                
                if (result.d s>= var_34)
                    goto label_141793cfd
        while (i != 0)
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
                int64_t var_48
                var_48.d = rdi
                int64_t* rdx_2
                
                if (rcx == 0)
                    void*** var_50_1 = rdx_1
                    int64_t (* var_68)(void* arg1, int32_t* arg2)
                    rdx_2 = &var_68
                    var_68 = sub_1417a8e40
                    int64_t** var_60_1 = &var_58
                else
                    rbx_1 = *(rcx + 8)
                    rdx_2 = &var_78
                    void* var_50 = rcx
                    var_78 = sub_1417a8d40
                    int32_t var_70
                    var_70.q = &var_58
                
                result = sub_14077b750(rbx_1, rdx_2, 0)
                rdi += rbx_1
            
            i_1 += 1
            r14 += 0x10
        while (i_1 s< arg1[1].d)
return result
