// 函数: sub_140ceba40
// 地址: 0x140ceba40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d31640()

if (result == 0)
    return result

sub_140cb7020()
void* rax = data_143e1b7d0
int32_t rbx = 0
data_143e1b1e8 = 0

if (rax != 0)
    int32_t rax_1 = *(rax + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp1_1)
        int32_t rax_3 = temp2_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    *(rax_7 + 8) &= 0xbfffffff
    data_143e1b7d0 = 0

if (data_143e1d99c != 0)
    sub_140d1a6a0(&data_143e1d990)

if (sub_140cc17f0() != 0)
    sub_140cc11b0(0, 0x3b03126f)

sub_140cb0040()
sub_140d1e8c0(&data_143e1d678, 1)
int32_t rdi = 0
data_143e1adf8
data_143e1adf8 = 0
int32_t r8_2 = data_143e1d9b4

if (r8_2 s> 0)
    int32_t rax_16
    
    do
        int16_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rdi)
        uint32_t rdx_6 = zx.d(temp3_1)
        int32_t rax_12 = temp4_1 + rdx_6
        int64_t rdx_7 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
        int64_t rcx_8 = sx.q(zx.d(rax_12.w) - rdx_6) * 3
        int64_t* rsi_1 = rdx_7 + (rcx_8 << 3)
        
        if (*(rdx_7 + (rcx_8 << 3)) != 0)
            while (true)
                data_143e1adf8 += 1
                void* rbp_1 = *rsi_1
                
                if (rbp_1 != 0)
                    void* rax_17 = sub_140bdf8f0()
                    void* rdx_8 = *(rbp_1 + 0x10)
                    int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                    
                    if (rax_18.d s> *(rdx_8 + 0x38)
                            || *(*(rdx_8 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                        rsi_1[1].d |= 0x10000000
                    else
                        rsi_1[1].d &= 0xefffffff
                
                int32_t r8_4 = data_143e1d9b4
                int32_t rax_20 = rdi + 1
                rdi = rax_20
                
                if (rax_20 s>= r8_4)
                    break
                
                while (true)
                    uint32_t rcx_10 = zx.d(rdi.w)
                    int32_t rax_21 = rdi
                    
                    if (rdi s< 0)
                        rax_21 = rdi + 0xffff
                        rcx_10 -= 0x10000
                    
                    int64_t rcx_11 = sx.q(rcx_10) * 3
                    int64_t rax_24 = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3))
                    rsi_1 = rax_24 + (rcx_11 << 3)
                    
                    if (*(rax_24 + (rcx_11 << 3)) != 0)
                        break
                    
                    int32_t rax_25 = rdi + 1
                    rdi = rax_25
                    
                    if (rax_25 s>= r8_4)
                        goto label_140cebc0a
            
            break
        
        rax_16 = rdi + 1
        rdi = rax_16
    while (rax_16 s< r8_2)

label_140cebc0a:
data_143de5444 = 1
sub_140cbaac0(0)
sub_140cc11b0(0, 0x3b03126f)
int32_t r8_5 = data_143e1d9b4

if (r8_5 s> 0)
    int32_t rax_30
    
    do
        uint32_t rcx_12 = zx.d(rbx.w)
        int32_t rax_26 = rbx
        
        if (rbx s< 0)
            rax_26 = rbx + 0xffff
            rcx_12 -= 0x10000
        
        int64_t rcx_13 = sx.q(rcx_12) * 3
        int64_t rax_29 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
        void* rdx_11 = rax_29 + (rcx_13 << 3)
        
        if (*(rax_29 + (rcx_13 << 3)) != 0)
            while (true)
                *(rdx_11 + 8) |= 0x10000000
                int32_t rax_31 = rbx + 1
                int32_t r8_6 = data_143e1d9b4
                rbx = rax_31
                
                if (rax_31 s>= r8_6)
                    break
                
                while (true)
                    uint32_t rcx_14 = zx.d(rbx.w)
                    int32_t rax_32 = rbx
                    
                    if (rbx s< 0)
                        rax_32 = rbx + 0xffff
                        rcx_14 -= 0x10000
                    
                    int64_t rcx_15 = sx.q(rcx_14) * 3
                    int64_t rax_35 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                    rdx_11 = rax_35 + (rcx_15 << 3)
                    
                    if (*(rax_35 + (rcx_15 << 3)) != 0)
                        break
                    
                    int32_t rax_36 = rbx + 1
                    rbx = rax_36
                    
                    if (rax_36 s>= r8_6)
                        goto label_140cebcdd
            
            break
        
        rax_30 = rbx + 1
        rbx = rax_30
    while (rax_30 s< r8_5)

label_140cebcdd:
sub_140cbaac0(0)
sub_140cc11b0(0, 0x3b03126f)
sub_140ccd8a0()
sub_140ccf810()
sub_140d30da0()
sub_140bc3840()
sub_140d3a870()
return sub_140d1a3f0() __tailcall
