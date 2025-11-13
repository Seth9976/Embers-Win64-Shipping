// 函数: sub_1423291a0
// 地址: 0x1423291a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_8 = arg1
int64_t rsi = 0
int32_t arg_20 = arg5 | 0x6000
int64_t var_68 = 0
int64_t var_60 = 0
int32_t rax_2 = sub_14233a000(arg7, arg8, arg3, &var_68)
int32_t rax_3 = sub_14205e180()
int32_t rdx_1 = 0

if (rax_3 != 0)
    do
        rdx_1 += 2
    while (rdx_1 u< rax_3)

int32_t i = 0
int32_t var_78 = 0

if (arg4[1].d s> 0)
    int32_t zmm6_1 = arg10
    
    do
        void* r11_2 = *arg4 + rsi
        int64_t r10_1 = sx.q(*(r11_2 + 0x40))
        int32_t rax_7
        
        if (arg9[1].d != *(arg9 + 0x34))
            void* rdx_2 = arg9[8]
            void* r8 = &arg9[7]
            
            if (rdx_2 != 0)
                r8 = rdx_2
            
            rax_7 = *(r8 + ((sx.q(arg9[9].d - 1) & r10_1) << 2))
        
        int32_t rax_8
        
        if (arg9[1].d == *(arg9 + 0x34) || rax_7 == 0xffffffff)
        label_1423292f2:
            arg_20 = 0xffffffff
            rax_8 = 0
        else
            int64_t r9_1 = *arg9
            
            while (true)
                int32_t* r8_2 = sx.q(rax_7) * 0xa0
                
                if (*(r8_2 + r9_1) == r10_1.d)
                    break
                
                rax_7 = *(r8_2 + r9_1 + 0x90)
                
                if (rax_7 == 0xffffffff)
                    goto label_1423292f2
            
            arg_20 = rax_7
            
            if (rax_7 == 0xffffffff)
                rax_8 = 0
            else
                int64_t rax_12 = sx.q(rax_7) * 0xa0
                
                if (rax_12 == neg.q(r9_1))
                    rax_8 = 0
                else
                    rax_8 = rax_12.d + r9_1.d + 0x10
        
        int64_t var_80_1 = arg11
        zmm6_1 = sub_142326a60(&arg_8, &var_68, arg8, r11_2, arg4, arg6, 0, rax_2, &var_78, arg3, 
            arg2, rax_8, zmm6_1)
        i += 1
        rsi += 0xe8
    while (i s< arg4[1].d)

int64_t rcx_7 = var_68
arg_20 = arg5

if (rcx_7 == 0)
    return arg5

return sub_140a74f90(rcx_7)
