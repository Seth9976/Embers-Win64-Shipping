// 函数: sub_1403d8880
// 地址: 0x1403d8880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t r12 = zx.q(*(arg1 + 0x1c0))
uint64_t rdi = zx.q(arg2)

if (r12.d u< arg2)
    void* r14_1 = *(arg1 + 0x1b8)
    sub_1403cc480(arg1, r14_1, r12)
    uint64_t rcx_1 = arg1
    void* rdx_1 = r14_1
    int32_t r8_2 = r12.d
    
    while (true)
        sub_1403be770(rcx_1, rdx_1, r8_2)
        rdi -= r12
        
        if (rdi u<= r12)
            break
        
        uint64_t rsi_1 = zx.q(*(arg1 + 0x1c0))
        void* rbx_1 = *(arg1 + 0x1b8)
        sub_1403cc480(arg1, rbx_1, rsi_1)
        rcx_1 = arg1
        rdx_1 = rbx_1
        r8_2 = rsi_1.d

if (rdi != 0)
    void* rsi_2 = *(arg1 + 0x1b8)
    sub_1403cc480(arg1, rsi_2, rdi)
    sub_1403be770(arg1, rsi_2, rdi.d)

int32_t rsi_3 = *(arg1 + 0x158)
int32_t rdi_1
int32_t var_3c

if ((*(arg1 + 0x254) & 0x20) != 0)
    *(arg1 + 0x4a8) = 0x81
    sub_1403cc480(arg1, &var_3c, 4)
    
    if ((rsi_3 & 0x300) == 0x300)
        rdi_1 = 0
    else
    label_1403d8998:
        rdi_1 = 0
        
        if (_bswap(var_3c) != *(arg1 + 0x244))
            int32_t rax_4 = *(arg1 + 0x158)
            
            if ((*(arg1 + 0x254) & 0x20) != 0)
                if ((rax_4 & 0x200) == 0)
                    png_chunk_warning(arg1, "CRC error")
                    rdi_1 = 1
                else
                    png_chunk_benign_error(arg1, "CRC error")
            else if ((rax_4 & 0x400) == 0)
                png_chunk_benign_error(arg1, "CRC error")
            else
                png_chunk_warning(arg1, "CRC error")
                rdi_1 = 1
else
    *(arg1 + 0x4a8) = 0x81
    sub_1403cc480(arg1, &var_3c, 4)
    
    if ((rsi_3 & 0x800) == 0)
        goto label_1403d8998
    
    rdi_1 = 0
__security_check_cookie(rax_1 ^ &var_68)
return zx.q(rdi_1)
