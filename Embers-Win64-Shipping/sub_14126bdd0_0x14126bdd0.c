// 函数: sub_14126bdd0
// 地址: 0x14126bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
void** const var_58 = &data_142f11938
int64_t rdi = 0
int64_t* rcx = arg6
int64_t var_50 = arg10
int64_t var_48 = arg9
int64_t var_40 = arg11
int64_t var_38 = arg12
arg4[4] = &var_58
int32_t result = &var_58
arg5[4] = &var_58
int64_t r15 = sx.q(rcx[1].d)

if (r15 s> 0)
    int64_t rbx_1 = 0
    int64_t rsi_1 = 0
    
    do
        if (arg7 != 0)
            result = *(*arg7 + (rbx_1 << 2))
        
        if (arg7 == 0 || test_bit(result, arg3))
            int64_t* rdx = *rcx
            char rax_5 = (*(arg1 + 0x4810)).b
            int32_t rax_7
            int32_t r8
            void* r10_1
            
            if ((rax_5 & 1) != 0 && (rax_5 & 2) == 0)
                r10_1 = arg1 + 0x4818
                void* rcx_1 = *(r10_1 + 0x10)
                r8 = *(*(*(rdx + rsi_1 + 8) + 0x110) + 0x110)
                
                if (rcx_1 != 0)
                    r10_1 = rcx_1
                
                rax_7 = r8
                
                if (r8 s< 0)
                    rax_7 = r8 + 0x1f
            
            int64_t rax_11
            int64_t* rcx_2
            
            if ((rax_5 & 1) == 0 || ((rax_5 & 2) == 0
                    && not(test_bit(*(r10_1 + (sx.q(rax_7 s>> 5) << 2)), r8 & 0x1f))))
                rax_11 = *arg4
                rcx_2 = arg4
            else
                rax_11 = *arg5
                rcx_2 = arg5
            
            int32_t var_68_1 = 0xffffffff
            result = (*(rax_11 + 8))(rcx_2, *(rdx + rsi_1), -1)
            rcx = arg6
            arg3 = arg_18
        
        rbx_1 += 1
        rsi_1 += 0x18
    while (rbx_1 s< r15)

int64_t rbx_2 = sx.q(arg8[1].d)

if (rbx_2 s> 0)
    do
        void* rdx_2 = *(*arg8 + (rdi << 3))
        *(rdx_2 + 0x9c)
        char rax_14 = (*(arg1 + 0x4810)).b
        int32_t rax_16
        int32_t r10_2
        void* r11_1
        
        if ((rax_14 & 1) != 0 && (rax_14 & 2) == 0)
            r11_1 = arg1 + 0x4818
            void* rcx_3 = *(r11_1 + 0x10)
            r10_2 = *(*(*(*(rdx_2 + 0xa0) + 8) + 0x110) + 0x110)
            
            if (rcx_3 != 0)
                r11_1 = rcx_3
            
            rax_16 = r10_2
            
            if (r10_2 s< 0)
                rax_16 = r10_2 + 0x1f
        
        int64_t* rcx_4
        int64_t r10_4
        
        if ((rax_14 & 1) == 0 || ((rax_14 & 2) == 0
                && not(test_bit(*(r11_1 + (sx.q(rax_16 s>> 5) << 2)), r10_2 & 0x1f))))
            r10_4 = *arg4
            rcx_4 = arg4
        else
            r10_4 = *arg5
            rcx_4 = arg5
        
        int32_t var_68_2 = *(rdx_2 + 0xa8)
        result = (*(r10_4 + 8))(rcx_4)
        rdi += 1
    while (rdi s< rbx_2)

return result
