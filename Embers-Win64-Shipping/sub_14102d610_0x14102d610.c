// 函数: sub_14102d610
// 地址: 0x14102d610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_578
uint64_t result = __security_cookie ^ &var_578
uint64_t result_1 = result
int32_t rbp = *(arg1 + 0x130)

if (rbp != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rbp)
    int32_t rdi_1 = temp0_1
    
    if (rbp != 0)
        do
            void* rsi_1 = *(arg1 + (zx.q(rdi_1) << 3) + 0x140)
            void* rdx = *(rsi_1 + 0x138)
            void* r15_1 = **(rdx + 0xae0)
            int32_t rax_3 = *(rsi_1 + 0x130)
            uint64_t rax_4
            
            if (rax_3 != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(rax_3)
                rax_4 = zx.q(temp0_2)
            else
                rax_4 = 0x20
            
            void* rbx_2 = r15_1 + 0x98 + rax_4 * 0x1b8
            
            if (*(rbx_2 + 0x60) != 0)
                sub_141018b50(rbx_2, rdx)
            
            sub_141037e50(arg2, rsi_1)
            int64_t r14_1 = *(*(rbx_2 + 0x68) + 0xb0)
            int64_t var_b8
            memset(&var_b8, 0, 0x68)
            int64_t var_b0_1 = 0x40
            var_b8 = zx.q(*(rbx_2 + 0x18)) + r14_1
            int64_t var_a8_1 = zx.q(*(rbx_2 + 0x1c)) + r14_1
            uint64_t var_98_1 = zx.q(*(rbx_2 + 0x3c))
            uint64_t var_a0_1 = zx.q(*(rbx_2 + 0x10) * *(rbx_2 + 0x3c))
            
            if (*(rbx_2 + 0xc) != 0)
                int64_t var_78_1 = zx.q(*(rbx_2 + 0x28)) + r14_1
                uint64_t var_68_1 = zx.q(*(rbx_2 + 0x3c))
                uint64_t var_70_1 = zx.q(*(rbx_2 + 0xc) * *(rbx_2 + 0x3c))
            
            int64_t var_88_1 = 0x40
            int64_t var_90_1 = zx.q(*(rbx_2 + 0x20)) + r14_1
            int32_t var_60_1 = arg3
            int64_t var_80_1 = 0
            int32_t var_5c_1 = 1
            int32_t var_58_1 = 1
            void var_538
            memset(&var_538, 0, 0x480)
            int64_t var_438_1 = *(arg2 + 0x18)
            int64_t r8
            int64_t var_430_1 = r8
            int64_t r9
            int64_t var_138_1 = r9
            sub_141037ee0(rbx_2, rsi_1)
            int64_t* var_550_1 = &var_b8
            sub_14101cf50(rsi_1, &var_538, r15_1, 0, 0)
            int32_t rax_24 = 1 << rdi_1.b
            rdi_1 = 0x20
            result = zx.q(not.d(rax_24)) & zx.q(rbp)
            rbp = result.d
            
            if (result.d != 0)
                uint64_t rflags_3
                int32_t temp0_3
                temp0_3, rflags_3 = _bit_scan_forward(result.d)
                rdi_1 = temp0_3
        while (result.d != 0)

__security_check_cookie(result_1 ^ &var_578)
return result
