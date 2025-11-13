// 函数: sub_142a1e270
// 地址: 0x142a1e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(*(arg2 + 0xf00) + 9) != 0)
    sub_142a22390(arg2)
else if (*(*(arg2 + 0xfb8) + 0x18) - 0x41 u> 0x3fffffbe)
    *(*(arg2 + 0xf00) + 9) = sub_142a22140(arg1, arg2) == 0

uint32_t rsi = zx.d(**(arg2 + 0xf00))

if (*(arg2 + 0xf60) != 0)
    sub_142a20b50(arg1, arg2)

int16_t* var_58

if (*(*(arg2 + 0xf00) + 2) != 0)
    sub_142a23070(arg2)
else
    sub_142a210c0(arg2, *(arg2 + 0xf20), *(arg2 + 0xf28), *(arg2 + 0xf38), *(arg2 + 0xf40), 
        *(arg2 + 0xf4c), *(arg2 + 0xeb0), *(arg2 + 0xeb8), *(arg2 + 0xe94))
    
    if (rsi == 4)
        int64_t rbp_1 = sx.q(*(arg2 + 0xe80))
        
        if (*(*(arg2 + 0xf00) + 9) != 0)
            __builtin_memset(arg2 + 0x7c0, 0, 0x19)
        
        int64_t r8_3 = sx.q(*(arg2 + 0xe80))
        void* r14_1 = arg2 + 0x7c0
        void* rdx_3 = *(arg2 + 0xf18)
        int64_t** rsi_1 = arg2 + 0x860
        int32_t* r15_1 = 0xc
        int64_t r9_4 = *(arg2 + 0xea8) - r8_3
        int64_t i_1 = 0x10
        *(sx.q((r8_3 << 2).d) + r9_4 + 0x10) = *(rdx_3 + 0x10)
        *(sx.q((r8_3 << 3).d) + r9_4 + 0x10) = *(rdx_3 + 0x10)
        *(sx.q((r8_3 * 3).d << 2) + r9_4 + 0x10) = *(rdx_3 + 0x10)
        int64_t rax_21 = rbp_1
        int64_t i
        
        do
            int32_t* rdi_2 = sx.q(rsi_1[4].d) + *(arg2 + 0xea8)
            int64_t* rcx_12 = rdi_2 - rax_21
            int64_t var_48_1
            var_48_1.b = *(rcx_12 - 1)
            sub_142a22450(rcx_12, rdi_2 - 1, zx.q(rbp_1.d), *(r15_1 + *(arg2 + 0xf00)), rdi_2, 
                rbp_1.d, var_48_1.b)
            char rax_23 = *r14_1
            
            if (rax_23 != 0)
                if (rax_23 s<= 1)
                    var_58.d = rbp_1.d
                    sub_1403abb3e(sx.d(**rsi_1) * sx.d(*(arg2 + 0x7e0)), rdi_2, rbp_1.d, rdi_2, 
                        var_58.d)
                    **rsi_1 = 0
                else
                    sub_1403abc22(*rsi_1, arg2 + 0x7e0, rdi_2, rbp_1.d)
            
            r15_1 = &r15_1[1]
            rsi_1 = &rsi_1[7]
            r14_1 += 1
            rax_21 = rbp_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    else
        sub_142a21260(arg2, *(arg2 + 0xf18), *(arg2 + 0xf30), *(arg2 + 0xf48), *(arg2 + 0xea8), 
            *(arg2 + 0xe80))

void* result = *(arg2 + 0xf00)

if (*(result + 9) != 0)
    return result

if (rsi != 4)
    void* rdx_8 = arg2 + 0x7e0
    
    if (rsi != 9)
        if (*(arg2 + 0x7d8) s<= 1)
            **(arg2 + 0xda8) = *(arg2 + 0x820) * **(arg2 + 0xda0)
            sub_142a21d70(*(arg2 + 0xda8), arg2 + 0x180)
            **(arg2 + 0xda0) = 0
        else
            sub_142a21ab0(arg2 + 0xda0, arg2 + 0x820)
            sub_1403adb00(*(arg2 + 0xda8), arg2 + 0x180)
            __builtin_memset(*(arg2 + 0xda0), 0, 0x20)
        
        rdx_8 = arg2 + 0x800
    
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string(arg2 + 0x180, rdx_8, 
        *(arg2 + 0xea8), zx.q(*(arg2 + 0xe80)), arg2 + 0x7c0)

int32_t var_50
var_50.q = arg2 + 0x7d0
var_58.d = *(arg2 + 0xe94)
return sub_142a218d0(arg2 + 0x380, arg2 + 0x840, *(arg2 + 0xeb0), *(arg2 + 0xeb8), var_58.d, var_50)
