// 函数: sub_140d86ef0
// 地址: 0x140d86ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_898
void* result = __security_cookie ^ &var_898
void* result_1 = result

if (arg1[4] != 0)
    uint128_t zmm6 = zx.o(arg5)
    int64_t var_868
    
    if (not(zmm6.q f!= -1.0))
        QueryPerformanceCounter(&var_868)
        zmm6.q = float.d(var_868)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ 16777216.0
        zmm6.q = zmm6.q f- data_143de5880
    
    if (data_143de542b != 0 && data_143e20c94 == 0)
        int64_t rax_1 = *arg1
        data_143e20c94 = 1
        result = (*(rax_1 + 0x10))(arg1, arg2, zx.q(arg3), arg4)
        data_143e20c94 = 0
    else if (arg3 != 0x40)
        int64_t rbp
        rbp.b = 0
        
        if (arg1[5].b == 0)
            if (arg3 == 2)
                sub_140d872f0(arg1, u"1001")
                rbp.b = 1
            else if (arg3 == 3)
                sub_140d872f0(arg1, u"1101")
                rbp.b = 1
        
        wchar16 buffer[0x400]
        memset(&buffer, 0, 0x800)
        uint64_t var_870_1 = zmm6.q
        int64_t var_860
        int64_t* rax_3 = sub_140b16600(&var_860, arg3, arg4, arg2, data_143de5484)
        int16_t* const r8_2
        
        if (rax_3[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *rax_3
        
        sub_140b01a80(&buffer, u"%s%s", r8_2)
        int64_t rcx_7 = var_860
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        void* rax_4 = sub_140a7b0a0()
        
        if (rax_4 != 0)
            sub_140a8dc00(rax_4, 0)
        
        int64_t r8_3 = -1
        
        do
            r8_3 += 1
        while (buffer[r8_3] != 0)
        
        int32_t lpReserved
        lpReserved.q = 0
        WriteConsoleW(arg1[4], &buffer, r8_3.d, &var_868, lpReserved)
        
        if (rbp.b != 0)
            sub_140d872f0(arg1, &data_142d40450)
        
        result = sub_140a7b0a0()
        
        if (result != 0)
            result = sub_140a89de0(result, 0)
    else
        sub_140d872f0(arg1, arg2)
        result.b = 0 != *arg2
        arg1[5].b = result.b

__security_check_cookie(result_1 ^ &var_898)
return result
