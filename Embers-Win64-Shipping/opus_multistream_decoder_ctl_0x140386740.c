// 函数: opus_multistream_decoder_ctl
// 地址: 0x140386740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t rbp = 0
int32_t rax = opus_decoder_get_size(2)
int32_t rax_1 = opus_decoder_get_size(1)
int32_t rdx = arg2
void* rbx = arg1 + 0x110

if (rdx s> 0xfc2)
    if (rdx == 0xfc7 || rdx == 0xfcd)
        rbp = opus_decoder_ctl(rbx, rdx, arg3)
    else if (rdx == 0x1402)
        int32_t rdx_6 = arg3.d
        
        if (rdx_6 s< 0 || rdx_6 s>= *(arg1 + 4))
            rbp = -1
        
        if (arg4 == 0)
            return 0xffffffff
        
        if (rdx_6 s> 0)
            do
                int32_t rax_12 = rax + 7
                
                if (i s>= *(arg1 + 8))
                    rax_12 = rax_1 + 7
                
                i += 1
                rbx += sx.q(rax_12) & 0xfffffffffffffff8
            while (i s< rdx_6)
        
        *arg4 = rbx
    else
        rbp = -5
else if (rdx == 0xfc2)
    if (*(arg1 + 4) s> 0)
        while (true)
            void* r9_1 = rbx
            
            if (i s>= *(arg1 + 8))
                rbx += sx.q(rax_1 + 7) & 0xfffffffffffffff8
            else
                rbx += sx.q(rax + 7) & 0xfffffffffffffff8
            
            int32_t rax_10 = opus_decoder_ctl(r9_1, rdx, zx.q(arg3.d))
            rbp = rax_10
            
            if (rax_10 != 0)
                break
            
            i += 1
            
            if (i s>= *(arg1 + 4))
                break
            
            rdx = arg2
else if (rdx == 0xfa9)
    rbp = opus_decoder_ctl(rbx, rdx, arg3)
else if (rdx == 0xfbc)
    if (*(arg1 + 4) s> 0)
        do
            void* r8_1 = rbx
            
            if (i s>= *(arg1 + 8))
                rbx += sx.q(rax_1 + 7) & 0xfffffffffffffff8
            else
                rbx += sx.q(rax + 7) & 0xfffffffffffffff8
            
            int32_t rax_7 = opus_decoder_ctl(r8_1, 0xfbc, r8_1)
            rbp = rax_7
            
            if (rax_7 != 0)
                break
            
            i += 1
        while (i s< *(arg1 + 4))
else if (rdx == 0xfbd)
    rbp = opus_decoder_ctl(rbx, rdx, arg3)
else if (rdx != 0xfbf)
    rbp = -5
else
    if (arg3 == 0)
        return 0xffffffff
    
    *arg3 = 0
    
    if (*(arg1 + 4) s> 0)
        do
            void* r9 = rbx
            
            if (i s>= *(arg1 + 8))
                rbx += sx.q(rax_1 + 7) & 0xfffffffffffffff8
            else
                rbx += sx.q(rax + 7) & 0xfffffffffffffff8
            
            int32_t var_48
            int32_t rax_4 = opus_decoder_ctl(r9, arg2, &var_48)
            rbp = rax_4
            
            if (rax_4 != 0)
                break
            
            i += 1
            *arg3 ^= var_48
        while (i s< *(arg1 + 4))

return zx.q(rbp)
