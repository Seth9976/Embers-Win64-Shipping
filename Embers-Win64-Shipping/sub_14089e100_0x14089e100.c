// 函数: sub_14089e100
// 地址: 0x14089e100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_a8 = 0

if (*(arg1 + 0x5e9) == 0)
    sub_142022f40(arg1, arg2, arg3)

if (*(arg1 + 0x5e8) == 0)
    void** const var_78 = &data_142dfbf60
    void* var_70_1 = arg1 - 0x28
    void** const* var_40_1 = &var_78
    sub_140591950(arg1 + 0x308, &var_78)
    
    if (var_40_1 != 0)
        void** const* rdx_4
        rdx_4.b = var_40_1 != &var_78
        (*var_40_1)[4](var_40_1, rdx_4)
else
    uint32_t rax_2
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
        void var_90
        void** rax_4 = sub_14089d520(&var_90, nullptr, 0xff)
        *(*rax_4 + 0x10) = arg1 - 0x28
        int32_t r8 = rax_4[2].d
        int64_t* rdx_2 = rax_4[1]
        void* rcx_3 = *rax_4
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* var_a0_2 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = var_a0_2
        
        int32_t var_a8_1 = 2
        sub_14089f070(rcx_3, rdx_2, r8, 1)
        
        if (rbx_1 != 0)
            int32_t rax_5 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(var_a0_2)
    else
        void* var_98 = arg1 - 0x28
        int64_t var_a0_1 = 0
        sub_14089dd50(&var_98)

int64_t result = zx.q(_Thrd_hardware_concurrency())

if (*(arg1 + 0x398) u> result)
    do
        sub_140b732d0((zx.o(0)).d)
        result = _Thrd_hardware_concurrency()
    while (*(arg1 + 0x398) u> zx.q(result.d))

if (*(arg1 + 0x5e9) != 0)
    result = sub_142022f40(arg1, arg2, arg3)

__security_check_cookie(rax_1 ^ &var_c8)
return result
