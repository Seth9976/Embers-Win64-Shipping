// 函数: sub_140b5eb40
// 地址: 0x140b5eb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = *(arg1 + 0x10)
int32_t rbp = *(arg1 + 0xc)
uint64_t count = zx.q(arg2) << 2
int64_t rax = sub_140a82f30(count, 4)
*(arg1 + 0x10) = rax
memset(rax, 0, count)
*(arg1 + 8) = 0
*(arg1 + 0xc) = arg2 - 1

if (rbp != 0xffffffff)
    int32_t* rbx_1 = r14
    uint64_t i_1 = zx.q(rbp + 1)
    uint64_t i
    
    do
        int32_t rax_2 = *rbx_1
        
        if (rax_2 != 0)
            int32_t rax_3 = rax_2 & 0x1fffffff
            uint64_t r8_2 = zx.q(rax_3 u>> 0x10)
            uint32_t arg_c = zx.d(rax_3.w)
            int16_t* rdx_1 =
                zx.q((r8_2.d.q u>> 0x20).d * 2) + *(*(arg1 + 0x18) + (r8_2 << 3) + 0x10)
            uint32_t rax_7 = zx.d(*rdx_1) u>> 6
            void** rax_8
            
            if ((*rdx_1 & 1) == 0)
                uint32_t var_50_1 = rax_7
                void* var_58
                rax_8 = &var_58
                var_58 = &rdx_1[1]
                char var_4c_1 = 0
            else
                uint32_t var_60_1 = rax_7
                void* var_68
                rax_8 = &var_68
                var_68 = &rdx_1[1]
                char var_5c_1 = 1
            
            uint128_t zmm0_1 = *rax_8
            int64_t var_48_1 = zmm0_1.q
            zmm0_1 = _mm_bsrli_si128(zmm0_1, 8)
            int32_t r8_3 = zmm0_1.d
            int32_t* rax_11
            void var_28
            void var_38
            
            if ((zmm0_1.q u>> 0x20).b != 0)
                rax_11 = sub_140b57580(&var_28, var_48_1, r8_3)
            else
                rax_11 = sub_140b57490(&var_38, var_48_1, r8_3)
            int32_t rdx_3 = *(arg1 + 0xc)
            int64_t r8_4 = *(arg1 + 0x10)
            uint64_t rcx_9 = zx.q((*rax_11 u>> 0x20).d) & zx.q(rdx_3)
            int32_t* rax_12 = r8_4 + (rcx_9 << 2)
            
            if (*(r8_4 + (rcx_9 << 2)) != 0)
                uint64_t rax_14
                
                do
                    rax_14 = zx.q((rcx_9 + 1).d) & zx.q(rdx_3)
                    rcx_9 = zx.q(rax_14.d)
                    rax_12 = r8_4 + (rax_14 << 2)
                while (*(r8_4 + (rax_14 << 2)) != 0)
            
            *rax_12 = *rbx_1
            *(arg1 + 8) += 1
        
        rbx_1 = &rbx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return sub_140a74f90(r14) __tailcall
