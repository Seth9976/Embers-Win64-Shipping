// 函数: sub_1406bc1d0
// 地址: 0x1406bc1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *arg2
int32_t* rdi = arg2
void* rbp = *(arg1 + 0x30)

while (i != 0xffffffff)
    if ((*(av_pix_fmt_desc_get(zx.q(i)) + 0x10) & 8) == 0)
        return *rdi
    
    int32_t rbx_1 = 0
    int32_t* rax_1 = avcodec_get_hw_config(*(arg1 + 0x10), 0)
    
    if (rax_1 != 0)
        int32_t rdx
        
        while (true)
            if ((rax_1[1].b & 1) != 0)
                rdx = *rdi
                
                if (*rax_1 == rdx)
                    break
            
            rbx_1 += 1
            rax_1 = avcodec_get_hw_config(*(arg1 + 0x10), zx.q(rbx_1))
            
            if (rax_1 == 0)
                goto label_1406bc23f
        
        if (rax_1[2] == *(rbp + 0x7fc))
            *(rbp + 0x7f8) = rdx
            return *rdi
    
label_1406bc23f:
    i = rdi[1]
    rdi = &rdi[1]

return i
