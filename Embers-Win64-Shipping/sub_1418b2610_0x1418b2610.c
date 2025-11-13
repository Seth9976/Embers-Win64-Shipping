// 函数: sub_1418b2610
// 地址: 0x1418b2610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efaee8)
char rbx = data_1439c7168
int64_t* result = LeaveCriticalSection(&data_143efaee8)

if (rbx != 0)
    result = *(arg1 + 0x20)
    int64_t* rdi_1 = result[sx.q(*(arg1 + 0x30)) * 2]
    
    if (rdi_1 != 0)
        result = (*(*rdi_1 + 0x20))(rdi_1)
        char rbx_1 = 1
        
        if (result.b == 0)
            rbx_1 = 0
        
        if (rbx_1 != *(arg1 + 0xa8))
            *(arg1 + 0xa8) = rbx_1
            result = sub_140920f30(&data_1439c7170, rbx_1)
        
        if (rbx_1 != 0)
            int64_t* rbp_1 = data_143e29f28
            uint128_t zmm0
            zmm0.q = rbp_1[0x6b] f- rbp_1[0x6c]
            float var_70_1 = _mm_cvtpd_ps(zmm0)[0]
            
            if (sub_140a80f40() == 0)
                uint32_t rax_3
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_3.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
                    void var_58
                    int64_t* rax_5 = sub_1418b1cb0(&var_58, nullptr, 0xff)
                    *(*rax_5 + 0x10) = rdi_1.o
                    void* rcx_5 = *rax_5
                    int32_t r8_1 = rax_5[2].d
                    int64_t* rdx_5 = rax_5[1]
                    int64_t* rbx_4 = *(rcx_5 + 0x28)
                    int64_t* var_78_2 = rbx_4
                    int32_t* rdi_2 = &rbx_4[9]
                    
                    if (rbx_4 != 0)
                        *rdi_2 += 1
                        rbx_4 = var_78_2
                    
                    sub_1405e48c0(rcx_5, rdx_5, r8_1, 1)
                    
                    if (rbx_4 != 0)
                        int32_t rax_6 = *rdi_2
                        *rdi_2 -= 1
                        
                        if (rax_6 == 1)
                            sub_140a2f6e0(var_78_2)
                else
                    int32_t var_64_1 = rdi_1:4.d
                    EnterCriticalSection(&data_143efaee8)
                    char rbx_3 = data_1439c7168
                    LeaveCriticalSection(&data_143efaee8)
                    
                    if (rbx_3 != 0)
                        data_14399fa54 += 1
                        int512_t zmm1_2
                        int128_t zmm6_2
                        zmm1_2, zmm6_2 = sub_1419668e0(&data_143f02b98)
                        int64_t* rcx_2 = rdi_1.d.d.q
                        zmm1_2.o = zmm6_2
                        (*(*rcx_2 + 0x28))(rcx_2, zmm1_2)
            else
                EnterCriticalSection(&data_143efaee8)
                char rbx_2 = data_1439c7168
                LeaveCriticalSection(&data_143efaee8)
                
                if (rbx_2 != 0)
                    data_14399fa54 += 1
                    int512_t zmm1_1
                    int128_t zmm6_1
                    zmm1_1, zmm6_1 = sub_1419668e0(&data_143f02b98)
                    zmm1_1.o = zmm6_1
                    (*(*rdi_1 + 0x28))(rdi_1, zmm1_1)
            
            sub_140e8c780(rbp_1, 1)
            int64_t* rcx_8 = rbp_1[4]
            (*(*rcx_8 + 0xb0))(rcx_8)
            
            if (sub_140a80f40() != 0)
                return sub_1418afae0()
            
            if (data_143f138f4 == 0)
                uint32_t rax_9
                
                if (data_143de5480 != 0)
                    rax_9.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143de5480 == 0 || rax_9.b != 0)
                    return sub_1418afae0()
            
            void var_40
            int64_t* rax_10 = sub_1418b1e00(&var_40, nullptr, 0xff)
            void* rcx_10 = *rax_10
            int32_t r8_2 = rax_10[2].d
            int64_t* rdx_8 = rax_10[1]
            int64_t* rbx_5 = *(rcx_10 + 0x18)
            int64_t* arg_20 = rbx_5
            int32_t* rdi_3 = &rbx_5[9]
            
            if (rbx_5 != 0)
                *rdi_3 += 1
                rbx_5 = arg_20
            
            result = sub_1405a5890(rcx_10, rdx_8, r8_2, 1)
            
            if (rbx_5 != 0)
                int32_t rsi_1 = *rdi_3
                *rdi_3 -= 1
                
                if (rsi_1 == 1)
                    return sub_140a2f6e0(arg_20)

return result
