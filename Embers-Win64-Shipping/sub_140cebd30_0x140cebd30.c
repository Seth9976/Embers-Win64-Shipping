// 函数: sub_140cebd30
// 地址: 0x140cebd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140d31640()

if (rax.b != 0 && data_143e1b7f0 == 0)
    int32_t r8_1 = (data_143e1d9b4.q).d
    int32_t rbx_1 = 0
    data_143e1b7f0 = 1
    
    if (r8_1 s> 0)
        int64_t* rdx_2
        
        while (true)
            uint32_t rcx_1 = zx.d(rbx_1.w)
            int32_t rax_1 = rbx_1
            
            if (rbx_1 s< 0)
                rax_1 = rbx_1 + 0xffff
                rcx_1 -= 0x10000
            
            rdx_2 = *(*(data_143e1d9a0 + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rcx_1) * 0x18)
            
            if (rdx_2 != 0)
                break
            
            int32_t rax_5 = rbx_1 + 1
            rbx_1 = rax_5
            
            if (rax_5 s>= r8_1)
                return rax_5
        
        while (true)
            (*(*rdx_2 + 0xa8))(rdx_2)
            int32_t r8_2 = (data_143e1d9b4.q).d
            rax = rbx_1 + 1
            rbx_1 = rax
            
            if (rax s>= r8_2)
                break
            
            while (true)
                uint32_t rcx_4 = zx.d(rbx_1.w)
                int32_t rax_7 = rbx_1
                
                if (rbx_1 s< 0)
                    rax_7 = rbx_1 + 0xffff
                    rcx_4 -= 0x10000
                
                rdx_2 = *(*(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(rcx_4) * 0x18)
                
                if (rdx_2 != 0)
                    break
                
                rax = rbx_1 + 1
                rbx_1 = rax
                
                if (rax s>= r8_2)
                    return rax

return rax
