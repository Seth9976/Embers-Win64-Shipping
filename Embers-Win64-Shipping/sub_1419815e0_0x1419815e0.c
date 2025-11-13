// 函数: sub_1419815e0
// 地址: 0x1419815e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)
int64_t* result = nullptr

if (sub_141976740() != 0 && sub_141978390() != 0)
    int32_t rbp_1 = 0
    AcquireSRWLockShared(&data_143f01fc8)
    
    if (data_143f0f148 != 0)
        void* rax_5
        
        if (data_1439c7f88 == data_1439c7fb4)
        label_141981693:
            rax_5 = nullptr
        else
            void* rcx = data_1439c7fc0
            void* rax_3 = &data_1439c7fb8
            
            if (rcx != 0)
                rax_3 = rcx
            
            int32_t rax_4 = *(rax_3 + (((sx.q(data_1439c7fc8) - 1) & rdi) << 2))
            
            if (rax_4 == 0xffffffff)
            label_141981693_1:
                rax_5 = nullptr
            else
                int64_t r8_1 = data_1439c7f80
                int32_t* rdx_5
                
                while (true)
                    rdx_5 = sx.q(rax_4) * 0x28
                    
                    if (*(rdx_5 + r8_1) == rdi.d)
                        break
                    
                    rax_4 = *(rdx_5 + r8_1 + 0x20)
                    
                    if (rax_4 == 0xffffffff)
                        goto label_141981693_2
                
                if (rax_4 == 0xffffffff)
                label_141981693_2:
                    rax_5 = nullptr
                else
                    rax_5 = rdx_5 + r8_1
        
        int64_t rdi_1 = sx.q(*(rax_5 + 8))
        void* rsi_1 = &data_1439c8058
        bool cond:1_1 = data_1439c8028 == data_1439c8054
        int32_t arg_10 = rdi_1.d
        
        if (cond:1_1)
        labelid_1f:
            result = nullptr
        else
            void* rcx_2 = data_1439c8060
            void* rax_7 = &data_1439c8058
            
            if (rcx_2 != 0)
                rax_7 = rcx_2
            
            int32_t rax_8 = *(rax_7 + (((sx.q(data_1439c8068) - 1) & rdi_1) << 2))
            
            if (rax_8 == 0xffffffff)
            label_1419816fb:
                result = nullptr
            else
                int64_t r8_2 = data_1439c8020
                int64_t rdx_9
                
                while (true)
                    rdx_9 = sx.q(rax_8)
                    int64_t rcx_3 = rdx_9 * 3
                    
                    if (*(r8_2 + (rcx_3 << 3)) == rdi_1.d)
                        break
                    
                    rax_8 = *(r8_2 + (rcx_3 << 3) + 0x10)
                    
                    if (rax_8 == 0xffffffff)
                        goto label_1419816fb_2
                
                if (rax_8 == 0xffffffff)
                label_1419816fb_1:
                    result = nullptr
                else
                    void* rbx = r8_2 + rdx_9 * 0x18
                    
                    if (rbx == 0)
                    label_1419816fb_2:
                        result = nullptr
                    else
                        result = *(rbx + 8)
        
        if (result == 0)
            ReleaseSRWLockShared(&data_143f01fc8)
            AcquireSRWLockExclusive(&data_143f01fc8)
            rbp_1 = (result + 1).d
            
            if (data_1439c8028 == data_1439c8054)
            labelid_b:
                result = nullptr
            else
                void* rcx_4 = data_1439c8060
                
                if (rcx_4 != 0)
                    rsi_1 = rcx_4
                
                int32_t rax_10 = *(rsi_1 + (((sx.q(data_1439c8068) - 1) & rdi_1) << 2))
                
                if (rax_10 == 0xffffffff)
                label_14198177b:
                    result = nullptr
                else
                    int64_t r8_3 = data_1439c8020
                    int64_t rdx_13
                    
                    while (true)
                        rdx_13 = sx.q(rax_10)
                        int64_t rcx_5 = rdx_13 * 3
                        
                        if (*(r8_3 + (rcx_5 << 3)) == rdi_1.d)
                            break
                        
                        rax_10 = *(r8_3 + (rcx_5 << 3) + 0x10)
                        
                        if (rax_10 == 0xffffffff)
                            goto label_14198177b_2
                    
                    if (rax_10 == 0xffffffff)
                    label_14198177b_1:
                        result = nullptr
                    else
                        void* rbx_1 = r8_3 + rdx_13 * 0x18
                        
                        if (rbx_1 == 0)
                        label_14198177b_2:
                            result = nullptr
                        else
                            result = *(rbx_1 + 8)
            
            if (result == 0)
                int64_t* result_2 = j_sub_140a82f30(zx.q((&result[5]).d))
                
                if (result_2 != 0)
                    *result_2 = -1
                    result_2[1] = -1
                    result_2[2] = result
                    result_2[3] = result
                
                int64_t* result_1 = result_2
                result_2[4].d = rdi_1.d
                sub_141000b00(&data_1439c8020, &arg_10, &result_1)
                result = result_1
        
        result[2] += 1
        
        if (rbp_1 != 0)
            ReleaseSRWLockExclusive(&data_143f01fc8)
            return result
    
    ReleaseSRWLockShared(&data_143f01fc8)

return result
