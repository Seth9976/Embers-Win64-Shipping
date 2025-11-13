// 函数: sub_141c74970
// 地址: 0x141c74970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = 0
int64_t rdi = 0
int32_t var_9c = 0
uint64_t result = EnterCriticalSection(arg1 + 0xb8)

if (*(arg1 + 0xa0) != 0)
    *(arg1 + 0xa0) = 0
    uint64_t result_2 = 0
    
    if (&result_1 != arg1 + 0xa8)
        rdi = sx.q(*(arg1 + 0xb0))
        int64_t rsi_1 = *(arg1 + 0xa8)
        int32_t var_a0_1 = rdi.d
        
        if (rdi.d != 0)
            sub_1405a4be0(&result_1, rdi.d, 0)
            result_2 = result_1
            memcpy(result_2, rsi_1, (rdi << 4).d)
            rdi = zx.q(var_a0_1)
        else
            result_2 = 0
    
    if (arg1 != -0xb8)
        LeaveCriticalSection(arg1 + 0xb8)
    
    if (arg1 + 0xf0 != &result_1)
        int32_t r8_3 = *(arg1 + 0xfc)
        *(arg1 + 0xf8) = rdi.d
        
        if (rdi.d != 0 || r8_3 != 0)
            sub_1405a4be0(arg1 + 0xf0, rdi.d, r8_3)
            memcpy(*(arg1 + 0xf0), result_2, rdi.d << 4)
        else
            *(arg1 + 0xfc) = rdi.d
    
    goto label_141c74a70

if (arg1 != -0xb8)
    result = LeaveCriticalSection(arg1 + 0xb8)

if (*(arg1 + 0x98) == 0)
label_141c74a70:
    int64_t i_1 = sx.q(*(arg1 + 0x78))
    int32_t j_6 = *(arg1 + 0xf8)
    *(arg1 + 0x98) = 1
    int32_t j_7 = j_6
    int64_t i_2 = i_1
    
    if (i_1 s> 0)
        char* rsi_2 = nullptr
        int128_t zmm6 = zx.o(0)
        int128_t zmm7 = 0x40000000
        int128_t zmm8 = 0x469c4000
        int64_t i
        
        do
            int64_t rbp_1 = *(arg1 + 0x70)
            int32_t rcx_7 = *(rsi_2 + rbp_1 + 0x10)
            rsi_2[rbp_1] = 1
            
            if (rcx_7 s< j_6)
                void* rdi_1 = &rsi_2[rbp_1]
                uint64_t j_4 = zx.q(j_6 - rcx_7)
                uint64_t j
                
                do
                    void** var_98
                    void*** rax_1 = sub_141c2dbc0(&var_98)
                    int64_t rbx_2 = sx.q(*(rdi_1 + 0x10))
                    int32_t rcx_9 = (rbx_2 + 1).d
                    *(rdi_1 + 0x10) = rcx_9
                    
                    if (rcx_9 s> *(rdi_1 + 0x14))
                        sub_1405c4f50(rdi_1 + 8)
                    
                    int64_t rcx_11 = *(rdi_1 + 8)
                    int64_t rbx_4 = rbx_2 * 0x30
                    *(rbx_4 + rcx_11) = &data_1432050f8
                    *(rbx_4 + rcx_11 + 8) = rax_1[1].d
                    *(rbx_4 + rcx_11 + 0x10) = rax_1[2]
                    *(rbx_4 + rcx_11 + 0x18) = rax_1[3].d
                    *(rbx_4 + rcx_11 + 0x1c) = *(rax_1 + 0x1c)
                    *(rbx_4 + rcx_11 + 0x20) = rax_1[4].d
                    *(rbx_4 + rcx_11 + 0x24) = *(rax_1 + 0x24)
                    *(rbx_4 + rcx_11 + 0x28) = rax_1[5].d
                    *(rbx_4 + rcx_11 + 0x2c) = *(rax_1 + 0x2c)
                    sub_141c31880(&var_98)
                    zmm6, zmm7, zmm8 = sub_141c3a470(*(rdi_1 + 8) + rbx_4, *(arg1 + 0x90), 2, 4, 
                        zmm8.d, zmm7.d, zmm6.d)
                    j = j_4
                    j_4 -= 1
                while (j != 1)
                j_6 = j_7
                i_1 = i_2
            else if (rcx_7 s> j_6)
                int64_t rbx_6 = sx.q(j_6) * 0x30
                uint64_t j_3 = zx.q(rcx_7 - j_6)
                uint64_t j_1
                
                do
                    sub_14083cc80(*(rsi_2 + rbp_1 + 8) + rbx_6, 0)
                    rbx_6 += 0x30
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                i_1 = i_2
            
            if (j_6 s> 0)
                int32_t* rdi_2 = nullptr
                uint64_t j_5 = zx.q(j_6)
                int64_t r14_2 = 0
                uint64_t j_2
                
                do
                    int64_t rbx_7 = *(arg1 + 0xf0)
                    sub_14083cc80(*(rsi_2 + rbp_1 + 8) + r14_2, *(rdi_2 + rbx_7 + 0xc) & 1)
                    zmm6, zmm7, zmm8 = sub_141c46700(*(rsi_2 + rbp_1 + 8) + r14_2, 4, 
                        *(rdi_2 + rbx_7), *(rdi_2 + rbx_7 + 4), *(rdi_2 + rbx_7 + 8))
                    r14_2 += 0x30
                    rdi_2 = &rdi_2[4]
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
                i_1 = i_2
            
            rsi_2 = &rsi_2[0x18]
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
    
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
