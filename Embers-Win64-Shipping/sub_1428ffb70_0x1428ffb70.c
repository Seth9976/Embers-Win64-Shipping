// 函数: sub_1428ffb70
// 地址: 0x1428ffb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x20
__chkstk(0x20)
int32_t i_2 = arg3
char* rsi = arg2
char* r14 = arg1
int32_t result_1 = *arg5

if (arg3 != 0)
    char* arg_28
    char* r15_1 = arg_28
    
    if (arg6 == 0)
        int32_t i
        
        do
            if (result_1 == 0)
                arg_28.d = (zx.d(*r15_1) << 8 | zx.d(r15_1[1])) << 0x10 | zx.d(r15_1[2]) << 8
                    | zx.d(r15_1[3])
                arg_28:4.d = zx.d(r15_1[6]) << 8 | zx.d(r15_1[7]) | zx.d(r15_1[4]) << 0x18
                    | zx.d(r15_1[5]) << 0x10
                sub_1428ff370(&arg_28, arg4)
                int32_t rcx_26 = arg_28.d
                *r15_1 = (rcx_26 u>> 0x18).b
                r15_1[1] = (rcx_26 u>> 0x10).b
                char rax_28 = arg_28.b
                r15_1[2] = (rcx_26 u>> 8).b
                int32_t rcx_28 = arg_28:4.d
                r15_1[3] = rax_28
                r15_1[4] = (rcx_28 u>> 0x18).b
                r15_1[5] = (rcx_28 u>> 0x10).b
                char rax_33 = arg_28:4.b
                r15_1[6] = (rcx_28 u>> 8).b
                r15_1[7] = rax_33
            
            char rdx_8 = *r14
            r14 = &r14[1]
            result = sx.q(result_1)
            char rcx_30 = r15_1[result]
            r15_1[result] = rdx_8
            *rsi = rdx_8 ^ rcx_30
            rsi = &rsi[1]
            result_1 = (result_1 + 1) & 7
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        int32_t i_1
        
        do
            if (result_1 == 0)
                arg_28.d = (zx.d(*r15_1) << 8 | zx.d(r15_1[1])) << 0x10 | zx.d(r15_1[2]) << 8
                    | zx.d(r15_1[3])
                arg_28:4.d = zx.d(r15_1[6]) << 8 | zx.d(r15_1[7]) | zx.d(r15_1[4]) << 0x18
                    | zx.d(r15_1[5]) << 0x10
                sub_1428ff370(&arg_28, arg4)
                int32_t rcx_11 = arg_28.d
                *r15_1 = (rcx_11 u>> 0x18).b
                r15_1[1] = (rcx_11 u>> 0x10).b
                char rax_11 = arg_28.b
                r15_1[2] = (rcx_11 u>> 8).b
                int32_t rcx_13 = arg_28:4.d
                r15_1[3] = rax_11
                r15_1[4] = (rcx_13 u>> 0x18).b
                r15_1[5] = (rcx_13 u>> 0x10).b
                char rax_16 = arg_28:4.b
                r15_1[6] = (rcx_13 u>> 8).b
                r15_1[7] = rax_16
            
            int64_t result_2 = sx.q(result_1)
            result.b = *(r14 - arg2 + rsi) ^ r15_1[result_2]
            *rsi = result.b
            rsi = &rsi[1]
            r15_1[result_2] = result.b
            result_1 = (result_1 + 1) & 7
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

*arg5 = result_1
return result
