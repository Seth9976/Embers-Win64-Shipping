// 函数: sub_142c43f00
// 地址: 0x142c43f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143ccb858
int32_t r15 = data_143ccb870
int32_t rsi = 0
int32_t rdi = 0
int32_t result = *(arg2 + 0x60)
int32_t* r9 = *(arg2 + 0x70)
int32_t* arg_20 = r9
int32_t result_1 = result

if (result != 0)
    int32_t* r14_1 = r9
    
    do
        result = *r14_1
        int64_t r8
        
        if (result == 0xe31 || result - 0xe34 u<= 3 || result == 0xe47 || result - 0xe4d u<= 1)
            r8 = 0
        label_142c4402e:
            int64_t rcx_8 = sx.q(rbp)
            int32_t rbx_1 = *(((rcx_8 * 3 + r8) << 3) + 0x1436a5e70)
            rbp = *(((rcx_8 * 3 + r8) << 3) + 0x36a5e70 + &__dos_header.e_cp)
            int64_t rcx_11 = sx.q(r15) * 3 + r8
            r15 = *((rcx_11 << 3) + 0x1436a5ed4)
            
            if (rbx_1 == 0)
                rbx_1 = *((rcx_11 << 3) + 0x1436a5ed0)
            
            if (rdi - rsi u>= 2)
                sub_142bf5c70(arg2, rsi, rdi)
                r9 = arg_20
            
            if (rbx_1 != 4)
                result = sub_142c440f0(*r14_1, rbx_1, arg3, arg1)
                *r14_1 = result
            else
                uint64_t rcx_13 = zx.q(rsi) * 5
                result = sub_142c440f0(r9[rcx_13], 4, arg3, arg1)
                r9[rcx_13] = result
            
            r9 = arg_20
        else
            if (result - 0xe38 u<= 2)
                r8 = 1
                goto label_142c4402e
            
            if (result - 0xe48 u<= 4)
                r8 = 2
                goto label_142c4402e
            
            int64_t rcx_6
            
            if (((result - 0xe1b) & 0xfffffff9) == 0 && result != 0xe21)
                rcx_6 = 1
            else if (result == 0xe0d || result == 0xe10)
                rcx_6 = 2
            else if (result - 0xe0e u<= 1)
                rcx_6 = 3
            else
                result -= 0xe01
                rcx_6 = 4
                
                if (result u<= 0x2d)
                    rcx_6 = 0
            
            rbp = *((rcx_6 << 2) + 0x143ccb848)
            rsi = rdi
            r15 = *((rcx_6 << 2) + 0x143ccb860)
        rdi += 1
        r14_1 = &r14_1[5]
    while (rdi u< result_1)

return result
