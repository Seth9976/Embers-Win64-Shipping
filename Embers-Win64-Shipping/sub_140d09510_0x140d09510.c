// 函数: sub_140d09510
// 地址: 0x140d09510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t** i

if (arg1 == 0)
label_140d096e5:
    i.b = 0
else
    uint8_t rax
    int32_t rdx
    rax, rdx = sub_140ce0e10(arg1, arg2.d)
    
    if (rax == 0)
        sub_140cdbab0(arg1, rdx)
    
    void* var_48
    sub_1409aa070(&var_48, sub_140d41340(), 0, 0x10, 0)
    int64_t** i_1
    
    if (arg2 == 0)
        for (i = i_1; i != 0; i = i_1)
            int32_t* rbx_2 = *i
            
            if (sub_140d23d40(rbx_2, arg1) != 0 && (*(*rbx_2 + 0x188))(rbx_2).b != 0)
                goto label_140d096e5_1
            
            sub_140cd6aa0(&var_48)
        
    label_140d096e1:
        i.b = 1
    else
        int64_t** i_2 = i_1
        
        if (i_2 == 0)
        label_140d096e1_1:
            i.b = 1
        else
            void* rsi_1 = var_48
            int32_t var_40
            int32_t rbx_1 = var_40
            
            while (true)
                int64_t* rdi_1
                
                if (i_2 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1 = *i_2
                
                if (sub_140d23d40(rdi_1, arg1) != 0 && (*(*rdi_1 + 0x188))(rdi_1).b != 0
                        && rdi_1 != arg2)
                    break
                
                int32_t r9_1 = *(rsi_1 + 0x24)
                
                while (true)
                    i = zx.q(rbx_1 + 1)
                    int16_t var_40_1 = i.w
                    rbx_1 = i.d
                    
                    if (i.d s>= r9_1)
                        goto label_140d096e1_1
                    
                    void* rax_8
                    
                    while (true)
                        uint32_t rcx_4 = zx.d(var_40_1)
                        int32_t rax_4 = rbx_1
                        
                        if (rbx_1 s< 0)
                            rax_4 = rbx_1 + 0xffff
                            rcx_4 -= 0x10000
                        
                        int64_t rcx_5 = sx.q(rcx_4) * 3
                        int64_t rax_7 = *(*(rsi_1 + 0x10) + (sx.q(rax_4 s>> 0x10) << 3))
                        i_2 = rax_7 + (rcx_5 << 3)
                        rax_8 = *(rax_7 + (rcx_5 << 3))
                        
                        if (rax_8 != 0)
                            break
                        
                        i = zx.q(rbx_1 + 1)
                        var_40_1 = i.w
                        rbx_1 = i.d
                        
                        if (i.d s>= r9_1)
                            i.b = 1
                            goto label_140d09705
                    
                    int32_t var_28
                    
                    if ((*(rax_8 + 8) & var_28) == 0)
                        int32_t rax_9 = *(rax_8 + 0xc)
                        void* const rdx_5
                        
                        if (rax_9 s>= data_143e1d9b4)
                            rdx_5 = nullptr
                        else
                            uint32_t rcx_6 = zx.d(rax_9.w)
                            
                            if (rax_9 s< 0)
                                rax_9 += 0xffff
                                rcx_6 -= 0x10000
                            
                            rdx_5 =
                                *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(rcx_6) * 0x18
                        
                        int32_t var_24
                        
                        if ((*(rdx_5 + 8) & var_24) == 0)
                            break
            
        label_140d096e5_1:
            i.b = 0

label_140d09705:
return i
