// 函数: sub_1421ab4f0
// 地址: 0x1421ab4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f4d8e8 == 0)
    return sub_140a74f90(arg1) __tailcall

EnterCriticalSection(&data_143f4dc38)
bool cond:1 = data_143a2eec8 == data_143a2eef4
int32_t arg_8 = arg2
int64_t* rdi_1

if (cond:1)
labelid_31:
    rdi_1 = sub_1421a5d30(&data_143a2eec0, arg2, &arg_8)
else
    void* rcx = data_143a2ef00
    void* rax_2 = &data_143a2eef8
    
    if (rcx != 0)
        rax_2 = rcx
    
    int32_t rax_3 = *(rax_2 + (((sx.q(data_143a2ef08) - 1) & sx.q(arg2)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_1421ab5a9:
        rdi_1 = sub_1421a5d30(&data_143a2eec0, arg2, &arg_8)
    else
        int64_t r8_1 = data_143a2eec0
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_3) * 5
            
            if (*(r8_1 + (rdx_3 << 3)) == arg2)
                break
            
            rax_3 = *(r8_1 + (rdx_3 << 3) + 0x20)
            
            if (rax_3 == 0xffffffff)
                goto label_1421ab5a9_2
        
        if (rax_3 == 0xffffffff)
        label_1421ab5a9_1:
            rdi_1 = sub_1421a5d30(&data_143a2eec0, arg2, &arg_8)
        else
            void* rdi_3 = r8_1 + (rdx_3 << 3)
            
            if (rdi_3 == 0)
            label_1421ab5a9_2:
                rdi_1 = sub_1421a5d30(&data_143a2eec0, arg2, &arg_8)
            else
                rdi_1 = rdi_3 + 8

int64_t rsi = sx.q(rdi_1[1].d)
int32_t rcx_2 = (rsi + 1).d
rdi_1[1].d = rcx_2

if (rcx_2 s> *(rdi_1 + 0xc))
    sub_140638870(rdi_1)

*(*rdi_1 + (rsi << 3)) = arg1
int32_t rax_7 = data_143f4d878 + arg2
bool cond:2 = rax_7 s<= data_143a2ee3c
data_143f4d878 = rax_7

if (not(cond:2))
    int32_t r10_1 = (data_143a2eee8).d
    int64_t* rbx_1 = nullptr
    int32_t var_98_1 = 0
    int32_t var_94_1 = 1
    void* var_90_1 = &data_143a2eed0
    int32_t rdi_2 = 0
    int32_t var_88_1 = 0xffffffff
    int32_t rcx_4 = 0
    int64_t var_84_1 = 0
    int32_t r8_3 = 0
    
    if (r10_1 != 0)
        void* rax_8 = data_143a2eee0
        void* r11_1 = &data_143a2eed0
        
        if (rax_8 != 0)
            r11_1 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_8 = *r11_1
        
        if (rdx_8 != 0)
        label_1421ab685:
            int32_t rax_15 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
            int32_t var_94_2 = rax_15
            int32_t rax_16
            
            if (rax_15 == 0)
                rax_16 = 0x20
            else
                rax_16 = 0x1f - temp0_2
            
            var_84_1.d = r8_3 - rax_16 + 0x1f
            
            if (r8_3 - rax_16 + 0x1f s> r10_1)
                var_84_1.d = r10_1
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_4)
                r8_3 += 0x20
                rcx_4 += 1
                var_84_1:4.d = r8_3
                var_98_1 = rcx_4
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r11_1 + (rdx_9 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_1421ab685
            
            var_84_1.d = r10_1
    
    var_84_1.d = r10_1
    int128_t var_38_1 = 0xffffffff
    int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    uint128_t var_78 = (&data_143a2eec0).o
    int96_t var_68_1 = var_98_1.o:8.12
    int64_t var_58_1 = temp0_3
    
    while (true)
        int32_t var_5c
        int64_t rax_18 = sx.q(var_5c)
        int64_t* rdx_10 = var_78.q
        
        if (rax_18.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                && var_68_1.q == &data_143a2eed0 && rdx_10 == &data_143a2eec0)
            break
        
        int64_t rdx_11 = *rdx_10
        int64_t rcx_8 = rax_18 * 5
        void* rax_19 = rdx_11 + (rcx_8 << 3)
        
        if (*(rdx_11 + (rcx_8 << 3) + 0x10) != 0
                && (rbx_1 == 0 || not(*(rax_19 + 0x18) f>= rbx_1[2])))
            rdi_2 = *(rdx_11 + (rcx_8 << 3))
            rbx_1 = rax_19 + 8
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    int32_t rax_22 = rbx_1[1].d
    int64_t* rcx_10 = *rbx_1
    int32_t rdx_12 = rax_22 - 1
    int64_t rsi_3 = *rcx_10
    
    if (rdx_12 s>= 1)
        rdx_12 = 1
    
    if (rdx_12 != 0)
        memcpy(rcx_10, &rcx_10[sx.q(rax_22 - rdx_12)], rdx_12 << 3)
        rax_22 = rbx_1[1].d
    
    rbx_1[1].d = rax_22 - 1
    data_143f4d878 -= rdi_2
    sub_140a74f90(rsi_3)

return LeaveCriticalSection(&data_143f4dc38) __tailcall
