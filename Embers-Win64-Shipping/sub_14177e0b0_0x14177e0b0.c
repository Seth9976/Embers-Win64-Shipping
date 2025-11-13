// 函数: sub_14177e0b0
// 地址: 0x14177e0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_58
sub_1413d1420(arg2, &var_58)
int64_t* r13 = var_58
int32_t result_1
int64_t result = sx.q(result_1)
int64_t* r15 = r13
void* r12_1 = &r13[result]

if (r13 != r12_1)
    do
        int64_t rbx_1 = sx.q(*(arg1 + 0x48))
        int64_t* r14_1 = nullptr
        int64_t rsi_1 = *r15
        int64_t rdi_1 = *(arg1 + 0x40)
        var_58 = nullptr
        int32_t var_50 = rbx_1.d
        
        if (rbx_1.d != 0)
            sub_1405c4a00(&var_58, rbx_1.d, 0)
            r14_1 = var_58
            memcpy(r14_1, rdi_1, (rbx_1 << 3).d)
            rbx_1 = zx.q(var_50)
        else
            int32_t var_4c_1 = 0
        
        result = sx.q(rbx_1.d)
        int64_t* rbx_2 = r14_1
        void* rdi_2 = &r14_1[result]
        
        if (r14_1 != rdi_2)
            do
                int32_t* rdx_3 = *rbx_2
                int32_t r8_3 = rdx_3[4]
                int64_t rcx_3 = *(rdx_3 + 8)
                int64_t r9_1 = sx.q(*rdx_3)
                void* rax_2
                
                if (r8_3 == 1)
                    rax_2 = r9_1 * 0xe0 + *(rcx_3 + 0x10)
                else if (r8_3 != 2)
                    rax_2 = r9_1 * 0x140 + *(rcx_3 + 0x30)
                else
                    rax_2 = r9_1 * 0xe0 + *(rcx_3 + 0x20)
                
                int64_t rax_7 = sx.q(r9_1.d)
                void* rax_9
                
                if (r8_3 == 1)
                    rax_9 = rax_7 * 0xe0 + *(rcx_3 + 0x10)
                else if (r8_3 != 2)
                    rax_9 = rax_7 * 0x140 + *(rcx_3 + 0x30)
                else
                    rax_9 = rax_7 * 0xe0 + *(rcx_3 + 0x20)
                
                int64_t var_40_1 = *(rax_9 + 0x68)
                uint128_t zmm0_1 = (*(rax_2 + 0x60)).o
                int64_t var_38_1 = zmm0_1.q
                result = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (result == rsi_1 || var_38_1 == rsi_1)
                    result = sub_14177dbe0(arg1, rdx_3)
                
                rbx_2 = &rbx_2[1]
            while (rbx_2 != rdi_2)
        
        if (r14_1 != 0)
            result = sub_140a74f90(r14_1)
        
        r15 = &r15[1]
    while (r15 != r12_1)

if (r13 == 0)
    return result

return sub_140a74f90(r13) __tailcall
