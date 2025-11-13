// 函数: sub_1414035f0
// 地址: 0x1414035f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t i = 1
int64_t* rcx = nullptr
int64_t* var_38 = nullptr
int32_t var_2c = 1
int32_t i_1 = 1
int64_t var_40 = arg2

do
    int64_t* r9_1 = &var_40
    
    if (rcx != 0)
        r9_1 = rcx
    
    int64_t* rdi_2 = r9_1[sx.q(i - 1)]
    
    if (0 != 0)
        memmove(&r9_1[sx.q(i - 1)], &r9_1[sx.q(i)], 0 << 3)
        i = i_1
        rcx = var_38
    
    i -= 1
    i_1 = i
    
    if (rdi_2 != 0)
        void* rax_4 = sub_142577430()
        void* rdx_4 = rdi_2[2]
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            void* rax_8
            
            if (rdi_2[0x15] == 0)
                rax_8 = sub_141ee69e0(rdi_2)
            
            if (rdi_2[0x15] != 0 || rax_8 != 0)
                void* rax_9 = rdi_2[0x15]
                
                if (rax_9 == 0)
                    rax_9 = sub_141ee69e0(rdi_2)
                
                if (*(rax_9 + 0x1b0) == arg1 && sub_141f27710(rdi_2) != 0)
                    void* rax_11 = sub_141f15dc0(rdi_2)
                    int32_t* rcx_8
                    
                    if (rax_11 == rdi_2 || rax_11 == 0)
                        int32_t var_d4 = 0
                        rcx_8 = &var_d4
                    else
                        int32_t var_d8
                        rcx_8 = &var_d8
                        var_d8 = *(rax_11 + 0x254)
                    
                    void* rax_13 = rdi_2[0x7d]
                    
                    if (rax_13 != 0)
                        int32_t var_c0 = *rcx_8
                        
                        if (sub_140a80f40() == 0)
                            uint32_t rax_17
                            
                            if (data_143f138f4 == 0 && data_143de5480 != 0)
                                rax_17.b = GetCurrentThreadId() == data_143de5470
                            
                            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_17.b == 0))
                                void var_58
                                int64_t* rax_19 = sub_1413de120(&var_58, nullptr, 0xff)
                                void* rcx_16 = *rax_19
                                *(rcx_16 + 0x10) = arg1.o
                                *(rcx_16 + 0x20) = var_c0.q
                                void* rcx_17 = *rax_19
                                int32_t r8_6 = rax_19[2].d
                                int64_t* rdx_7 = rax_19[1]
                                int64_t* rbx_1 = *(rcx_17 + 0x30)
                                int64_t* var_b8_1 = rbx_1
                                int32_t* rsi_1 = &rbx_1[9]
                                
                                if (rbx_1 != 0)
                                    *rsi_1 += 1
                                    rbx_1 = var_b8_1
                                
                                sub_140778000(rcx_17, rdx_7, r8_6, 1)
                                
                                if (rbx_1 != 0)
                                    int32_t rax_20 = *rsi_1
                                    *rsi_1 -= 1
                                    
                                    if (rax_20 == 1)
                                        sub_140a2f6e0(var_b8_1)
                            else
                                int128_t zmm0_1 = arg1.o
                                int64_t var_80 = var_c0.q
                                int64_t var_98 = *(zmm0_1:8.q + 0x110)
                                int64_t* var_68 = &var_98
                                int64_t* var_60_1 = &var_80
                                void var_ac
                                sub_1413b83d0(zmm0_1.q + 0x6388, &var_ac, &var_68, nullptr)
                        else
                            int64_t var_a0 = *(rax_13 + 0x110)
                            int64_t* var_78 = &var_a0
                            int32_t* var_70_1 = &var_c0
                            void var_b0
                            sub_1413b83d0(arg1 + 0x6388, &var_b0, &var_78, nullptr)
        
        int64_t rbx_2 = sx.q(rdi_2[0x1b].d)
        
        if (rbx_2.d == 0)
            i = i_1
        else
            int32_t i_2 = i_1
            int32_t rdx_8 = rbx_2.d + i_2
            
            if (rdx_8 s> var_2c)
                sub_140809a30(&var_40, rdx_8)
                i_2 = i_1
            
            int64_t* rcx_20 = &var_40
            
            if (var_38 != 0)
                rcx_20 = var_38
            
            memcpy(&rcx_20[sx.q(i_2)], rdi_2[0x1a], (rbx_2 << 3).d)
            i = i_1 + rbx_2.d
            i_1 = i
        
        rcx = var_38
while (i s> 0)

if (rcx != 0)
    i = sub_140a74f90(rcx)

__security_check_cookie(rax_1 ^ &var_f8)
return i
