// 函数: sub_14139fdd0
// 地址: 0x14139fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x20))
int128_t var_28

if (r10.d == 0)
    uint64_t rax_5 = *(arg1 + 8)
    
    if ((*(rax_5 + 0x3a) & 0x40) != 0)
        int64_t* r10_2 = *(arg1 + 0xf0) + 0x1d08
        rax_5 = zx.q(r10_2[1].d)
        void* const rcx_10
        
        if (rax_5.d == *(r10_2 + 0x34))
        label_14139ff40:
            rcx_10 = nullptr
        else
            int64_t r11_3 = sx.q(*(arg1 + 0x10))
            void* r8_4 = &r10_2[7]
            void* rdx_7 = *(r8_4 + 8)
            
            if (rdx_7 != 0)
                r8_4 = rdx_7
            
            rax_5 = zx.q(*(r8_4 + (((sx.q(r10_2[9].d) - 1) & r11_3) << 2)))
            
            if (rax_5.d == 0xffffffff)
            label_14139ff40_1:
                rcx_10 = nullptr
            else
                int64_t r8_5 = *r10_2
                
                while (true)
                    int64_t rdx_8 = sx.q(rax_5.d) * 5
                    rcx_10 = r8_5 + (rdx_8 << 3)
                    
                    if (*(r8_5 + (rdx_8 << 3)) == r11_3.d)
                        break
                    
                    rax_5 = zx.q(*(rcx_10 + 0x20))
                    
                    if (rax_5.d == 0xffffffff)
                        goto label_14139ff40_2
                
                if (rax_5.d == 0xffffffff)
                label_14139ff40_2:
                    rcx_10 = nullptr
        
        void* rbx_2 = rcx_10 + 8
        
        if (rcx_10 == 0)
            rbx_2 = nullptr
        
        if (rbx_2 == 0)
            __builtin_memset(&var_28, 0, 0x18)
            rax_5 = sub_14137d4a0(r10_2, arg1 + 0x10, &var_28)
            int64_t rcx_12 = var_28:8.q
            rbx_2 = rax_5
            
            if (rcx_12 != 0)
                rax_5 = sub_140a74f90(rcx_12)
        
        *rbx_2 = arg1
    
    return rax_5

int64_t* r11_2 = *(arg1 + 0xf0) + 0x1d08
void* const rcx_2

if (r11_2[1].d == *(r11_2 + 0x34))
label_14139fe50:
    rcx_2 = nullptr
else
    void* rcx = r11_2[8]
    void* r8_1 = &r11_2[7]
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t rax_1 = *(r8_1 + (((sx.q(r11_2[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14139fe50_1:
        rcx_2 = nullptr
    else
        int64_t r8_2 = *r11_2
        
        while (true)
            int64_t rdx_4 = sx.q(rax_1) * 5
            rcx_2 = r8_2 + (rdx_4 << 3)
            
            if (*(r8_2 + (rdx_4 << 3)) == r10.d)
                break
            
            rax_1 = *(rcx_2 + 0x20)
            
            if (rax_1 == 0xffffffff)
                goto label_14139fe50_2
        
        if (rax_1 == 0xffffffff)
        label_14139fe50_2:
            rcx_2 = nullptr

void* rbx_1 = rcx_2 + 8

if (rcx_2 == 0)
    rbx_1 = nullptr

if (rbx_1 == 0)
    __builtin_memset(&var_28, 0, 0x18)
    void* rax_2 = sub_14137d4a0(r11_2, arg1 + 0x20, &var_28)
    int64_t rcx_4 = var_28:8.q
    rbx_1 = rax_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int64_t rsi = sx.q(*(rbx_1 + 0x10))
int32_t rax_3 = (rsi + 1).d
*(rbx_1 + 0x10) = rax_3

if (rax_3 s> *(rbx_1 + 0x14))
    sub_1405a4d70(rbx_1 + 8)

int64_t rax_4 = *(rbx_1 + 8)
*(rax_4 + (rsi << 3)) = arg1
return rax_4
