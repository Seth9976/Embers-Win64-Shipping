// 函数: sub_14102cdb0
// 地址: 0x14102cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint64_t result = arg5
void* rbx = arg3
int32_t rbp = *(arg1 + 0x130)
void* var_110 = rbx
uint64_t result_1 = result
void* var_108 = arg1

if (rbp != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rbp)
    int32_t rdi_1 = temp0_1
    
    if (rbp != 0)
        do
            void* rsi_1 = *(arg1 + (zx.q(rdi_1) << 3) + 0x140)
            int32_t* rax_3 = sub_141021a40(arg4, arg2, *(rsi_1 + 0x138))
            
            if (rax_3[0x18].b != 0)
                sub_141018b50(rax_3, *(rsi_1 + 0x138))
            
            sub_141037e50(arg4, rsi_1)
            int128_t zmm0_1 = *(rbx + 0x18)
            int64_t rax_4 = 0
            int64_t rcx_3 = sx.q(*(arg2 + 0x20))
            int32_t rbx_1 = 0
            
            if (rcx_3.d s<= 0)
            label_14102cec4:
                rbx_1 = -1
            else
                int64_t* rdx_3 = *(arg2 + 0x18)
                int64_t r10_1 = zmm0_1:8.q
                int64_t r14_1 = zmm0_1.q
                
                while (true)
                    void* rcx_4 = *rdx_3
                    zmm0_1 = *(rcx_4 + 0x18)
                    
                    if (r14_1 == zmm0_1.q && r10_1 == zmm0_1:8.q
                            && *(rbx + 0x28) == *(rcx_4 + 0x28))
                        break
                    
                    rbx_1 += 1
                    rax_4 += 1
                    rdx_3 = &rdx_3[1]
                    
                    if (rax_4 s>= rcx_3)
                        goto label_14102cec4
            
            char var_128_1 = *(arg2 + 0x790)
            void var_b8
            sub_141022cf0(rax_3, &var_b8, rbx_1, 0)
            int32_t var_60_1 = arg6
            int32_t var_5c_1 = arg7
            void* var_120_1 = &var_b8
            var_128_1.q = rax_3
            int32_t var_58_1 = 1
            sub_14101cf50(rsi_1, result_1, arg2, rbx_1, var_128_1)
            int32_t rax_8 = 1 << rdi_1.b
            rdi_1 = 0x20
            result = zx.q(not.d(rax_8)) & zx.q(rbp)
            rbp = result.d
            
            if (result.d != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(result.d)
                rdi_1 = temp0_2
            
            rbx = var_110
            arg1 = var_108
        while (result.d != 0)

__security_check_cookie(rax_1 ^ &var_148)
return result
