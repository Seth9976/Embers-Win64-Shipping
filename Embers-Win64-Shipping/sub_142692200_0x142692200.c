// 函数: sub_142692200
// 地址: 0x142692200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int32_t r14 = arg4
int32_t r12 = arg3
void* rsi = arg1
void* r15 = *(*(*(arg1 + 0xe8) + 0x4a8) + 8)
*arg2 = 0
arg2[1] = 0

if (r15 != 0 && not(0f f>= *(r15 + 0x28)) && not(0f f>= *(r15 + 0x2c)))
    int32_t rax_1 = sub_142610f80(r15, r12, arg4)
    int64_t rbx_1 = sx.q(rax_1)
    
    if (rax_1 s> 0)
        int64_t var_58 = 0
        int32_t var_4c_1 = 0
        int32_t var_50_1 = rbx_1.d
        sub_1405a4d70(&var_58)
        int64_t r13_1 = var_58
        memset(r13_1, 0, rbx_1 << 3)
        sub_142611090(r15, arg3, r14, r13_1, rbx_1.d)
        
        if (rbx_1.d s> 0)
            do
                int32_t* rdx_3 = *(r13_1 + (rbp << 3))
                int32_t arg_10 = *(*(rdx_3 + 8) + 0x10)
                int64_t rax_3 = sub_14260f690(r15, rdx_3)
                *(rsi + 0xac) -= 1
                sub_142615c20(r15, rax_3, nullptr, nullptr)
                char r11_1 = (*(r15 + 0xa0)).b
                char r8_3 = (*(r15 + 0x9c)).b
                char r10_1 = r8_3 + r11_1
                int32_t i = (rax_3 u>> r11_1).d & ((1 << r8_3).d - 1)
                char rdx_7 = (*(r15 + 0x98)).b
                uint64_t rdx_8 = 1
                int32_t r9_5 =
                    (((rax_3 u>> r10_1).d & ((1 << rdx_7).d - 1)) + 1) & ((1 << rdx_7) - 1)
                
                if (r9_5 != 0)
                    rdx_8 = zx.q(r9_5)
                
                int64_t rdx_10 = sx.q(arg2[1].d)
                var_58 =
                    (zx.q((1 << r11_1).d - 1) & zx.q(rax_3.d)) | rdx_8 << r10_1 | zx.q(i) << r11_1
                int32_t* r8_9 = *arg2
                int32_t* rax_11 = r8_9
                void* rcx_14 = &r8_9[rdx_10]
                
                if (r8_9 != rcx_14)
                    while (*rax_11 != i)
                        rax_11 = &rax_11[1]
                        
                        if (rax_11 == rcx_14)
                            goto label_1426923db
                
                if (r8_9 == rcx_14 || ((rax_11 - r8_9) s>> 2).d == 0xffffffff)
                label_1426923db:
                    int32_t rax_14 = (rdx_10 + 1).d
                    arg2[1].d = rax_14
                    
                    if (rax_14 s> *(arg2 + 0xc))
                        sub_1405a4cf0(arg2)
                    
                    *(*arg2 + (rdx_10 << 2)) = i
                
                if (arg5 != 0)
                    sub_141817f30(arg5, &arg_10, &var_58)
                
                rsi = arg1
                rbp += 1
            while (rbp s< rbx_1)
            
            r14 = arg4
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        r12 = arg3
    
    void* rcx_18 = *(*(rsi + 0xe8) + 0x4a8)
    
    if (rcx_18 != 0)
        void* arg_8
        arg_8.d = r12
        arg_8:4.d = r14
        sub_142691f60(rcx_18 + 0x10, arg_8)

return arg2
