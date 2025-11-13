// 函数: sub_140809aa0
// 地址: 0x140809aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2a8) &= 0xfffffffe
*(arg1 + 0x2ac) = 0x3f800000
void* rax_1 = sub_140d226f0(arg1, sub_14087dea0())

if (rax_1 != 0)
    void* rax_2 = sub_1405f7040(rax_1)
    
    if (rax_2 != 0)
        int32_t* rbx_1 = *(rax_2 + 0x50)
        void* rsi_1 = &rbx_1[sx.q(*(rax_2 + 0x58)) * 0xa]
        
        if (rbx_1 == rsi_1)
        label_140809b20:
            rbx_1 = &data_143ce3760
            TEB* gsbase
            
            if (data_143ce3788 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143ce3788)
                
                if (data_143ce3788 == 0xffffffff)
                    sub_14081a5b0(&data_143ce3760)
                    data_143ce3780 &= 0xfffffffe
                    data_143ce3784 = 0x3f800000
                    atexit(sub_142cb3850)
                    _Init_thread_footer(&data_143ce3788)
        else
            while (sub_140834690(rbx_1) == 0)
                rbx_1 = &rbx_1[0xa]
                
                if (rbx_1 == rsi_1)
                    goto label_140809b20
        
        *(arg1 + 0x288) = *rbx_1
        
        if (arg1 + 0x290 != &rbx_1[2])
            int32_t r8_1 = *(arg1 + 0x29c)
            int64_t rbp_1 = sx.q(rbx_1[4])
            int64_t r14_1 = *(rbx_1 + 8)
            *(arg1 + 0x298) = rbp_1.d
            
            if (rbp_1.d != 0 || r8_1 != 0)
                sub_1405a4be0(arg1 + 0x290, rbp_1.d, r8_1)
                memcpy(*(arg1 + 0x290), r14_1, (rbp_1 << 4).d)
            else
                *(arg1 + 0x29c) = rbp_1.d
        
        *(arg1 + 0x2a0) = rbx_1[6]
        *(arg1 + 0x2a4) = rbx_1[7].b
        *(arg1 + 0x2a8) ^= (rbx_1[8] ^ *(arg1 + 0x2a8)) & 1
        *(arg1 + 0x2ac) = rbx_1[9]

void* i = *(arg1 + 0x138)
int64_t result = sx.q(*(arg1 + 0x140))

for (void* rsi_5 = result * 0x30 + i; i != rsi_5; i += 0x30)
    result = sub_140834690(i)
    
    if (result.b != 0 && (*(i + 0x28) & 1) != 0)
        *(arg1 + 0x2a8) ^= (*(i + 0x20) ^ *(arg1 + 0x2a8)) & 1
        result = zx.q(*(i + 0x24))
        *(arg1 + 0x2ac) = result.d

return result
