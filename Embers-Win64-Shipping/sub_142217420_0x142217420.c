// 函数: sub_142217420
// 地址: 0x142217420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg5
int32_t rbx = 0
int64_t rdi = sx.q(*(arg4 + 0xe0))
int32_t r8 = 0
int64_t r15 = *(rbp + 0x158)

if (rdi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f50e20)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rdi)
            goto label_1422174b4

int16_t* rdx_1

if (rdi s<= 0 || r8 == 0xffffffff)
label_1422174b4:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_7 = *(arg4 + 0xe8)
    
    if ((rcx_7.b & 1) != 0)
        rcx_7 = (rcx_7 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_7 + (sx.q(r8) << 1)

sub_14108daf0(arg6, rdx_1, r15)
arg5.d = *(rbp + 0x160)
int32_t arg_8 = *(arg1 + 4)
int16_t arg_c = *(arg1 + 8)
sub_14088bf20(arg6, &arg_8, &arg5)
int64_t rax_6 = *(rbp + 0x168)
int64_t rbp_1 = data_143a2f0e8
int32_t r10_2 = *(arg1 + 0xa)

if (rax_6 != 0)
    rbp_1 = rax_6

uint64_t result = zx.q(r10_2 u>> 0x10)

if (result.w != 0)
    void* rsi_1 = *arg6
    int64_t r9_1 = *(rsi_1 + 0x20)
    result = rsi_1 + 0x20
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + result
    
    int32_t r8_4 = *(result + 8) - 1
    
    if (r8_4 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r8_4 + rbx)
            result = zx.q((temp1_1 - temp0_1) s>> 1)
            int64_t rcx_6 = sx.q(result.d)
            
            if (*(r9_1 + (rcx_6 << 2)) u>= r10_2.w)
                r8_4 = rcx_6.d
            else if (rbx != rcx_6.d)
                rbx = rcx_6.d
            else
                rbx += 1
        while (rbx s< r8_4)
    
    if (rbx == r8_4)
        int64_t r11_2 = sx.q(rbx)
        
        if (*(r9_1 + (r11_2 << 2)) == r10_2.w && rbx s>= 0)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rbx)
            int32_t rdx_5 = temp2_1 & 7
            int32_t rax_15 = temp3_1 + rdx_5
            char* r8_8 = zx.q(rax_15 s>> 3)
                + zx.q((*(rsi_1 + 0x28) + *(rsi_1 + 0x18) + *(rsi_1 + 8)) << 3) + arg6[1]
            *r8_8 |= (1 << (((rax_15 & 7) - rdx_5) u% 0x20)).b
            void* rax_18 = *arg6
            result = arg6[1]
            *(zx.q((*(rax_18 + 0x18) + *(rax_18 + 8)) << 3) + (r11_2 << 3) + result) = rbp_1

return result
