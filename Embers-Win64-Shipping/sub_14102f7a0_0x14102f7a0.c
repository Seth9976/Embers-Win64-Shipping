// 函数: sub_14102f7a0
// 地址: 0x14102f7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
int32_t rbx = *(arg1 + 0x130)

if (rbx != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rbx)
    int32_t rdi_1 = temp0_1
    
    if (rbx != 0)
        do
            void* r9_1 = *(arg1 + (zx.q(rdi_1) << 3) + 0x140)
            int32_t* rdx
            
            if (arg2 == 0)
                int32_t rdx_1 = int.d(fconvert.t(*(r9_1 + 0x2b4)))
                int32_t r8 = int.d(fconvert.t(*(r9_1 + 0x2b8)))
                int32_t var_58 = rdx_1
                int32_t var_54_1 = r8
                rdx = &var_58
                int32_t var_50_1 = int.d(fconvert.t(*(r9_1 + 0x2bc))) + rdx_1
                int32_t var_4c_1 = int.d(fconvert.t(*(r9_1 + 0x2c0))) + r8
            else
                int32_t var_68 = arg3
                rdx = &var_68
                int32_t r9
                int32_t var_64_1 = r9
                int32_t var_60_1 = arg4
                int32_t var_5c_1 = arg5
            
            sub_14105ade0(r9_1 + 0x250, rdx)
            int32_t rax_6 = 1 << rdi_1.b
            rdi_1 = 0x20
            result = zx.q(not.d(rax_6)) & zx.q(rbx)
            rbx = result.d
            
            if (result.d != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(result.d)
                rdi_1 = temp0_2
        while (result.d != 0)

__security_check_cookie(result_1 ^ &var_88)
return result
