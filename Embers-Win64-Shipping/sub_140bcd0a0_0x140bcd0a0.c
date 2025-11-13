// 函数: sub_140bcd0a0
// 地址: 0x140bcd0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_50 = &arg_8
void*** (* var_58)() = sub_140884c50
void* rax = sub_140a756e0(&var_58, &data_14397f5f0)
char arg_10 = 0
void*** (* var_48)() = sub_140884c50
char r13 = *(rax + 0x20)
*(rax + 0x20) = 1
char* var_40 = &arg_10
sub_140a756e0(&var_48, &data_14397f5f0)
sub_140bc7ab0()
int32_t rbp = 0
char r15 = data_143e1aac1
char r12 = *(*(arg1 + 0xc8) + 0x35)
int32_t i = *(arg1 + 0x118)
int32_t rax_1

for (rax_1 = *(arg1 + 0x64); rax_1 s< i; i = *(arg1 + 0x118))
    TlsGetValue(data_143e1a81c)
    int64_t rcx_4 = sx.q(*(arg1 + 0x64))
    *(arg1 + 0x64) = (rcx_4 + 1).d
    int64_t* rax_5 = (rcx_4 << 4) + *(arg1 + 0x130)
    
    if (rax_5[1].b == 0)
        int64_t* rdi_1 = *rax_5
        
        if (((rdi_1[1].d u>> 0xc).b & 1) != 0)
            if (r12 == 0)
            label_140bcd1f4:
                *(rax + 0x28) = rdi_1
                sub_140cd85e0(rdi_1)
                int32_t rax_12 = *(rdi_1 + 0xc)
                void* const r8_1
                
                if (rax_12 s>= data_143e1d9b4)
                    r8_1 = nullptr
                else
                    uint32_t rdx_1 = zx.d(rax_12.w)
                    
                    if (rax_12 s< 0)
                        rax_12 += 0xffff
                        rdx_1 -= 0x10000
                    
                    r8_1 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
                
                for (int32_t rax_16 = *(r8_1 + 8); test_bit(rax_16, 0x1b); rax_16 = *(r8_1 + 8))
                    bool z_1
                    
                    if (rax_16 == *(r8_1 + 8))
                        *(r8_1 + 8) = rax_16 & 0xf7ffffff
                        z_1 = true
                    else
                        *(r8_1 + 8)
                        z_1 = false
                    
                    if (z_1)
                        break
                
                *(rax + 0x28) = 0
            else if (r15 != 0 && (*(*rdi_1 + 0xf8))(rdi_1) != 0)
                int64_t* j = rdi_1[4]
                uint8_t rax_9 = 1
                
                if (j == 0)
                    goto label_140bcd1f4
                
                do
                    if (rax_9 == 0)
                        goto label_140bcd26c
                    
                    if (((j[1].d u>> 0xc).b & 1) != 0)
                        rax_9 = (*(*j + 0xf8))(j)
                    
                    if (((j[1].d u>> 0xc).b & 1) == 0 || rax_9 != 0)
                        rax_9 = 1
                    
                    j = j[4]
                while (j != 0)
                
                if (rax_9 != 0)
                    goto label_140bcd1f4
    
label_140bcd26c:
    rax_1 = *(arg1 + 0x64)

*(rax + 0x20) = r13

if (rax_1 == i)
    rbp = 2

return zx.q(rbp)
