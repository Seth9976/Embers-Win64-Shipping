// 函数: sub_140665ff0
// 地址: 0x140665ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t var_58
sub_140d3a3a0(&var_58, arg2)
int32_t arg_8
sub_14066d570(arg1, &arg_8, var_58)
int64_t rax = sx.q(arg_8)

if (rax.d != 0xffffffff)
    void* rdx_3 = (rax << 5) + *arg1
    int32_t rbx_1 = 0
    int64_t* rsi_1 = rdx_3 + 8
    
    if (rdx_3 == 0)
        rsi_1 = nullptr
    
    if (rsi_1 != 0)
        int64_t* rsi_2 = *rsi_1
        
        if (rsi_2 != 0)
            int32_t r9_2 = rsi_2[1].d - *(rsi_2 + 0x34)
            int32_t rbp_1 = 1
            int32_t rax_4
            
            if (r9_2 u< 4)
                rax_4 = 1
            else
                uint32_t rdx_5 = r9_2 u>> 1
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rdx_5 + 8)
                uint64_t rflags_2
                char temp0_2
                temp0_2, rflags_2 = _bit_scan_reverse(rdx_5 + 7)
                rax_4 =
                    1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
            
            if (r9_2 s> 0)
                int32_t rcx_6 = rsi_2[9].d
                
                if (rcx_6 == 0 || rcx_6 s< rax_4)
                    rsi_2[9].d = rax_4
                    sub_140636fb0(rsi_2)
            
            int64_t r10_1 = sx.q(rsi_2[9].d)
            
            if (r10_1.d != 0)
                void* rdx_6 = rsi_2[8]
                void* r14_1 = &rsi_2[7]
                void* rax_5 = r14_1
                
                if (rdx_6 != 0)
                    rax_5 = rdx_6
                
                int32_t i = *(rax_5 + (((r10_1 - 1) & rdi) << 2))
                int32_t i_3 = i
                
                if (i != 0xffffffff)
                    int64_t r8_5 = *rsi_2
                    
                    do
                        int64_t rdx_7 = sx.q(i_3) * 3
                        i = *(r8_5 + (rdx_7 << 3) + 0x10)
                        
                        if (*(r8_5 + (rdx_7 << 3)) == rdi.d)
                            break
                        
                        i_3 = i
                    while (i != 0xffffffff)
                
                if (i_3 != 0xffffffff)
                    int32_t i_1
                    
                    do
                        rbx_1 += 1
                        i_1 = i
                        
                        if (i == 0xffffffff)
                            break
                        
                        int64_t r8_6 = *rsi_2
                        
                        do
                            int64_t rdx_8 = sx.q(i_1) * 3
                            i = *(r8_6 + (rdx_8 << 3) + 0x10)
                            
                            if (*(r8_6 + (rdx_8 << 3)) == rdi.d)
                                break
                            
                            i_1 = i
                        while (i != 0xffffffff)
                    while (i_1 != 0xffffffff)
                    
                    if (rbx_1 s> 0)
                        int32_t i_4 = -1
                        int32_t r9_4 = rsi_2[1].d - *(rsi_2 + 0x34)
                        int32_t var_48_1 = rdi.d
                        int32_t var_44_1 = 0xffffffff
                        
                        if (r9_4 u>= 4)
                            uint32_t rdx_10 = r9_4 u>> 1
                            uint64_t rflags_3
                            int32_t temp0_3
                            temp0_3, rflags_3 = _bit_scan_reverse(rdx_10 + 8)
                            uint64_t rflags_4
                            char temp0_4
                            temp0_4, rflags_4 = _bit_scan_reverse(rdx_10 + 7)
                            rbp_1 = 1 << ((0x20 - (0x1f - temp0_4))
                                & (not.d((0x1f - temp0_3) << 0x1a s>> 0x1f)).b)
                        
                        if (r9_4 s> 0 && r10_1.d s< rbp_1)
                            rsi_2[9].d = rbp_1
                            sub_140636fb0(rsi_2)
                        
                        int64_t rcx_13 = sx.q(rsi_2[9].d)
                        
                        if (rcx_13.d != 0)
                            void* rax_10 = *(r14_1 + 8)
                            
                            if (rax_10 != 0)
                                r14_1 = rax_10
                            
                            i_4 = *(r14_1 + (((rcx_13 - 1) & rdi) << 2))
                            int32_t i_5 = i_4
                            
                            if (i_4 != 0xffffffff)
                                int64_t rdx_12 = *rsi_2
                                int32_t i_6 = i_4
                                int32_t i_2
                                
                                do
                                    int64_t rcx_16 = sx.q(i_4) * 3
                                    i_2 = *(rdx_12 + (rcx_16 << 3) + 0x10)
                                    
                                    if (*(rdx_12 + (rcx_16 << 3)) == rdi.d)
                                        break
                                    
                                    i_4 = i_2
                                while (i_2 != 0xffffffff)
                                int32_t i_7 = i_4
                        
                        if ((var_48_1.q u>> 0x20).d != 0xffffffff)
                            return *(*rsi_2 + sx.q(i_4) * 0x18 + 8)

return 0
