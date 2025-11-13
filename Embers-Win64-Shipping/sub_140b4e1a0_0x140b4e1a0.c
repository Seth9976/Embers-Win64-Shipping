// 函数: sub_140b4e1a0
// 地址: 0x140b4e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
*arg1 = 0
arg1[1] = 0

if (arg2[1].d != 0)
    sub_140b508e0()
    AcquireSRWLockShared(&data_143de8578)
    int128_t* i = *arg2
    
    for (void* rbp_3 = &i[sx.q(arg2[1].d) * 2]; i != rbp_3; i = &i[2])
        int128_t var_b8 = *i
        void* rax_2 = sub_140b50ef0(&data_143de8580, &var_b8)
        int32_t var_50_1
        
        if (rax_2 == 0)
            void* rsi_1 = &data_143de8590
            int32_t var_c8
            sub_140b4ff10(&data_143de8590, &var_c8, i)
            int64_t rax_3 = sx.q(var_c8)
            void* rcx_1
            
            if (rax_3.d == 0xffffffff)
                rcx_1 = nullptr
            else
                void* rcx = data_143de8f90
                
                if (rcx != 0)
                    rsi_1 = rcx
                
                rcx_1 = rsi_1 + rax_3 * 0x28
            
            void* rsi_2 = rcx_1 + 0x10
            
            if (rcx_1 == 0)
                rsi_2 = nullptr
            
            if (rsi_2 != 0)
                int16_t* rdx_2 = *(rsi_2 + 8)
                var_b8 = *i
                int32_t var_6c_1 = 1
                void var_88
                int64_t var_68_1 = *sub_140b58260(&var_88, rdx_2, 1)
                var_50_1 = (*rsi_2).o.d
                goto label_140b4e2e2
            
            int64_t rsi_4 = sx.q(arg1[1].d)
            int32_t var_98_1 = 0
            int128_t* i_2 = i
            int32_t rax_13 = (rsi_4 + 1).d
            arg1[1].d = rax_13
            
            if (rax_13 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            *(*arg1 + rsi_4 * 0x10) = var_98_1.o
        else
            var_50_1 = (*(rax_2 + 0x10)).d
        label_140b4e2e2:
            
            if (var_50_1 != i[1].d)
                int64_t rsi_3 = sx.q(arg1[1].d)
                int32_t rax_10 = ((var_50_1 - i[1].d) s>> 0x1f) + 2
                int128_t* i_1 = i
                int32_t rax_11 = (rsi_3 + 1).d
                arg1[1].d = rax_11
                
                if (rax_11 s> *(arg1 + 0xc))
                    sub_1405a4f90(arg1)
                
                *(*arg1 + rsi_3 * 0x10) = rax_10.o
    
    ReleaseSRWLockShared(&data_143de8578)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
