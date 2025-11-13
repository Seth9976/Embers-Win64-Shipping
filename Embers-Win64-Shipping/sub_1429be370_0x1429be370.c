// 函数: sub_1429be370
// 地址: 0x1429be370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t* r9 = *(arg1 + 0x10)
int32_t i_1 = 0
int64_t rax_2
int64_t rdx_2
rdx_2:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r9)
char r14 = arg3
int32_t i_2 = 0
int64_t rdx_3 = rdx_2 s>> 2
int32_t* rdi = arg1
uint64_t result = rdx_3 u>> 0x3f

if (rdx_3 != neg.q(result))
    uint64_t i = 0
    int64_t rdx_31
    
    do
        uint64_t rax_4 = i * 3
        int32_t j_1 = 0
        int64_t r10_1 = rax_4 << 3
        int64_t rax_5
        int64_t rdx_5
        rdx_5:rax_5 = muls.dp.q(0x2aaaaaaaaaaaaaab, r9[rax_4 + 1] - *(r9 + r10_1))
        int32_t j_2 = 0
        int64_t rdx_6 = rdx_5 s>> 2
        int64_t var_470_1 = r10_1
        
        if (rdx_6 != neg.q(rdx_6 u>> 0x3f))
            uint64_t j = 0
            int64_t rdx_28
            
            do
                int32_t rsi = 0
                int64_t rdx_8 = j * 0x18
                int64_t rax_9 = *(r9 + r10_1)
                
                if ((*(rdx_8 + rax_9 + 8) - *(rdx_8 + rax_9)) s>> 3 != 0)
                    int64_t rax_48
                    
                    do
                        int64_t rax_11 = (*(*arg2 + 0x20))(arg2)
                        int32_t var_4b8
                        
                        if (r14 != 0)
                            int64_t r9_1 = *arg2
                            void var_480
                            (*(r9_1 + 0x10))(arg2, &var_480, 4, r9_1, var_4b8)
                        
                        int64_t r9_2 = *arg2
                        char var_4a4
                        (*(r9_2 + 0x10))(arg2, &var_4a4, 4, r9_2, var_4b8)
                        char var_4a3
                        char var_4a2
                        char var_4a1
                        int32_t r14_7 =
                            ((sx.d(var_4a1) << 8 | zx.d(var_4a2)) << 8 | zx.d(var_4a3)) << 8
                            | zx.d(var_4a4)
                        char var_4a0
                        (*(*arg2 + 0x10))(arg2, &var_4a0, 4)
                        char var_49f
                        char var_49e
                        char var_49d
                        int32_t r15_7 =
                            ((sx.d(var_49d) << 8 | zx.d(var_49e)) << 8 | zx.d(var_49f)) << 8
                            | zx.d(var_4a0)
                        char var_49c
                        (*(*arg2 + 0x10))(arg2, &var_49c, 4)
                        char var_49b
                        char var_49a
                        char var_499
                        int32_t r12_7 =
                            ((sx.d(var_499) << 8 | zx.d(var_49a)) << 8 | zx.d(var_49b)) << 8
                            | zx.d(var_49c)
                        char var_498
                        (*(*arg2 + 0x10))(arg2, &var_498, 4)
                        char var_497
                        char var_496
                        char var_495
                        int32_t r13_7 =
                            ((sx.d(var_495) << 8 | zx.d(var_496)) << 8 | zx.d(var_497)) << 8
                            | zx.d(var_498)
                        int64_t r9_3 = *(*arg2 + 0x10)
                        void var_448
                        int32_t k
                        
                        if (arg4 == 0)
                            char var_494
                            r9_3(arg2, &var_494, 4)
                            char var_493
                            char var_492
                            char var_491
                            
                            for (k =
                                    ((sx.d(var_491) << 8 | zx.d(var_492)) << 8 | zx.d(var_493)) << 8
                                    | zx.d(var_494); k s>= 0x400; k -= 0x400)
                                if ((*(*arg2 + 0x10))(arg2, &var_448, 0x400) == 0)
                                    goto label_1429be6c1
                        else
                            char var_460
                            r9_3(arg2, &var_460, 8)
                            char var_458
                            (*(*arg2 + 0x10))(arg2, &var_458, 8)
                            char var_45f
                            char var_45e
                            char var_45d
                            char var_457
                            char var_456
                            char var_455
                            
                            for (k = (zx.d(var_457) << 8 | zx.d(var_456) << 0x10
                                    | zx.d(var_455) << 0x18 | zx.d(var_458)) + 8 + (zx.d(var_45f) << 8
                                    | zx.d(var_45e) << 0x10 | zx.d(var_45d) << 0x18
                                    | zx.d(var_460)); k s>= 0x400; k -= 0x400)
                                if ((*(*arg2 + 0x10))(arg2, &var_448, 0x400) == 0)
                                    goto label_1429be6c1
                        
                        if (k s>= 1)
                            (*(*arg2 + 0x10))(arg2, &var_448, zx.q(k))
                        
                    label_1429be6c1:
                        rdi = arg1
                        
                        if (arg5 == 0)
                            result = sub_1429be7e0(rdi, r14_7, r15_7, r12_7, r13_7)
                            
                            if (result.b == 0)
                                goto label_1429be7c1
                            
                            var_4b8 = r13_7
                            *sub_1429be1a0(rdi, r14_7, r15_7, r12_7, var_4b8) = rax_11
                        
                        rsi += 1
                        r9 = *(rdi + 0x10)
                        r10_1 = var_470_1
                        rax_48 = *(r10_1 + r9)
                        r14 = arg3
                    while (zx.q(rsi) u< (*(rdx_8 + rax_48 + 8) - *(rdx_8 + rax_48)) s>> 3)
                    j_1 = j_2
                
                j_1 += 1
                int64_t rax_50
                int64_t rdx_27
                rdx_27:rax_50 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r9 + r10_1 + 8) - *(r9 + r10_1))
                j = zx.q(j_1)
                rdx_28 = rdx_27 s>> 2
                j_2 = j_1
            while (j u< rdx_28 + (rdx_28 u>> 0x3f))
            i_1 = i_2
        
        i_1 += 1
        i = zx.q(i_1)
        i_2 = i_1
        int64_t rax_53
        int64_t rdx_30
        rdx_30:rax_53 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rdi + 0x18) - r9)
        rdx_31 = rdx_30 s>> 2
        result = rdx_31 u>> 0x3f
    while (i u< rdx_31 + result)

label_1429be7c1:
__security_check_cookie(rax_1 ^ &var_4d8)
return result
