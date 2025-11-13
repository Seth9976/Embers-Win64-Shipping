// 函数: sub_142440380
// 地址: 0x142440380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (data_143f5e400 == 0 && sub_140a23cf0(arg2, &data_14334c868, 1, 0, 0xffffffff).d != 0xffffffff)
    int16_t* rdx
    
    if (arg2[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg2
    
    int32_t arg_18
    sub_140b58260(&arg_18, rdx, 1)
    
    for (int32_t i = 0; i s>= 0; i += 1)
        if (i s>= *(arg1 + 0x150))
            break
        
        void* rcx_3 = *(*(arg1 + 0x148) + (sx.q(i) << 3))
        
        if (rcx_3 == 0)
            rcx_3 = *(arg1 + 0x30)
        
        rax = sub_141d343b0(rcx_3)
        
        if (rax != 0)
            int64_t rcx_4 = *(rax + 0x18)
            
            if (rcx_4.d == arg_18)
                int64_t arg_20 = rcx_4
                int64_t var_18
                int64_t* rax_2 = sub_140b63b70(&arg_20, &var_18)
                
                if (arg2 != rax_2)
                    int64_t rcx_6 = *arg2
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    *arg2 = *rax_2
                    *rax_2 = 0
                    arg2[1].d = rax_2[1].d
                    *(arg2 + 0xc) = *(rax_2 + 0xc)
                    rax_2[1] = 0
                
                int64_t rcx_8 = var_18
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                rax_2.b = 1
                return rax_2

rax.b = 0
return rax
