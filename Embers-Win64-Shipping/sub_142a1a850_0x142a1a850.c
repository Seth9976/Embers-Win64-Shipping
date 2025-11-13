// 函数: sub_142a1a850
// 地址: 0x142a1a850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1070)
void var_1098
int64_t rax_1 = __security_cookie ^ &var_1098
uint64_t count = arg2 * 2
int32_t r10_2 = (sx.d(*arg4) + 1) s>> 1
int32_t rax_5 = (sx.d(arg4[1]) + 1) s>> 1
int32_t rsi = 0
int32_t var_105c = rax_5
int16_t rbp = -1
int32_t var_1060 = r10_2
int32_t var_104c = neg.d(rax_5)
int32_t var_1050 = neg.d(r10_2)
memset(arg8, 0, count)
int64_t rax_7
uint64_t rcx_2
rax_7, rcx_2 = memset(arg9, 0, count)

if (arg3 == 0)
    int32_t rdx = 0
    int32_t var_1038[0x400]
    
    if (arg2 s> 0)
        int32_t (* r8_2)[0x400] = &var_1038
        int16_t* r9 = arg12
        
        do
            int64_t rcx_3 = sx.q(*r9)
            int32_t r10_4 = sx.d(*(arg1 + (rcx_3 << 1)))
            rcx_2 = zx.q(neg.d(rcx_3.d))
            uint64_t rax_9 = zx.q((sbb.q(rax_7, rax_7, rcx_3.d != 0)).d) & 4
            
            if (r10_4 s>= *(&var_1060 + rax_9) || r10_4 s<= *(&var_1050 + rax_9))
                rsi += 1
                *r8_2 = rdx
                r8_2 = &(*r8_2)[1]
            
            rdx += 1
            r9 = &r9[1]
            rax_7 = sx.q(rdx)
        while (rax_7 s< arg2)
    
    int64_t rsi_1 = sx.q(rsi)
    int64_t r11_1 = 0
    
    if (rsi_1 s> 0)
        do
            int64_t rbx = sx.q(var_1038[r11_1])
            int64_t r8_3 = sx.q(arg12[rbx])
            int64_t r10_5 = r8_3 * 2
            int32_t rdx_1 = sx.d(*(r10_5 + arg1))
            int32_t r9_2 = rdx_1 s>> 0x1f
            int32_t rax_15 = ((sx.d(*((zx.q((sbb.q(rcx_2, rcx_2, r8_3.d != 0)).d) & 2) + arg5)) + 1)
                s>> 1) + (r9_2 ^ rdx_1) - r9_2
            
            if (rax_15 s< 0xffff8000)
                rax_15 = -0x8000
            else if (rax_15 s> 0x7fff)
                rax_15 = 0x7fff
            
            void* rcx_8
            rcx_8.b = r8_3.d != 0
            void* rdx_2 = rcx_8 * 2
            int32_t r8_9 = ((((sx.d(*(rdx_2 + arg6)) * rax_15) s>> 0x10) + rax_15)
                * sx.d(*(rdx_2 + arg7))) s>> 0xf
            int16_t rcx_10 = (r9_2.w ^ r8_9.w) - r9_2.w
            *(r10_5 + arg8) = rcx_10
            rcx_2 = arg9
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(sx.d(*(rdx_2 + arg10)) * sx.d(rcx_10))
            *(r10_5 + rcx_2) = ((temp3_1 - temp2_1) s>> 1).w
            
            if (r8_9 != 0)
                rbp = rbx.w
            
            r11_1 += 1
        while (r11_1 s< rsi_1)

*arg11 = rbp + 1
__security_check_cookie(rax_1 ^ &var_1098)
return arg11
