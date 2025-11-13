// 函数: sub_141f79950
// 地址: 0x141f79950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* rbp = &arg1[2]
__builtin_memset(arg1, 0, 0x21)
int64_t* r12 = arg2
int32_t r13 = *(arg3 + 0x50)

if (data_143de5432 == 0 && r13 s> 0)
    int64_t rax_1 = *arg2
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    (*(rax_1 + 0x320))(r12, rbp, &var_48)
    
    if (arg1[3].d s> 0)
        int128_t var_38
        
        if (sub_141f79090(r12) == 0)
            if (r13 s> *(arg1 + 0xc))
                sub_1405c5570(arg1, r13)
            
            if (r13 s> 0)
                do
                    void* rax_8 = sub_142121cc0(r12, nullptr)
                    int128_t* i = *rbp
                    
                    for (void* rbp_3 = &i[sx.q(rbp[1].d)]; i != rbp_3; i = &i[1])
                        var_38 = *i
                        sub_142131550(rax_8, &var_38, arg3, rsi)
                    
                    int64_t rdi_2 = sx.q(arg1[1].d)
                    int32_t rax_9 = (rdi_2 + 1).d
                    arg1[1].d = rax_9
                    
                    if (rax_9 s> *(arg1 + 0xc))
                        sub_1405a4d70(arg1)
                    
                    rbp = &arg1[2]
                    rsi += 1
                    *(*arg1 + (rdi_2 << 3)) = rax_8
                while (rsi s< r13)
        else
            arg1[4].b = 1
            void* rax_3 = sub_142542e20()
            void* rdx_1 = r12[2]
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                r12 = nullptr
            
            int128_t* i_1 = *rbp
            
            for (void* rsi_3 = &i_1[sx.q(rbp[1].d)]; i_1 != rsi_3; i_1 = &i_1[1])
                var_38 = *i_1
                sub_142131550(r12, &var_38, arg3, 0)
            
            int64_t rdi_1 = sx.q(arg1[1].d)
            int32_t rax_6 = (rdi_1 + 1).d
            arg1[1].d = rax_6
            
            if (rax_6 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rdi_1 << 3)) = r12
    
    int64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

return arg1
