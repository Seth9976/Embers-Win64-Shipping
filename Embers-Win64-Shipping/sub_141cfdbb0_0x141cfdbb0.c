// 函数: sub_141cfdbb0
// 地址: 0x141cfdbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0xe0)
int64_t r10 = sx.q(not.d(*(arg1 + 0x104)))
int64_t* r15_2 = (sx.q(arg4) & r10) * 0x30 + r11
int64_t rax_4 = *r15_2
int64_t r8 = sx.q(*(r15_2 + 0x1c))
uint64_t rbp_1 = rax_4 & 0xffffffffffff
void* rdi_1 = (rax_4 u>> 0x30) * 0x98 + *(arg1 + 0xa8)
int64_t rax_9 = (r8 & r10) * 6
int64_t r9_1 = *(r11 + (rax_9 << 3)) & 0xffffffffffff
sub_141cf5f20(rdi_1 + 0x7c, arg1 + 0xe0, r8.d, r9_1, r9_1 - 1 + *(r11 + (rax_9 << 3) + 8), 
    *(rdi_1 + 0x20), *(rdi_1 + 0x24))

if (r15_2[3].d == 0 || arg2 != 0)
    sub_140a74f90(arg3)
    sub_141cfd9f0(arg1, r15_2)
else
    int64_t rax_13 = r15_2[1]
    r15_2[2] = arg3
    *(arg1 + 0x40) += rax_13
    int64_t rax_14 = *(arg1 + 0x40)
    
    if (rax_14 s> *(arg1 + 0x48))
        *(arg1 + 0x48) = rax_14
        int64_t rax_15
        int32_t rdx_3
        rdx_3:rax_15 = sx.o(rax_14)
        int64_t rcx_1 = data_143f36960
        int64_t rax_17 = (rax_15 + (zx.q(rdx_3) & 0xffffff)) s>> 0x18
        
        if (rax_17 != rcx_1)
            rcx_1 = rax_17
        
        data_143f36960 = rcx_1
    
    int32_t r8_1 = *(r15_2 + 0x1c)
    *(r15_2 + 0x24) = 1
    int64_t var_88
    var_88.d = *(rdi_1 + 0x24)
    sub_141cf0d40(rdi_1 + 0x80, arg1 + 0xe0, r8_1, *(rdi_1 + 0x20), var_88.d)
    void* rsi_1 = rdi_1 + 0x78
    int32_t* var_58 = nullptr
    int32_t var_50_1 = 0
    int32_t rbx_1 = 5
    
    while (true)
        if (*rsi_1 != 0)
            int64_t r9_3 = r15_2[1]
            int64_t* var_40_1 = &var_58
            void* var_48 = arg1
            void** var_30_1 = &var_48
            int64_t (* var_38)(int64_t* arg1, int32_t* arg2) = sub_141cfca20
            int32_t var_80
            var_80.q = *(rdi_1 + 0x18)
            var_88 = 0
            sub_141cf4f50(rdi_1 + (sx.q(rbx_1) + 5) * 0xc, arg1 + 0xb8, rbp_1, r9_3 - 1 + rbp_1, 0, 
                var_80, *(rdi_1 + 0x20), *(rdi_1 + 0x24), &var_38)
        
        if (rbx_1 == 0)
            break
        
        rbx_1 -= 1
        rsi_1 -= 0xc
    
    int32_t* rsi_2 = var_58
    int64_t rbp_2 = 0
    void* rcx_4 = &rsi_2[sx.q(var_50_1)]
    uint64_t r15_6 = (rcx_4 - rsi_2 + 3) u>> 2
    
    if (rsi_2 u> rcx_4)
        r15_6 = 0
    
    if (r15_6 != 0)
        do
            int64_t r12_1 = sx.q(*rsi_2)
            void* rax_30 = (sx.q(not.d(*(arg1 + 0xdc))) & r12_1) * 0x30 + *(arg1 + 0xb8)
            *(rax_30 + 0x2c) = 0
            var_88.d = *(rdi_1 + 0x24)
            sub_141cf0e10(rdi_1 + ((zx.q(*(rax_30 + 0x28)) * 3 + 0xd) << 2), arg1 + 0xb8, r12_1.d, 
                *(rdi_1 + 0x20), var_88.d)
            int64_t* rdx_10 = (sx.q(not.d(*(arg1 + 0xdc))) & r12_1) * 0x30 + *(arg1 + 0xb8)
            
            if (*(rdx_10 + 0x2c) == 0)
                int64_t* rcx_12 = rdx_10[2]
                
                if (rdx_10[3] == rcx_12[2] && r12_1.d == rcx_12[3].d && *rdx_10 == rcx_12[1])
                    (*(*rcx_12 + 8))()
            
            rsi_2 = &rsi_2[1]
            rbp_2 += 1
        while (rbp_2 != r15_6)
        
        rsi_2 = var_58
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)

return sub_141d124f0(arg1, 0, 0xffff) __tailcall
