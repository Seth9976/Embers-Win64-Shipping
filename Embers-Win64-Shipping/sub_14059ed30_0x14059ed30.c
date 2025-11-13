// 函数: sub_14059ed30
// 地址: 0x14059ed30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char result = sub_140b21a10(&data_143dbb3f0, u"nohmd")

if (result == 0)
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"emulatestereo")
    
    if (result == 0)
        TEB* gsbase
        
        if (data_143cd5b60
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cd5b60)
            
            if (data_143cd5b60 == 0xffffffff)
                sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                _Init_thread_footer(&data_143cd5b60)
        
        int64_t rbx_1 = data_143cd5b58
        sub_140a387e0()
        int64_t rdi_1 = 0
        int32_t r15_1 = 0
        int64_t var_68 = 0
        int32_t var_5c_1 = 0
        void* r8_1 = data_14399e720
        int32_t r13_1 = 0
        int32_t rax_2 = (*(r8_1 + 8))(&data_14399e720, rbx_1, r8_1)
        int32_t rsi_1 = 0
        
        if (rax_2 s> 0)
            do
                void* r9_1 = data_14399e720
                int64_t rax_3 = (*(r9_1 + 0x10))(&data_14399e720, rbx_1, zx.q(rsi_1), r9_1)
                int64_t r14_1
                
                if (rax_3 == 0)
                    r14_1 = 0
                else
                    r14_1 = rax_3 - 8
                
                int64_t rdi_2 = sx.q(r13_1)
                r13_1 = (rdi_2 + 1).d
                
                if (r13_1 s> r15_1)
                    sub_1405a4d70(&var_68)
                    r15_1 = var_5c_1
                
                rsi_1 += 1
                rdi_1 = var_68
                *(rdi_1 + (rdi_2 << 3)) = r14_1
            while (rsi_1 s< rax_2)
        
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        sub_140af2b60()
        result = sub_140b2acc0(&data_143dbb3f0, u"hmd=", &var_58, 1)
        char result_1 = result
        
        for (int32_t i = 0; i s>= 0; i += 1)
            if (i s>= r13_1)
                break
            
            int64_t* r14_2 = *(rdi_1 + (sx.q(i) << 3))
            int64_t r8_4 = *r14_2
            bool r12_2
            
            if (result == 0)
                r12_2 = (*(r8_4 + 0x50))(r14_2) == 0
            else
                int64_t* var_78 = nullptr
                int32_t var_70_1 = 0
                (*(r8_4 + 0x48))(r14_2, &var_78, r8_4)
                int64_t var_48
                int64_t* rax_6 = (*(*r14_2 + 0x40))(r14_2, &var_48)
                int64_t rsi_2 = sx.q(var_70_1)
                int32_t j_2 = (rsi_2 + 1).d
                
                if (j_2 s> 0)
                    sub_1405a4f90(&var_78)
                
                int64_t* rcx_10 = &var_78[rsi_2 * 2]
                *rcx_10 = 0
                *rcx_10 = *rax_6
                *rax_6 = 0
                rcx_10[1].d = rax_6[1].d
                *(rcx_10 + 0xc) = *(rax_6 + 0xc)
                rax_6[1] = 0
                int64_t rcx_11 = var_48
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t* rdi_4 = var_78
                r12_2 = true
                void* rsi_5 = &rdi_4[sx.q(j_2) * 2]
                
                if (rdi_4 != rsi_5)
                    do
                        int16_t* rdx_7
                        
                        if (rdi_4[1].d == 0)
                            rdx_7 = &data_142d40450
                        else
                            rdx_7 = *rdi_4
                        
                        int16_t* const rcx_12 = &data_142d40450
                        
                        if (var_50_1 != 0)
                            rcx_12 = var_58
                        
                        if (sub_140a54510(rcx_12, rdx_7) == 0)
                            r12_2 = (*(*r14_2 + 0x50))(r14_2) == 0
                            break
                        
                        rdi_4 = &rdi_4[2]
                    while (rdi_4 != rsi_5)
                    
                    rdi_4 = var_78
                
                int32_t j_1 = j_2
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        int64_t rcx_14 = *rdi_4
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        rdi_4 = &rdi_4[2]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    rdi_4 = var_78
                
                if (rdi_4 != 0)
                    sub_140a74f90(rdi_4)
                
                rdi_1 = var_68
            
            if (r12_2 != 0)
                (*(data_14399e720 + 0x20))(&data_14399e720, rbx_1, &r14_2[1])
            
            result = result_1
        
        int16_t* rcx_16 = var_58
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        if (rdi_1 != 0)
            return sub_140a74f90(rdi_1)

return result
