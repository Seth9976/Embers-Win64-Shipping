// 函数: sub_141781d30
// 地址: 0x141781d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_58 = arg2
int64_t* var_50
__builtin_memset(&var_50, 0, 0x15)
int32_t var_38 = 0
sub_141750820(&var_58)
void* i_1
void* i = i_1

if (i != 0)
    int64_t* rdi_1 = var_50
    
    do
        int32_t var_40_1
        int64_t rcx_1 = sx.q(var_40_1)
        *(*(i + 0x350) + (rcx_1 << 2)) = 0xffffffff
        int64_t rsi_1 = *(*(i + 0xc8) + (rcx_1 << 3))
        void arg_10
        
        if (*sub_140865c40(arg1 + 0x38, &arg_10, rsi_1) == 0xffffffff)
            sub_14177c490(arg1, rsi_1)
        
        if (rdi_1 != 0)
            int32_t var_30
            int32_t rax_8 = var_30 + 1
            var_30 = rax_8
            
            if (rax_8 s>= rdi_1[1].d)
            label_141781def:
                var_38 += 1
                sub_141750820(&var_58)
                rdi_1 = var_50
                i = i_1
            else
                int64_t* rdx_4 = *(*rdi_1 + (sx.q(rax_8) << 3))
                void* rcx_8 = *rdx_4
                int32_t var_60_1 = rdx_4[1].d
                
                if (rcx_8 == 0)
                    char var_5c_2 = 0
                    i_1.o = rcx_8.o
                else
                    char var_5c_1 = *(rcx_8 + 0x40)
                    i_1.o = rcx_8.o
                
                i = i_1
        else
            int32_t rax_5 = var_40_1 + 1
            var_40_1 = rax_5
            int32_t var_34
            
            if (rax_5 s>= var_34)
                goto label_141781def
    while (i != 0)

return sub_141772da0(arg1, arg2, arg3) __tailcall
