// 函数: sub_1410355b0
// 地址: 0x1410355b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1
int32_t r11_3 = (*(*(arg3 + 0xa0) + (sx.q(arg5) << 2)) + arg6) * *(arg3 + 0x98) + arg7
arg6 = r11_3
uint64_t rax_3 = zx.q(r11_3 * *(arg2 + 0x3c) + *(arg2 + 0x2c))
void* rdx = *(arg2 + 0x48)

if ((rdx.b & 1) != 0)
    rdx = (rdx s>> 1) + arg2 + 0x48

int64_t r10_1 = sx.q(arg8)
int128_t* rcx_2 = (r10_1 << 5) + *(arg4 + 0x68)
*(rax_3 + rdx) = *rcx_2
*(rax_3 + rdx + 0x10) = rcx_2[1]
int32_t rcx_4 = r11_3 * *(arg2 + 0x3c)
int32_t rdx_3 = *(arg2 + 0x2c) + 0x38
*(arg2 + 0x60) = 1
void* rax_4 = *(arg2 + 0x48)

if ((rax_4.b & 1) != 0)
    rax_4 = (rax_4 s>> 1) + arg2 + 0x48

*(zx.q(rdx_3 + rcx_4) + rax_4) = arg13
*(arg2 + 0x60) = 1
void* rcx_7 = *(*(arg4 + 0x58) + (r10_1 << 3))
int64_t var_b8
int128_t var_78

if (data_1439b4acc == 0 || *(arg3 + 0x200) != 0 || arg11 != 0 || arg9 - 1 u> 5)
    arg5.b = 0
else
    uint64_t rbx_1 = zx.q(arg9)
    
    if (arg9 u>= 6)
        rbx_1 = 6
    
    arg5.b = 1
    int32_t var_80_1 = rbx_1.d
    uint32_t count = (rbx_1 << 3).d
    int32_t var_7c_1 = r10_1.d
    memcpy(&var_b8, arg10, count)
    int64_t rax_9 = sub_140a6b260(&var_b8, count)
    int32_t rcx_10 = *(arg2 + 0x80)
    var_78 = var_b8.o
    int64_t var_a8
    int128_t var_68_1 = var_a8.o
    int128_t var_98
    int128_t var_58_1 = var_98
    int128_t var_48_1 = rax_9.o
    void* const r10_4
    
    if (rcx_10 == *(arg2 + 0xac))
    label_1410357c9:
        r10_4 = nullptr
    else
        void* r8_1 = arg2 + 0xb0
        void* rcx_11 = *(r8_1 + 8)
        
        if (rcx_11 != 0)
            r8_1 = rcx_11
        
        int32_t rax_11 = *(r8_1 + (((sx.q(*(arg2 + 0xc0)) - 1) & sx.q(rax_9.d)) << 2))
        
        if (rax_11 == 0xffffffff)
        label_1410357c9_1:
            r10_4 = nullptr
        else
            int32_t r9
            
            while (true)
                r10_4 = sx.q(rax_11) * 0x50 + *(arg2 + 0x78)
                
                if (*(r10_4 + 0x30) == rax_9 && *(r10_4 + 0x3c) == var_7c_1)
                    r9 = *(r10_4 + 0x38)
                    
                    if (r9 == var_80_1)
                        break
                
            label_1410357be:
                rax_11 = *(r10_4 + 0x48)
                
                if (rax_11 == 0xffffffff)
                    goto label_1410357c9_2
            
            int32_t r8_2 = 0
            
            if (r9 != 0)
                int128_t* rcx_13 = &var_78
                
                do
                    if (*(r10_4 - &var_78 + rcx_13) != *rcx_13)
                        goto label_1410357be
                    
                    r8_2 += 1
                    rcx_13 += 8
                while (r8_2 u< r9)
            
            if (rax_11 == 0xffffffff)
            label_1410357c9_2:
                r10_4 = nullptr
    
    void* rdx_11 = r10_4 + 0x40
    
    if (r10_4 == 0)
        rdx_11 = nullptr
    
    if (rdx_11 != 0)
        int32_t rax_12 = *(arg2 + 0x3c)
        void* rax_13 = *(arg2 + 0x48)
        int32_t rcx_15 = *(arg2 + 0x2c) + 0x40
        void* rcx_16
        
        if ((rax_13.b & 1) == 0)
            rcx_16 = rax_13
        else
            int64_t rax_14 = rax_13 s>> 1
            rcx_16 = rax_14 + arg2 + 0x48
            rax_13 = rax_14 + 0x48 + arg2
        
        int64_t rax_16 = memcpy(zx.q(rax_12 * arg6 + rcx_15) + rax_13, 
            zx.q(*rdx_11 * rax_12 + rcx_15) + rcx_16, rax_12 - 0x40)
        *(arg2 + 0x60) = 1
        return rax_16
    
    r11_3 = arg6
    r14 = arg1

var_b8 = *(r14 + 0x138)
int64_t var_a8_1 = *(rcx_7 + 0x110)
void* var_b0 = arg2
int32_t var_a0 = r11_3
void* rax_23 = sub_141003b00(r14, rcx_7, 0, nullptr, 0, 0, arg9, arg10, 0, 0, 0, 0, arg11, arg12, 
    *(arg2 + 0x70), &var_b8)

if (arg5.b == 0)
    return rax_23

return sub_141001160(arg2 + 0x78, &var_78, &arg6)
