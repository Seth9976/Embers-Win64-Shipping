// 函数: sub_1429de8f0
// 地址: 0x1429de8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(*(arg2 + 0xf00) + 9) != 0)
    sub_142a22390(arg2)
else if (*(*(arg2 + 0xfb8) + 0x18) - 0x41 u> 0x3fffffbe)
    *(*(arg2 + 0xf00) + 9) = sub_142a22140(arg1, arg2) == 0

uint32_t rdi = zx.d(**(arg2 + 0xf00))

if (*(arg2 + 0xf60) != 0)
    sub_142a20b50(arg1, arg2)

int32_t* var_78

if (*(*(arg2 + 0xf00) + 2) != 0)
    sub_142a23070(arg2)
else
    sub_142a210c0(arg2, *(arg2 + 0xf20), *(arg2 + 0xf28), *(arg2 + 0xf38), *(arg2 + 0xf40), 
        *(arg2 + 0xf4c), *(arg2 + 0xeb0), *(arg2 + 0xeb8), *(arg2 + 0xe94))
    
    if (rdi == 4)
        int64_t rbp_1 = sx.q(*(arg2 + 0xe80))
        
        if (*(*(arg2 + 0xf00) + 9) != 0)
            __builtin_memset(arg2 + 0x7c0, 0, 0x19)
        
        int64_t r8_3 = sx.q(*(arg2 + 0xe80))
        void* r12_1 = arg2 + 0x7c0
        void* rdx_3 = *(arg2 + 0xf18)
        int64_t** r14_1 = arg2 + 0x860
        int32_t i = 0
        int64_t r9_4 = *(arg2 + 0xea8) - r8_3
        int64_t r13_1 = 0xc
        *(sx.q((r8_3 << 2).d) + r9_4 + 0x10) = *(rdx_3 + 0x10)
        *(sx.q((r8_3 << 3).d) + r9_4 + 0x10) = *(rdx_3 + 0x10)
        void* r11_1 = -0x7c0 - arg2
        int64_t rdx_4 = 0
        int64_t arg_20 = 0
        void* var_48_1 = r11_1
        *(sx.q((r8_3 * 3).d << 2) + r9_4 + 0x10) = *(rdx_3 + 0x10)
        
        do
            int64_t rcx_11 = sx.q(r14_1[4].d)
            int32_t* rsi_2 = *(arg2 + 0xea8) + rcx_11
            int64_t* r10_2
            
            if (i s>= 4 || *(arg1 + 0x2be0) == 0)
                r10_2 = rsi_2 - rbp_1
            else
                r10_2 = *(arg2 + 0xf18) + rcx_11
            
            char* rdx_5
            uint64_t r8_4
            
            if ((i.b & 3) != 0 || *(arg1 + 0x2be0) == 0)
                rdx_5 = rsi_2 - 1
                r8_4 = zx.q(rbp_1.d)
            else
                rdx_5 = rdx_4 + *(arg2 + 0xf30)
                r8_4 = 1
            
            char rax_24
            
            if (((i - 4) & 0xfffffff3) != 0 || i == 0x10 || *(arg1 + 0x2be0) == 0)
                rax_24 = *(r10_2 - 1)
            else
                rax_24 = *(r11_1 + *(arg2 + 0xf30) + r12_1 - 1)
            
            int64_t var_68_1
            var_68_1.b = rax_24
            sub_142a22450(r10_2, rdx_5, r8_4, *(*(arg2 + 0xf00) + r13_1), rsi_2, rbp_1.d, 
                var_68_1.b)
            char rax_25 = *r12_1
            
            if (rax_25 != 0)
                if (rax_25 s<= 1)
                    var_78.d = rbp_1.d
                    sub_1403abb3e(sx.d(**r14_1) * sx.d(*(arg2 + 0x7e0)), rsi_2, rbp_1.d, rsi_2, 
                        var_78.d)
                    **r14_1 = 0
                else
                    sub_1403abc22(*r14_1, arg2 + 0x7e0, rsi_2, rbp_1.d)
            
            i += 1
            r11_1 = var_48_1
            rdx_4 = arg_20 + 1
            r13_1 += 4
            arg_20 = rdx_4
            r14_1 = &r14_1[7]
            r12_1 += 1
        while (i s< 0x10)
    else
        sub_142a21260(arg2, *(arg2 + 0xf18), *(arg2 + 0xf30), *(arg2 + 0xf48), *(arg2 + 0xea8), 
            *(arg2 + 0xe80))

void* result = *(arg2 + 0xf00)

if (*(result + 9) != 0)
    return result

if (rdi != 4)
    void* rdx_10 = arg2 + 0x7e0
    
    if (rdi != 9)
        if (*(arg2 + 0x7d8) s<= 1)
            **(arg2 + 0xda8) = *(arg2 + 0x820) * **(arg2 + 0xda0)
            sub_142a21d70(*(arg2 + 0xda8), arg2 + 0x180)
            **(arg2 + 0xda0) = 0
        else
            sub_142a21ab0(arg2 + 0xda0, arg2 + 0x820)
            sub_1403adb00(*(arg2 + 0xda8), arg2 + 0x180)
            __builtin_memset(*(arg2 + 0xda0), 0, 0x20)
        
        rdx_10 = arg2 + 0x800
    
    __crt_stdio_output::string_output_adapter<wchar_t>::write_string(arg2 + 0x180, rdx_10, 
        *(arg2 + 0xea8), zx.q(*(arg2 + 0xe80)), arg2 + 0x7c0)

int32_t var_70
var_70.q = arg2 + 0x7d0
var_78.d = *(arg2 + 0xe94)
return sub_142a218d0(arg2 + 0x380, arg2 + 0x840, *(arg2 + 0xeb0), *(arg2 + 0xeb8), var_78.d, var_70)
