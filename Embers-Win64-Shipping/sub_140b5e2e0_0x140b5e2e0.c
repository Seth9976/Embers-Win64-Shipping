// 函数: sub_140b5e2e0
// 地址: 0x140b5e2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockShared(arg1)
struct _RTL_SRWLOCK rax = arg1
int32_t rbp = arg1->__offset(0xc).d
uint64_t rbx_1 = zx.q(*(arg3 + 0x14)) & zx.q(rbp)
int32_t* r14 = rax + (rbx_1 << 2)
int32_t i
struct _RTL_SRWLOCK rax_11

for (i = *(rax + (rbx_1 << 2)); i != 0; i = *(rax_11 + (rbx_1 << 2)))
    if ((i & 0xe0000000) == *(arg3 + 0x18))
        int32_t rax_1 = i & 0x1fffffff
        uint64_t rdx_1 = zx.q(rax_1 u>> 0x10)
        uint32_t arg_c = zx.d(rax_1.w)
        int16_t* r8_1 = zx.q((rdx_1.d.q u>> 0x20).d * 2) + *(arg1 + (rdx_1 << 3) + 0x10)
        int16_t rdx_2 = *r8_1
        
        if (rdx_2 == *(arg3 + 0x1c))
            uint32_t rax_5 = zx.d(rdx_2) u>> 6
            uint128_t var_38_1 = *arg3
            void** rax_6
            
            if ((rdx_2.b & 1) == 0)
                uint32_t var_40_1 = rax_5
                void* var_48
                rax_6 = &var_48
                var_48 = &r8_1[1]
                char var_3c_1 = 0
            else
                uint32_t var_50_1 = rax_5
                void* var_58
                rax_6 = &var_58
                var_58 = &r8_1[1]
                char var_4c_1 = 1
            
            uint128_t zmm0 = *rax_6
            char* rdx_3 = var_38_1.q
            int64_t var_28_1 = zmm0.q
            int64_t r8_2 = sx.q(_mm_bsrli_si128(zmm0, 8).d)
            int32_t rax_10
            
            if ((var_38_1:8.q u>> 0x20).b != 0)
                rax_10 = sub_140a546e0(var_28_1, rdx_3, r8_2)
            else
                rax_10 = sub_140a545e0(var_28_1, rdx_3, r8_2)
            
            rax_10.b = rax_10 == 0
            
            if (rax_10.b != 0)
                i = *r14
                break
    
    rax_11 = arg1
    rbx_1 = zx.q(rbx_1.d + 1) & zx.q(rbp)
    r14 = rax_11 + (rbx_1 << 2)

*arg2 = i & 0x1fffffff
ReleaseSRWLockShared(arg1)
return arg2
