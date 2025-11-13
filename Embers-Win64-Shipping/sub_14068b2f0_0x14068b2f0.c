// 函数: sub_14068b2f0
// 地址: 0x14068b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0xaaaaaaaaaaaaaaa)
    sub_140610c20()
    noreturn

int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - *arg1)
int64_t r15_1 = rdx s>> 2
int64_t r15_2 = r15_1 + (r15_1 u>> 0x3f)
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - *arg1)
int64_t rdx_2 = rdx_1 s>> 2
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)
uint64_t rcx_5 = rdx_3 u>> 1

if (rdx_3 u<= 0xaaaaaaaaaaaaaaa - rcx_5)
    int64_t rax_7 = rcx_5 + rdx_3
    
    if (rax_7 u< arg2)
        rax_7 = arg2
    label_14068b39e:
        int64_t r14_1 = rax_7 * 0x18
        void* rbx_2
        
        if (r14_1 u< 0x1000)
            if (r14_1 == 0)
                rbx_2 = nullptr
            else
                rbx_2 = j_sub_140a82f30(r14_1)
            
            goto label_14068b3f1
        
        if (r14_1 + 0x27 u> r14_1)
            int64_t rax_9 = j_sub_140a82f30(r14_1 + 0x27)
            
            if (rax_9 == 0)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rbx_2 = (rax_9 + 0x27) & 0xffffffffffffffe0
            *(rbx_2 - 8) = rax_9
        label_14068b3f1:
            void* rcx_8 = rbx_2 + r15_2 * 0x18
            int64_t i_1 = arg2 - r15_2
            
            if (arg2 != r15_2)
                int64_t i
                
                do
                    __builtin_memset(rcx_8, 0, 0x11)
                    rcx_8 += 0x18
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int128_t* rcx_9 = *arg1
            void* rdx_4 = rbx_2
            int64_t r8_1 = arg1[1]
            
            if (rcx_9 != r8_1)
                do
                    rdx_4 += 0x18
                    *(rdx_4 - 0x18) = *rcx_9
                    int64_t zmm1 = rcx_9[1].q
                    rcx_9 += 0x18
                    *(rdx_4 - 8) = zmm1
                while (rcx_9 != r8_1)
                
                rcx_9 = *arg1
            
            if (rcx_9 == 0)
                goto label_14068b4b6
            
            int64_t rax_13
            int64_t rdx_7
            rdx_7:rax_13 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rcx_9)
            int64_t rdx_8 = rdx_7 s>> 2
            
            if ((rdx_8 + (rdx_8 u>> 0x3f)) * 0x18 u< 0x1000)
                goto label_14068b49a
            
            int128_t* rax_16 = *(rcx_9 - 8)
            
            if (rcx_9 - rax_16 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_9 = rax_16
        label_14068b49a:
            j_sub_140a74f90(rcx_9)
        label_14068b4b6:
            void* result = r14_1 + rbx_2
            *arg1 = rbx_2
            arg1[1] = rbx_2 + arg2 * 0x18
            arg1[2] = result
            return result
    else if (rax_7 u<= 0xaaaaaaaaaaaaaaa)
        goto label_14068b39e

stdext::threads::_Throw_lock_error()
noreturn
