// 函数: sub_140a42630
// 地址: 0x140a42630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rbx_5

if (rax_1 == 1)
    rbx_5 = arg5
label_140a427a9:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_7 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7 + 8)
        int32_t rcx_7
        
        if (rax_7 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_7 + 7)
        char r9_1
        
        if (rax_7 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_10
    
    if (r8_3 s> 0)
        rax_10 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_10 == 0 || rax_10 s< rbp))
        arg1[9].d = rbp
        sub_1408f1f30(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_13
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_13)
        void* rax_14 = r9_2
        
        if (rdx_10 != 0)
            rax_14 = rdx_10
        
        arg4[3].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_16 = *(r9_2 + 8)
        
        if (rax_16 != 0)
            r9_2 = rax_16
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rbx_5
else
    int32_t rdi_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rdi_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rdi_1 == 0xffffffff)
    label_140a42744:
        rdi_1 = -1
    else
        int64_t rbx_1 = *arg1
        
        while (true)
            int64_t r11_2 = sx.q(rdi_1) << 5
            int16_t* r9
            
            if (arg4[1].d == 0)
                r9 = &data_142d40450
            else
                r9 = *arg4
            
            int16_t* const r10_1
            
            if (*(r11_2 + rbx_1 + 8) == 0)
                r10_1 = &data_142d40450
            else
                r10_1 = *(r11_2 + rbx_1)
            
            int16_t* r10_2 = r10_1 - r9
            uint32_t rdx_5
            
            while (true)
                int16_t rdx_3 = *(r10_2 + r9)
                int16_t r8_1 = *r9
                r9 = &r9[1]
                
                if (rdx_3 != r8_1)
                    if (((zx.d(rdx_3) | zx.d(r8_1)) & 0xffffff80) != 0)
                        rdx_5 = zx.d(rdx_3) - zx.d(r8_1)
                        break
                    
                    uint32_t rcx_3 = zx.d(*(zx.q(r8_1) + &data_142e5e8a0))
                    uint32_t rdx_4 = zx.d(*(zx.q(rdx_3) + &data_142e5e8a0))
                    rdx_5 = rdx_4 - rcx_3
                    
                    if (rdx_4 != rcx_3)
                        break
                else
                    if (rdx_3 == 0)
                        goto label_140a4274c
            
            if (rdx_5 == 0)
                break
            
            rdi_1 = *(r11_2 + rbx_1 + 0x18)
            
            if (rdi_1 == 0xffffffff)
                goto label_140a42744
    
label_140a4274c:
    rsi.b = rdi_1 != 0xffffffff
    
    if (rdi_1 == 0xffffffff)
        rbx_5 = arg5
    else
        int64_t* rbx_4 = (sx.q(rdi_1) << 5) + *arg1
        int64_t rcx_4 = *rbx_4
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rbx_4, arg4, 0x18)
        sub_1405c36f0(arg1, arg5, 1)
        rbx_5 = rdi_1
    
    if (rdi_1 == 0xffffffff)
        goto label_140a427a9

*arg2 = rbx_5

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
