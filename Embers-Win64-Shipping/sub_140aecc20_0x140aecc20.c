// 函数: sub_140aecc20
// 地址: 0x140aecc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount_1 = arg1
int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
uint64_t rdi
rdi.b = 0
int64_t r13
r13.b = performanceCount_1:4.d == 0
int64_t r14 = sx.q(arg5)

if ((r13.b & sub_140b5b8a0(arg1.d, 0x101)) == 0)
    if ((r13.b & sub_140b5b8a0(arg1.d, 0x102)) == 0)
        char rax_12
        int64_t rdx_2
        rax_12, rdx_2 = sub_140b5b8a0(arg1.d, 0x103)
        
        if ((r13.b & rax_12) == 0)
            rdx_2.b = 1
            int64_t* rax_14 = sub_140af32e0(arg1)
            
            if (rax_14 != 0)
                rdi = zx.q((*(*rax_14 + 0x48))(rax_14, arg2, arg3, arg4, r14.d, arg6))
        else
            int32_t rax_13 = sub_140a36620(arg4, arg2, r14.d, *arg3, 0xc)
            *arg3 = rax_13
            rdi.b = rax_13 s> 0
    else
        int64_t (* var_58_1)(int64_t arg1, int32_t arg2, int32_t arg3) = sub_140b07c10
        int64_t (* var_50_1)(int64_t arg1, int64_t arg2) = sub_140b07c20
        void* var_88 = arg4
        int64_t var_48_1 = 0
        int32_t var_80_1 = r14.d
        sub_14036ec10(&var_88, 0xffffffff, 8, 0x1f, 9, 0, "1.2.5", 0x58)
        rdi.b = 0
        char* var_78_1 = arg2
        int32_t var_70_1 = r14.d
        int32_t i
        
        do
            i = sub_14036f750(&var_88, 4)
        while (i == 0)
        
        if (i == 1)
            rdi = zx.q(i.b)
            sub_14036ef90(&var_88)
        
        int32_t var_6c
        *arg3 = var_6c
else
    int32_t rax_1 = *arg3
    int32_t arg_30 = rax_1
    
    if (arg6 == 0 || arg6 == 0xf)
        int32_t var_118_1 = 0xffffffff
        rdi.b = sub_140374160(arg2, &arg_30, arg4, r14.d) == 0
        *arg3 = arg_30
    else
        int32_t var_d0_1 = rax_1
        int64_t (* var_b8_1)(int64_t arg1, int32_t arg2, int32_t arg3) = sub_140b07c10
        int64_t (* var_b0_1)(int64_t arg1, int64_t arg2) = sub_140b07c20
        void* var_e8 = arg4
        int32_t var_e0_1 = r14.d
        char* var_d8_1 = arg2
        int64_t var_a8_1 = 0
        int32_t rax_2 = sub_14036ec10(&var_e8, 0xffffffff, 8, arg6, 9, 0, "1.2.5", 0x58)
        
        if (rax_2 != 0)
            *arg3 = arg_30
        else
            int64_t* rcx_4 = &var_e8
            
            if (sub_14036f750(&var_e8, zx.q(rax_2 + 4)) != 1)
                sub_14036ef90(rcx_4)
                *arg3 = arg_30
            else
                int32_t var_cc
                arg_30 = var_cc
                
                if (sub_14036ef90(rcx_4) != 0)
                    *arg3 = arg_30
                else
                    rdi.b = 1
                    *arg3 = arg_30

QueryPerformanceCounter(&performanceCount_1)
data_143de55e8
data_143de55e8 += performanceCount_1 - performanceCount[0]

if (rdi.b != 0)
    data_143de55f0
    data_143de55f0 += r14
    data_143de55f8
    data_143de55f8 += sx.q(*arg3)

return zx.q(rdi.b)
