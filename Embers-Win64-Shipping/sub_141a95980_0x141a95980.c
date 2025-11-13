// 函数: sub_141a95980
// 地址: 0x141a95980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg2 + 0x20)
int64_t* rcx = arg3[2]
int64_t* rsi = arg3
int64_t* arg_10 = rcx
int64_t rbx = *(arg1 + 0x88)
uint64_t rax_1

if (rbx != rdi)
    int64_t rbp_2 = 0
    
    if (rdi != *(arg1 + 0x78) || rbx != *(arg1 + 0x80))
        *(arg1 + 0x60) = 0
        
        if (*(arg1 + 0x64) s<= 0xffffffff)
            sub_1405dadb0(arg1 + 0x58, 0)
        
        int32_t i_3 = 0
        
        if (*(arg1 + 0x70) s> 0)
            int64_t* rdi_1 = nullptr
            int32_t i
            
            do
                int64_t* r8 = *(arg2 + 0x10)
                int64_t* rsi_1 = r8
                void* rcx_6 = &r8[sx.q(*(arg2 + 0x18))]
                int32_t rsi_2
                
                if (r8 == rcx_6)
                label_141a95aa2:
                    rsi_2 = -1
                else
                    while (*rsi_1 != *(rdi_1 + *(arg1 + 0x68)))
                        rsi_1 = &rsi_1[1]
                        
                        if (rsi_1 == rcx_6)
                            goto label_141a95aa2
                    
                    rsi_2 = ((rsi_1 - r8) s>> 3).d
                
                int64_t r15_1 = sx.q(*(arg1 + 0x60))
                int32_t rax_5 = (r15_1 + 1).d
                *(arg1 + 0x60) = rax_5
                
                if (rax_5 s> *(arg1 + 0x64))
                    sub_1405a4cf0(arg1 + 0x58)
                
                rdi_1 = &rdi_1[1]
                i = i_3 + 1
                i_3 = i
                *(*(arg1 + 0x58) + (r15_1 << 2)) = rsi_2
            while (i s< *(arg1 + 0x70))
            rsi = arg3
        
        rcx = arg_10
        *(arg1 + 0x78) = rdi
        *(arg1 + 0x80) = rbx
    
    rax_1 = zx.q(rsi[1].d)
    
    if (rax_1.d != 0)
        int64_t r8_1 = 0
        uint64_t i_5 = zx.q(rax_1.d)
        uint64_t i_1
        
        do
            rax_1 = *rcx
            uint64_t rcx_8 = zx.q(*(r8_1 + rax_1))
            
            if (rcx_8.d s< *(arg1 + 0x60))
                rax_1 = *(arg1 + 0x58)
                int64_t rdx_4 = sx.q(*(rax_1 + (rcx_8 << 2)))
                
                if (rdx_4.d s>= 0 && rdx_4.d s< *(arg2 + 8))
                    rax_1 = *rsi
                    int128_t* rcx_11 = rdx_4 * 0x30 + *arg2
                    *(rax_1 + rbp_2) = *rcx_11
                    *(rax_1 + rbp_2 + 0x10) = rcx_11[1]
                    *(rax_1 + rbp_2 + 0x20) = rcx_11[2]
            
            rcx = arg_10
            r8_1 += 2
            rbp_2 += 0x30
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else
    rax_1 = zx.q(arg3[1].d)
    
    if (rax_1.d != 0)
        int64_t rbp_1 = 0
        uint64_t i_4 = zx.q(rax_1.d)
        void* rdx = nullptr
        int128_t* rax_2
        uint64_t i_2
        
        do
            rax_2 = *rcx
            uint64_t rcx_1 = zx.q(*(rdx + rax_2))
            
            if (rcx_1.d s< *(arg2 + 8))
                rax_2 = *rsi
                int128_t* rcx_4 = rcx_1 * 0x30 + *arg2
                *(rax_2 + rbp_1) = *rcx_4
                *(rax_2 + rbp_1 + 0x10) = rcx_4[1]
                *(rax_2 + rbp_1 + 0x20) = rcx_4[2]
            
            rcx = arg_10
            rdx += 2
            rbp_1 += 0x30
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        return rax_2

return rax_1
