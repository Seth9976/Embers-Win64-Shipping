// 函数: sub_140857c20
// 地址: 0x140857c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x10)
int32_t rbx_1 = rbx - 1

if (rbx - 1 s< 0)
    return 

int64_t rsi_1 = sx.q(rbx_1) << 3
int32_t temp1_1

do
    void* r8_1 = *(rsi_1 + *(arg1 + 8))
    
    if (r8_1 != 0)
        int32_t rax_3 = *(r8_1 + 0xc)
        void* const rax
        
        if (rax_3 s>= data_143e1d9b4)
            rax = nullptr
        else
            uint32_t rdx_2 = zx.d(rax_3.w)
            
            if (rax_3 s< 0)
                rax_3 += 0xffff
                rdx_2 -= 0x10000
            
            rax = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
        
        if ((*(rax + 8) & 0x30000000) != 0)
            int32_t rdx_1 = *(r8_1 + 0x5b0)
            *(r8_1 + 0x5b0) = 0xffffffff
            sub_1408614a0(arg1, rdx_1)
    else
        sub_1408614a0(arg1, rbx_1)
    
    rsi_1 -= 8
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
