// 函数: sub_142a2d6b0
// 地址: 0x142a2d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg2 - arg3
int32_t count = arg1 s>> 1
int32_t arg_10
int32_t* var_78 = &arg_10
uint32_t var_68
uint32_t var_60
uint32_t arg_18
int64_t* rbp
int64_t* rsi
char* rdi_1
uint64_t r9_5
int32_t r13
int64_t* r14
uint32_t r15_1

if (arg1 != 0x10)
    r15_1 = (sub_142a061b0(arg9, arg12, &data_143609798, 0, var_78) + 0x20) u>> 6
    arg_18 = (sub_142a061b0(arg4, arg7, &data_143609798, 0, &arg_10) + 0x20) u>> 6
    sub_142a061b0(arg4, arg7, arg9, arg12, &arg_10)
    r14 = arg10
    rbp = arg5
    r13 = arg13
    var_68 = (arg_10 + 0x20) u>> 6
    sub_142a05da0(rbp, zx.q(arg8), r14, zx.q(r13), &arg_10)
    rsi = arg11
    rdi_1 = arg6
    var_60 = (arg_10 + 8) u>> 4
    sub_142a05da0(rdi_1, zx.q(arg8), rsi, zx.q(r13), &arg_10)
    r9_5 = zx.q((arg_10 + 8) u>> 4)
else
    r15_1 = (data_144021010(arg9, arg12, &data_143609798, 0, var_78) + 0x80) u>> 8
    arg_18 = (data_144021010(arg4, zx.q(arg7), &data_143609798, 0, &arg_10) + 0x80) u>> 8
    data_144021010(arg4, zx.q(arg7), arg9, zx.q(arg12), &arg_10)
    r14 = arg10
    rbp = arg5
    r13 = arg13
    var_68 = (arg_10 + 0x80) u>> 8
    sub_142a061b0(rbp, arg8, r14, r13, &arg_10)
    rsi = arg11
    rdi_1 = arg6
    var_60 = (arg_10 + 0x20) u>> 6
    sub_142a061b0(rdi_1, arg8, rsi, r13, &arg_10)
    r9_5 = zx.q((arg_10 + 0x20) u>> 6)

int32_t r10_1 = rax_1 s>> 4

for (uint32_t i = r15_1 u>> 1; i != 0; i u>>= 1)
    r10_1 += 1

for (int32_t i_1 = arg3 s>> 2; i_1 != 0; i_1 s>>= 2)
    r10_1 += 1

int32_t rcx_16 = r10_1 * r10_1
uint32_t result

if (var_68 u>= rcx_16 || var_60 << 2 u>= rcx_16 || (r9_5 << 2).d u>= rcx_16 || r15_1 u> arg_18 * 5)
    int128_t* r8_13 = arg9
    
    if (arg1 == 0x10)
        sub_1403adc70(arg4, arg7, r8_13, arg12)
        sub_1403add80(rbp, arg8, r14, r13)
        return sub_1403add80(rdi_1, arg8, rsi, r13)
    
    result = sub_1403add80(arg4, arg7, r8_13, arg12)
    
    if (count s> 0)
        uint64_t rbx_4 = zx.q(count)
        uint64_t i_2
        
        do
            result = memcpy(r14, rbp, count)
            rbp += sx.q(arg8)
            r14 += sx.q(r13)
            i_2 = rbx_4
            rbx_4 -= 1
        while (i_2 != 1)
        rsi = arg11
        r13 = arg13
    
    if (count s> 0)
        uint64_t rbx_5 = zx.q(count)
        uint64_t i_3
        
        do
            result = memcpy(rsi, rdi_1, count)
            rdi_1 = &rdi_1[sx.q(arg8)]
            rsi += sx.q(r13)
            i_3 = rbx_5
            rbx_5 -= 1
        while (i_3 != 1)
else
    uint32_t i_4 = var_68 u>> 1
    int32_t r9_11 = 1
    
    for (; i_4 != 0; i_4 u>>= 1)
        r9_11 += 1
    
    int32_t r9_12 = r9_11 s>> 1
    int32_t rdx_10 = 0
    
    if (r9_12 s>= 0)
        int32_t r8_7 = rol.d(1, r9_12.b)
        int32_t temp9_1
        
        do
            int32_t rdx_11 = rdx_10 | r8_7
            rdx_10 = rdx_11 - r8_7
            
            if (var_68 u>= rdx_11 * rdx_11)
                rdx_10 = rdx_11
            
            r8_7 = ror.d(r8_7, 1)
            temp9_1 = r9_12
            r9_12 -= 1
        while (temp9_1 - 1 s>= 0)
    
    int32_t r11_1
    r11_1.b = (rdx_10 + 1) * rdx_10 + 1 u<= var_68
    result = divu.dp.d(0:((rdx_10 + r11_1) << 4), r10_1)
    int32_t rbx_3 = result s>> (rax_1 s>> 5).b
    
    if (rbx_3 != 0)
        uint64_t r9_13 = zx.q(arg12)
        uint64_t rdx_13 = zx.q(arg7)
        int32_t* var_78_4
        var_78_4.d = rbx_3
        
        if (arg1 != 0x10)
            sub_1403be0e9(arg4, rdx_13, arg9, r9_13, var_78_4.d)
            var_78_4.d = rbx_3
            sub_142a2dcf0(rbp, arg8, r14, r13, var_78_4.d)
            var_78_4.d = rbx_3
            return sub_142a2dcf0(rdi_1, arg8, rsi, r13, var_78_4.d)
        
        sub_1403be020(arg4, rdx_13, arg9, r9_13, var_78_4.d)
        var_78_4.d = rbx_3
        sub_1403be0e9(rbp, zx.q(arg8), r14, zx.q(r13), var_78_4.d)
        var_78_4.d = rbx_3
        return sub_1403be0e9(rdi_1, zx.q(arg8), rsi, zx.q(r13), var_78_4.d)

return result
