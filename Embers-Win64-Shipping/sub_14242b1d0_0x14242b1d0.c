// 函数: sub_14242b1d0
// 地址: 0x14242b1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
sub_142442780(rcx + 0x50, rcx + 0x10)
void* rbx_1 = *arg1
int32_t rsi = data_14399fa54
int32_t i_2 = *(*(rbx_1 + 0x38) + 0x38)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t r11_1 = *(rbx_1 + 0x38)
        int64_t r9_2 = sx.q(i_2) << 6
        i = *(r11_1 + r9_2 + 0x38)
        
        if (rsi - *(r11_1 + r9_2 + 0x20) u< 2)
            break
        
        void* r8_3 = sx.q(*(r11_1 + r9_2 + 0x34)) * 0x60 + *(rbx_1 + 0x28)
        *((sx.q(*(r11_1 + r9_2 + 0x3c)) << 6) + r11_1 + 0x38) = i
        *((sx.q(*(r11_1 + r9_2 + 0x38)) << 6) + *(rbx_1 + 0x38) + 0x3c) = *(r11_1 + r9_2 + 0x3c)
        *(r11_1 + r9_2 + 0x3c) = i_2
        *(r11_1 + r9_2 + 0x38) = i_2
        int64_t rax_7 = sx.q(*(r8_3 + 0x58))
        int64_t rcx_3 = *(rbx_1 + 0x38)
        void* rdx_5 = (rax_7 << 6) + rcx_3
        *(rcx_3 + r9_2 + 0x38) = rax_7.d
        *(rcx_3 + r9_2 + 0x3c) = *(rdx_5 + 0x3c)
        *((sx.q(*(rdx_5 + 0x3c)) << 6) + *(rbx_1 + 0x38) + 0x38) = i_2
        *(rdx_5 + 0x3c) = i_2
        i_2 = i
    while (i != 0)
    rsi = data_14399fa54

int64_t* rbx_2 = data_143f5e408
int32_t r14 = *(data_143f5e738 + 4)
uint64_t result = data_143f5e750
int32_t i_1 = *(result + 4)

if (rbx_2 != 0)
    while (data_143f5e410 u> i_1)
        int64_t* rcx_6 = rbx_2
        rbx_2 = *rbx_2
        
        if (rcx_6[3] == 0)
            break
        
        void* rdx_6 = rcx_6[2]
        
        if (rdx_6 != 0)
            int64_t rax_11 = 0
            
            if (0 == *(rdx_6 + 8))
                *(rdx_6 + 8) = 0
            else
                rax_11 = *(rdx_6 + 8)
            
            result = rax_11 u>> 0x1a
            
            if ((result.b & 1) == 0)
                break
        
        result = zx.q(rsi - *(rcx_6 + 0x64))
        
        if (result.d u<= r14)
            break
        
        void* rdx_7 = *rcx_6
        
        if (rdx_7 != 0)
            *(rdx_7 + 8) = rcx_6[1]
        
        int64_t* rdx_8 = rcx_6[1]
        
        if (rdx_8 != 0)
            *rdx_8 = *rcx_6
        
        int64_t rdx_9 = sx.q(rcx_6[0xc].d)
        result = rcx_6[3]
        *rcx_6 = 0
        rcx_6[1] = 0
        int64_t rcx_7 = *(result + 0x20)
        void* rdi_1 = *(rcx_7 + (rdx_9 << 3))
        
        if (rdi_1 != 0)
            *(rcx_7 + (rdx_9 << 3)) = 0
            sub_142429790(rdi_1)
            result = j_sub_140a74f90(rdi_1)
        
        if (rbx_2 == 0)
            break

return result
