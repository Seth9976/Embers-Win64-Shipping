// 函数: sub_142721d00
// 地址: 0x142721d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg1 + 0x80
int128_t zmm6 = 0x7f7fffff
void* rdi = *r12
void* i = sx.q(r12[1].d) * 0x30 + rdi
void* r14 = *(arg1 + 0x38)

if (rdi != i)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int64_t* rdi_1 = rdi + 0x20
    uint64_t r13_1 = zx.q(data_14401b1a0)
    
    do
        void* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            void* rax_2 = sub_140d21950(rbx_1, sub_142725fc0())
            void* rbx_2 = rax_2
            
            if (rax_2 != 0)
            label_142721e01:
                void* rax_9 = (*(*rbx_2 + 0x10))(rbx_2)
                
                if (rax_9 != 0)
                    int32_t rbx_4 = *(rax_9 + 0xe4)
                    
                    if (data_143f724b0 s> *(0x14 + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                        _Init_thread_header(&data_143f724b0)
                        
                        if (data_143f724b0 == 0xffffffff)
                            data_143f724ac = 0xffffffff
                            _Init_thread_footer(&data_143f724b0)
                    
                    if (rbx_4 != data_143f724ac)
                        int64_t rcx_6 = sx.q(*(rax_9 + 0xe4))
                        int32_t* rdx_7
                        
                        if (*(r14 + 0x40) == *(r14 + 0x6c))
                        label_142721e9d:
                            rdx_7 = nullptr
                        else
                            void* rdx_4 = *(r14 + 0x78)
                            void* r9_1 = r14 + 0x70
                            
                            if (rdx_4 != 0)
                                r9_1 = rdx_4
                            
                            int32_t rax_11 = *(r9_1 + (((sx.q(*(r14 + 0x80)) - 1) & rcx_6) << 2))
                            
                            if (rax_11 == 0xffffffff)
                            label_142721e9d_1:
                                rdx_7 = nullptr
                            else
                                while (true)
                                    rdx_7 = sx.q(rax_11) * 0x3c + *(r14 + 0x38)
                                    
                                    if (*rdx_7 == rcx_6.d)
                                        break
                                    
                                    rax_11 = rdx_7[0xd]
                                    
                                    if (rax_11 == 0xffffffff)
                                        goto label_142721e9d_2
                                
                                if (rax_11 == 0xffffffff)
                                label_142721e9d_2:
                                    rdx_7 = nullptr
                        
                        if (test_bit(rdx_7[3], zx.d(*(arg1 + 0x44))))
                            int64_t zmm1 = *(rdi_1 - 0x1c)
                            int32_t var_74_1 = *(rdi_1 - 0x14)
                            int32_t var_68_1 = rdi_1[-1].d
                            int32_t var_80_1 = rdi_1[-4].d.d
                            int64_t zmm0 = rdi_1[-2]
                            int64_t var_64_1 = 0
                            int32_t var_88 = 0
                            int32_t var_84_1 = 0x7f7fffff
                            int64_t var_7c_1 = zmm1
                            int64_t var_70_1 = zmm0
                            char var_5c_1 = 0xff
                            int64_t var_58
                            sub_140b58260(&var_58, u"Invalid", 1)
                            int64_t rbx_5 = rdi_1[1]
                            int32_t rdx_8
                            rdx_8.b = *(arg1 + 0x2c) == 1
                            int64_t rax_17 = *(arg1 + 0x48)
                            int32_t var_50 = (rdx_8 + 2) | (var_50 & 0xfffffffa)
                            char rdx_11 = *(arg1 + 0x44)
                            rdx_7[0xb] |= 1
                            char var_5c_2 = rdx_11
                            var_58 = rax_17
                            zmm6 = sub_14270a6d0(sub_140d3c6e0(&rdx_7[1]), rbx_5, &var_88)
            else
                void* rsi_1 = *rdi_1
                
                if (rsi_1 == 0)
                    goto label_142721df2
                
                void* rax_3 = sub_14255d000()
                void* rdx_2 = *(rsi_1 + 0x10)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    goto label_142721df2
                
                void* rbx_3 = *(rsi_1 + 0x258)
                
                if (rbx_3 != 0)
                    rbx_2 = sub_140d21950(rbx_3, sub_142725fc0())
                label_142721df2:
                    
                    if (rbx_2 != 0)
                        goto label_142721e01
        
        rdi_1 = &rdi_1[6]
    while (&rdi_1[-4] != i)

r12[1].d = 0

if (*(r12 + 0xc) s<= 0xffffffff)
    sub_1405a5220(r12, 0)

return zmm6.q
